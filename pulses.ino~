
void laserpulse( void) {
  if (apulse == 0) {
    Serial.println ("Activating laser");
    apulse++;
    bpulse = 0;
    cpulse = 0;
  }
  digitalWrite (laser, HIGH);
  delay (100);
  digitalWrite (laser, LOW);
}

void boardpulse( void) {
  if (bpulse == 0) {
    Serial.println ("Activating BOARD LED");
    bpulse++;
    apulse = 0;
    cpulse = 0;
  }
  digitalWrite (bled, HIGH);
  delay (100);
  digitalWrite (bled, LOW);
}

void ledpulse( void) {
  if (cpulse == 0) {
    Serial.println ("Activating TH LED");
    cpulse++;
    apulse = 0;
    bpulse = 0;
  }
  digitalWrite (led, HIGH);
  delay (100);
  digitalWrite (led, LOW);
}
  
