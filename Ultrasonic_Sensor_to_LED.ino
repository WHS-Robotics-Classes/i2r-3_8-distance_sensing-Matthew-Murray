int trigPin = 2;
int echoPin = 4;
int led = 7;
int led2 = 6;
int led3 = 5;
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance < 30) {  //
    digitalWrite(led,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3, LOW);
}
  else if (distance < 60) {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3, LOW);
  }
  else {
    digitalWrite(led3, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led2, LOW);
  }    
    Serial.print(distance);
    Serial.println(" cm");
   
    delay (500);
  }
