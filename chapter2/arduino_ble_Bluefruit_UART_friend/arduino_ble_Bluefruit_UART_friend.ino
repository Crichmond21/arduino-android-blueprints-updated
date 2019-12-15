// Control Arduino board from BLE

// Enable lightweight mode
#define LIGHTWEIGHT 1

// Libraries
#include <SPI.h>
#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "Adafruit_BluefruitLE_UART.h"

#include "BluefruitConfig.h"

#if SOFTWARE_SERIAL_AVAILABLE
  #include <SoftwareSerial.h>
#endif


// BLE instance
//Adafruit_BluefruitLE_SPI BTLEserial(BLUEFRUIT_SPI_CS, BLUEFRUIT_SPI_IRQ, BLUEFRUIT_SPI_RST);


SoftwareSerial bluefruitSS = SoftwareSerial(BLUEFRUIT_SWUART_TXD_PIN, BLUEFRUIT_SWUART_RXD_PIN);

Adafruit_BluefruitLE_UART BTLEserial(bluefruitSS, BLUEFRUIT_UART_MODE_PIN,
                      BLUEFRUIT_UART_CTS_PIN, BLUEFRUIT_UART_RTS_PIN);


void setup(void)
{  
  // Start Serial
  Serial.begin(115200);
  Serial.println(F("Adafruit Bluefruit Low Energy nRF51"));

  BTLEserial.begin();

  BTLEserial.info();
 
}


void loop() {  
  char inputs[100];

  // Handle calls
  if (BTLEserial.isConnected()) {
    // Check for incoming characters from Bluefruit
    BTLEserial.println("AT+BLEUARTRX");
    BTLEserial.readline();
    if (strcmp(BTLEserial.buffer, "OK") == 0) {
      // no data
      return;
    }
    // Some data was found, its in the buffer
    BTLEserial.waitForOK();
    
    String str(BTLEserial.buffer);
    Serial.println(str);

    // Switch possible results
    if(str.equals("/mode/7/o /")){
      pinMode(7, OUTPUT);
    }else if(str.equals("/digital/7/0 /")){
      digitalWrite(7, LOW);
    }else if(str.equals("/digital/7/1 /")){
      digitalWrite(7, HIGH);
    }
    
  }
}
