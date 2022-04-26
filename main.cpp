#include "functions.cpp"

int main() {
    sub::Table main;
    int amount;
    int operations;
    int element;
    std::cin >> amount >> operations;
    for (int i = 0; i < amount; i++){
            std::cin >> element;
            main.add(element);
    }
    amount = main.get_out();
    std::cout <<"Размер введенной последовательности: "<<amount << std::endl;
    std::cout << main;
}
