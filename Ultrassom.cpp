/*
	Ultrassom.h - Biblioteca simples para uso do HC-SR04
	Criado por Guilherme Poleto - 2019
*/


#if ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

// include this library's description file
#include "Ultrassom.h"

// Constructor /////////////////////////////////////////////////////////////////

Ultrassom::Ultrassom(uint8_t TRIG, uint8_t ECHO, int TIMEOUT)
{
	this->TRIG = TRIG;
	this->ECHO = ECHO;
	this->TIMEOUT = TIMEOUT;

	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
}

Ultrassom::Ultrassom(uint8_t TRIG, uint8_t ECHO)
{
	this->TRIG = TRIG;
	this->ECHO = ECHO;
	this->TIMEOUT = 23200;

	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
}

// Public Methods //////////////////////////////////////////////////////////////

int Ultrassom::read(void)
{
	digitalWrite(TRIG, HIGH);
	delayMicroseconds(10);
	digitalWrite(TRIG, LOW);

	unsigned long start = micros();
	while(!digitalRead(ECHO) && (micros() - start) <= TIMEOUT);
	start = micros();
	while(digitalRead(ECHO) && (micros() - start) <= TIMEOUT);

	return (micros() - start) / 58;
}

void Ultrassom::setMaxDistance(int MAX_DISTANCE)
{
	this->TIMEOUT = MAX_DISTANCE * 58;
}

// Private Methods /////////////////////////////////////////////////////////////
// Functions only available to other functions in this library
