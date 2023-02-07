//download and use it on Arduino nano*

const int PWMA = 4;
const int AIN1 = 5;
const int AIN2 = 6;

const int PWMB = 3;
const int BIN1 = 11;
const int BIN2 = 10;


char dato; 

void setup()
{
  //set all pins as output
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  

  Serial.begin(38400);
}

void loop()
{
if (Serial.available())
    {
    char dato=Serial.read();
     Serial.print("Dato recibido:");
     Serial.println(dato);
     
      if(dato=='1')
      { atras();
 
      }
      
      if(dato=='2')
      { avanza();
      
      }
                  
      if(dato=='3')
      { izquierda();
     
      }
      
      if(dato=='4')
      { derecha();
     
      }
      
      if(dato=='a')
      { paro();
      
      }

 }

}

 void atras(){
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
   
  
  }
  
 void avanza(){
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,HIGH);
  Serial.println("avanza");
  Serial.println(digitalRead(PWMB));
  }
  
 void derecha(){
   digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2,LOW);
  
  }
  
 void izquierda(){
   digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,HIGH);
  
  }
  
 void paro(){
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW);
  digitalWrite(BIN2,LOW);
  digitalWrite(PWMA, HIGH);
  digitalWrite(PWMB, HIGH);
  Serial.println("detener");
  Serial.println(digitalRead(PWMB));
  }
