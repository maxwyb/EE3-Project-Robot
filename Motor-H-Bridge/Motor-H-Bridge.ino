const int signal_pos = 12;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(signal_pos, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println("Running one loop...");
//  digitalWrite(signal_pos, HIGH);
//  delay(3000);
//  digitalWrite(signal_pos, LOW);
//  delay(3000);

  int speed = 100;
  const int speed_scale = 100;
  int i;
  for (i = 0; i < speed; i++) {
    digitalWrite(signal_pos, HIGH);
  }
  for (; i < speed_scale; i++) {
    digitalWrite(signal_pos, LOW);
  }
}
