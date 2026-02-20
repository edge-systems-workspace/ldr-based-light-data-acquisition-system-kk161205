#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author kk161205
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

/* ===========================
   Global Definitions
   =========================== */

/** @brief Analog pin connected to LDR */
const uint8_t LDR_PIN = A0;

/** @brief Variable to store raw ADC brightness value */
uint16_t ldrRawValue = 0;

/**
 * @brief Arduino setup function
 *
 * Initializes serial communication and prints
 * system startup message.
 */
void setup() {

    Serial.begin(9600);

    while (!Serial) {
        ; // Wait for Serial (recommended for Uno R4)
    }

    Serial.println("=================================");
    Serial.println(" Embedded Light Monitoring System ");
    Serial.println(" LDR Sensor Initialized ");
    Serial.println("=================================");
}

void loop() {

}