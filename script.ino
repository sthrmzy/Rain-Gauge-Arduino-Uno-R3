const int analogInPin1 = A0;  // Pino analógico para o sensor 1 (A0)
const int analogInPin2 = A1;  // Pino analógico para o sensor 2 (A1)
const int analogInPin3 = A2;  // Pino analógico para o sensor 3 (A2)

int valorSensor1 = 0;  // Valor lido do sensor 1
int valorSensor2 = 0;  // Valor lido do sensor 2
int valorSensor3 = 0;  // Valor lido do sensor 3

int led1 = 5;   // Pino do LED 1 (Sensor 1) - porta digital 5
int led2 = 6;   // Pino do LED 2 (Sensor 2) - porta digital 6
int led3 = 7;   // Pino do LED 3 (Sensor 3) - porta digital 7
int buzzer = 9; // Pino do Buzzer

void setup() {
  Serial.begin(9600); // Inicializa o Monitor Serial com baud rate 9600
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Leitura dos sensores de umidade
  valorSensor1 = analogRead(analogInPin1);
  valorSensor2 = analogRead(analogInPin2);
  valorSensor3 = analogRead(analogInPin3);

  // Mapeamento dos valores para porcentagem (0 a 100%)
  int porcentagem1 = map(valorSensor1, 0, 1023, 0, 100);
  int porcentagem2 = map(valorSensor2, 0, 1023, 0, 100);
  int porcentagem3 = map(valorSensor3, 0, 1023, 0, 100);

  // Controle dos LEDs e do Buzzer
  // Sensor 1
  if (porcentagem1 >= 50) {
    digitalWrite(led1, HIGH);  // Liga LED 1 se porcentagem >= 50%
  } else {
    digitalWrite(led1, LOW);   // Desliga LED 1 se porcentagem < 50%
  }

  // Sensor 2
  if (porcentagem2 >= 50) {
    digitalWrite(led2, HIGH);  // Liga LED 2 se porcentagem >= 50%
  } else {
    digitalWrite(led2, LOW);   // Desliga LED 2 se porcentagem < 50%
  }

  // Sensor 3
  if (porcentagem3 >= 50) {
    digitalWrite(led3, HIGH);  // Liga LED 3 se porcentagem >= 50%
    tone(buzzer, 150, 150);    // Ativa o buzzer com frequência 150Hz por 150ms
    delay(200);                // Delay para separar os toques do buzzer
    noTone(buzzer);            // Desliga o buzzer
  } else {
    digitalWrite(led3, LOW);   // Desliga LED 3 se porcentagem < 50%
    noTone(buzzer);            // Garante que o buzzer esteja desligado
  }


  delay(1000);  // Delay de 1 segundo antes da próxima leitura
}
