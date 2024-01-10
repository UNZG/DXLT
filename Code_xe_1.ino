//banh truoc trai
const int AIN1 = 3;
const int AIN2 = 9;

//banh truoc phai
const int BIN1 = 10;
const int BIN2 = 11;

//banh sau trai
const int CIN1 = 5;
const int CIN2 = 2;

//banh sau trai
const int DIN1 = 6;
const int DIN2 = 4;

int speed = 40;  // Tốc độ ban đầu, giữa 0 và 255


//cam bien, A3 la cam bien phia truoc
int sensorPins[7] = {A7, A6, A5, A3, A2, A1, A0};  
int sensorT=A4;


// vi tri cam bien
//                        A4
// A7     A6      A5      A3      A2      A1      A0
void setup() {
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(CIN1, OUTPUT);
  pinMode(CIN2, OUTPUT);
  pinMode(DIN1, OUTPUT);
  pinMode(DIN2, OUTPUT);
  
  Serial.begin(9600); 

  int start=35;
  analogWrite(AIN1, start);
  digitalWrite(AIN2, LOW);

  analogWrite(BIN1, start);
  digitalWrite(BIN2, LOW);

  analogWrite(CIN1, start);
  digitalWrite(CIN2, LOW);

  analogWrite(DIN1, start);
  digitalWrite(DIN2, LOW);
  
  
  delay(350);

  analogWrite(AIN1, 0);
  digitalWrite(AIN2, LOW);

  analogWrite(BIN1, 0);
  digitalWrite(BIN2, LOW);

  analogWrite(CIN1, 0);
  digitalWrite(CIN2, LOW);

  analogWrite(DIN1, 0);
  digitalWrite(DIN2, LOW);
}

void loop() {
  int sensorValues[7]; 
  int sensorValuesT;
  for (int i = 0; i <= 6; i++) {
    sensorValues[i] = digitalRead(sensorPins[i]);
    
  }
  sensorValuesT = digitalRead(sensorT);
  for (int i = 0; i <=6; i++) {
    Serial.print(sensorValues[i]);
  }
  Serial.print(" _");
  Serial.print(sensorValuesT);
  Serial.println();  








////banh truoc trai
//  //quay thuan toc do speed
//  analogWrite(AIN1, speed);
//  digitalWrite(AIN2, LOW);
//  //quay nguoc toc do speed
//  analogWrite(AIN1, LOW);
//  digitalWrite(AIN2, speed);
//
////banh truoc phai
//  //quay thuan toc do speed
//  analogWrite(BIN1, speed);
//  digitalWrite(BIN2, LOW);
//  //quay nguoc toc do speed
//  analogWrite(BIN1, LOW);
//  digitalWrite(BIN2, speed);
//
////banh sau trai
//  //quay thuan toc do speed
//  analogWrite(CIN1, speed);
//  digitalWrite(CIN2, LOW);
//  //quy nguoc 255
//  digitalWrite(CIN1, LOW);
//  digitalWrite(CIN2, HIGH);
//
////banh sau phai
//  //quay thuan toc do speed
//  analogWrite(DIN1, speed);
//  digitalWrite(DIN2, LOW);
//  //quy nguoc 255
//  digitalWrite(DIN1, LOW);
//  digitalWrite(DIN2, HIGH);


  forward(50);
}


void forward(int speed){
//banh truoc trai
//quay thuan toc do speed
  analogWrite(AIN1, speed);
  digitalWrite(AIN2, LOW);
//banh truoc phai
  //quay thuan toc do speed
  analogWrite(BIN1, speed);
  digitalWrite(BIN2, LOW);
//banh sau trai
  //quay thuan toc do speed
  analogWrite(CIN1, speed);
  digitalWrite(CIN2, LOW);
//banh sau phai
  //quay thuan toc do speed
  analogWrite(DIN1, speed);
  digitalWrite(DIN2, LOW);
}
void left(){
  
}
void right(){
  
}
//
//void Ponderado(){
//  int sum = 0;
//  int division = 0;
//  int nove = 0;
//  char center;
//  for (int x = 0; x <= 6; x++){
//    int w = 1000;
//    if (x == 3){
//      if (digitalRead(sensorPins[x]) == 1){ center = 1; }else{ center = 0; }
//    }
//    if ( digitalRead(sensorPins[x]) == 1){
//      nove = 1;
//    }
//    int v = (1000) * (x - 2);
//    sum += (w * v);
//    division += w;
//  }
//  if (nove == 0){
//    POSICION = POSICION > 0 ? 200 : -200;
//  }else{
//    POSICION = sum/division;
//    POSICION = POSICION/10;
//  }
//}
