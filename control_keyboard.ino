void setup(void)
{
pinMode(13, OUTPUT);
 
Serial.begin(19200); //Set Baud Rate
}

void loop() { 
  int x,delay_en;
  char val; 
  while(1) { 
  val = Serial.read(); 
    if(val!=-1) { 
      switch(val) { 
  
      case 'w'://Move back
      digitalWrite(13,HIGH);
    
      break; 

      case 'z'://move ahead
      digitalWrite(13,LOW);
      
      break; 

      
      } 
    } 
  } 
} 


