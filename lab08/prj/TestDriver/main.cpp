#include <iostream>
#include <windows.h>
#include "ModulesKovalova.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, y, z;
    cout << "Введіть x: " << endl;
    cin >> x;
    cout << "Введіть y: " << endl;
    cin >> y;
    cout << "Введіть z: " << endl;
    cin >> z;

    // Виклик функції для обчислення
    double result = s_calculation(x, y, z);

    // Виведення результату з коректною локалізацією
    cout << "Відповідь: " << result << endl;

    return 0;
}
