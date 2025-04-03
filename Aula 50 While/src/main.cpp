#include <Arduino.h>

//! PROTOTIPOS DAS FUNÇÕES
//? Serve para chamar as funções logo no começo do codigo (Ou seja dizer ao programa que elas já existem)
void LigaLed(int Pino);
void DesligaLed(int Pino);
void PiscaLed(int Pino, unsigned long time);
int SomaDeDoisNumeros(int numeroA, int numeroB);

void setup()
{
  pinMode(5, INPUT_PULLUP);
  pinMode(2, OUTPUT);
}

void loop()
{
  PiscaLed(2, 1000);
}

void LigaLed(int Pino) //? O void diz para o programa que essa função não retorna um valor o () Serve para definir parametros da utilização do codigo
{

  digitalWrite(Pino, HIGH);
}

//* ________________________________________________________
void DesligaLed(int Pino)//? estrutura:  void ou (int,bool,char,byte,long e etc...) "nome da função"("parametro")
{

  digitalWrite(Pino, LOW);
}

//* ________________________________________________________

void PiscaLed(int Pino, unsigned long time)
{
  LigaLed(Pino);
  delay(time);
  DesligaLed(Pino);
  delay(time);
}

//* ________________________________________________________

int SomaDeDoisNumeros(int numeroA, int numeroB)
//? nesse caso a substituição do "void" se dá pela necessidade de se retornar um valor nessa função sendo inteiro(int) ou não(demais variaveis)
{
  int Resultado = numeroA + numeroB; //! ATENÇÃO SE SUA VARIAVEL FOR DO TIPO INTEIRA LOGO ELA DEVE MOSTRAR UM VALOR INTEIRO
  return Resultado;//? O return manda ele retornar o valor gerado pela função
  //! Sem o return ele não vai mostrar nada, pois você n'so mandou a função mostrar nada
}