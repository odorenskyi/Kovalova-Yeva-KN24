#include <cmath>
#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include <cctype>
#include <ctime>
#include <algorithm>


using namespace std;

double s_calculation(double x, double y, double z) {

    if (y == 0) {
        return NAN;
    }

    double denominator = y * y * y;
    double sinPart = z * sin(x * x * y);
    double sqrtArg = fabs(z - 12 * x);
    double sqrtPart = sqrt(sqrtArg);

    return sinPart + sqrtPart / denominator;
}

double gas_payment(double volume) {
    if (volume < 0) {
        std::cout << "Такого значення бути не може" << std::endl;
        return 0.0;
    }
    double rate = 0.0;
    if (volume <= 208) {
        rate = 1.299;
    } else if (volume > 208 && volume <= 500) {
        rate = 1.788;
    } else {
        rate = 3.645;
    }
    return volume * rate;
}

void shoes(float sizes)
{
    if (sizes==20.5){
        cout << "Розмір в Україні - відсутній , в Великобританії – 1" << endl;
    }
    else if (sizes==21) {
        cout << "Розмір в Україні - відсутній , в Великобританії – 1,5" << endl;
    }
    else if (sizes==21.5) {
        cout << "Розмір в Україні - відсутній , в Великобританії – 2" << endl;
    }
    else if (sizes==22){
        cout << "Розмір в Україні - відсутній , в Великобританії – 2.5" << endl;
    }
    else if (sizes==22.5){
        cout << "Розмір в Україні - відсутній , в Великобританії – 3" << endl;
    }
    else if (sizes==23){
        cout << "Розмір в Україні - 35 , в Великобританії – 4" << endl;
    }
    else if (sizes==23.5){
        cout << "Розмір в Україні - 36 , в Великобританії – 4.5" << endl;
    }
    else if (sizes==24){
        cout << "Розмір в Україні - 36.5 , в Великобританії – 5" << endl;
    }
    else if (sizes==24.5){
        cout << "Розмір в Україні - 37 , в Великобританії – 5.5" << endl;
    }
    else if (sizes==25){
        cout << "Розмір в Україні - 38 , в Великобританії – 6" << endl;
    }
    else if (sizes==25.5) {
        cout << "Розмір в Україні - 38/39 , в Великобританії – 6.5" << endl;
    }
    else if (sizes==26){
        cout << "Розмір в Україні - 40.5 , в Великобританії – 7.5" << endl;
    }
    else if (sizes==26.5){
        cout << "Розмір в Україні - 41 , в Великобританії – 8" << endl;
    }
    else if (sizes==27){
        cout << "Розмір в Україні - 41.5 , в Великобританії – 8.5" << endl;
    }
    else if (sizes==27.5){
        cout << "Розмір в Україні - 42 , в Великобританії – 9" << endl;
    }
    else if (sizes==28){
        cout << "Розмір в Україні -  42/43, в Великобританії – 9.5" << endl;
    }
    else if (sizes==28.5){
        cout << "Розмір в Україні - 43 , в Великобританії – 10" << endl;
    }
    else if (sizes==29){
        cout << "Розмір в Україні - 44 , в Великобританії – 11" << endl;
    }
    else if (sizes==29.5){
        cout << "Розмір в Україні - 45 , в Великобританії – 11.5" << endl;
    }
    else if (sizes==30){
        cout << "Розмір в Україні - 46 , в Великобританії – 12" << endl;
    }
    else if (sizes==30.5){
        cout << "Розмір в Україні - 47 , в Великобританії – 12.5" << endl;
    }
    else if (sizes==31){
        cout << "Розмір в Україні - 47.5 , в Великобританії – 13" << endl;
    }
    else if (sizes==31.5){
        cout << "Розмір в Україні - 48 , в Великобританії – 14" << endl;
    }
    else if (sizes==32){
        cout << "Розмір в Україні - 48.5 , в Великобританії – 14.5" << endl;
    }
    else{
        cout << "Такого розміру немає" << endl;
    }
}

