# Project-Physical_Computing

โครงงานนี้เป็นส่วนหนึ่งของวิชา Physical Computing ที่กลุ่มของเราได้พัฒนาขึ้นมาเพื่อศึกษาและนำความรู้ในการใช้งานบอร์ด Arduino Uno และอุปกรณ์อิเล็กทรอนิกส์ต่าง ๆ ในการสร้างอุปกรณ์อัจฉริยะที่ตอบสนองตามเสียงของผู้ใช้.

## หลักการทำงาน

ในโครงงานนี้ เราใช้เซนเซอร์ตรวจจับเสียง KY-037 ในการตรวจจับเสียงที่ผู้ใช้เปล่งออกมา จากนั้น Arduino Uno จะประมวลผลสัญญาณเสียงเพื่อระบุระดับความดังของเสียง. จากนั้นเราควบคุมหลอดไฟ LED 3 ดวง โดยแต่ละดวงแสดงระดับความดังของเสียงที่รับมา. 

นอกจากนี้ เรามีเซนเซอร์ตรวจจับระยะ HC-SR04 เพื่อกำหนดระยะที่เซนเซอร์ตรวจจับเสียงจะทำงาน อุปกรณ์จะทำงานเมื่อผู้ใช้เปล่งเสียงอยู่ในระยะที่กำหนดเท่านั้น.

## การเริ่มต้น

สามารถเริ่มต้นดูโครงงาน และ CODE ที่ใช้ได้จากลิงก์ด้านล่าง:
- [Source Code](https://github.com/Earth123456789/Project-Physical_Computing/blob/main/Source%20Code/project.ino)

## วิดีโอตัวอย่างการใช้งาน

คุณสามารถดูวิดีโอตัวอย่างการใช้งานของโครงงานที่เราพัฒนาไว้ที่ลิงก์นี้:
- [วิดีโอตัวอย่างการใช้งาน](https://www.youtube.com/watch?v=wBzG23-Hc2o)

## ประยุกต์ใช้

เราหวังว่าความรู้และทักษะที่เราเรียนรู้จากโครงงานนี้จะเป็นประโยชน์และนำไปใช้ในอนาคต. คุณสามารถพิจารณาต่อไป:
- พัฒนาแอพพลิเคชันเสริม: พัฒนาแอปพลิเคชันสำหรับมือถือหรือคอมพิวเตอร์ที่อาจเชื่อมต่อกับโครงงานผ่าน Bluetooth หรือ Wi-Fi เพื่อควบคุมการเปล่งแสง LED หรือแสดงข้อมูลเสียง
- สร้างโครงงานที่ใช้เซนเซอร์: ใช้ความรู้ที่ได้จากการใช้เซนเซอร์ KY-037 และ HC-SR04 เพื่อสร้างโครงงานอื่น ๆ ที่เกี่ยวข้องกับการตรวจจับเสียงหรือการวัดระยะ
- พัฒนาทักษะการเขียนโปรแกรม: เรียนรู้เพิ่มเติมเกี่ยวกับการเขียนโปรแกรมใน Arduino IDE และพัฒนาต่อยอดโครงงานให้มีความซับซ้อนมากขึ้น
- แบ่งปันและสอนความรู้: แบ่งปันโครงงานและความรู้ทางด้าน Physical Computing ให้กับผู้ที่สนใจเพื่อสร้างชุมชนและสอนความรู้กัน

## MAIN WEBSITE 

ดูข้อมูลเพิ่มเติมเกี่ยวโครงงาน : [คลิก] (/WEBSITE/Main.html)

## จัดทำโดย

1. นายจิรภัทร สุขนิวัตรศิริ 65070036
2. นายมณฑล แก้วบริวงษ์ 65070187
3. นายวรินทร ปิตินานนท์ 65070205
4. นายวิปัศย์ โชคนันทวงศ์ 65070209

