CXX=g++
CXXFLAGS=-Wall -ggdb
RM=rm -f

calc : stack.o rpn_calc.o test.o
    $(CXX) $(CXXFLAGS) $^ -o $@ 

stack.o: stack.cpp stack.h
rpn_calc.o: rpn_calc.cpp stack.h rpn_calc.h
test.o : test.cpp rpn_calc.h

%.o: %.cpp; $(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
        $(RM) test.o rpn_calc.o stack.o calc