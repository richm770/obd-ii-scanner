#include <Adafruit_Sensor.h>
#include <Arduino.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal.h>

#define LCD_RS 7
#define LCD_EN 16
#define LCD_D4 15
#define LCD_D5 6
#define LCD_D6 5
#define LCD_D7 4

#define DHTPIN 17
#define DHTTYPE DHT11

#define SPEAKERPIN 18

// put function declarations here:

LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

DHT dht(DHTPIN, DHTTYPE);

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    lcd.begin(16, 2);
    dht.begin();

    pinMode(SPEAKERPIN, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    // delay(2000);
    // lcd.clear();

    // lcd.setCursor(0, 0);
    // float temperature = dht.readTemperature(true);
    // if (isnan(temperature)) {
    //     Serial.println("Error reading temperature!");
    // } else {
    //     lcd.print("Temp: ");
    //     lcd.print(temperature);
    //     lcd.print("degF");
    // }

    // lcd.setCursor(0, 1);
    // float humidity = dht.readHumidity();
    // if (isnan(humidity)) {
    //     Serial.println("Error reading humidity!");
    // } else {
    //     lcd.print("Humidity: ");
    //     lcd.print(humidity);
    //     lcd.print("%");
    // }

    digitalWrite(SPEAKERPIN, HIGH);
    delay(1000);
    digitalWrite(SPEAKERPIN, LOW);
    delay(1000);
}

// put function definitions here: