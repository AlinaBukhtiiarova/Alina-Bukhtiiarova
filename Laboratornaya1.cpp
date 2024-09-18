// Laboratornaya1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{   // Переменная - именованная ячейка памяти с определенным типом

    setlocale(LC_ALL, "Russian"); // 
    std::cout << "Переменная - именованная ячейка памяти с определенным типом"<< std::endl;
    std::cout << "1. Целочисленные" << std::endl;
    std::cout << "- char; размер 1 байт; min: - 128, max: 127" << std::endl;
    std::cout << "- short; размер 2 байт; min: -32768, max: 32767" << std::endl;
    std::cout << "- int; размер 4 байта; min: -2**31, max: 2**31 - 1" << std::endl;
    std::cout << "- long long; размекр 8 байт; min: -2**63, max: 2**63 - 1" << std::endl;
    std::cout << "-unsighed char; размер 1 байт; min:0, max:255" << std::endl;
    std::cout << "-unsighed short; размер 2 байт; min:0, max:65536" << std::endl;
    std::cout << "-unsighed int; размер 4 байт; min:0, max:2**31 - 1" << std::endl;
    std::cout << "-unsighed long long; размер 8 байт; min:0, max: 18 446 744 073 709 551 615" << std::endl;
    std::cout << "2. Символьные" << std::endl;
    std::cout << "- char; размер 1 байт; min: - 128, max: 127" << std::endl;
    std::cout << "-unsighed char; размер 1 байт; min: 0, max: 127" << std::endl;
    std::cout << "3. Вещественные" << std::endl;
    std::cout << "- float; размер 4 байт; min: 3,4*10^-38, max: 3,4*10^38" << std::endl;
    std::cout << "- double; размер 4 байт; min: 1,7*10^-308, max: 1,7*10^-308" << std::endl;
    std::cout << "- long double; размер 8 байт; min: 3,4*10^-4932, max: 3,4*10^4932" << std::endl;
    std::cout << "4. Логические" << std::endl;
    std::cout << "-bool ; размер 1 байт; min: false, max: true" << std::endl;
    std::cout << "Примеры выполнения арифметической операции с каждым типом данных" << std::endl;
    std::cout << "1 Целочисленные" << std::endl;
    int a{ 7 }; //первое число a
    int b{ 11 }; //второе число b
    int c{ a + b }; //сумма c
    std::cout << "7 + 11 = " << c << std::endl;
    std::cout << "2. Символьные:" << std::endl;
    char a1{ 'B' };
    char a2{ 66 };
    std::cout << "a1: " << a1 << std::endl;
    std::cout << "a2: " << a2 << std::endl;
    std::cout << "3. Вещественные :" << std::endl;
    double f = 10 / 2.0;
    std::cout << "f= 10 / 2.0 = " << f << std::endl;
    std::cout << "4. Логические:" << std::endl;
    bool n = true;
    std::cout << "n= true = " << n << std::endl;
    std::cout << "Готово" << std::endl;
    return 0;
}
