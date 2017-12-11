#define SPEAKER 11
#define TRIGGER 2
#define ECHO 3
#define MOTOR_IN1 9
#define MOTOR_IN2 10
#define MOTOR_IN3 5
#define MOTOR_IN4 6
#define SPEED_FAST 255
#define SPEED_SLOW 128
#define SPEED_STOP 0


void motorForward(int SpeedPWM)
{  
  Serial.print("motor b test");
  analogWrite(MOTOR_IN1, SpeedPWM);
  analogWrite(MOTOR_IN3, SpeedPWM);
}

void motorBackward(int SpeedPWM)
{ 

  analogWrite(MOTOR_IN2, SpeedPWM);
  analogWrite(MOTOR_IN4, SpeedPWM);
}

void motorStop()
{ 
  analogWrite(MOTOR_IN1, SPEED_STOP);
  analogWrite(MOTOR_IN2, SPEED_STOP);
  analogWrite(MOTOR_IN3, SPEED_STOP);
  analogWrite(MOTOR_IN4, SPEED_STOP);
}

void setup() 
{
  Serial.begin(9600);
  pinMode(MOTOR_IN3, OUTPUT);
  pinMode(MOTOR_IN4, OUTPUT);
}

void loop() 
{       
  motorForward(SPEED_SLOW);
  motorStop();
  motorBackward(SPEED_SLOW);
}

/*
unsigned long duration;

int alarm1()
{
  Serial.print("alarmtest");
  analogWrite(SPEAKER, 100);
  delay(200);
  analogWrite(SPEAKER, 0);
  delay(200);
}

int alarm2(int val)
{
  int noise = 200 - val*1.5;
  
  Serial.print("alarmtest");
  analogWrite(SPEAKER, noise);
  delay(200);
  analogWrite(SPEAKER, 0);
  delay(200);
}

void setup() 
{
  Serial.begin(9600);
  pinMode(SPEAKER, OUTPUT);
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() 
{       
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(50);
  digitalWrite(TRIGGER, LOW);
  duration = pulseIn(ECHO, HIGH);
  long distance_cm = duration / 29 / 2;

  Serial.print(distance_cm);
  Serial.println(" cm");
  if (distance_cm < 10)
  {
    alarm2(distance_cm);
  }
    delay(50);
}
*/



