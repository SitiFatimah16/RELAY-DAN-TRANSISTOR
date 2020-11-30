int Relai = 13;
int Motor = 5; 
int saklar_lampu = 3;
int saklar_motor = 2;
int val_1 = 0;
int val_2 = 0;
int old_val_1 = 0;
int old_val_2 = 0; 
int state_relai = 0;
int state_motor = 0;
void setup() {
pinMode(Relai, OUTPUT);
pinMode(Motor, OUTPUT);
pinMode(saklar_lampu, INPUT);
pinMode(saklar_motor, INPUT);
}
void loop(){
relai();
motor();
}

void relai(){
val_1 = digitalRead(saklar_lampu);
if ((val_1 == HIGH) && (old_val_1 == LOW)){
 state_relai = 1 - state_relai;
 delay(10);
}
old_val_1 = val_1; 
if (state_relai == 1) {
 digitalWrite(Relai, HIGH);
} 
else {
 digitalWrite(Relai, LOW);
}
}

void motor(){
val_2 = digitalRead(saklar_motor);
if ((val_2 == HIGH) && (old_val_2 == LOW)){
 state_motor = 1 - state_motor;
 delay(10);
}
old_val_2 = val_2; 
if (state_motor == 1) {
 digitalWrite(Motor, HIGH);
 } 
else {
 digitalWrite(Motor, LOW);
 }
}
