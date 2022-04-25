#include <stdio.h>
#include "btree.h"
void visita(No*no){
  printf("%c ", no->info);
}


int main(void) {

  No *um = criaNo('+');
  No *dois = criaNo('*');
  No *tres = criaNo('*');
  No *quatro = criaNo('a');
  No *cinco = criaNo('b');
  No *seis = criaNo('c');
  No *sete = criaNo('+');
  No *oito = criaNo('d');
  No *nove = criaNo('e');
  
  int err = insereEsq(dois, um);
  err = insereDir(tres, um);
  err = insereEsq(quatro, dois);
  err = insereDir(cinco, dois);
  err = insereEsq(seis, tres);
  err = insereDir(sete, tres);
  err = insereEsq(oito, sete);
  err = insereDir(nove, sete);

  caminhaEmOrdem(um, &visita);
  printf("\n\n");
  caminhaPreOrdem(um, &visita);
  printf("\n\n");
  caminhaPosOrdem(um, &visita);
  printf("\n\n");
  return 0;
}