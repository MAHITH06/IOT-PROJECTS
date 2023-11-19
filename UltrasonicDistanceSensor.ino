#define tp 26 
#define ep 27
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tp,OUTPUT);
  pinMode(ep,INPUT);
}

void loop() {
  long distance,duration;
  digitalWrite(tp,LOW);
  delay(2000);
  digitalWrite(tp,HIGH);
  delay(10000);
  digitalWrite(tp,LOW);
  duration = pulseIn(ep,HIGH);
  distance =(duration/2)/29.1;

  if(distance>=200 ||distance<=0)
 {
  Serial.println("not in range");

 }
 else 
 {
  Serial.print("DISTANCE:");
  Serial.println(distance);
 }
 delay(500);
  // put your main code here, to run repeatedly:

}
