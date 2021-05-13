#include <Keyboard.h> //ดึงการทำงานสำหรับจำรองKeyboard(คีบอร์ด)

//ค่าตัวแปรประเภทจำนวนเต็ม เพื่อใช้กำหนดรับค่าPIN(ขาต่างๆ)ของArduino Pro Micro Atmega32u4
int Button_1 = 3; //ตัวแปรButton_1 กำหนดให้มีค่าคือ3 เพื่อเตรียมกำหนดการรับค่าที่Pin(ขา)3 ในชุดคำสั่งต่อไป
int Button_2 = 5; //ตัวแปรButton_2 กำหนดให้มีค่าคือ5 เพื่อเตรียมกำหนดการรับค่าที่Pin(ขา)5 ในชุดคำสั่งต่อไป
int Button_3 = 7; //ตัวแปรButton_3 กำหนดให้มีค่าคือ7 เพื่อเตรียมกำหนดการรับค่าที่Pin(ขา)7 ในชุดคำสั่งต่อไป
int Button_4 = 9; //ตัวแปรButton_4 กำหนดให้มีค่าคือ9 เพื่อเตรียมกำหนดการรับค่าที่Pin(ขา)9 ในชุดคำสั่งต่อไป

//ค่าตัวแปรประเภทจำนวนเต็ม เพื่อใช้กำหนดการทำงานPIN(ขาต่างๆ)ของArduino Pro Micro Atmega32u4
int Led_1 = 2; //ตัวแปรLed_1 กำหนดให้มีค่าคือ2 เพื่อเตรียมกำหนดการทำงานที่Pin(ขา)2 ในชุดคำสั่งต่อไป
int Led_2 = 4; //ตัวแปรLed_1 กำหนดให้มีค่าคือ4 เพื่อเตรียมกำหนดการทำงานที่Pin(ขา)4 ในชุดคำสั่งต่อไป
int Led_3 = 6; //ตัวแปรLed_1 กำหนดให้มีค่าคือ6 เพื่อเตรียมกำหนดการทำงานที่Pin(ขา)6 ในชุดคำสั่งต่อไป
int Led_4 = 8; //ตัวแปรLed_1 กำหนดให้มีค่าคือ6 เพื่อเตรียมกำหนดการทำงานที่Pin(ขา)8 ในชุดคำสั่งต่อไป


//ตัวแปรArray(อาเรย์)ชื่อButtonAllขึ้นเพื่อเก็บรวบรวมButton_1-4(Button_1ถึง4)
int ButtonAll[] = {
  Button_1, Button_2, Button_3, Button_4
};

//ตัวแปรArray(อาเรย์)ชื่อLedAllขึ้นเพื่อเก็บรวบรวมLed_1-4(Led_1ถึง4)
int LedAll[] = {
  Led_1, Led_2, Led_3, Led_4
};

void setup() {
  //ตัวแปรจำนวนเต็มชื่อButtonCountเพื่อนับจำนวนข้อมูลที่เก็บไว้ในตัวแปรในArray(อาเรย์)ชื่อButtonAll
  int ButtonCount = sizeof(ButtonAll) / sizeof(int);
  //สร้างการวนซ้ำตามจำนวนที่ButtonCountนับได้
  for (int i = 0 ; i < ButtonCount ; i++) {
    pinMode(ButtonAll[i] , INPUT_PULLUP); //กำหนดให้ButtonAll[ตัวที่i]รับค่าจากการกดปุ่มโดยค่าเริ่มต้นเป็น1หกไม่มีการกดปุ่ม และมีค่าเป็น0หากมีการกดปุ่ม
  }

  //สร้างตัวแปรจำนวนเต็มชื่อLedCountเพื่อนับจำนวนข้อมูลที่เก็บไว้ในตัวแปรในArray(อาเรย์)ชื่อLedAll
  int LedCount = sizeof(LedAll) / sizeof(int);
  //สร้างการวนซ้ำตามจำนวนที่LedCountนับได้
  for (int i = 0 ; i < LedCount ; i++) {
    pinMode(LedAll[i] , OUTPUT); //กำหนดให้LedAll[ตัวที่i]แสดงผล แสดงยังไงกำหนดในชุดคำสั้งต่อไป
  }

  Keyboard.begin(); //เปิดการทำงานเพื่อจำลองKeyboard(คีบอร์ด)
}

