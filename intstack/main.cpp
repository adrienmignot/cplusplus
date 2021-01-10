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
}