int in_0 = 8;
int in_1 = 9;
int in_2 = 10;
int in_3 = 11;
int out_0 = 5;
int out_1 = 4;
int out_2 = 3;
int out_3 = 2;
int A = 0;
int B = 0;
int C = 0;
int D = 0;

void setup() {
pinMode(in_0, INPUT);
pinMode(in_1, INPUT);
pinMode(in_2, INPUT);
pinMode(in_3, INPUT);
pinMode(out_0, OUTPUT);
pinMode(out_1, OUTPUT);
pinMode(out_2, OUTPUT);
pinMode(out_3, OUTPUT);
}

void loop() {
A = digitalRead(in_0);
B = digitalRead(in_1);
C = digitalRead(in_2);
D = digitalRead(in_3);

if ((!A && !C && !D ) || (!B && C && D) || (A && B && D) || (A && B && C)){
digitalWrite(out_0, HIGH);
} else {
digitalWrite(out_0, LOW);
}

if ((C && !D) || (!A && B) || (A && C) || (B && D)){
digitalWrite(out_1, HIGH);
} else {
digitalWrite(out_1, LOW);
}

if ((!A && !B && !C ) || ( !A && !D) || (!A && B && C) || (!B && !D)){
digitalWrite(out_2, HIGH);
} else {
digitalWrite(out_2, LOW);
}

if ((!A && !B && !C && D) || (!A && !B && C && !D) || (A && !B && !C && !D) || (A && !B && C && D) ||( A && B && C && !D)){
digitalWrite(out_3, HIGH);
} else {
digitalWrite(out_3, LOW);
}

}
