int Rsrpwm=6; //left side forward
int Rslpwm=5;// left side backward
int Lsrpwm=10;//right forward
int Lslpwm=9;// right backward




char val;


void setup()
{  
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);


pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);


pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);




Serial.begin(9600);
}


void loop()
{
  if (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }


  if( val == 'B') // Back
    {
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 0);
      analogWrite(Rslpwm, 250);//
      analogWrite(Lslpwm, 250);
      analogWrite(Lsrpwm,0);


    }
    if( val == 'F') // Forward
    {
       digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
             
      analogWrite(Rsrpwm, 245);
      analogWrite(Rslpwm, 0);
      analogWrite(Lslpwm, 0);
      analogWrite(Lsrpwm,240);


    }
    if( val == 'R') // Right
    {
  digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
             
      analogWrite(Rsrpwm, 230);
      analogWrite(Rslpwm, 0);
      analogWrite(Lslpwm, 250);
      analogWrite(Lsrpwm,0);


    }
    if( val == 'l') // Left
    {
       digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
     
      analogWrite(Rsrpwm, 0);
      analogWrite(Rslpwm, 250);
      analogWrite(Lslpwm, 0);
      analogWrite(Lsrpwm,250);


    }
    if( val == 'I') // Fwd Right
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 250);
      analogWrite(Rslpwm, 0);
      analogWrite(Lslpwm,0);
      analogWrite(Lsrpwm,140);


    }
    if( val == 'G') // Fwd Left
    {
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 130);
      analogWrite(Rslpwm, 0);
      analogWrite(Lslpwm, 0);
      analogWrite(Lsrpwm,250);


    }
    if( val == 'H') // Back Left
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 0);
      analogWrite(Rslpwm, 140);
      analogWrite(Lslpwm,250);
      analogWrite(Lsrpwm,0);


    }
    if( val == 'J') // Back Right
    {
         digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 0);
      analogWrite(Rslpwm, 250);
      analogWrite(Lslpwm, 135);
      analogWrite(Lsrpwm,0);


    }
     if( val == 'S') // Stop
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(Rsrpwm, 0);
      analogWrite(Rslpwm, 0);
      analogWrite(Lslpwm, 0);
      analogWrite(Lsrpwm, 0);
    }
    }


