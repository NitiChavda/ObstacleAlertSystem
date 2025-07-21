const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 13;

long duration;
int distance;

void setup() {
    pinMode(buzzer, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    measureDistance();
    delay(200);  // small delay to avoid too frequent readings
}

void measureDistance() {
    // Clear the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    // Trigger the sensor by setting trigPin HIGH for 10 microseconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // Read echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);

    // Calculate the distance in cm
    distance = duration * 0.034 / 2;

    // Check distance and activate buzzer accordingly
    if (distance <= 15 && distance > 0) {  // avoid invalid readings
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }

    // Print distance on Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
}
