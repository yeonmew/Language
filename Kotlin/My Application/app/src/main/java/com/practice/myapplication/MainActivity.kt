package com.practice.myapplication

import android.annotation.SuppressLint
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView

class MainActivity : AppCompatActivity() {
    @SuppressLint("MissingInflatedId") //완벽한 코드 또는 충돌 가능성 있는 코드에 사용, 예외사항으로 처리
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val clickButton = findViewById<Button>(R.id.clickButton) //중앙 버튼
        val textView = findViewById<TextView>(R.id.textView) //상단 문구

        clickButton.setOnClickListener { //버튼을 누르면 실행
            textView.text = "버튼을 눌렀습니다."
        }
    }
}