int binary_count(int N) {
    if (N < 0 || N > 21359010) {
        cout << "Число виходить за межі допустимого діапазону (0 - 21359010)" << endl;
        return 1;
    }

    string binary = "";
    int temp = N;
    while (temp > 0) {
        binary = (temp % 2 == 0 ? "0" : "1") + binary;
        temp /= 2;
    }

    while (binary.length() < 12) {
        binary = "0" + binary;
    }

    int ones = 0, zeros = 0;
    for (char bit : binary) {
        if (bit == '1') {
            ones++;
        } else {
            zeros++;
        }
    }

    if (binary.length() < 12) {
        cout << "Недостатньо бітів" << endl;
        return 1;
    }

    if (binary[binary.length() - 12] == '0') {
        cout << "Кількість двійкових нулів: " << zeros << endl;
    } else {
        cout << "Сума двійкових одиниць: " << ones << endl;
    }

    return 0;
}
//10.1
void analyze_text_file(const string& input_file, const string& output_file) {
    ifstream infile(input_file);
    ofstream outfile(output_file);

    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Не вдалося відкрити файл." << endl;
        return;
    }

    // Авторська інформація
    outfile << "Автор: Єва Ковальова\n";
    outfile << "Установа: ЦНТУ\n";
    outfile << "Місто: Кропивницький\n";
    outfile << "Країна: Україна\n";
    outfile << "Рік розробки: 2025\n\n";

    string line;
    int paragraph_count = 0;
    bool in_paragraph = false;
    int ukraine_count = 0, university_count = 0, notebook_count = 0;

    while (getline(infile, line)) {
        // Підрахунок абзаців
        if (!line.empty()) {
            if (!in_paragraph) {
                paragraph_count++;
                in_paragraph = true;
            }
        } else {
            in_paragraph = false;
        }

        // Переведення рядка в нижній регістр для пошуку слів
        locale loc(""); // Використання локалі за замовчуванням системи
        string lower_line;
        for (char c : line) {
            lower_line += tolower(c, loc);
        }

        // Пошук слів
        size_t pos = 0;
        while ((pos = lower_line.find("україна", pos)) != string::npos) {
            ukraine_count++;
            pos += string("україна").length();
        }
        pos = 0;
        while ((pos = lower_line.find("університет", pos)) != string::npos) {
            university_count++;
            pos += string("університет").length();
        }
        pos = 0;
        while ((pos = lower_line.find("блокнот", pos)) != string::npos) {
            notebook_count++;
            pos += string("блокнот").length();
        }
    }

    // Запис результатів у вихідний файл
    outfile << "Кількість абзаців: " << paragraph_count << "\n";
    outfile << "Слово 'Україна' зустрічається: " << ukraine_count << " разів\n";
    outfile << "Слово 'університет' зустрічається: " << university_count << " разів\n";
    outfile << "Слово 'блокнот' зустрічається: " << notebook_count << " разів\n";

    infile.close();
    outfile.close();
}

// 10.2
void append_punctuation_and_timestamp(const string& input_file) {
    ifstream infile(input_file, ios::in);
    ofstream outfile(input_file, ios::app);

    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Не вдалося відкрити файл." << endl;
        return;
    }

    int punctuation_count = 0;
    char ch;

    // Підрахунок знаків пунктуації
    while (infile.get(ch)) {
        if (ispunct(ch)) {
            punctuation_count++;
        }
    }

    // Отримання поточної дати й часу
    time_t now = time(0);
    tm* local_time = localtime(&now);
    char timestamp[100];
    strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", local_time);

    // Додавання інформації у файл
    outfile << "\nКількість знаків пунктуації: " << punctuation_count << "\n";
    outfile << "Дата й час дозапису: " << timestamp << "\n";

    infile.close();
    outfile.close();
}

// 10.3
void append_results_to_file(const string& output_file, double x, double y, double z, int b) {
    ofstream outfile(output_file, ios::app);

    if (!outfile.is_open()) {
        cerr << "Не вдалося відкрити файл." << endl;
        return;
    }

    // Результат виконання функції s_calculation
    double s_result = s_calculation(x, y, z);
    outfile << "Результат s_calculation(" << x << ", " << y << ", " << z << "): " << s_result << "\n";

    // Число b у двійковому коді
    string binary = "";
    int temp = b;
    while (temp > 0) {
        binary = (temp % 2 == 0 ? "0" : "1") + binary;
        temp /= 2;
    }
    outfile << "Число " << b << " у двійковому коді: " << binary << "\n";

    outfile.close();
}