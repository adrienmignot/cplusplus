#include <iostream>
#include <string>
#include "dictionnaire_et_fonctions.h"

std::string traduction() {
    std::cout << "  1) Traduire un message du français en un texte morse" << std::endl;
    std::cout << "  2) Convertir un fichier texte du français en un texte morse" << std::endl;
    std::cout << "  3) Décoder un texte morse en un fichier texte en français" << std::endl;
    int souhait;
    std::cin >> souhait;
   
   if (souhait == 1){
       std::cout << "tapez le texte que vous souhaitez voir converti en un fichier audio morse" << std::endl;
       std::string texte_entree;
       std::cin >> texte_entree;
       std::string texte_sortie = trad_message_fr_to_morse(texte_entree);
       return texte_sortie;}

    else{return "1";};
   }