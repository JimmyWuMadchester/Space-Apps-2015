void setup() {
  // initialize both serial ports:
  Serial.begin(9600);
  Serial3.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // read from port 1, send to port 0:
  digitalWrite(13, LOW);
  if (Serial3.available()) {
    int inByte = Serial3.read();
    digitalWrite(13, HIGH);
    Serial.write(inByte); 
  }
}
