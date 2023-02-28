package com.practice.gpsmap

import android.Manifest.permission.ACCESS_FINE_LOCATION
import androidx.core.app.ActivityCompat

class c {
    private fun showPermissionInfoDialog() {
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
}