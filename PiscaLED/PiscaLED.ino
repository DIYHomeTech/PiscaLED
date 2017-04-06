
/*
  Equipe DIYHomeTech
*/

// Método de configuração, é o primeiro executado quando o módulo é ligado
void setup() {
    delay(1000); // Da um tempo para tudo subir antes de iniciar a brincadeira

    // Configura o LED_BUILTIN para saída
    pinMode(LED_BUILTIN, OUTPUT);

    // Configura a porta serial para enviar ao computador alguma informação
    Serial.begin(115200); // Velocidade configurada em 115200 baud

    // Imprime uma mensagem na porta serial
    Serial.println("Módulo iniciado");
}

// Método que converte um estado booleano para uma string
String converteEstado(bool estado) {
    if(estado) {
        return "Ligado";
    } else {
        return "Desligado";
    }
}

// Método de loop, fica rodando continuamente
void loop() {
    // Pausa de 1 segundo
    delay(1000);

    // Lê e armazena o estado do led
    bool estadoLed = digitalRead(LED_BUILTIN);
    
    // Realiza a troca de estado do led
    digitalWrite(LED_BUILTIN, !estadoLed);

    // Imprime a mensagem na porta serial
    Serial.println("Alterado o estado do LED: " + converteEstado(estadoLed));
}

