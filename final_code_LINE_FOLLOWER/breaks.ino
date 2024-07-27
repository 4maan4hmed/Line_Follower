void breakRight(){
  analogWrite(5,255);
  analogWrite(6,225);
}
void breakLeft(){
  analogWrite(9,255);
  analogWrite(10,225);
}
 void breakOff(){
   analogWrite(5,0);
   analogWrite(6,0);
   analogWrite(9,0);
   analogWrite(10,0);
 }