
int Bpin = 4; // is the button pin.
int relaypin = 2; // is the pin to control the relay

int button; // integer reads the button pin.
void setup() {
  // put your setup code here, to run once:
pinMode(Bpin,INPUT_PULLUP);
pinMode(relaypin,OUTPUT);
digitalWrite(relaypin,HIGH); // relaypin is set high
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
button = digitalRead(Bpin);
if ( button != HIGH) { // 
  Serial.println("off");
  digitalWrite(relaypin,LOW);
  delay(3000);
  digitalWrite(relaypin,HIGH);
  Serial.println("on");
}
}


