#include <Ultrassom.h>

// Inicializando módulo com timeout definido pelo usuário
// por Guilherme Poleto
// Demonstra como instanciar um módulo HC-SR04 com timeout definido pelo usuário

Ultrassom ultrassom = Ultrassom(2, 3, 2000); // Parâmetros: Pino TRIG, Pino ECHO, TIMEOUT

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println( ultrassom.read() );
}

