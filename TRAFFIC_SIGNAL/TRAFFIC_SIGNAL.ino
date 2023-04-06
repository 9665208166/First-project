int AR=0,AY=1,AG=2,BR=3,BY=4,BG=5,CR=6,CY=7,CG=8,DR=9,DY=10,DG=11;
void setup()
{
  pinMode(AR,OUTPUT);
  pinMode(AY,OUTPUT);
  pinMode(AG,OUTPUT);
  pinMode(BR,OUTPUT);
  pinMode(BY,OUTPUT);
  pinMode(BG,OUTPUT);
  pinMode(CR,OUTPUT);
  pinMode(CY,OUTPUT);
  pinMode(CG,OUTPUT);
  pinMode(DR,OUTPUT);
  pinMode(DY,OUTPUT);
  pinMode(DG,OUTPUT);
  digitalWrite(AY,HIGH);
  digitalWrite(BY,HIGH);
  digitalWrite(CY,HIGH);
  digitalWrite(DY,HIGH);
  delay(3000);
  digitalWrite(AY,LOW);
  digitalWrite(BY,LOW);
  digitalWrite(CY,LOW);
  digitalWrite(DY,LOW);
}
void loop()
{
  digitalWrite(AG,HIGH);
  digitalWrite(BR,HIGH);
  digitalWrite(CR,HIGH);
  digitalWrite(DR,HIGH);
  delay(5000);
  digitalWrite(AG,LOW);
  digitalWrite(AY,HIGH);
  delay(2000);
  digitalWrite(AY,LOW);
  digitalWrite(AR,HIGH);
  digitalWrite(BG,HIGH);
  digitalWrite(BR,LOW);
  delay(5000);
  digitalWrite(BG,LOW);
  digitalWrite(BY,HIGH);
  delay(2000);
  digitalWrite(BY,LOW);
  digitalWrite(BR,HIGH);
  digitalWrite(CG,HIGH);
  digitalWrite(CR,LOW);
  delay(5000);
  digitalWrite(CG,LOW);
  digitalWrite(CY,HIGH);
  delay(2000);
  digitalWrite(CY,LOW);
  digitalWrite(CR,HIGH);
  digitalWrite(DG,HIGH);
  digitalWrite(DR,LOW);
  delay(5000);
  digitalWrite(DG,LOW);
  digitalWrite(DY,HIGH);
  delay(2000);
  digitalWrite(DY,LOW);
}

 
 
