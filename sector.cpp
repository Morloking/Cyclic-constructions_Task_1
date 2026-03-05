#include <iostream>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int num{10}; 
    int summ{0};
    do {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> num;
        summ += num;
        std::cin.clear();
        std::cin.ignore(32767, '\n');
    } while (num != 0);
    std::cout << "Сумма: " << summ << "\n";
}
