#include <Wire.h>
#include <eeprom.h>

void setup() {
  Wire.begin();
  Serial.begin(115200);
  Serial.print("Testing EEPROM\nOld Data Stored:\n");
  int i;
  byte b;
  for (i = 1000; i < 1256; i++) 
  {
    b = EEPROM.read(i);
    Serial.print(b);
    Serial.print(" ");
  }
  Serial.print("\nStoring new data\n");
  for (i = 1000; i < 1256; i++) 
  {
    b = ((uint8_t)(i * 35));
    EEPROM.write(i, b);
    Serial.print(b);
    Serial.print(" ");
  }

  Serial.print("\nShowing the new data\n");  
  for (i = 1000; i < 1256; i++) 
  {
    b = EEPROM.read(i);
    Serial.print(b);
    Serial.print(" ");
  }

  Serial.print("\n\nThats it. Nothing more to see. Go home now.");
  
}
void loop() {
  // put your main code here, to run repeatedly: 
  
}
