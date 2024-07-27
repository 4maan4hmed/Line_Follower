int sensor[6];
float Kp = 20, Ki = 0.01, Kd = 200;
float piderror = 0, P = 0, I = 0, D = 0, PID_value = 0;
float previous_error = 0, previous_I = 0;
float initial_speed = 100;
float left_reverse_speed, right_reverse_speed;
int thres = 450;
int b[6];
int onoff;
int v[3];
void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  delay(2000);
  digitalWrite(2, HIGH);
  // thres=calibrate();
  //Serial.println(thres);
  // if (Serial.available()) {
  //   while(Serial.available() == 0);
  //   valuesread();
  //   processing();
  // }
  delay(100);
}

void loop() {
  for (int i = 0; i <= 5; i++) {
    sensor[5 - i] = analogRead(i);

    delay(30);
    if (sensor[i] < thres) {
      b[i] = 0;
    } else {
      b[i] = 1;
    }
  }
  for (int i = 0; i < 6; i++) {
    Serial.print(sensor[i]);
    Serial.print(" ");
  }
  Serial.println();

  piderror = error2(b[0], b[1], b[2], b[3], b[4], b[5]);
  // Serial.print("ERROR VALUE:  ");
  // Serial.println(piderror);
  //right motor backward-5
  //right motor forward-6
  //left motor backward-9
  //left motor backward-10
  // Serial.println(PID_value);
  // Serial.print("PID VALUE: ");
  // Serial.println(PID_value);
  // Serial.println(piderror);
}