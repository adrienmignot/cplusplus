#include<iostream>
#include"stack.h"

bool is_operand (char *pouet){
  // parenthésez  les conditions
  // utiliser or et pas ||

  // c'est faux le code ascii d'un caractère chiffre (i.e. '0' ou
  // ... '9') n'est pas compris entre 0 et 10 mais entre 48 et 57
  
  // pouet est un char* pas un char vous ne pouvez pas faire int(pouet)

  // vous voulez que le code de pouet[0] soit entre le code de '0' et
  // le code '9'
  if ((pouet[0] >= '0') and (pouet[0] <= '9')) {
      return true;
    }
  else {
    return false;
  }
}

// pas vraiment c'est un opérateur quand c'est un '+' ou un '-' ...
bool is_operator(char *tut){
    return not is_operand(tut);
}

int rpn_eval(int nombre_elements, char* entrees []){
  // vous faites votre liste_depart
  int* liste_depart = init_stack(nombre_elements);
  // et son compteur
  int top = 0; // compteur

  // vous parcourez la liste des arguments du tableau entrées
  // si c'est un operande vous empilez
  
  // si c'est un opérateur unaire vous dépilez un operande si c'est un
  // binaire vous en dépilez deux vous faites l'opération et vous
  // empilez le résultat

  for (int i = 0; i < nombre_elements; i++) {
    char* token = entrees[i];
    if (is_operand(token)) {
      push(liste_depart, &top, atoi(token));
    }
    else if (token[0] == '!'){
      liste_depart[top] = -liste_depart[top];
    }
    else if (token[0] == 'x'){
      int temp1 = pop(liste_depart, &top);
      int temp2 = pop(liste_depart, &top);
      push(liste_depart, &top, temp1*temp2);
    }
    else if (token[0] == '/'){
      int temp1 = pop(liste_depart, &top);
      int temp2 = pop(liste_depart, &top);
      push(liste_depart, &top, temp2/temp1);
    } 
    else if (token[0] == '+'){
      int temp1 = pop(liste_depart, &top);
      int temp2 = pop(liste_depart, &top);
      push(liste_depart, &top, temp1 + temp2);
    }
    else if (token[0] == '-'){
      int temp1 = pop(liste_depart, &top);
      int temp2 = pop(liste_depart, &top);
      push(liste_depart, &top, temp2 - temp1);
    }
  std::cout << "[";
  for (int i = 1; i<=top; i++){
    std::cout << liste_depart[i-1] << ' ';
  }
  std::cout << "[" << std::endl;
  
  }
  
  int stock = liste_depart[0];
  delete_stack(liste_depart);
  return stock;
}