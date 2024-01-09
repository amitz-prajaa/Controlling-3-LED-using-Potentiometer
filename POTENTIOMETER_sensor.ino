int pot = A0 ; //   (vcc  output  Gnd) -> start from the skru..c
int led1 = 13 ;
int led2 = 12 ;
int led3 = 8 ;
int buzzer = 7 ;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(pot , INPUT);
    pinMode(led1 , OUTPUT);
    pinMode(led2 , OUTPUT);
    pinMode(led3 , OUTPUT);
    pinMode(buzzer , OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
    int val = analogRead(pot);

    Serial.print("Pot value : ");
    Serial.println(val);
    delay(200);
    
    if(val<=250){
      digitalWrite(led1 , 1);
      digitalWrite(led2 , 0);
      digitalWrite(led3 , 0);
      digitalWrite(buzzer , 0) ;
    }
    else if(val >250 && val<=400){
      digitalWrite(led1 , 0);
      digitalWrite(led2 , 0);
      digitalWrite(led3 , 1);
      digitalWrite(buzzer , 1) ;
      delay(1000);
    }
    else{
      digitalWrite(led1 , 0);
      digitalWrite(led2 , 1);
      digitalWrite(led3 , 0);
      digitalWrite(buzzer , 0) ;
    }
    
}
