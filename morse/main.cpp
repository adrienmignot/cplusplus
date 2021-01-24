#include <iostream>
#include <string>
#include <map>
#include "dictionnaire_et_fonctions.h"

std::string programme_morse() {
    std::cout << "  1) Traduire un message du français vers le morse" << std::endl;
    std::cout << "  2) Traduire un message du morse vers le français" << std::endl;
    int souhait;
    std::cin >> souhait;

    if (souhait == 1){
        std::string entree;
        std::cout << "tapez le message à traduire en morse" << std::endl;
        std::cin >> entree;
        return trad_message_fr_to_morse(entree);
    }

    if (souhait == 2){
        std::string entree;
        std::cout << "tapez le message à traduire en français" << std::endl;
        std::cin >> entree;
        return trad_message_morse_to_fr(entree);
    }

    else{
        return "nul";
    }
}    