#include <LiquidCrystal.h>

#include <Servo.h>

Servo myservo;

Servo theservo;

const int rs = 8, en = 9, d4 = 10, d5 = 11, d6 = 12, d7 = 13;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int score = 0;
int yourscore = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(2, INPUT);
  myservo.attach(6);
  pinMode(4, INPUT);
  theservo.attach(5);
  pinMode(7, INPUT);
}

void loop() {
  myservo.write(40);
  delay(500);
    myservo.write(100);
  delay(500);
//  if(digi;talRead(2) == 1){
//      score++;
//    }
//  if(score == 0){
//    lcd.setCursor(3, 0);
//    lcd.print ("Press Start");
//    lcd.setCursor(5, 1);
//    lcd.print("to Play");
//    }
//  if(score == 1){
//    lcd.clear();
//    lcd.setCursor(0, 0);
//    lcd.print("Score");
//    lcd.setCursor(0, 1);
//    lcd.print(yourscore);
//    }
//
//    if(digitalRead(4) == 0){
//      myservo.write(0);
//      }
//
//    if(digitalRead(4) == 1){
//      myservo.write(90);
//      }
//
//      yourscore = yourscore + 1;
//
//      delay(1000);
//
//      if(digitalRead(7) == 0){
//        theservo.write(0);
//       }
//
//      if(digitalRead(7)== 1){
//          theservo.write(90);
//       }


}
