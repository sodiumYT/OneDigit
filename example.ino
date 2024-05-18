int a, b, c, d, e, f, g, dp;

a=2;
b=3;
c=4;
d=5;
e=6;
f=7;
g=8;
dp=13;


OneDigit dp(a, b, c, d, e, f, g, dp);

void setup() {
}

void loop() {
  dp.display(1); //Display number '1'
  delay(1000);
  dp.clearScreen();
}
