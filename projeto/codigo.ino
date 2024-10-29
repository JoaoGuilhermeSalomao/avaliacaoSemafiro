// Declaração de variáveis para os pinos dos, LEDs e do buzzer const int verde - 7;
// Pino para o LED verde
const int amarelo = 9; // Pino para o LED amarelo
const int vermelho = 11; // Pino para o LED vermelho
const int botao = 3; // Pino para o Botão

void setup()
{
    // Define os pinos dos LEDs como saída
    pinMode(verde, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(vermelho, OUTPUT);
}

void loop()
{
    // VERMELHO
    digitalirite(amarelo, LOW); // Desiga o LED amarelo 
    digitalWrite(vermelho, HIGH); // Liga o LED vermelho 
    delay (6000); // Mantém o LED vermelho aceso por 6 segundos

    // AMARELO
    digitalWrite(amarelo, HIGH); // Liga o LED amarelo 
    digitalWrite(vermelho, LOW); // Desliga o LED vermelho 
    delay (2000); // Mantém o LED amarelo aceso por 2 segundos

    // VERDE
    digitalWrite(amarelo, LOW); // Desliga o LED amarelo 
    digitalWrite(verde, HIGH); // Liga o LED verde 
    delay (4000); // Mantém o LED verde aceso por 4 segundos

    // AMARELO
    digitalWrite(amarelo, HIGH); // Liga o LED amarelo 
    digitalWrite (verde, LOW); // Desliga o LED verde
    delay (2000); // Mantém o LED amarelo aceso por 2 segundos
}