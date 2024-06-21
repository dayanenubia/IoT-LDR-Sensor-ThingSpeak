// Bibliotecas ThingSpeak e ESP8266
#include <ThingSpeak.h>
#include <ESP8266WiFi.h>

// Dados da sua rede: nome e senha
char ssid[] = "projetos_auto"; // Nome da rede SSID
char pass[] = "CybertronIFM23"; // Nome da senha

int status = WL_IDLE_STATUS;
WiFiClient client;
int sensorValue; // variável que armazena o valor lido pelo sensor LDR

// Informações disponiveis no ThingSpeak: número do canal e chave de escrita
unsigned long canal = 2556747;
const char * ChaveEscritaAPI = "1ZA3IUHFR7RQN4WX";

void setup() {
  WiFi.begin(ssid, pass);
  ThingSpeak.begin(client);
}

void loop() {
  // Lê o valor da entrada no pino analógico 0 (LDR conectado ao A0)
  sensorValue = analogRead(A0);
  
  // Escreve no ThingSpeak:
  // (número do canal, número do campo, valor, chave de escrita)
  ThingSpeak.writeField(canal, 1, sensorValue, ChaveEscritaAPI);
  
  delay(1000); // ThingSpeak aceita atualizações dos valores cada 1 segundos.
}
