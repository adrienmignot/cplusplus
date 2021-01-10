#include <iostream>
#include "intstack.h"


IntStack::IntStack(int s) : size(s), top(0), tab (new int[size]){}
IntStack::~IntStack(){
    delete [] tab;
}
IntStack::IntStack(const IntStack& rst): size(rst.size), top(rst.top),tab(new int [size]){
    for(int i = 0; i < top; ++i){
        tab[i] = rst.tab[i];
    }
}
IntStack::push(int e){
    if (not is_full()){
        tab[top] = e;
        top = top + 1;
    } else {
        std::cout << "la pile est pleine";
        throw(1);
    }
}
int IntStack::pop(){
    if (not is_empty()){
        top = top-1;
        return tab[top];
    } else {
        std::cout << "la pile est vide";
        throw(2);
    }
}
bool IntStack::is_empty(){
    return top == 0;
}
bool IntStack::is_full(){
    return top == size;
}
void IntStack::print(){
    std::cout << '[';
    for (int i = 0; i < top; i++){
        std::cout << tab[i] << ' ';
    }
    std::cout << '[' << std::endl;

}
void IntStack::delete_stack (){
    delete tab;
}