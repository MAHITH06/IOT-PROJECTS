int relay_1 = 4; //IN1 ON TO THE BOARD NUMBER
int relay_2 = 27; //IN2 ON TO THE BOARD NUMBER
int relay_3 = 5; //IN3 ON TO THE BOARD NUMBER
int relay_4 = 12; //IN4 ON TO THE BOARD NUMBER

void setup() {
  
  Serial.begin(9600);

  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);
  pinMode(relay_3, OUTPUT);
  pinMode(relay_4, OUTPUT);

}

void loop() {

  digitalWrite(relay_1, HIGH);
  digitalWrite(relay_2, HIGH);
  digitalWrite(relay_3, HIGH);
  digitalWrite(relay_4, HIGH);

  Serial.println("All relays ON");

  delay(1000);
  digitalWrite(relay_1, LOW);
  digitalWrite(relay_2, HIGH);digitalWrite(relay_3, HIGH);digitalWrite(relay_4, HIGH);
  delay(1000);
  digitalWrite(relay_2, LOW);digitalWrite(relay_1, HIGH);digitalWrite(relay_3, HIGH);digitalWrite(relay_4, HIGH);
  delay(1000);
  digitalWrite(relay_3, LOW);digitalWrite(relay_1, HIGH);digitalWrite(relay_2, HIGH);digitalWrite(relay_4, HIGH);
  delay(1000);
  digitalWrite(relay_4, LOW);digitalWrite(relay_1, HIGH);digitalWrite(relay_2, HIGH);digitalWrite(relay_3, HIGH);

  Serial.println("All relays OFF");

  delay(1000);
}