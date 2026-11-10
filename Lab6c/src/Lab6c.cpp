/*
 * Project Lab6c
 * Description: <what it does + why + important points>
 * Author: <your name>
 * Date: <date written>
 */

// Lab6c: start by replacing this whole file with your Lab6b code (handout Section 5).

// Include Particle Device OS APIs
#include "Particle.h"

// MANUAL mode: the Photon does not wait for Wi-Fi or the Particle Cloud, so your code runs right away
SYSTEM_MODE(MANUAL);

// Run the application and system concurrently in separate threads
SYSTEM_THREAD(ENABLED);

// Show system and application logs over USB
// View logs with CLI using 'particle serial monitor --follow'
SerialLogHandler logHandler(LOG_LEVEL_INFO);


// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.

}
