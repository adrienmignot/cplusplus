CXX=g++
CXXFLAGS=-Wall -ggdb
RM=rm -f

%.o %.cpp;  $(CXX) $(CXXFLAGS) -o $@ -c $<

test-intlist.o : test-intlist.h intlist.h
