#include <iostream>

class IntStack{

public:
    IntStack(int s) : size(s), top(0){
        if (s>0){
            tab = new int [size];
        }
        else {
            std::cout << "taille inférieure ou égale à zéro\n";
            throw(1);
        }
    }

    void push(int e){
        if (not is_full()){
            tab[top] = e;
            top = top + 1;
        } else {
            std::cout << "la pile est pleine";
            throw(1);
        }
    }
    int pop (){
        if (not is_empty()){
            top = top-1;
            return tab[top];
        } else {
            std::cout << "la pile est vide";
            throw(2);
        }
    }

    bool is_empty(){
        return top ==0;
    }

    bool is_full (){
        return top == size;
    }

    void print (){
        std::cout << '[';
        for (int i = 0; i < top; i++){
            std::cout << tab[i] << ' ';
        }
        std::cout << '[';

    }
    void delete_stack (){
        delete tab;
    }


private:
    int size;
    int *tab;
    int top;


};

