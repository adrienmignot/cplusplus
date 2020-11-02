#include<iostream>
using namespace std;


// vous vous en doutez mais le nom de l'argument est mal choisi ...
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

// pas de é dans les noms de variables
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
  /*

  int l = nombre_elements - 1;
  // compte le nombre de tokens, on fait -1 pour le \0

  int temp[] = []   // liste temporaire vide
    while i < l{
        if is_operand(entrees[i]){
            temp = temp + [int(entrees[i])]
            i = i+1
        }
        else{
            if (len(temp) - 1 >= 2){ //ici, on a un opérateur, et au moins deux opérandes dans temp
                                // donc on agit !
                if (entrees[i] == "!"){
                    temp[-1] = -temp[-1]
                }
                if (entrees[i] == "x"){
                    stockage = temp[-1]*temp[-2]
                    pop(temp)
                    pop(temp) //on enlève les deux dernières cases de temp
                    push(temp, stockage)

                }
                if (entrees[i] == "/"){
                    stockage = temp[-2]/temp[-1] //attention à l'ordre
                    pop(temp)
                    pop(temp) //on enlève les deux dernières cases de temp
                    push(temp, stockage)
                }
                if (entrees[i] == "-"){
                    stockage = temp[-2]-temp[-1] //attention à l'ordre
                    pop(temp)
                    pop(temp) //on enlève les deux dernières cases de temp
                    push(temp, stockage)
                }
                if (entrees[i] == "+"){
                    stockage = temp[-2]+temp[-1]
                    pop(temp)
                    pop(temp) //on enlève les deux dernières cases de temp
                    push(temp, stockage)
                }
            }
        }

    }
  */
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

int main(int argc, char* argv[]) {
    std::cout << rpn_eval(argc-1, argv+1) << std::endl;
    return 0;
}
