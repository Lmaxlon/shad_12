#include "functions.cpp"

int main() {
    sub::Table main;
    main.add(8);
    main.add(7);
    int m = main.get_out();
    std::cout << m << std::endl;
    std::cout << main;
}
