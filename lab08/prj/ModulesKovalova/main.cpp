#include <cmath>
#include <cstdlib>
#include <string>
#include <iostream>

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
