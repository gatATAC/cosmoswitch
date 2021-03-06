/* ---- This file describes all the pin assignments of the microcontroller --- */

#ifndef _PRJ_PINOUT_H
#define _PRJ_PINOUT_H

#include "gttc_types.h"
#include "prj_input.h"
#include "prj_output.h"

#ifdef ESP8266_WEMOS_D1MINI
#error "TODO: Definir pines para el ESP8266_WEMOS_D1MINI"
#define CFG_BAT_ADC -1
#define CFG_PULSE_CMD_PIN -1 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT -1  // A través de este pin se va a recibir la petición de emergencia.
#elif ARDUINO_ESP8266_NODEMCU
//#error "TODO: Definir pines para el ARDUINO_ESP8266_NODEMCU"
#define CFG_BAT_ADC -1
#define CFG_PULSE_CMD_PIN -1 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT -1  // A través de este pin se va a recibir la petición de emergencia.
#define CFG_RELAYSET_PINS {D4}
#elif ARDUINO_ESP8266_ESP01
//#error "TODO: Definir pines para el ARDUINO_ESP8266_NODEMCU"
#define CFG_BAT_ADC -1
#define CFG_PULSE_CMD_PIN -1 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT -1  // A través de este pin se va a recibir la petición de emergencia.
#define CFG_RELAYSET_PINS {13, 12, 14, 27, 26, 25, 33, 32}
#elif ESP32_DEV
#define CFG_BAT_ADC 34
#define CFG_EXTRA_ADC 35
#define CFG_PULSE_CMD_PIN 14 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT 13  // A través de este pin se va a recibir la petición de emergencia.
#define CFG_EMGCY_RELAY_PIN 12 // A través de aquí controlamos el relé de emergencia
#ifdef CFG_USE_RELAY_SET
#define CFG_RELAYSET_PINS {13, 12, 14, 27, 26, 25, 33, 32}
#endif

#elif TEENSY31
#error "TODO: Definir pines para la TEENSY31"
#define CFG_BAT_ADC -1
#define CFG_PULSE_CMD_PIN -1 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT -1  // A través de este pin se va a recibir la petición de emergencia.
#elif ARDUINO_AVR_UNO
#error "TODO: Definir pines para el ARDUINO_AVR_UNO"
#define CFG_BAT_ADC 23
#define CFG_PULSE_CMD_PIN 40 // A través de este pin se va a enviar el comando de temporización del masaje
#define CFG_EMGCY_BUT 41  // A través de este pin se va a recibir la petición de emergencia.
#else
#error "No microcontroller defined"
#endif

void pinoutInit(void);

#endif // _PRJ_PINOUT_H
