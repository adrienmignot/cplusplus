<<<<<<< HEAD
#include<iostream>

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

void print_stack(int liste_depart[], int top){
  std::cout << "[";
  for (int i = 1; i<=top; i++){
    std::cout << liste_depart[i-1] << ' ';
  }
  std::cout << "[" << std::endl;
=======
#include<iostream>

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

void print_stack(int liste_depart[], int top){
  std::cout << "[";
  for (int i = 1; i<=top; i++){
    std::cout << liste_depart[i-1] << ' ';
  }
  std::cout << "[" << std::endl;
>>>>>>> 108541b3138ac8a1728205fc55ffc5efa013e808
}