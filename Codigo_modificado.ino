//******************************************************************************
// Controlador de Semáforo
// Especificaciones simples
//
//==============================================================================
// Conexiones para las luces de tráfico (de momento con LEDs)
const int R_1 = 11;
const int Y_1 = 12;
const int G_1 = 13;

const int R_2 = 8;
const int Y_2 = 9;
const int G_2 = 10;

const int R_3 = 5;
const int Y_3 = 6;
const int G_3 = 7;

const int R_4 = 2;
const int Y_4 = 3;
const int G_4 = 4;
// se declaran las variables del led de parpadeo
const int Bnk = 10;
int EstadoLed = LOW;
int i=0;
//unsigned long Anterior = 0;
//const long tiempo = 500;  
//const long tiempo2 = 200;

//-----[ AJUSTES GENERALES ]-----
void setup() {
  // Todas las terminales de LEDs son salidas
  pinMode(R_1, OUTPUT);
  pinMode(Y_1, OUTPUT);
  pinMode(G_1, OUTPUT);

  pinMode(R_2, OUTPUT);
  pinMode(Y_2, OUTPUT);
  pinMode(G_2, OUTPUT);

  pinMode(R_3, OUTPUT);
  pinMode(Y_3, OUTPUT);
  pinMode(G_3, OUTPUT);

  pinMode(R_4, OUTPUT);
  pinMode(Y_4, OUTPUT);
  pinMode(G_4, OUTPUT);

  pinMode(Bnk, OUTPUT);
  // Encendido de los LEDs ROJOS
  digitalWrite(R_1, HIGH);
  digitalWrite(Y_1, LOW);
  digitalWrite(G_1, LOW);

  digitalWrite(R_2, HIGH);
  digitalWrite(Y_2, LOW);
  digitalWrite(G_2, LOW);

  digitalWrite(R_3, HIGH);
  digitalWrite(Y_3, LOW);
  digitalWrite(G_3, LOW);

  digitalWrite(R_4, HIGH);
  digitalWrite(Y_4, LOW);
  digitalWrite(G_4, LOW);
}
//-----[ LAZO PRINCIPAL ]-----
void loop(){
 // unsigned long actual = millis();
  int YellowTime=200;    // 200 milisegundos
  int GreenTime=5000;    // 5 segundos
  int Parpadeo=500; // medio segundo
  // Etapa 0.
  digitalWrite(R_1,LOW);
  digitalWrite(Y_1,LOW);
  digitalWrite(G_1,HIGH);
  delay(GreenTime);
// se hace el parpadeo del led cada medio segundo que corresponde a los ultimos segundos de la luz verde
  for(i=0;i>6;i++){
    if(EstadoLed == LOW){
     
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(Parpadeo);
  }
  // Etapa 1.
  digitalWrite(R_1,LOW);
  digitalWrite(Y_1,HIGH);
  digitalWrite(G_1,LOW);
//se hace el parpadeo a mayor frecuencia por estar en luz amarilla 
  for(i=0;i>10;i++){
    if(EstadoLed == LOW){   
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(YellowTime);
  }
  //delay(YellowTime);
  digitalWrite(R_1,HIGH);
  digitalWrite(Y_1,LOW);
  
  // Etapa 2.
  digitalWrite(R_2,LOW);
  digitalWrite(Y_2,LOW);
  digitalWrite(G_2,HIGH);
  delay(GreenTime);
//se inicializa el primer parpadeo del segundo semaforo
 for(i=0;i>6;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(Parpadeo);
  }
  // Etapa 2.
  digitalWrite(R_2,LOW);
  digitalWrite(Y_2,HIGH);
  digitalWrite(G_2,LOW);
  // Se inicializa el segundo parpadeo del segundo semaforo 
  for(i=0;i>10;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(YellowTime);
  }
  
 // delay(YellowTime);
  digitalWrite(R_2,HIGH);
  digitalWrite(Y_2,LOW);
  
  // Etapa 3.
  digitalWrite(R_3,LOW);
  digitalWrite(Y_3,LOW);
  digitalWrite(G_3,HIGH);
  delay(GreenTime);
// Primer parpadeo del tercer semaforo
   for(i=0;i>6;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(Parpadeo);
  }
  // Etapa 3.
  digitalWrite(R_3,LOW);
  digitalWrite(Y_3,HIGH);
  digitalWrite(G_3,LOW);
// segundo parpadeo del tercer semaforo
  for(i=0;i>10;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(YellowTime);
  }
  //delay(YellowTime);
  digitalWrite(R_3,HIGH);
  digitalWrite(Y_3,LOW);
  
  // Etapa 4.
  digitalWrite(R_4,LOW);
  digitalWrite(Y_4,LOW);
  digitalWrite(G_4,HIGH);
  delay(GreenTime);
//primer parpadeo del cuarto semaforo
  for(i=0;i>6;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(Parpadeo);
  }
  
  // Etapa 4.
  digitalWrite(R_4,LOW);
  digitalWrite(Y_4,HIGH);
  digitalWrite(G_4,LOW);

  for(i=0;i>10;i++){
    if(EstadoLed == LOW){
      EstadoLed = HIGH;
    } else {
      EstadoLed = LOW;
    }
    digitalWrite(Bnk,EstadoLed);
    delay(YellowTime);
  }
  //delay(YellowTime);
  digitalWrite(R_4,HIGH);
  digitalWrite(Y_4,LOW);
}
//******************************************************************************



























//******************************************************************************
