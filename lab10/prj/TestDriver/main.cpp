#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <ctime>
#include <windows.h>
#include "ModulesKovalova.h"

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    string input_file = "input.txt";
    string output_file = "output.txt";

    while (true) {
        cout << "Оберіть дію:\n";
        cout << "1. Аналіз текстового файлу\n";
        cout << "2. Додати кількість пунктуацій та часову мітку\n";
        cout << "3. Додати результати у файл\n";
        cout << "4. Вийти\n";
        cout << "Ваш вибір: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                analyze_text_file(input_file, output_file);
                cout << "Аналіз текстового файлу завершено.\n";
                break;
            case 2:
                append_punctuation_and_timestamp(input_file);
                cout << "Додано кількість пунктуацій та часову мітку.\n";
                break;
            case 3: {
                double x, y, z;
                int b;
                cout << "Введіть значення x: ";
                cin >> x;
                cout << "Введіть значення y: ";
                cin >> y;
                cout << "Введіть значення z: ";
                cin >> z;
                cout << "Введіть значення b: ";
                cin >> b;
                append_results_to_file(output_file, x, y, z, b);
                cout << "Результати додано у файл.\n";
                break;
            }
            case 4:
                cout << "Вихід з програми.\n";
                return 0;
            default:
                cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    }

    return 0;
}
