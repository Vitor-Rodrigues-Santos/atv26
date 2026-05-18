# 🛗 Sistema de Elevador Inteligente com Arduino (6 Andares)

Este projeto foi desenvolvido como parte das atividades práticas de **Internet das Coisas (IoT)**. O objetivo principal foi expandir um sistema de elevador simulado no Arduino (originalmente de 3 andares) para atender a uma nova demanda estrutural de um edifício comercial, totalizando **6 andares**.

A simulação foi construída e testada integralmente na plataforma **Tinkercad**.

---

## 👥 Integrantes do Grupo
* **Vitor Rodrigues Santos**
* **Thiago Marcelino Vieira**
* **Riquelme Reis Santos**

---

## 📝 Cenário / Situação-Problema
Uma construtora ampliou um prédio comercial de 3 para 6 andares. Fomos contratados para modernizar o sistema do elevador utilizando Arduino. O novo sistema precisava garantir o correto funcionamento das chamadas, indicação visual do andar atual e o deslocamento lógico e temporizado entre todos os andares.

---

## 🛠️ Hardware Utilizado (Simulado)
* 1x Placa Arduino Uno R3
* 1x Protoboard
* 6x LEDs (Representando os andares de 1 a 6)
* 6x Botões Push-Button (Representando os botões de chamada de cada andar)
* 6x Resistores de 220Ω (para os LEDs)
* 6x Resistores de 10kΩ (configuração Pull-Down para os botões)
* Fios Jumpers para conexão

---

## ⚙️ Funcionalidades e Requisitos Atendidos
* **Controle de 6 andares:** Expansão completa da estrutura física e lógica.
* **Indicação Visual:** O LED correspondente ao andar atual permanece aceso. Durante o deslocamento, os LEDs acendem em sequência simulando o movimento.
* **Lógica de Deslocamento:** O sistema identifica o andar atual e calcula se o elevador deve subir ou descer para chegar ao destino solicitado.
* **Atualização de Estado:** A variável de controle do andar atual é atualizada dinamicamente ao fim de cada viagem.

---

## 🧠 Explicação da Lógica de Expansão
Para transformar o projeto original de 3 andares em um sistema funcional de 6 andares, escalamos o código e o circuito seguindo os seguintes passos:

1.  **Mapeamento de Hardware:** Declaramos mais 3 pinos de entrada (para os novos botões) e mais 3 pinos de saída (para os novos LEDs) no código, organizando a pinagem do Arduino de forma sequencial.
2.  **Leitura de Entradas:** Criamos uma estrutura de varredura que verifica constantemente o estado dos 6 botões.
3.  **Algoritmo de Movimentação (Subida/Descida):** * Utilizamos estruturas condicionais (`if/else`) combinadas com loops (`for` ou `while`) para comparar a variável `andarAtual` com o `andarSolicitado`.
    * Se `andarSolicitado > andarAtual`, o sistema executa uma rotina de subida, acendendo os LEDs sequencialmente em ordem crescente com um tempo de espera (`delay`).
    * Se `andarSolicitado < andarAtual`, o sistema executa a rotina de descida de forma decrescente.
4.  **Máquina de Estados:** Ao final do percurso, a variável `andarAtual` recebe o valor do `andarSolicitado`, travando o elevador no andar correto até a próxima chamada.
