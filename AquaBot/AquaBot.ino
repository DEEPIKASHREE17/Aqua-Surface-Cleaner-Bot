char t;

void setup() {
  pinMode(13,OUTPUT);   // left motors forward
  pinMode(12,OUTPUT);   // left motors reverse
  pinMode(11,OUTPUT);   // right motors forward
  pinMode(10,OUTPUT);   // right motors reverse
  pinMode(9,OUTPUT);    // LED
  Serial.begin(9600);
}
 
void loop() {
  if (Serial.available()) {
    t = Serial.read();
    Serial.println(t);
  }
 
  if (t == 'F') {            // move forward
    digitalWrite(13,HIGH);
    digitalWrite(11,HIGH);
  }
  else if (t == 'B') {       // move reverse
    digitalWrite(12,HIGH);
    digitalWrite(10,HIGH);
  }
  else if (t == 'L') {       // turn right
    digitalWrite(11,HIGH);
  }
  else if (t == 'R') {       // turn left
    digitalWrite(13,HIGH);
  }
  else if (t == 'W') {       // turn LED on
    digitalWrite(9,HIGH);
  }
  else if (t == 'w') {       // turn LED off
    digitalWrite(9,LOW);
  }
  else if (t == 'S') {       // stop
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
  }
  delay(100);
}
