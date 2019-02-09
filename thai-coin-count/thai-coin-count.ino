#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // or 0x3F set the LCD address to 0x27 for a 20 chars and 4 line display

// กำหนดขารับเหรียญ
int CounterSensor_Pin1 = 5;
int CounterSensor_Pin2 = 6;
int CounterSensor_Pin5 = 10;
int CounterSensor_Pin10 = 11;

// ตัวแปรสถานะเหรียญเข้าอยู่
int flag1 = 0;
int flag2 = 0;
int flag5 = 0;
int flag10 = 0;

// ตัวแปรนับเหรียญแต่ละเหรียญ
int count1 = 0;
int count2 = 0;
int count5 = 0;
int count10 = 0;

// ตัวแปรจำนวนเงินทั้งหมด
int Sum_Bath = 0;

// lcd line string
String line1 = "---- COIN COUTER ---";
String line2 = "";
String line3 = "";
String line4 = "--------------------";

void check1coin()
{
  int sensor_Value1 = digitalRead(CounterSensor_Pin1);  //สร้างตัวแปรชื่อ sensor_Value ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin
  if(sensor_Value1 == HIGH) // ถ้า sensor เป็น HIGH
  {
    digitalWrite(13, HIGH); // led ติดเมื่อเหรียญเข้า
    if(!flag1) // ถ้าเหรียญนังไม่เคยเข้า 
    {
      flag1 = 1;  
      count1++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
      Sum_Bath = Sum_Bath + 1;
      
      line2 = "";
      line2 += "1 Baht = ";
      line2 += String(count1, DEC);
      line2 += " Coin";
      
      line3 = "";
      line3 += "Sum Baht = ";
      line3 += String(Sum_Bath, DEC);
      line3 += " Baht";

      lcd.clear(); //clear lcd
      lcd.setCursor(1,0); //ser curcer to lcd line 2
      lcd.print(line2); // print string to lcd line2
      lcd.setCursor(2,0);
      lcd.print(line3);
      
      Serial.println("");
      Serial.println(line2);
      Serial.println(line3);
    }
  }
  else
  {
    digitalWrite(13, LOW); // led ติดเมื่อเหรียญออก
    flag1 = 0;    
  }
}

void check2coin()
{
  int sensor_Value2 = digitalRead(CounterSensor_Pin2);  //สร้างตัวแปรชื่อ sensor_Value ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin
  if(sensor_Value2 == HIGH) // ถ้า sensor เป็น HIGH
  {
    digitalWrite(13, HIGH); // led ติดเมื่อเหรียญเข้า
    if(!flag2) // ถ้าเหรียญนังไม่เคยเข้า 
    {
      flag2 = 1;  
      count2++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
      Sum_Bath = Sum_Bath + 2;
      
      line2 = "";
      line2 += "2 Baht = ";
      line2 += String(count2, DEC);
      line2 += " Coin";
      
      line3 = "";
      line3 += "Sum Baht = ";
      line3 += String(Sum_Bath, DEC);
      line3 += " Baht";

      lcd.clear(); //clear lcd
      lcd.setCursor(1,0); //ser curcer to lcd line 2
      lcd.print(line2); // print string to lcd line2
      lcd.setCursor(2,0);
      lcd.print(line3);
      
      Serial.println("");
      Serial.println(line2);
      Serial.println(line3);
    }
  }
  }
  else
  {
    digitalWrite(13, LOW); // led ติดเมื่อเหรียญออก
    flag2 = 0;    
  }
}

void check5coin()
{
  int sensor_Value5 = digitalRead(CounterSensor_Pin5);  //สร้างตัวแปรชื่อ sensor_Value ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin
  if(sensor_Value5 == HIGH) // ถ้า sensor เป็น HIGH
  {
    digitalWrite(13, HIGH); // led ติดเมื่อเหรียญเข้า
    if(!flag5) // ถ้าเหรียญนังไม่เคยเข้า 
    {
      flag5 = 1;  
      count5++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
      Sum_Bath = Sum_Bath + 5;
      
      line2 = "";
      line2 += "5 Baht = ";
      line2 += String(count5, DEC);
      line2 += " Coin";
      
      line3 = "";
      line3 += "Sum Baht = ";
      line3 += String(Sum_Bath, DEC);
      line3 += " Baht";

      lcd.clear(); //clear lcd
      lcd.setCursor(1,0); //ser curcer to lcd line 2
      lcd.print(line2); // print string to lcd line2
      lcd.setCursor(2,0);
      lcd.print(line3);
      
      Serial.println("");
      Serial.println(line2);
      Serial.println(line3);
    }
  }
  }
  else
  {
    digitalWrite(13, LOW); // led ติดเมื่อเหรียญออก
    flag5 = 0;    
  }
}

void check10coin()
{
  int sensor_Value10 = digitalRead(CounterSensor_Pin10);  //สร้างตัวแปรชื่อ sensor_Value ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin
  if(sensor_Value10 == HIGH) // ถ้า sensor เป็น HIGH
  {
    digitalWrite(13, HIGH); // led ติดเมื่อเหรียญเข้า
    if(!flag10) // ถ้าเหรียญนังไม่เคยเข้า 
    {
      flag10 = 1;  
      count10++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
      Sum_Bath = Sum_Bath + 10;
      
      line2 = "";
      line2 += "10 Baht = ";
      line2 += String(count10, DEC);
      line2 += " Coin";
      
      line3 = "";
      line3 += "Sum Baht = ";
      line3 += String(Sum_Bath, DEC);
      line3 += " Baht";

      lcd.clear(); //clear lcd
      lcd.setCursor(1,0); //ser curcer to lcd line 2
      lcd.print(line2); // print string to lcd line2
      lcd.setCursor(2,0);
      lcd.print(line3);
      
      Serial.println("");
      Serial.println(line2);
      Serial.println(line3);
    }
  }
  }
  else
  {
    digitalWrite(13, LOW); // led ติดเมื่อเหรียญออก
    flag10 = 0;    
  }
}

void setup()
{
  pinMode(13, OUTPUT); //test led
  
  Serial.begin(9600);  //กำหนดช่องความถี่ในการเชื่อมต่อกับ Serial เพื่อดูค่าต่างๆที่รับได้
  pinMode(CounterSensor_Pin1, INPUT);
  pinMode(CounterSensor_Pin2, INPUT);
  pinMode(CounterSensor_Pin3, INPUT);
  pinMode(CounterSensor_Pin10, INPUT);
  
  Serial.println("");
  Serial.println("Setup port");

  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(line1);
  lcd.setCursor(1,0);
  lcd.print(line2);
  lcd.setCursor(2,0);
  lcd.print(line3);
  lcd.setCursor(3,0);
  lcd.print(line4);

}
  
}

void loop()
{
  check1coin();
  check2coin();
  check5coin();
  check10coin();

}
