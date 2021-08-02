int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;


void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1
  delay(600);                  // wait for 600ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(600);                  // wait for 600ms      
  digitalWrite(LED3, HIGH);    // turn on LED3
  delay(600);                  // wait for 600ms
  digitalWrite(LED4, HIGH);    // turn on LED4
  delay(600);                  // wait for 600ms
  
  digitalWrite(LED1, LOW);     // turn off LED1
  delay(1200);                 // wait for 1200ms
  digitalWrite(LED2, LOW);     // turn off LED2
  delay(900);                  // wait for 900ms
  digitalWrite(LED3, LOW);     // turn off LED3
  delay(600);                  // wait for 600ms
  digitalWrite(LED4, LOW);     // turn off LED4
  delay(300);                  // wait for 300ms before running program all over again
}
