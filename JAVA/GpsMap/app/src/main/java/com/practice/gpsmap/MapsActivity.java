package com.practice.gpsmap;

import androidx.core.app.ActivityCompat;
import androidx.core.content.ContextCompat;
import androidx.fragment.app.FragmentActivity;

import android.annotation.SuppressLint;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.location.Location;
import android.location.LocationRequest;
import android.os.Bundle;

import android.os.Looper;
import android.util.Log;
import android.view.WindowManager;

import com.google.android.gms.location.FusedLocationProviderClient;
import com.google.android.gms.location.LocationCallback;
import com.google.android.gms.location.LocationResult;
import com.google.android.gms.location.LocationServices;
import com.google.android.gms.maps.CameraUpdateFactory;
import com.google.android.gms.maps.GoogleMap;
import com.google.android.gms.maps.OnMapReadyCallback;
import com.google.android.gms.maps.SupportMapFragment;
import com.google.android.gms.maps.model.LatLng;
import com.google.android.gms.maps.model.MarkerOptions;
import com.practice.gpsmap.databinding.ActivityMapsBinding;

public class MapsActivity extends FragmentActivity implements OnMapReadyCallback {

    private GoogleMap mMap;
    private ActivityMapsBinding binding;
    private LocationCallback locationCallback;
    private FusedLocationProviderClient fusedLocationClient;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        //위치서비스 클라이언트
        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this);

        locationCallback = new LocationCallback() {
            @Override
            public void onLocationResult(LocationResult locationResult) {
                if (locationResult == null) {
                    return;
                }
                for (Location location : locationResult.getLocations()) {
                    // Update UI with location data
                    // ...
                }
            }
        };
        super.onCreate(savedInstanceState);
        //화면이 꺼지지 않게 하기
        getWindow().addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
        //세로 모드로 화면 고정
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_PORTRAIT);

        binding = ActivityMapsBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot()); //없애도 되는지?

        // Obtain the SupportMapFragment and get notified when the map is ready to be used.
        SupportMapFragment mapFragment = (SupportMapFragment) getSupportFragmentManager()
                .findFragmentById(R.id.map);
        mapFragment.getMapAsync(this);

        locationInit(); //kt
    }

    // 위치 정보를 얻기 위한 각종 초기화
    private void locationInit() {
        // FusedLocationProviderClient 객체 생성
        // 이 객체의 메소드를 통해 위치 정보를 요청할 수 있음
        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this);
        // 위치 갱신되면 호출되는 콜백 생성
        locationCallback=MyLocationCallBack();
        // (정보 요청할 때 넘겨줄 데이터)에 관한 객체
        // 생성
        locationRequest=LocationRequest();
        // GPS 우선
        locationRequest.priority = LocationRequest.PRIORITY_HIGH_ACCURACY;
        // 업데이트 인터벌
        // 위치 정보가 없을 때는 업데이트 안 함
        // 상황에 따라 짧아질 수 있음, 정확하지 않음
        // 다른 앱에서 짧은 인터벌로 위치 정보를 요청하면 짧아질 수 있음
        locationRequest.interval = 10000;
        // 정확함. 이것보다 짧은 업데이트는 하지 않음
        locationRequest.fastestInterval = 5000;
    }

    /**
     * Manipulates the map once available.
     * This callback is triggered when the map is ready to be used.
     * This is where we can add markers or lines, add listeners or move the camera. In this case,
     * we just add a marker near Sydney, Australia.
     * If Google Play services is not installed on the device, the user will be prompted to install
     * it inside the SupportMapFragment. This method will only be triggered once the user has
     * installed Google Play services and returned to the app.
     */
    @Override
    @SuppressLint("MissingPermission")
    public void onMapReady(GoogleMap googleMap) {
        mMap = googleMap;

        // Add a marker in Sydney and move the camera
        LatLng sydney = new LatLng(-34, 151);
        mMap.addMarker(new MarkerOptions().position(sydney).title("Marker in Sydney"));
        mMap.moveCamera(CameraUpdateFactory.newLatLng(sydney));

        //권한 요청
        permissionCheck(cancel = {
                showPermissionInfoDialog()
        }, ok = {
                mMap.isMyLocationEnabled = true
        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (requestingLocationUpdates) {
            startLocationUpdates();
        }
        // 위치 요청
        startLocationUpdates() {
            fusedLocationClient.requestLocationUpdates(locationRequest,
                    locationCallback,
                    Looper.getMainLooper());
        }

        // 권한 요청 ⑨
        permissionCheck(cancel = {
                // 위치 정보가 필요한 이유 다이얼로그 표시 ⑩
                showPermissionInfoDialog()
        }, ok = {
                // 현재 위치를 주기적으로 요청 (권한이 필요한 부분) ⑪
                addLocationListener()
        })
    }



    @SuppressLint("MissingPermission")
    private void addLocationListener() {
        fusedLocationProviderClient.requestLocationUpdates(locationRequest,
                locationCallback,
                null)
    }

    private showPermissionInfoDialog() {
        // 알림창 띄우기
        alert("현재 위치 정보를 얻기 위해서는 위치 권한이 필요합니다", "권한이 필요한 이유"){
        yesButton {
            //권한 요청
            ActivityCompat.requestPermissions(this @MapsActivity,
            arrayOf(Manifest.permission.ACCESS_FINE_LOCATION),
                    REQUEST_ACCESS_FINE_LOCATION);
        }
        no Button { }
        }.show()
    }
    @Override
    protected void onPause() {
        super.onPause();
        removeLocationListener();
    }

    private void removeLocationListener() {
        //현재 위치 요청을 삭제
        fusedLocationProviderClient.removeLocationUpdates(locationCallback);
    }
    @Override
    public void onRequestPermissionsResult(requestCode: Int, permissions: Array<out String>, grantResults: IntArray) {
    super.onRequestPermissionsResult(requestCode, permissions, grantResults)
    when (requestCode) {
        REQUEST_ACCESS_FINE_LOCATION -> {
            if ((grantResults.isNotEmpty()
                    && grantResults[0] == PackageManager.PERMISSION_GRANTED)) {
                // 권한 허용됨
                addLocationListener()
            } else {
                // 권한 거부
                toast("권한 거부 됨")
            }
            return
        }
    }
}
    private void permissionCheck(cancel: () -> void, ok: () -> void) {
        // 위치 권한이 있는지 검사
        if (ContextCompat.checkSelfPermission(this,
                Manifest.permission.ACCESS_FINE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            // 권한이 허용되지 않음
            if (ActivityCompat.shouldShowRequestPermissionRationale(this, Manifest.permission.ACCESS_FINE_LOCATION)) {
                // 이전에 권한을 한 번 거부한 적이 있는 경우에 실행할 함수
                cancel();
            } else {
                // 권한 요청
                ActivityCompat.requestPermissions(this,
                        arrayOf(Manifest.permission.ACCESS_FINE_LOCATION),
                        REQUEST_ACCESS_FINE_LOCATION)
            }
        } else {
            // 권한을 수락 했을 때 실행할 함수
            ok()
        }
    }

    inner class MyLocationCallBack : LocationCallback() {
        override fun onLocationResult(locationResult: LocationResult?) {
            super.onLocationResult(locationResult)

            val location = locationResult?.lastLocation

            location?.run {
                // 14 level로 확대하며 현재 위치로 카메라 이동
                val latLng = LatLng(latitude, longitude)
                mMap.animateCamera(CameraUpdateFactory.newLatLngZoom(latLng, 17f))

                Log.d("MapsActivity", "위도: $latitude, 경도: $longitude")

                polylineOptions.add(latLng)

                // 선 그리기
                mMap.addPolyline(polylineOptions)

            }

        }
    }

}