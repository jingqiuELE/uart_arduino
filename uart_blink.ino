int LED = 13; 

void setup() {
  pinMode(LED, OUTPUT);
  
  Serial.begin(9600);
  Serial.flush();
  Serial.println("hello there!");
}
 
void loop(){
  char ch;

  if (Serial.available() > 0) {
    ch = (char) Serial.read();
  } 
  
  if (ch == '1') {
    digitalWrite(LED, HIGH);
  } else if (ch == '0') {
    digitalWrite(LED, LOW);
  }

}

