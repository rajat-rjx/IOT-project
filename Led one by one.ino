// code by rajat_rjx
int m = 3;
int r= 5;
int n=6;
int t=9;
int a= 0;

void setup() {
  pinMode(m, OUTPUT); 
  pinMode(r,OUTPUT);
  pinMode(n, OUTPUT); 
  pinMode(t,OUTPUT);
}

void loop() {
  for (a = 0 ; a < 255 ; a++) 
  {
    analogWrite(m, a);
    
  }
  for (a < 255 ; a >= 0 ; a--) 
  {
    analogWrite(m, a);
    delay(20);
    
  }
  delay(200);
  for (a = 0 ; a < 255 ; a++) 
  {
    analogWrite(r, a);
    
  }
  for (a < 255 ; a >= 0 ; a--) 
  {
    analogWrite(r, a);
    delay(20);
    
  }
  delay(200);
  for (a = 0 ; a < 255 ; a++) 
  {
    analogWrite(n, a);
    
  }
  for (a < 255 ; a >= 0 ; a--) 
  {
    analogWrite(n, a);
    delay(20);
    
  }
  delay(200);
  for (a = 0 ; a < 255 ; a++) 
  {
    analogWrite(t, a);
    
  }
  for (a < 255 ; a >= 0 ; a--) 
  {
    analogWrite(t, a);
    delay(20);
    
  }
  delay(200);

}
