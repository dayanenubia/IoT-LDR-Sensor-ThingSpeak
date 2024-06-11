# IoT-LDR-Sensor-ThingSpeak

## Descrição do Repositório

Este repositório contém o código para um projeto IoT usando um ESP8266 para ler dados de um sensor LDR (Light Dependent Resistor) e enviá-los para a plataforma ThingSpeak. O projeto conecta o ESP8266 a uma rede Wi-Fi, lê os valores de luminosidade ambiente através do sensor LDR e envia esses dados para ThingSpeak em intervalos regulares.

## Componentes Utilizados

- **ESP8266**: Microcontrolador com capacidade Wi-Fi para conectividade à internet.
- **Sensor LDR**: Sensor de luz que varia sua resistência de acordo com a intensidade da luz.
- **ThingSpeak**: Plataforma de IoT para armazenar e visualizar dados de sensores.

## Funcionalidades

- Conexão à rede Wi-Fi configurada.
- Leitura contínua dos valores de luminosidade ambiente.
- Envio dos dados lidos para ThingSpeak para monitoramento e análise remotos.
- Atualização de dados no ThingSpeak a cada segundo.

## Como Usar

1. Clone este repositório.
2. Abra o arquivo `.ino` no Arduino IDE.
3. Insira as credenciais da sua rede Wi-Fi no código.
4. Substitua o `ChaveEscritaAPI` e `canal` pelos seus valores do ThingSpeak.
5. Compile e faça o upload do código para o ESP8266.
6. Monitore os dados do sensor em tempo real no ThingSpeak.
