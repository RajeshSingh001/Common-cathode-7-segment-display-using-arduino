

int a = 13;
int b = 12;
int c = 11;
int d = 10;
int e = 9;
int f = 8;
int g = 7;



void setup()
{                
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
}

void loop()
{
  digitalWrite(a, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
 digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
  delay(1000);               // wait for a second
   digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
 digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
   delay(1000);           
}
