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
      
      Serial.println("");
      Serial.print("Count 1 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
      Serial.print(count1);  //แสดงค่าใน Count 
      Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

      Sum_Bath = Sum_Bath + 1;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
      Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
      Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
      Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่

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
      
      Serial.println("");
      Serial.print("Count 2 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
      Serial.print(count2);  //แสดงค่าใน Count 
      Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

      Sum_Bath = Sum_Bath + 2;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
      Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
      Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
      Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่

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
      
      Serial.println("");
      Serial.print("Count 5 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
      Serial.print(count5);  //แสดงค่าใน Count 
      Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

      Sum_Bath = Sum_Bath + 5;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
      Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
      Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
      Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่

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
      flag5 = 10;  
      count10++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
      
      Serial.println("");
      Serial.print("Count 10 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
      Serial.print(count10);  //แสดงค่าใน Count 
      Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

      Sum_Bath = Sum_Bath + 10;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
      Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
      Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
      Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่

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
  
}

void loop()
{
  check1coin();
  check2coin();
  check5coin();
  check10coin();

}
