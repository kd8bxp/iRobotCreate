#include <Arduino.h>
#include "oi.h"
#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdlib.h>

#define RobotPwrToggle      0x80
#define RobotPwrToggleHigh (PORTD |= 0x80)
#define RobotPwrToggleLow  (PORTD &= ~0x80)



void turnON();
void powerToggle(void);
void baud(uint8_t baud_code);
void initialize(void);
// Transmit a byte over the serial port
void byteTx(uint8_t value);
// Delay for the specified time in ms without updating sensor values
void delayMs(uint16_t time_ms);

void delayAndUpdateSensors(unsigned int time_ms);
void drive(int16_t velocity, int16_t radius);
uint16_t randomAngle(void);
