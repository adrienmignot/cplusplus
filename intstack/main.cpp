<<<<<<< HEAD
#include "intstack.h"
int main(){
    IntStack st1 (10);
    st1.push(1);
    st1.push(2);
    IntStack st2 = st1;
    st2.push(30);
    st1.print(); // [1 2 [
    st2.print(); // [1 2 30 [
    return 0;
=======
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
>>>>>>> 108541b3138ac8a1728205fc55ffc5efa013e808
}