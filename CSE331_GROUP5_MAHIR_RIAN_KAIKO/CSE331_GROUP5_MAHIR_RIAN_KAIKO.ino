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
A = digitalRead(in_0);//A=I3
B = digitalRead(in_1);//B=I2
C = digitalRead(in_2);//C=I1
D = digitalRead(in_3);//D=I0

if ((!A && !C && !D ) || (!B && C && D) || (A && B && D) || (A && B && C)){
digitalWrite(out_0, HIGH);//!A!B!C+BCD+ACD+AB!C
} else {
digitalWrite(out_0, LOW);
}

if ((C && !D) || (!A && B) || (A && C) || (B && D)){
digitalWrite(out_1, HIGH);//!AB+BD+!AC!D+ABC
} else {
digitalWrite(out_1, LOW);
}

if ((!A && !B && !C ) || ( !A && !D) || (!A && B && C) || (!B && !D)){
digitalWrite(out_2, HIGH);//!A!C+!A!D+!B!C!D+BC!D
} else {
digitalWrite(out_2, LOW);
}

if ((!A && !B && !C && D) || (!A && !B && C && !D) || (A && !B && !C && !D) || (A && !B && C && D) ||( A && B && C && !D)){
digitalWrite(out_3, HIGH);//!A!B!CD+ !AB!C!D +!ABCD+ A!B!C!D + AB!CD
} else {
digitalWrite(out_3, LOW);
}

}
