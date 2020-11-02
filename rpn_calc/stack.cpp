#include<iostream>
using namespace std;

void push(int liste_depart[], int* top, int ajout){
  // c'est un tableau à la c pas de append c'est pas du python
  // liste_depart est un tableau d'entier donc ajout est un entier
  // on traduit "32" en 32 avec atoi("32")
  liste_depart[*top] = ajout;
  *top = *top + 1;
  //  liste_depart.append(ajout)
}

int pop(int liste_depart[], int* top){
  // vous n'êtes pas en Python
  /*  int N = len(liste_depart)
    int nouveau[] = []
    for i in range(N-1){
        nouveau.append(liste_depart[i])
    }
    liste_depart = nouveau
  */
  // pop renvoie le dernier élément empilé et le dépile
  *top = *top - 1;
  return liste_depart[*top];
}

int* init_stack(int taille){
  int* stack = new int[taille];
  return stack;
}

void delete_stack(int stack[]){
  delete [] stack;
}
