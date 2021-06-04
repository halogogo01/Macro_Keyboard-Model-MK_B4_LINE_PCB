# Macro_Keyboard-Model-MK_B4_LINE_PCB
-This Code prototype Macor Keyboard Model : "MK_B4_LINE_PCB" form Arduino Pro Micro Atmega32u4.
-You can make 4 button and You can define your own properties in code C Language By the use of tools ArduinoIDE.

# Macro_Keyboard-Model-MK_B4_LINE_PCB
-นี่เป็นCodeต้นแบบของ Macor Keyboard รุ่น : "MK_B4_LINE_PCB" สำหรับArduino Pro Micro Atmega32u4.
-คุณสามารถสร้าง4ปุ่ม และกำหนดคุณสมบัติให้มันได้ ในCodeภาษาC โดยการใช้เครื่องมือ ArduinoIDE.

# How to Library "Keyboard.h"(วิธีใช้"Keyboard.h") : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/

Cycle pattern PCB (ลายวงจรแผ่นปริ้น) : https://www.img.in.th/image/t1OzWB

Circuit diagram (ผังวงจร) : https://www.img.in.th/image/t8bmZH

# Functions in Library "Keyboard.h"(คำสั่งฟังก์ชั่นการทำงานในไลบรารี่"Keyboard.h")
- Keyboard.begin() //สั่งเริ่มเลียนแบบเป็นแป้นพิมพ์ : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardbegin
- Keyboard.end() //สั่งหยุดการจำลองเป็นแป้นพิมพ์ : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardend/
- Keyboard.press() //สั่งกดปุ่มบนแป้นพิมพ์ค้างไว้ : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardpress
- Keyboard.release() //สั่งยกเลิกปุ่มที่กดค้างเอาไว้บนแป้นพิมพ์ โดยการระบุปุ่มที่ต้องการให้ยกเลิก : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardrelease
- Keyboard.releaseAll() //สั่งปล่อยปุ่มที่กดค้างเอาไว้ไว้บนแป้นพิมพ์ทั้งหมด : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardreleaseall
- Keyboard.print() //สั่งพิมข้อความอันโนมัต โดยกำหนดข้อความไว้ภายใน : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardprint
- Keyboard.println() //สั้งพิมข้อความอันโนมัต โดยกำหนดข้อความไว้ภายใน ตามด้วยขึ้นบรรทัด : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardprintln
- Keyboard.write() //สั่งการกดปุ่มพิเศษบนแป้นพิมพ์ "Ctrl"/"Alt"/"Enter" และอีกมากมาย รวมถึงใช้"ASCII Code(แอสกีโค้ด)"ได้ด้วย : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardwrite

# Keyboard Modifiers(ตัวปรับแต่งคีย์บอร์ด) : https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
KEY_F1 //ปุ่ม "F1"
KEY_F2 //ปุ่ม "F2"
KEY_F3 //ปุ่ม "F3"
KEY_F4 //ปุ่ม "F4"
KEY_F5 //ปุ่ม "F5"
KEY_F6 //ปุ่ม "F6"
KEY_F7 //ปุ่ม "F7"
KEY_F8 //ปุ่ม "F8"
KEY_F9 //ปุ่ม "F9"
KEY_F10 //ปุ่ม "F10"
KEY_F11 //ปุ่ม "F11"
KEY_F12 //ปุ่ม "F12"
KEY_F13 //ปุ่ม "F13"
KEY_F14 //ปุ่ม "F14"
KEY_F15 //ปุ่ม "F15"
KEY_F16 //ปุ่ม "F16"
KEY_F17 //ปุ่ม "F17"
KEY_F18 //ปุ่ม "F18"
KEY_F19 //ปุ่ม "F19"
KEY_F20 //ปุ่ม "F20"
KEY_F21 //ปุ่ม "F21"
KEY_F22 //ปุ่ม "F22"
KEY_F23 //ปุ่ม "F23"
KEY_F24 //ปุ่ม "F24"
KEY_LEFT_CTRL //ปุ่ม "CTRLซ้าย"
KEY_RIGHT_CTRL //ปุ่ม "CTRLขวา"
KEY_LEFT_SHIFT //ปุ่ม "SHIFTซ้าย"
KEY_RIGHT_SHIFT //ปุ่ม "SHIFTขวา"
KEY_LEFT_ALT //ปุ่ม "ALTซ้าย"
KEY_RIGHT_ALT //ปุ่ม "ALTขวา"
KEY_UP_ARROW //ปุ่ม "ลูกศรบน"
KEY_DOWN_ARROW //ปุ่ม "ลูกศรล่าง"
KEY_LEFT_ARROW //ปุ่ม "ลูกศรซ้าย"
KEY_RIGHT_ARROW //ปุ่ม "ลูกศรขวา"
KEY_LEFT_GUI //ปุ่ม "Windowsซ้าย"
KEY_RIGHT_GUI //ปุ่ม "Windowsขวา"
KEY_ESC //ปุ่ม "Esc"
KEY_TAB //ปุ่ม "Tab"
KEY_CAPS_LOCK //ปุ่ม "Caps Lock"
KEY_BACKSPACE //ปุ่ม "Backspace"
KEY_RETURN //ปุ่ม "Enter"
KEY_DELETE //ปุ่ม "DELETE"
KEY_PAGE_UP //ปุ่ม "PAGE_UP"
KEY_PAGE_DOWN //ปุ่ม "PAGE_DOWN"
KEY_INSERT //ปุ่ม ""
KEY_HOME //ปุ่ม ""
KEY_END //ปุ่ม ""
