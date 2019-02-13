#include <Adafruit_NeoPixel.h>
#define PIN       6
#define NUMPIXELS 8
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  pixels.begin();
}
void loop() {
  for (int x = 0; x < 256; x++) {
    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.show();
      pixels.setPixelColor(i, pixels.Color(255 - x, x, 0));
      delay(5);

    }
  }
  for (int x = 0; x < 256; x++) {
    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.show();
      pixels.setPixelColor(i, pixels.Color(0, 255 - x, x));
      delay(5);

    }
  }
  for (int x = 0; x < 256; x++) {
    for (int i = 0; i < NUMPIXELS; i++) {
      pixels.show();
      pixels.setPixelColor(i, pixels.Color(x, 0, 255 - x));
      delay(5);

    }
  }
}
