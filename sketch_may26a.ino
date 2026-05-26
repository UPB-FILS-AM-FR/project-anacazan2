#define BLYNK_TEMPLATE_ID "TMPL43mbyXUfo"
#define BLYNK_TEMPLATE_NAME "ESP32 Finder"
#define BLYNK_AUTH_TOKEN "g2C0qXSQxFgmEzLBtxXw6Ck-4lftu6Y1"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "iPhone";
char pass[] = "12341234";

int redPin = 23;
int greenPin = 22;
int bluePin = 19;

int buzzer = 18;

bool blinkRed = false;

void blueON()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
}

void greenON()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
}

void allOFF()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
}

void setup()
{
  Serial.begin(115200);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(buzzer, OUTPUT);

  blueON();

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Conectat la Blynk!");
}

void loop()
{
  Blynk.run();

  if(blinkRed)
  {
    // BEEP 1
    digitalWrite(redPin, LOW);
    digitalWrite(buzzer, HIGH);
    delay(150);

    digitalWrite(buzzer, LOW);
    delay(150);

    // BEEP 2
    digitalWrite(buzzer, HIGH);
    delay(150);

    digitalWrite(buzzer, LOW);
    delay(300);

    // LED OFF
    digitalWrite(redPin, HIGH);
    delay(300);
  }
}

// FIND
BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if(value == 1)
  {
    allOFF();
    blinkRed = true;
  }
}

// STOP
BLYNK_WRITE(V1)
{
  int value = param.asInt();

  if(value == 1)
  {
    blinkRed = false;

    digitalWrite(buzzer, LOW);

    greenON();

    delay(5000);

    blueON();
  }
}