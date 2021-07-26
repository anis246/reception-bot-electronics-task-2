char data[10];

void setup() {
 
  Serial.begin(9600);
}

void loop() {
  
  while (!Serial.available()){}
  int data = Serial.read();
 
  Serial.println(data);
  
  if (data==1){
   digitalWrite(5,HIGH);
  }
  
  else if(data==0){
   digitalWrite(5,LOW);
  }
  delay(10);
}