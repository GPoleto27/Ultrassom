#include <Ultrassom.h>

// Inicializando módulo com distância máxima definida pelo usuário
// por Guilherme Poleto
// Demonstra como instanciar um módulo HC-SR04 com distância máxima definida pelo usuário

Ultrassom ultrassom = Ultrassom(2, 3); // Parâmetros: Pino TRIG, Pino ECHO

void setup()
{
	ultrassom.setMaxDistance(50); // Define a distância máxima como 50 centímetros
	Serial.begin(9600);
}

void loop()
{
	Serial.println( ultrassom.read() );
}

