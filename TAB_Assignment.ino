int startValue = 5;
int ledPin = 13;

void flashLED(int times){
  int count = times;
digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void setup() {
  int count = startValue;
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("== Smart Countdown Starting==");

  while(count > 0){
  Serial.print("Count: ");
  Serial.println(count);
  
  flashLED(count);
  delay(1000);
   count = count - 1;

digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
delay(1000);
  
  }
Serial.println("== Countdown Completed ==");
  

  }








void loop() {
  // put your main code here, to run repeatedly:

}
