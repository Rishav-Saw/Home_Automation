String voice;
int val;
void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
 while(Serial.available()){
  delay(3);
  char c = Serial.read();
  voice+=c;
 }
 if(voice.length() > 0){
  Serial.println(voice);
  if(voice == "turn on light"){
    digitalWrite(6, HIGH);
  }
  else if(voice == "turn off light"){
    digitalWrite(6, LOW);
  }
  else if(voice == "turn on fan"){
    digitalWrite(5, HIGH);
  }
  else if(voice == "turn off fan"){
    digitalWrite(5, LOW);
  }
  else if(voice == "turn on AC"){
    digitalWrite(4, HIGH);
  }
  else if(voice == "turn off AC"){
    digitalWrite(4, LOW);
  }
  else if(voice == "turn on heater"){
    digitalWrite(3, HIGH);
  }
  else if(voice == "turn off heater"){
    digitalWrite(3, LOW);
  }
  else if(voice == "turn on all"){
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
  }
  else if(voice == "turn off all"){
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }
  voice = "";
 }
 }
