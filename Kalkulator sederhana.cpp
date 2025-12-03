#include <iostream>

double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

double perkalian(double a, double b) {
    return a * b;
}

double pembagian(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Pembagian dengan nol tidak diizinkan." << std::endl;
        return 0;
    }
}

int main() {
    double num1, num2, hasil;
    char operasi;

    std::cout << "=== Kalkulator Sederhana Uta ===" << std::endl;
    std::cout << "Masukkan angka pertama: ";
    std::cin >> num1;

    std::cout << "Masukkan operator (+, -, *, /): ";
    std::cin >> operasi;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> num2;

    switch (operasi) {
        case '+':
            hasil = penjumlahan(num1, num2);
            std::cout << "Hasil penjumlahan: " << hasil << std::endl;
            break;
        case '-':
            hasil = pengurangan(num1, num2);
            std::cout << "Hasil pengurangan: " << hasil << std::endl;
            break;
        case '*':
            hasil = perkalian(num1, num2);
            std::cout << "Hasil perkalian: " << hasil << std::endl;
            break;
        case '/':
            hasil = pembagian(num1, num2);
            if (num2 != 0) {
                std::cout << "Hasil pembagian: " << hasil << std::endl;
            }
            break;
        default:
            std::cout << "Error: Operator tidak valid." << std::endl;
            break;
    }

    return 0;
}

