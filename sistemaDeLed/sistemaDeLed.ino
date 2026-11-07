#define SENSOR 27
#define LED 2

unsigned long ultimoMovimento = 0;
const unsigned long tempoLigado = 15000; // 15 segundos

bool luzLigada = false;

void setup() {
  // Configura o pino com resistor pull-down interno para evitar flutuações elétricas
  pinMode(SENSOR, INPUT_PULLDOWN); 
  pinMode(LED, OUTPUT);

  digitalWrite(LED, LOW);
  Serial.begin(115200);
  Serial.println("Automacao de iluminacao iniciada!");
}

void loop() {
  int movimento = digitalRead(SENSOR);

  if (movimento == HIGH) {
    // Atualiza constantemente o tempo enquanto houver presença física ativa
    ultimoMovimento = millis(); 

    if (!luzLigada) {
      digitalWrite(LED, HIGH);
      luzLigada = true;
      Serial.println("Movimento detectado -> Luz LIGADA");
    }
  }

  // Só tenta desligar se o sensor já tiver voltado para LOW E o tempo expirou
  if (luzLigada && (movimento == LOW) && (millis() - ultimoMovimento >= tempoLigado)) {
    digitalWrite(LED, LOW);
    luzLigada = false;
    Serial.println("Tempo esgotado e sem movimento -> Luz DESLIGADA");
  }

  delay(100); // Pequena pausa para estabilidade do processador
}