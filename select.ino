int bled = 13;
int led = 8;
int laser = 2;
char currentcommand = 0;
int apulse = 0;
int bpulse = 0;
int cpulse = 0;


void setup() {
  pinMode (bled, OUTPUT);
  pinMode (led, OUTPUT);
  pinMode (laser, OUTPUT);
  Serial.begin (9600);
  delay (3000);
  Serial.println ("Arduino ready for commands");
  Serial.println ("Please input A for laser, B for board LED and C for TH LED");
}

void loop() {
  if (Serial.available() > 0){
    updatecommand();
  }
    if (currentcommand == 'A'){
      laserpulse();
    }
    if (currentcommand == 'B'){
      boardpulse();
    }
    if (currentcommand == 'C'){
      ledpulse();
    }
  delay (500);
}

also another hat
