int pin=6; // Pin to which you connect the gate (G) of the MOSFET. 

void setup() {
  // put your setup code here, to run once:
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(pin, 250); // High Intensity 
delay(5000);
analogWrite(pin, 100); // Medium intensity 
delay(5000);
analogWrite(pin, 50); // Low intensity 
delay(5000);  

}

