int stepPin = 12;
int dirPin = 11;
int enblPin = 10;

int LASER = 3;

int stepPin1 = 9;
int dirPin1 = 8;
int enblPin1 = 7;
//int mosfet1=3;
//int mosfet2=5;
int delayy = 5; 
int Relay1 = 2;
int Relay2 = 4;
int Relay3 = 5;
int Relay4 = 6;

void setup() {
  Serial.begin(9600);
  //pinMode(mosfet1, OUTPUT);
  //pinMode(mosfet2, OUTPUT);
  //digitalWrite(mosfet1, LOW);
  
  //digitalWrite(mosfet2, LOW);
//delay(5000);
  
  //for(int i =0;i<255;i++){
    //analogWrite(mosfet1,i);
  //  analogWrite(mosfet2,50);
   // delay(2000);
  //}
 //digitalWrite(mosfet1,HIGH);  
 //digitalWrite(mosfet2,HIGH);   
  

pinMode(LASER, OUTPUT);
analogWrite(LASER, 100); 

pinMode(Relay1, OUTPUT);
pinMode(Relay2, OUTPUT);
pinMode(Relay3, OUTPUT);
pinMode(Relay4, OUTPUT);
pinMode(A1, OUTPUT);
digitalWrite(A1, LOW); 
digitalWrite(Relay1, HIGH);
digitalWrite(Relay2, HIGH);
digitalWrite(Relay3, HIGH);
digitalWrite(Relay4, HIGH);
delay(2000);
digitalWrite(Relay1,LOW);
digitalWrite(Relay2,LOW);
digitalWrite(Relay3,LOW);
digitalWrite(Relay4,LOW);
digitalWrite(A1, HIGH);


pinMode (stepPin, OUTPUT);
pinMode (dirPin, OUTPUT);
pinMode (enblPin, OUTPUT);

pinMode (stepPin1, OUTPUT);
pinMode (dirPin1, OUTPUT);
pinMode (enblPin1, OUTPUT);

digitalWrite(stepPin, LOW);
digitalWrite(dirPin, LOW);
digitalWrite(enblPin, HIGH);


digitalWrite(stepPin1, LOW);
digitalWrite(dirPin1, LOW);
digitalWrite(enblPin1, HIGH);
delay(100);
digitalWrite(enblPin, LOW);
digitalWrite(enblPin1, LOW);

}

void loop() {
delay(2000);
digitalWrite(dirPin, HIGH); 
for(int x=0; x<800; x++){
digitalWrite(stepPin, HIGH);
delay(delayy);
digitalWrite(stepPin, LOW);
delay(delayy);
}
delay(2000);
digitalWrite(dirPin, LOW); 
for(int x=0; x<800; x++){
digitalWrite(stepPin, HIGH);
delay(delayy);
digitalWrite(stepPin, LOW);
delay(delayy);
}
delay(2000);
digitalWrite(dirPin1, HIGH); 
for(int x=0; x<1300; x++){
digitalWrite(stepPin1, HIGH);
delay(delayy);
digitalWrite(stepPin1, LOW);
delay(delayy);
}
delay(2000);
digitalWrite(dirPin1, LOW); 
for(int x=0; x<1300; x++){
digitalWrite(stepPin1, HIGH);
delay(delayy);
digitalWrite(stepPin1, LOW);
delay(delayy);
//exit(0);
}
}

