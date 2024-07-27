bool error1(int a0, int a1 , int a2 , int a3 , int a4 , int a5 ){
  
  if (b[0]==a0&&b[1]==a1&&b[2]==a2&&b[3]==a3&&b[4]==a4&&b[5]==a5){
    return true;
  }
  
  else{
    return false;
  }
}
int  error2(int a0, int a1 , int a2 , int a3 , int a4 , int a5 ){
  int error;
  if(a0+a1+a2+a3+a4+a5 == 0){
   error = 0;
  }else{
   error=((a0*5)+(a1*3)+(a2*1)+(a3*(-1))+(a4*(-3))+(a5*(-5)))/(a0+a1+a2+a3+a4+a5);
  }
  Serial.print(error);
  return error;
}