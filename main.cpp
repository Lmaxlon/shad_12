#include "functions.cpp"

int main() {
    sub::Table main;
    int amount;//количество элементов в последовательности
    int operations;// количество операций (проходов)
    int element;
    bool flag = false;
    std::cin >> amount >> operations;
    for (int i = 0; i < amount; i++){
            std::cin >> element;
            main.add(element);
    }
    while (operations > 0){
        for (int i = 0; i < main.s.size(); i++){
            int buffer = main.s[i]->get_element();
            for (int j = main.s.size() - 1; j >= 0; j--){
                if ((main.s[j]->get_element() == buffer)&&(i != j)){
                    main.s.erase(main.s.end() - j);
                    break;
                }
            }
            main.s.erase(main.s.begin() + i);
            break;
        }
        operations--;
        amount = main.get_out();
        std::cout <<"Размер конечной последовательности: "<< amount << std::endl;
        std::cout << main <<;
    }
}
