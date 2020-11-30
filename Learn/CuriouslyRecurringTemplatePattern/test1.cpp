#include <stdio.h>
struct Base {
    void Base_function_1() { Base_function_2(); }
    void Base_function_2() { printf("Base_function_2\n");}
    void function_11() { Base_function_1();}
};

struct Derived:Base{
    void Base_function_2() { printf("Derived_function_2\n"); }
    void function_11() { Base_function_1();}
};

int main(int argc, char* argv[]) {
    Derived derived;
    derived.function_11();
    return 0;
}