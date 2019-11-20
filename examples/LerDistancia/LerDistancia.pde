#include <Ultrassom.h>

// Lendo distância
// por Guilherme Poleto
// Demonstra como instanciar um módulo HC-SR04 e ler a distânica utilizando a biblioteca

Ultrassom ultrassom = Ultrassom(2, 3); // Parâmetros: Pino TRIG, Pino ECHO

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println( ultrassom.read() );
}

