#include <iostream
void test () {
  IntStack st (12);
  st.print(); // [[

  st.push(42);
  st.print(); // [42 [

  st.push(17);
  st.print(); // [42 17 [

  st.push(-22);
  st.print(); // [42 17 -22 [

  std :: cout << st.pop () << std::endl; // -22
  st.print (); // [42 17 [
}

int main () {
  test();
  return 0;
}