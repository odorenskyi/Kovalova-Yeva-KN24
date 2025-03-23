#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

double s_calculation(double x, double y, double z) {
    // Перевірка ділення на нуль
    if (fabs(y) < 1e-10) {
        return NAN;
    }

    double denominator = y * y * y;
    double sinPart = z * sin(x * x * y);
    double sqrtArg = fabs(z - 12 * x);
    double sqrtPart = sqrt(sqrtArg);

    return sinPart + sqrtPart / denominator;
}

void copyright_info() {
    cout << "Ковальова Єва ©, Усі права захищені." << endl;
}

void logical_expression(int a, int b) {
    cout << "Результат логічного виразу (a + 1 = b + 2): "
         << ((a + 1 == b + 2) ? "true" : "false") << endl;
}

void display_values(double x, double y, double z) {
    cout << endl << "Значення в десятковій та шістнадцятковій системах:" << endl;

    cout << "x = " << x << " (десяткова), "
         << "0x" << hex << uppercase << (int)x << nouppercase << dec << " (шістнадцяткова)" << endl;
    cout << "y = " << y << " (десяткова), "
         << "0x" << hex << uppercase << (int)y << nouppercase << dec << " (шістнадцяткова)" << endl;
    cout << "z = " << z << " (десяткова), "
         << "0x" << hex << uppercase << (int)z << nouppercase << dec << " (шістнадцяткова)" << endl;

    double S = s_calculation(x, y, z);
    cout << "Значення S, що обчислюється функцією s_calculation(): " << S << dec << endl;
}

int main() {
    // Встановлюємо кодову сторінку для підтримки UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int a, b;
    double x, y, z;

    // Введення значень
    cout << "Введіть значення a: " << endl;
    cin >> a;
    cout << "Введіть значення b: " << endl;
    cin >> b;
    cout << "Введіть x: " << endl;
    cin >> x;
    cout << "Введіть y: " << endl;
    cin >> y;
    cout << "Введіть z: " << endl;
    cin >> z;
    cout << endl;

    // Виведення інформації
    copyright_info();
    logical_expression(a, b);
    display_values(x, y, z);

    return 0;
}
