const int buzzer = 14; //buzzer to arduino pin 14

void setup(){
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 14 as an output
}

void loop(){
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(100);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(10);        // ...for 1sec
}