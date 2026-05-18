// Define o LED do 1° andar no pino 8
#define led1 8

// Define o LED do 2° andar no pino 9
#define led2 9

// Define o LED do 3° andar no pino 10
#define led3 10

// Define o LED do 4° andar no pino 11
#define led4 11

// Define o LED do 5° andar no pino 12
#define led5 12

// Define o LED do 6° andar no pino 13
#define led6 13

// Define o botão do 1° andar no pino 2
#define bot1 2

// Define o botão do 2° andar no pino 3
#define bot2 3

// Define o botão do 3° andar no pino 4
#define bot3 4

// Define o botão do 4° andar no pino 5
#define bot4 5

// Define o botão do 5° andar no pino 6
#define bot5 6

// Define o botão do 6° andar no pino 7
#define bot6 7

// Variável que guarda o andar solicitado pelo usuário
int andar;

// Variável que guarda o andar onde o elevado está atualmente
// O elevador começa no andar 1
int atual = 1;

void setup() {

  // Configura o LED do andar 1 como saída
  pinMode(led1, OUTPUT);

  // Configura o LED do andar 2 como saída
  pinMode(led2, OUTPUT);

  // Configura o LED do andar 3 como saída
  pinMode(led3, OUTPUT);

  // Configura o LED do andar 4 como saída
  pinMode(led4, OUTPUT);

  // Configura o LED do andar 5 como saída
  pinMode(led5, OUTPUT);

  // Configura o LED do andar 6 como saída
  pinMode(led6, OUTPUT);

  // Configura o botão do andar 1 como entrada
  pinMode(bot1, INPUT);

  // Configura o botão do andar 2 como entrada
  pinMode(bot2, INPUT);

  // Configura o botão do andar 3 como entrada
  pinMode(bot3, INPUT);

  // Configura o botão do andar 4 como entrada
  pinMode(bot4, INPUT);

  // Configura o botão do andar 5 como entrada
  pinMode(bot5, INPUT);

  // Configura o botão do andar 6 como entrada
  pinMode(bot6, INPUT);

  // Liga o LED do andar 1
  // Isso indica que o elevador começa no 1° andar
  digitalWrite(led1, HIGH);
}

void loop() {
  // Verifica se o botão do andar 1 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 1
  if(digitalRead(bot1) == HIGH)
  {
    andar = 1;
  }

  // Verifica se o botão do andar 2 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 2
  if(digitalRead(bot2) == HIGH)
  {
    andar = 2;
  }

  // Verifica se o botão do andar 3 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 3
  if(digitalRead(bot3) == HIGH)
  {
    andar = 3;
  }

  // Verifica se o botão do andar 4 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 4
  if(digitalRead(bot4) == HIGH)
  {
    andar = 4;
  }

  // Verifica se o botão do andar 5 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 5
  if(digitalRead(bot5) == HIGH)
  {
    andar = 5;
  }

  // Verifica se o botão do andar 6 foi pressionado
  // Se foi pressionado, a variável "andar" recebe o valor 6
  if(digitalRead(bot6) == HIGH)
  {
    andar = 6;
  }

  // A estrutura Switch verifica qual andar foi solicitado
  switch (andar) {

    // Caso o usuário tenha solicitado o elevador no andar 1
    case 1:

    // Desliga todos os outros LEDS
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

    // Se o andar atual for 3, simula o elevador descendo
    if(atual == 3) {
      delay(1500);
      // Liga o led 2
      digitalWrite(led2, HIGH);
      delay(1500);
      // Desliga o led 2
      digitalWrite(led2, LOW);
    } 

    if(atual == 4) {
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
    }  

    if(atual == 5) {
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
    }

    if(atual == 6) {
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
    }  

    delay(1000);
    // Liga o led 1
    digitalWrite(led1, HIGH);

    // Define o andar atual como 1
    atual = 1;

    andar = 0;
    break;

    // Caso o usuário tenha solicitado o elevador no andar 2
    case 2:

    // Desliga os outros leds
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

    if(atual == 4) {
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
    }

    if(atual == 5) {
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
    }

    if(atual == 6) {
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
    }

    delay(1000);
    // Liga o led 2
    digitalWrite(led2, HIGH);

    // Define o andar atual como 2
    atual = 2;

    andar = 0;
    break;

    // Caso o usuário tenha solicitado o elevador no andar 3
    case 3:

    // Desliga os outros leds
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

    if(atual == 1) {
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
    }

    if(atual == 5) {
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
    }

    if(atual == 6) {
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
    }

    delay(1000);

    digitalWrite(led3, HIGH);

    // Define o andar atual como 3
    atual = 3;

    andar = 0;
    break;

    // Caso o usuário tenha solicitado o elevador no andar 4
    case 4:

    // Desliga os outros leds
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

    if(atual == 1) {
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
    }

    if(atual == 2) {
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
    }

    if(atual == 6) {
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
    }

    delay(1000);

    digitalWrite(led4, HIGH);

    atual = 4;

    andar = 0;
    break;

    // Caso o usuário tenha solicitado o elevador no andar 5
    case 5:

    // Desliga os outros leds
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);

    if(atual == 1) {
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
    }

    if(atual == 2) {
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
    }

    if(atual == 3) {
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
    }

    delay(1000);

    digitalWrite(led5, HIGH);

    atual = 5;

    andar = 0;
    break;

    case 6:

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);

    if(atual == 1) {
      delay(1500);
      digitalWrite(led2, HIGH);
      delay(1500);
      digitalWrite(led2, LOW);
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
    }

    if(atual == 2) {
      delay(1500);
      digitalWrite(led3, HIGH);
      delay(1500);
      digitalWrite(led3, LOW);
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
    }

    if(atual == 3) {
      delay(1500);
      digitalWrite(led4, HIGH);
      delay(1500);
      digitalWrite(led4, LOW);
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
    }

    if(atual == 4) {
      delay(1500);
      digitalWrite(led5, HIGH);
      delay(1500);
      digitalWrite(led5, LOW);
    }

    delay(1000);

    digitalWrite(led6, HIGH);

    atual = 6;

    andar = 0;
    break;
  }
}