void loop() {
  digitalWrite(LedAll[0], HIGH); //กำหนดให้LedAllตัวที่0 สว่าง
  digitalWrite(LedAll[1], HIGH); //กำหนดให้LedAllตัวที่1 สว่าง
  digitalWrite(LedAll[2], HIGH); //กำหนดให้LedAllตัวที่2 สว่าง
  digitalWrite(LedAll[3], HIGH); //กำหนดให้LedAllตัวที่3 สว่าง

  //ปุ่มที่1
  if (digitalRead(ButtonAll[0]) == LOW) //ถ้าปุ่มกดที่ButtonAllตัวที่0 มีค่าเป็น0 ให้ทำงาน
  {
    Keyboard.write(KEY_LEFT_GUI); //กดปุ่มWindow
    delay(400);
    Keyboard.print("https://www.youtube.com/channel/UCE5jveSfiagnMWhHdHtjLQQ"); //สั่งให้พิมพ์ตามในช่อง
    delay(400);
    Keyboard.write(KEY_RETURN); //กดปุ่มEnter
    delay(400);
    digitalWrite(LedAll[0], LOW); //กำหนดให้LedAllตัวที่0 ดับ
    delay(200);
    digitalWrite(LedAll[0], HIGH); //กำหนดให้LedAllตัวที่0 สว่าง
  }
  //ปุ่มที่2
  if (digitalRead(ButtonAll[1]) == LOW) //ถ้าปุ่มกดที่ButtonAllตัวที่1 มีค่าเป็น0 ให้ทำงาน
  {
    Keyboard.press(KEY_LEFT_CTRL); //กดปุ่มCTRLซ้ายค้างไว้
    Keyboard.write('v'); //กดปุ่มV
    delay(200);
    Keyboard.releaseAll(); //ถอนปุ่มที่กดค้างไว้ทั้งหมด
    digitalWrite(LedAll[1], LOW); //กำหนดให้LedAllตัวที่1 ดับ
    delay(200);
    digitalWrite(LedAll[1], HIGH); //กำหนดให้LedAllตัวที่1 สว่าง
  }
  //ปุ่มที่3
  if (digitalRead(ButtonAll[2]) == LOW) //ถ้าปุ่มกดที่ButtonAllตัวที่2 มีค่าเป็น0 ให้ทำงาน
  {
    Keyboard.press(KEY_LEFT_CTRL); //กดปุ่มCTRLซ้ายค้างไว้
    Keyboard.write('x'); //กดปุ่มX
    delay(200);
    Keyboard.releaseAll(); //ถอนปุ่มที่กดค้างไว้ทั้งหมด
    digitalWrite(LedAll[2], LOW); //กำหนดให้LedAllตัวที่2 ดับ
    delay(200);
    digitalWrite(LedAll[2], HIGH); //กำหนดให้LedAllตัวที่2 สว่าง
  }
  //ปุ่มที่4
  if (digitalRead(ButtonAll[3]) == LOW) //ถ้าปุ่มกดที่ButtonAllตัวที่3 มีค่าเป็น0 ให้ทำงาน
  {
    Keyboard.press(KEY_LEFT_CTRL); //กดปุ่มCTRLซ้ายค้างไว้
    Keyboard.write('z'); //กดปุ่มZ
    delay(200);
    Keyboard.releaseAll(); //ถอนปุ่มที่กดค้างไว้ทั้งหมด
    digitalWrite(LedAll[3], LOW); //กำหนดให้LedAllตัวที่3 ดับ
    delay(200);
    digitalWrite(LedAll[3], HIGH); //กำหนดให้LedAllตัวที่3 สว่าง
  }

}
