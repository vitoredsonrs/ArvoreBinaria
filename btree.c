#include "btree.h"

No *criaNo(char info){
  No *temp = (No*)malloc(sizeof(No));
  temp->esq=NULL;
  temp->dir=NULL;
  temp->pai=NULL;
  temp->info=info;

  return temp;
}
void destroiNo(No *no){
  no->esq=NULL;
  no->dir=NULL;
  no->pai=NULL;
  free(no);
  no = NULL;
}
int insereEsq(No *filho, No *pai){
  if(!filho && !pai)
    return 1;
  pai->esq=filho;
  filho->pai=pai;
  return 0;
}
int insereDir(No *filho, No *pai){
  if(!filho && !pai)
    return 1;
  pai->dir=filho;
  filho->pai=pai;
  return 0; 
}

void caminhaEmOrdem(No *raiz, void(*fn)(No*)){
  if(!raiz) return;
  caminhaEmOrdem(raiz->esq, fn);
  fn(raiz);
  caminhaEmOrdem(raiz->dir, fn);
  
}
void caminhaPreOrdem(No *raiz, void(*fn)(No*)){
  if(!raiz) return;
  fn(raiz);
  caminhaPreOrdem(raiz->esq, fn);
  caminhaPreOrdem(raiz->dir, fn);
}
void caminhaPosOrdem(No *raiz, void(*fn)(No*)){
  if(!raiz) return;
  caminhaPosOrdem(raiz->esq, fn);
  caminhaPosOrdem(raiz->dir, fn);
  fn(raiz);
  }