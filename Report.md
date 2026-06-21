TASK 1
1. int stores whole numbers and float stores numbers with decimals.
2. The serial connection between the Arduino and your computer will not be intialized.
3. Because it is in the setup() not loop()

TASK 2
1. Because the pinMode() needs to configure the pin once, putting it in the loop(), the same configuration will repeat.
2. The Arduino will switch between the HIGH and LOW very fast.
3. The Arduino light will be ON for 3 seconds and will go OFF for half a second'

TASK 3
1. A parameter is an input value a function expects when it is called.
2. It makes the code look shorter and easy to read.
3. Yes, but every call will blink at the same speed.

TASK 4
1. It decreases the counter by 1 each time the loop runs.
2. Everything will be the same just that the countdown will be begin from 7 to 6 then downwards.
3. setup() makes the runs  the function once automatically whiles the loop() makes the function run depending on the condition you write.

TASK 5
1. int startValue = 5;
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

2. I did not declare a differnt variable inside flashLED.
3. The counter will decrease from 5 to 3 then it continues to and stops because 1 - 2 gives a -1 which is not part of the condition.
4. Create a separate while loop and write it beneath the completed countdown.

}
