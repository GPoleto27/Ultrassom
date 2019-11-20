/*
	Ultrassom.h - Biblioteca simples para uso do HC-SR04
	Criado por Guilherme Poleto - 2019
*/

// ensure this library description is only included once
#ifndef ULTRASSOM_INCLUDED
#define ULTRASSOM_INCLUDED

// library interface description
class Ultrassom
{
// user-accessible "public" interface
public:
	Ultrassom(uint8_t, uint8_t, int);
	Ultrassom(uint8_t, uint8_t);
	int read(void);
	void setMaxDistance(int);

// library-accessible "private" interface
private:
	uint8_t TRIG, ECHO;
	int TIMEOUT;
};

#endif
