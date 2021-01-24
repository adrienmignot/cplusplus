#include <iostream>
#include <string>
#include <map>
#include "dictionnaire_et_fonctions.h"
#include "dictionnaire_et_fonctions.cpp"

std::map<std::string,std::string> dictionnaire_fr_to_morse = {
    {"A", ".-"},
    {"B", "-..."},
    {"C", "-.-."},
    {"D", "-.."},
    {"E", "."},
    {"F", "..-."},
    {"G", "--."},
    {"H", "...."},
    {"I", ".."},
    {"J", ".---"},
    {"K", "-.-"},
    {"L", ".-.."},
    {"M", "--"},
    {"N", "-."},
    {"O", "---"},
    {"P", ".--."},
    {"Q", "--.-"},
    {"R", ".-."},
    {"S", "..."},
    {"T", "-"},
    {"U", "..-"},
    {"V", "...-"},
    {"W", ".--"},
    {"X", "-..-"},
    {"Y", "-.--"},
    {"Z", "--.."},
};

std::map<std::string,std::string> dictionnaire_morse_to_fr = {
    {".-",'A'},
    {".",'E'},
    {"...",'S'},
    {"..",'I'},
    {"-.",'N'},
    {"-",'T'},
    {".-.",'R'},
    {".-..",'L'},
    {"..-",'U'},
    {"---",'O'},
    {"-..",'D'}, 
    {"-.-.",'C'},
    {".--.",'P'},
    {"--",'M'},
    {"...-",'V'},
    {"--.",'G'},
    {"..-.",'F'},
    {"-...",'B'},
    {"--.-",'Q'},
    {"....",'H'}, 
    {"-..-",'X'},
    {".---",'J'},
    {"-.--",'Y'},
    {"--..",'Z'},
    {"-.-",'K'},
    {".--",'W'},
};


std::string traduction_fr_to_morse(std::string entree){
    return dictionnaire_fr_to_morse[entree];
};

std::string trad_message_fr_to_morse(std::string entree){
    int N = entree.size();
    std::string texte_sortie = "";
    for(int i = 0; i<= N-1; i+=1){
        std::string temporaire (entree[i],1);
        texte_sortie += traduction_fr_to_morse(temporaire);
    }
    return texte_sortie;
}

std::string traduction_morse_to_fr(std::string entree){
    return dictionnaire_morse_to_fr[entree];
}

std::string trad_message_morse_to_fr(std::string entree){
    int N = entree.size();
    std::string texte_sortie = "";
    for(int i = 0; i<= N-1; i+=1){
        std::string temporaire (entree[i],1);
        texte_sortie += traduction_morse_to_fr(temporaire);
    }
    return texte_sortie;
}