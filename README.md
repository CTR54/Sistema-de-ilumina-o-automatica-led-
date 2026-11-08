# 💡 Automação de LED com ESP32 e Sensor de Proximidade

## 📌 Sobre o projeto

Este projeto consiste no desenvolvimento de um sistema de automação de LED utilizando uma placa ESP32 e um sensor de proximidade.

O funcionamento do sistema ocorre por meio da detecção de objetos ou movimentos próximos ao sensor. Quando uma aproximação é identificada, o ESP32 processa o sinal recebido e aciona o LED automaticamente. Quando não há detecção, o LED permanece desligado.

O objetivo é demonstrar, na prática, a integração entre sensores e microcontroladores, aplicando conceitos de automação e programação com ESP32.

## 🛠️ Componentes utilizados

Para a montagem do projeto, foram utilizados os seguintes componentes:

- 1x ESP32-S
- 1x Sensor de proximidade (HC-SR501)
- 1x Protoboard
- 1x LED
- 1x Resistor de 220 Ω
- Jumpers para conexão

## ⚙️ Funcionamento

1. O sensor de proximidade realiza a detecção de objetos ou movimentos.
2. Ao identificar uma aproximação, o sensor envia um sinal para o ESP32.
3. O ESP32 recebe e processa o sinal.
4. Caso a detecção seja confirmada, o LED é ligado automaticamente.
5. Quando a detecção termina, o LED é desligado conforme a lógica programada.

## 💻 Tecnologias utilizadas

- ESP32
- Arduino IDE
- Linguagem C/C++
- Sensores eletrônicos
- Automação com microcontroladores

## 🎯 Objetivos do projeto

- Aprender a utilizar entradas e saídas digitais do ESP32.
- Integrar sensores a microcontroladores.
- Desenvolver um sistema básico de automação.
- Compreender o funcionamento de circuitos eletrônicos.

## 🚀 Possíveis aplicações

Este projeto pode servir como base para o desenvolvimento de:

- Iluminação automática.
- Sistemas de presença.
- Automação residencial.
- Economia de energia.
- Projetos de Internet das Coisas (IoT).

## 🔌 Esquema de ligação

| Componente | Conexão |
|---|---|
| ESP32 – VIN | Ligado diretamente ao VCC do sensor |
| ESP32 – GND | Ligado ao barramento negativo da protoboard |
| Sensor – OUT | Conectado ao GPIO 27 (D27) |
| ESP32 – D2 | Conectado ao resistor de 220 Ω |
| Resistor – outra extremidade | Conectada ao ânodo (+) do LED |
| LED – cátodo (-) | Conectado ao barramento negativo (GND) da protoboard |

### Funcionamento das conexões

- **VIN:** alimenta o sensor.
- **GND:** estabelece o aterramento comum.
- **D27:** recebe o sinal de detecção do sensor.
- **D2:** controla o acionamento do LED.
- **Resistor de 220 Ω:** limita a corrente elétrica.
- **LED:** acende quando o ESP32 identifica a detecção do sensor.

## Foto do projeto

| LED apagado | LED aceso |
|---|---|
| <img src="https://github.com/user-attachments/assets/cde1c191-3a43-4a09-97a5-e6b4d5c3c0ab" alt="Projeto com o LED apagado" width="300"> | <img src="https://github.com/user-attachments/assets/60114038-9a2c-4a8d-8041-c403663d6179" alt="Projeto com o LED aceso" width="300"> |

## 👨‍💻 Autor

Desenvolvido como projeto prático de estudo utilizando ESP32 e componentes eletrônicos.
