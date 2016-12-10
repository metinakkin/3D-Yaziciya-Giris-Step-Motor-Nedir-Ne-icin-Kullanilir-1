#include <Keypad.h>
#include<Servo.h>
const byte satir = 4;
const byte sutun = 4;
Servo sg90;
char tus;
const int in1 = 2;
const int in2 = 1;
const int in3 = 4;
const int in4 = 5;
int  zaman = 2;
char keypad[satir][sutun] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte satir_pinleri[satir] = {13, 12, 11, 10};
byte sutun_pinleri[satir] = {9, 8, 7, 6};

Keypad aci = Keypad(makeKeymap(keypad) , satir_pinleri , sutun_pinleri , satir , sutun);
void step1()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(zaman);

}
void step2()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
delay(zaman);
}
void step3()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
delay(zaman);
}
void step4()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
delay(zaman);
}
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  sg90.attach(3);
}

void loop()
{
  tus = aci.getKey();

  if (tus == '1')
  {

    for (int i = 0; i < 128; i++)
    {
      step1();
      step2();
      step3();
      step4();

    }
  }
  if (tus == '2')
  {

    for (int i = 0; i < 256; i++)
    {
      step1();
      step2();
      step3();
      step4();

    }
  }
  if (tus == '3')
  {

    for (int i = 0; i < 384; i++)
    {
      step1();
      step2();
      step3();
      step4();

    }
  }
  if (tus == 'A')
  {

    for (int i = 0; i < 512; i++)
    {
      step1();
      step2();
      step3();
      step4();

    }
  }
  if (tus == '4')
  {

    for (int i = 0; i < 128; i++)
    {
      step4();
      step3();
      step2();
      step1();

    }
  }
  if (tus == '5')
  {

    for (int i = 0; i < 256; i++)
    {
      step4();
      step3();
      step2();
      step1();

    }
  }
  if (tus == '6')
  {

    for (int i = 0; i < 384; i++)
    {
      step4();
      step3();
      step2();
      step1();

    }
  }
  if (tus == 'B')
  {

    for (int i = 0; i < 512; i++)
    {
      step4();
      step3();
      step2();
      step1();

    }
  }
if (tus == '7')
  {

    for (int i = 0; i < 45; i++)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(0);
  }
  if (tus == '8')
  {

    for (int i = 0; i < 90; i++)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(0);
  }
  if (tus == '9')
  {

    for (int i = 0; i < 135; i++)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(0);
  }
  if (tus == 'C')
  {

    for (int i = 0; i < 45; i++)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(0);
  }
  if (tus == '*')
  {

    for (int i = 45; i >0; i--)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(180);
  }
  if (tus == '0')
  {

    for (int i = 90; i >0; i--)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(180);
  }
if (tus == '#')
  {

    for (int i = 135; i >0; i--)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(180);
  }
  if (tus == 'D')
  {

    for (int i = 180; i >0; i--)
    {
      sg90.write(i);
      delay(zaman);

    }
    sg90.write(180);
  }









}

