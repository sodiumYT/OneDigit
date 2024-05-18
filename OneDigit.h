class OneDigit {
  public:
    int a, b, c, d, e, f, g, dp;

    OneDigit(int a, int b, int c, int d, int e, int f, int g, int dp) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->e = e;
        this->f = f;
        this->g = g;
        this->dp = dp;

        pinMode(a, OUTPUT);
        pinMode(b, OUTPUT);
        pinMode(c, OUTPUT);
        pinMode(d, OUTPUT);
        pinMode(e, OUTPUT);
        pinMode(f, OUTPUT);
        pinMode(g, OUTPUT);
        pinMode(dp, OUTPUT);
    }

    void clearScreen() {
        digitalWrite(a, LOW);
        digitalWrite(b, LOW);
        digitalWrite(c, LOW);
        digitalWrite(d, LOW);
        digitalWrite(e, LOW);
        digitalWrite(f, LOW);
        digitalWrite(g, LOW);
        digitalWrite(dp, LOW);
    }

    void display(int number) {
        clearScreen();

        switch (number) {
            case 0:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                break;
            case 1:
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                break;
            case 2:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(d, HIGH);
                break;
            case 3:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(g, HIGH);
                break;
            case 4:
                digitalWrite(f, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(c, HIGH);
                break;
            case 5:
                digitalWrite(a, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                break;
            case 6:
                digitalWrite(a, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                break;
            case 7:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                break;
            case 8:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(e, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                break;
            case 9:
                digitalWrite(a, HIGH);
                digitalWrite(b, HIGH);
                digitalWrite(c, HIGH);
                digitalWrite(d, HIGH);
                digitalWrite(f, HIGH);
                digitalWrite(g, HIGH);
                break;
        }
    }
};
