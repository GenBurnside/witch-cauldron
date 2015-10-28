const int LED1 = 3;
const int LED2 = 5;
const int LED3 = 6;
const int LED4 = 9; 
const int LED5 = 10; //set brightness manually

const int pulseLEDs[4] = { LED1, LED2, LED3, LED4 }; 

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  
  int i;
  for (i = 0; i <= 2; i = i + 1) {
    analogWrite(pulseLEDs[i], 255);
  }

  analogWrite(LED5, 48);
}

void loop()
{
  long current = random(0, 4);
  int fadeDelay = 10;  
  int low = 30;
  
  for (int b = 255; b >= low; b = b - 5) 
  {
    analogWrite(pulseLEDs[current], b);
    delay(fadeDelay);
  }
  
  for (int b = low; b <= 250; b = b + 5) 
  {
    analogWrite(pulseLEDs[current], b);
    delay(fadeDelay);
  }
}
