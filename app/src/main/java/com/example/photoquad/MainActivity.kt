package com.example.photoquad

import android.annotation.SuppressLint
import android.content.Intent
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button

class MainActivity : AppCompatActivity() {

    @SuppressLint("WrongViewCast", "SuspiciousIndentation")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_main)
        val buttonAdminLogin=findViewById<Button>(R.id.button2)

     val feedbackButton = findViewById<View>(R.id.button3)
        val registerButton=findViewById<View>(R.id.button)

        buttonAdminLogin.setOnClickListener{

            intent=Intent(this,Useractivity::class.java )
            startActivity(intent)
        }

    feedbackButton.setOnClickListener {
             val intent= Intent(Intent.ACTION_VIEW)
             intent.data= Uri.parse("https://complainthub.in/mpenagarpalika-help/")
                startActivity(intent)
         }
        registerButton.setOnClickListener {
            val intent= Intent(Intent.ACTION_VIEW)
            intent.data= Uri.parse("https://www.google.co.in/maps/place/DLF+CYBER+PARK/@28.50801,77.0909696,15z/data=!4m6!3m5!1s0x390d1948a901da95:0x4a34e5bb6daab881!8m2!3d28.5023243!4d77.0904991!16s%2Fg%2F11gdkq8jt2?entry=ttu")
            startActivity(intent)


        }
    }
}