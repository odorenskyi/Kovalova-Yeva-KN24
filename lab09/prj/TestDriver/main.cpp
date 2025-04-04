#include <iostream>
#include <windows.h>
#include "ModulesKovalova.h"

using namespace std;

    void developer_information() {
    std::cout << "Ковальова Єва ©, Усі права захищені." << std::endl;
}


int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    developer_information();

    // Виклик gas_payment
    double volume;
    cout << "Введіть об'єм газу (м³): ";
    cin >> volume;
    cout << "Сума до сплати за газ (" << volume << " м³): "
         << gas_payment(volume) << " грн" << endl;

    // Виклик shoes
    float size;
    cout << "Введіть довжину стопи (см): ";
    cin >> size;
    cout << "Розмір взуття для довжини стопи " << size << " см:" << endl;
    shoes(size);

    // Виклик binary_count
    int n;

    cout << "\nВведіть число: ";
    cin >> n;

    int result = binary_count(n);
    if (result != 1) {
        cout << "Результат обробки числа: " << result << endl;
    }
}
