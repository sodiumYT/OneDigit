#include <OneDigit.h>

int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int dp=13;

OneDigit dp(a, b, c, d, e, f, g, dp);

void setup() {
}

void loop() {
  dp.display(1); //Display number '1'
  delay(1000);
  dp.clearScreen();
}
