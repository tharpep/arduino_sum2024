int pin = 9;
bool bulin = HIGH;
bool buttonP = HIGH;


// int temp(){}
void setup(){
  pinMode(pin, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop(){
  bulin = digitalRead(2) == HIGH;
  if(bulin && !buttonP){
    digitalWrite(pin, LOW);
    delay(1000);
    digitalWrite(pin, HIGH);
    delay(500);

    alert();
    buttonP = bulin;
  }
}



void alert(){
  for (int i = 0; i < 5; i++){
    digitalWrite(pin, LOW);
    delay(500);
    digitalWrite(pin, HIGH);
    delay(500);
  }
  digitalWrite(pin, LOW);
}