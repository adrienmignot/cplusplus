#include <iostream>
#include "intstack.h"

int main() {
    try{
        Intstack st (-12);
        // st.top = -12;

        st.print();  // [[
        st.push(10);
        st.print();  // [10[
    
        st.push(20);
        st.push(30);
        st.print(); // [10 20 30 [



        std::cout << st.pop() << std::endl;
    }
    catch(int){
        std::cout << "je suis là\n";
    }
    return 0;
}