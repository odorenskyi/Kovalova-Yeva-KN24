#include <iostream>
#include <cmath>
#include <windows.h>
#include "ModulesKovalova.h"

using namespace std;

void developer_information() {
    std::cout << "Ковальова Єва ©, Усі права захищені." << std::endl;
}

void task_selector(char option) {
    while (true) {
        if (option == 'u') {
            double x, y, z;
            std::cout << "Введіть x, y, z для s_calculation: ";
            std::cin >> x >> y >> z;
            double result = s_calculation(x, y, z);
            if (std::isnan(result)) {
                std::cout << "Результат: NAN (y не може дорівнювати 0)" << std::endl;
            } else {
                std::cout << "Результат: " << result << std::endl;
            }
        } else if (option == 't') {
            double volume;
            std::cout << "Введіть обсяг газу: ";
            std::cin >> volume;
            std::cout << "Ціна за газ: " << gas_payment(volume) << " грн" << std::endl;
        } else if (option == 'r') {
            float sizes;
            std::cout << "Введіть довжину стопи (см): ";
            std::cin >> sizes;
            shoes(sizes);
        } else if (option == 'e') {
            unsigned int N;
            std::cout << "Введіть число N: ";
            std::cin >> N;
            binary_count(N);
        } else {
            std::cout << '\a'; // Звуковий сигнал
            std::cout << "Невідома опція. Спробуйте ще раз." << std::endl;
        }

        char exit_option;
        std::cout << "Введіть 'w' для виходу або 'i' для продовження: ";
        std::cin >> exit_option;
        if (exit_option == 'w') {
            break;
        } else if (exit_option == 'i') {
            std::cout << "Продовження роботи програми." << std::endl;
            std::cout << "Введіть опцію (u, t, r, e): ";
            std::cin >> option;
        } else {
            std::cout << "Невідома опція. Спробуйте ще раз." << std::endl;
        }
    }
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    developer_information();
    char option;
    std::cout << "Введіть опцію (u, t, r, e): ";
    std::cin >> option;
    task_selector(option);
    return 0;
}
