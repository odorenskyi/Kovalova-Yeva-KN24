#include "struct_type_project_6.h"
#include <iostream>

using namespace std;

void searchByCode(Node* head) {
    string code;
    cout << "\n🔍 Введіть код товару: ";
    cin >> code;

    Node* current = head;
    while (current) {
        if (current->data.productCode == code) {
            cout << "\n✅ Знайдено:\n"
                 << "Номер розділу : " << current->data.sectionNumber << '\n'
                 << "Назва розділу : " << current->data.sectionName << '\n'
                 << "Код товару    : " << current->data.productCode << '\n'
                 << "Назва товару  : " << current->data.productName << '\n';
            return;
        }
        current = current->next;
    }
    cout << "❌ Запис не знайдено.\n";
}

void printMenu() {
    cout << "\n================ МЕНЮ =================\n"
         << "1. 🔍 Пошук запису\n"
         << "2. ➕ Додати запис\n"
         << "3. 🗑️ Видалити запис\n"
         << "4. 💾 Зберегти довідник\n"
         << "5. 🚪 Вихід (з автоматичним збереженням)\n"
         << "======================================\n"
         << "Оберіть дію (1-5): ";
}
