#include <iostream>

class IntStack{

public:
    IntStack(int s);

    IntStack(const IntStack& rst);

    ~IntStack();

    void push(int e);

    int pop ();

    bool is_empty();

    bool is_full ();

    void print ();

    void delete_stack ();


private:
    int size;
    int *tab;
    int top;


};

