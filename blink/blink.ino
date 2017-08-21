void setup(){
	pinMode(13, OUTPUT);
}

void loop(){
	blink(1000);
}

void blink(int del){
	digitalWrite(13, HIGH);
	delay(del);
	digitalWrite(13, LOW);
	delay(del);
}