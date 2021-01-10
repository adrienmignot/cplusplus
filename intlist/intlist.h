#include <iostream>

class IntCell{
    friend class IntList;
private:
    int next;
    int prec;
    int val;
};

class IntList{
public:
    void add_front(int valeur){
        tete = tete + 1;
        tab[tete].next = 0;
        tab[tete].prec = tete - 1;
        tab[tete].val = valeur;
        tab[tete-1].next = tete;

    }
    void add_back(blabla){

    }
    void remove_front(){
        tete = tete - 1;
        tab[tete].next = 0
    }
    void remove_back(){

    }
    void remove(blabla){

    }
    bool search(int element){
        for(int i = 0, i < tete - 1, ++i){
            return tab[i] = element;
        }
        return false;
    }
    void print(){
        std::cout '{'
        for(int i = 0, i < tete - 1, ++i){
            std::cout << tab[i] << ' '
        }
        std::cout '}'
    }
private:
    int *tab;
    int tete;
    int queue;

}

