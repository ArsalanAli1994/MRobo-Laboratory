#include <SoftwareSerial.h>
//Robot Interrupts Controls variables
#define MT1_INT1 12
#define MT1_INT2 11
#define MT2_INT3 10
#define MT2_INT4 9
#define ENA 5
#define ENB 6
#define state 8

//Robot Soft Variables
int BT_check;
int PWM=127;   //default DutyCycle Quantized set
double DCyc;
int x;


//Robot Control Function Prototyping
void RB_Forward();
void RB_Backward();
void RB_Left();
void RB_Right();
void RB_PVleft();
void RB_PVright();
void RB_Stop();

//Defining Robot Serial Comm Variables
SoftwareSerial mySerial(2, 3); // RX, TX
char data='S';
String Robot_state=" ",Robot_speed=" ";

void setup(){
  pinMode(MT1_INT1, OUTPUT);
  pinMode(MT1_INT2, OUTPUT);
  pinMode(MT2_INT3, OUTPUT);
  pinMode(MT2_INT4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(state,INPUT);
  digitalWrite(MT1_INT1,LOW);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,LOW);
  Serial.begin(115200);
  mySerial.begin(115200);
  }

  void loop()
{
  
  BT_check=digitalRead(state);
  if(BT_check==0){
    data = 'S';
    }
  
  x=PWM;
  DCyc=x*0.390625+0.390625;
 
 if (mySerial.available())
 {  
      data = (char)mySerial.read();                   
 } 
 //Serial.println(data);
if(data == 'F'){            //move forward(all motors rotate in forward direction)
  //Serial.println("Forward");
  //mySerial.println("MOVING FORWARD");
  Robot_state="MOVING FORWARD";
  RB_Forward();
}
 
else if(data == 'B'){      //move reverse (all motors rotate in reverse direction)
 //Serial.println("Backward");
 //mySerial.println("MOVING BACKWARD");
 Robot_state="MOVING BACKWARD";
 RB_Backward();
}
 
else if(data == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
  //Serial.println("Move Left");
  //mySerial.println("MOVING LEFT");
  Robot_state="MOVING LEFT";
  RB_Right();
}
 
else if(data == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  //Serial.println("Move Right");
  //mySerial.println("MOVING RIGHT");
  Robot_state="MOVING RIGHT";
  RB_Left();
}
else if(data == 'Z'){
    RB_PVleft();
    //Serial.println("PIVOT MOVING LEFT");
    //mySerial.println("PIVOT MOVING LEFT");
    Robot_state="PIVOT MOVING LEFT";
}
else if(data == 'X'){
    RB_PVright();
    //Serial.println("PIVOT MOVING RIGHT");
    //mySerial.println("PIVOT MOVING RIGHT");
    Robot_state="PIVOT MOVING RIGHT";
}
else if(data == 'S'){      //STOP (all motors stop)
  //Serial.println("Stop");
  //mySerial.println("STOPPED");
  Robot_state="STOPPED";
  RB_Stop();
}

else if(data == 'I'){
  PWM++;
  if(PWM>255){
    PWM=255;
    }
    //Serial.println(PWM);
    //int cov1=int(DCyc);
    //mySerial.println(cov1);
}

 else if(data == 'D'){
  PWM--;
  if(PWM<0){
    PWM=0;
    }
    //Serial.println(PWM);
    //int cov2=int(DCyc);
    //mySerial.println(cov2);
  }
  analogWrite(ENA, PWM);
  analogWrite(ENB, PWM);

  //Sending Robot Data To control Device
  int conv_DC=int(DCyc);
  String RB_Data=String(Robot_state)+","+String(conv_DC);
  mySerial.println(RB_Data);
  delay(8);
}
void RB_Forward(){
  digitalWrite(MT1_INT1,HIGH);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,HIGH);
  }
void RB_Backward(){
  digitalWrite(MT1_INT1,LOW);
  digitalWrite(MT1_INT2,HIGH);
  digitalWrite(MT2_INT3,HIGH);
  digitalWrite(MT2_INT4,LOW);
  }
void RB_Left(){
  digitalWrite(MT1_INT1,HIGH);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,LOW);
  }
void RB_Right(){
  digitalWrite(MT1_INT1,LOW);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,HIGH);
  }
void RB_PVleft(){
  digitalWrite(MT1_INT1,HIGH);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,HIGH);
  digitalWrite(MT2_INT4,LOW);
  }
void RB_PVright(){
  digitalWrite(MT1_INT1,LOW);
  digitalWrite(MT1_INT2,HIGH);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,HIGH);
  }
 void RB_Stop(){
  digitalWrite(MT1_INT1,LOW);
  digitalWrite(MT1_INT2,LOW);
  digitalWrite(MT2_INT3,LOW);
  digitalWrite(MT2_INT4,LOW);
  }
