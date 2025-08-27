#define PWM_PIN 9
#define NUM_SAMPLES 32

uint8_t sineTable[NUM_SAMPLES];

void setup() {
  pinMode(PWM_PIN, OUTPUT);
  Serial.begin(115200);  // Start serial communication
  createSineTable();
}

void loop() {
  for (int i = 0; i < NUM_SAMPLES; i++) {
    analogWrite(PWM_PIN, sineTable[i]);  // Output PWM value
    Serial.println(sineTable[i]);         // Send value for plotting
    delay(10);                           // Delay between samples
  }
}

void createSineTable() {
  for (int i = 0; i < NUM_SAMPLES; i++) {
    float angle = 2.0 * PI * i / NUM_SAMPLES;
    float sineValue = sin(angle);
    sineTable[i] = (uint8_t)((sineValue + 1.0) * 127.5);  // Map -1..1 to 0..255
  }
}
