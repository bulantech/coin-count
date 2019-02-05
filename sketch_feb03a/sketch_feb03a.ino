int Count = 0;  //สร้างตัวแปรชื่อ Count ชนิด int เพื่อเก็บจำนวนเหรียญที่นับได้
int Sum_Bath = 0; //สร้างตัวแปรชื่อ Sum_Bath ชนิด int เพื่อเก็บจำนวนเงินรวมของเหรียญที่นับได้
int CounterSensor_Pin1 = 5;  //สร้างตัวชื่อ CounterSensor_Pin ชนิด int เพื่อเก็บตำแหน่งขอขาที่รับข้อมูลจาก Counter Sensor
int CounterSensor_Pin2 = 6;
int CounterSensor_Pin5 = 10;
int CounterSensor_Pin10 = 11;
void setup() {
  Serial.begin(9600);  //กำหนดช่องความถี่ในการเชื่อมต่อกับ Serial เพื่อดูค่าต่างๆที่รับได้
  pinMode(INPUT, CounterSensor_Pin1);
  pinMode(INPUT, CounterSensor_Pin2);
  pinMode(INPUT, CounterSensor_Pin5);
  pinMode(INPUT, CounterSensor_Pin10);
  //กำหนดโหมดของขาให้กับ CounterSensor_Pin ว่าเป็น INPUT
  
}

void loop() {
  int sensor_Value1 = digitalRead(CounterSensor_Pin1);  //สร้างตัวแปรชื่อ sensor_Value ชนิด int ให้เก็บค่าดิจิตอลที่รับได้จาก CounterSensor_Pin
  int sensor_Value2 = digitalRead(CounterSensor_Pin2);
  int sensor_Value5 = digitalRead(CounterSensor_Pin5);
  int sensor_Value10 = digitalRead(CounterSensor_Pin10);
  if (sensor_Value1 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    
    Count ++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
    Serial.print("Count 1 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
    Serial.print(Count);  //แสดงค่าใน Count 
    Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

    Sum_Bath = Count * 1;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
    Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
    Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
    Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่
    
    delay(500);  //หน่วงเวลา 500 มิลลิวินาที
    
  }
   if (sensor_Value2 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    
    Count ++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
    Serial.print("Count 2 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
    Serial.print(Count);  //แสดงค่าใน Count 
    Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

    Sum_Bath = Count * 2;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
    Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
    Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
    Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่
    
    delay(500);  //หน่วงเวลา 500 มิลลิวินาที
    
  }
   if (sensor_Value5 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    
    Count ++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
    Serial.print("Count 5 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
    Serial.print(Count);  //แสดงค่าใน Count 
    Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

    Sum_Bath = Count * 5;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
    Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
    Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
    Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่
    
    delay(500);  //หน่วงเวลา 500 มิลลิวินาที
    
  }
   if (sensor_Value10 == HIGH) {  //ถ้าหหากค่าใน sensor_Va มีค่าเท่ากับ HIG
    
    Count ++;  //ให้เพิ่มค่าใน Count ขึ้น 1 ค่า หรือ Count = Count + 1
    Serial.print("Count 10 Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Count = "
    Serial.print(Count);  //แสดงค่าใน Count 
    Serial.println(" Coin");  //แสดงค่าออกทาง Serial Monitor ว่า " Coin" จากนั้นขึ้นบรรทัดใหม่

    Sum_Bath = Count * 10;   //ให้ตัวแปร Sum_Bath เก็บจำนวนเงินรวมโดยมาจากสูตร "จำนวนเงินรวม = จำนวนเหรียญ x ชนิดของเหรียญ"
    Serial.print("Sum Bath = ");  //แสดงค่าออกทาง Serial Monitor ว่า "Sum Bath = "
    Serial.print(Sum_Bath);  //แสดงค่าใน Sum_Bath 
    Serial.println(" Bath");  //แสดงค่าออกทาง Serial Monitor ว่า " Bath" จากนั้นขึ้นบรรทัดใหม่
    
    delay(500);  //หน่วงเวลา 500 มิลลิวินาที
    
  }
}
