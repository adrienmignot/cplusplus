#include <iostream>
#include <string>
#include <map>

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