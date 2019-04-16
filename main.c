#include "Headers/Lista_Encadeada.h"
int main(int argc, char const *argv[]) {
  TLista Teste;
  Inicia_Lista(&Teste);
  int a=3,b=2;
  Insere_Lista(&Teste,b,a);
  Insere_Lista(&Teste,3,4);
  Imprime_Lista(&Teste);
  Incrementa_qtde(&Teste,2);
  Incrementa_qtde(&Teste,3);
  printf("\n\tImpressao Apos incrementos:\n");
  Imprime_Lista(&Teste);
  return 0;
}
