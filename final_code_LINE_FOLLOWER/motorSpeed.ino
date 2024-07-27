 void motorSpeed()
{int right_speed = initial_speed + PID_value;
  int left_speed = initial_speed - PID_value;
  int rev_extra=35;//agar jor se ghumana h to
  
  if(right_speed>255){
    right_speed = 255;
  }
  if(left_speed>255){
    left_speed = 255; 
  }

  if(right_speed<0){
    analogWrite(6,0);
    analogWrite(5,-right_speed+rev_extra);//for reverse right motor
    analogWrite(10,left_speed);
    analogWrite(9,0);
  
  }
  if(left_speed<0){
    analogWrite(10,0);
    analogWrite(9,-left_speed+rev_extra);//for reverse left motor
    analogWrite(6,right_speed);
    analogWrite(5,0);
 
  }
  
  if(left_speed>0&&right_speed>0){
  analogWrite(6,right_speed);
  analogWrite(5,0);
  analogWrite(10,left_speed);
  analogWrite(9,0);

  }
}