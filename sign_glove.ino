int a = 0;  // Thumb
int b = 0;  // Ring
int c = 0;  // Index
int d = 0;  // Middle
int e = 0;  // Little

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(A0); // Thumb
  c = analogRead(A1); // Index
  d = analogRead(A2); // Middle
  b = analogRead(A3); // Ring
  e = analogRead(A4); // Little

  // Example gesture logic (tune thresholds as needed):
  if (a < 900 && b > 900 && c > 900 && d > 900 && e > 900 && a > 800) {
    Serial.println("a");
  } else if (a > 900 && b < 900 && c < 900 && e < 900) {
    Serial.println("b");
  } else if (a > 900 && b < 900 && c > 900 && d > 800 && e > 900) {
    Serial.println("d");
  } else if (a > 900 && b > 900 && c > 900 && d > 900 && e > 900) {
    Serial.println("e");
  } else if (a > 900 && b > 900 && c < 890 && e < 890) {
    Serial.println("f");
  } else if (a < 900 && b < 900 && c > 890 && d > 890 && e > 890 && a > 800) {
    Serial.println("g");
  } else if (a < 900 && b < 900 && c < 900 && d > 870 && e > 900) {
    Serial.println("h");
  } else if (a > 900 && b > 900 && c > 900 && d > 900 && e < 900) {
    Serial.println("i");
  } else if (a < 900 && b > 900 && c > 900 && d > 900 && e < 900 && a > 800) {
    Serial.println("j");
  } else if (a > 900 && b < 900 && c < 900 && d > 900 && e > 900) {
    Serial.println("k");
  } else if (a < 800 && b < 900 && c > 900 && d > 900 && e > 900) {
    Serial.println("l");
  } else if (a < 800 && b > 900 && c > 900 && d > 900 && e < 900) {
    Serial.println("m");
  } else if (a < 820 && b > 900 && c > 900 && d < 900 && e < 900) {
    Serial.println("n");
  } else if (a > 820 && b < 900 && c < 900 && d < 900 && e > 900) {
    Serial.println("o");
  } else if (a < 880 && b < 910 && c > 900 && d > 900 && e < 890) {
    Serial.println("p");
  } else if (a < 850 && b < 900 && c > 900 && d < 920 && e < 890) {
    Serial.println("q");
  } else if (a < 790 && b < 900 && c < 900 && d > 920 && e > 890) {
    Serial.println("r");
  } else if (a < 960 && a > 940 && b > 900 && c > 900 && d > 920 && e > 890) {
    Serial.println("s");
  } else if (a < 800 && b > 900 && d < 920 && e < 890) {
    Serial.println("t");
  } else if (a > 900 && b < 900 && d > 900 && e < 900) {
    Serial.println("u");
  } else if (a > 900 && b < 900 && d < 900 && e < 900 && c > 900) {
    Serial.println("v");
  } else if (a < 900 && b < 900 && d < 900 && e < 900 && c > 900) {
    Serial.println("w");
  } else if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900) {
    Serial.println("x");
  } else if (a > 800 && b > 900 && d < 900 && e > 900 && c > 900) {
    Serial.println("y");
  } else if (a > 900 && b > 900 && d < 900 && e < 900 && c > 900) {
    Serial.println("z");
  }

  delay(2500); // Delay between readings
}
