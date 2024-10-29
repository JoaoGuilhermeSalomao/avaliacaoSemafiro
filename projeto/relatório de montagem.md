### Relatório de Montagem do Circuito Semáforo com LEDs

#### 1. **Objetivo do Projeto**
Este projeto visa criar uma simulação de um sistema de semáforo básico utilizando LEDs de cores diferentes para representar as luzes de trânsito (vermelho, amarelo e verde). O circuito segue uma sequência de iluminação para simular o comportamento de um semáforo real, sem funcionalidades adicionais como o botão liga/desliga ou buzzer.

#### 2. Materiais Utilizados

| Material               | Especificação                 | Quantidade |
|------------------------|-------------------------------|------------|
| Arduino Uno            | Placa microcontroladora       |      1     |
| LED Verde              | 5mm, cor verde                |      1     |
| LED Amarelo            | 5mm, cor amarelo              |      1     |
| LED Vermelho           | 5mm, cor vermelho             |      1     |
| Resistores             | 1KΩ (marrom, preto e vermelho)|      3     |
| Protoboard             | Tamanho pequeno/médio         |      1     |
| Jumpers                | Cabos de conexão Macho-macho  |      3     |
| Jumpers                | Cabos de conexão Macho-fêmea  |      5     |
| Miniatura de Semáforo  | Semáforo em MDF               |      1     |

#### 3. **Esquema de Montagem**
1. **Conexão dos LEDs**:
   - **LED Verde**: o terminal positivo do LED verde é conectado ao pino digital **7** do Arduino através de um resistor de 1KΩ e o terminal negativo, é conectado ao GND.
   - **LED Amarelo**: o terminal positivo do LED amarelo é conectado ao pino digital **9** do Arduino através de um resistor de 1KΩ e o terminal negativo, é conectado ao GND.
   - **LED Vermelho**: o terminal positivo do LED vermelho é conectado ao pino digital **11** do Arduino através de um resistor de 1KΩ e o terminal negativo, é conectado ao GND.


#### 4. **Funcionamento**
1. O LED **vermelho** acende e permanece aceso por 6 segundos.
2. Em seguida, o LED **amarelo** acende e permanece aceso por 2 segundos.
3. Então, o LED **verde** acende e permanece aceso por 4 segundos.
4. O LED **amarelo** acende novamente por 2 segundos antes de reiniciar o ciclo.

#### 5. **Testes e Resultados**
- O circuito foi montado conforme descrito e testado com o código carregado no Arduino.
- Verifiquei se os LEDs acendem na sequência desejada, simulando um semáforo com sucesso.