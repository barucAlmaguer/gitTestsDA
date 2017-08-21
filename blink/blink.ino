void setup(){
	pinMode(13, OUTPUT);
}

void loop(){
	blink(1000, 13);
}

void blink(int pin, int del){
	digitalWrite(pin, HIGH);
	delay(del);
	digitalWrite(pin, LOW);
	delay(del);
}
