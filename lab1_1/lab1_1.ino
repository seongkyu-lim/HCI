
int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (switchState == LOW){
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, LOW);
  }else{
    digitalWrite(3,HIGH);
    delay(250); // 15초
    digitalWrite(3, LOW);
    delay(250);
  }
}
