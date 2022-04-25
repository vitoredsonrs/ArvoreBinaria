#ifndef __BTREE_H
#define __BTREE_H

#include <stdlib.h>

typedef struct _no{
  char info;
  struct _no *esq, *dir, *pai;
} No;
No *criaNo(char info);

void destroiNo(No *no);

int insertDir(No *filho, No *pai);

int insertEsq(No *filho, No *pai);

void caminhaPreOrdem(No *raiz, void(*fn)(No* ));

void caminhaEmOrdem(No *raiz, void(*fn)(No* ));

void caminhaPosOrdem(No *raiz, void(*fn)(No* ));

void buscaEmLargura(No *raiz, void(*fn)(No* ));

void removeNo(No *no, No *raiz);

#endif //__BETRE_H