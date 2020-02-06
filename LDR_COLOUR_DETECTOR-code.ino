

int ldr;
void setup() {
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {

digitalWrite(7,HIGH);   //For checking whether the colour is red or not.
delay(100);
ldr=analogRead(A0);
if(ldr<350)
Serial.println("RED");
digitalWrite(7,LOW);

digitalWrite(6,HIGH);   //For checking whether the colour is blue or not.
delay(100);
ldr=analogRead(A0);
if(ldr<270)
Serial.println("GREEN");
digitalWrite(6,LOW);

digitalWrite(5,HIGH);  //For checking whether the colour is green or not.
delay(100);
ldr=analogRead(A0);
if(ldr<400&&ldr>350)
Serial.println("BLUE");
digitalWrite(5,LOW);

}
