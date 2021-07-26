#define echo 2 
#define trig 3 

long duration; 
int distance; 

char b_on[10] = "H";
char b_off[10] = "L";

int on = 1;
int off = 0;

void setup() {
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 
  Serial.begin(9600); 

}
void loop() {
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  distance = duration * 0.034 / 2; 
  
  if (distance < 100){
  digitalWrite(5,HIGH);

  
   Serial.write(on);
   delay(10);
  }
  else {
  digitalWrite(5,LOW);
    
   Serial.write(off);
   delay(10);

  }
}