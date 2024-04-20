#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

const std::string INPUT_NUMBERS_ERROR = "M должно быть больше или равно N";
const std::string INPUT_FILE_ERROR = "Входной файл не был открыт";
const std::string INPUT_FILE_DIRECTORY = "input.txt";
const std::string OUTPUT_FILE_DIRECTORY = "output.txt";

// Функция для подсчета количества цифр в числе
int countDigits(unsigned long long number) {
    return floor(log10(number) + 1);
}

// Функция для нахождения максимального числа с определенным количеством цифр
unsigned long long findMaxNumberDigits(int digits) {
    return pow(10, digits) - 1;
}

// Функция для подсчета общего количества цифр в заданном диапазоне
unsigned long long countTotalDigits(unsigned long long m, unsigned long long n) {
    if (m > n) {
        std::cout << INPUT_NUMBERS_ERROR;
        return 0;
    }

    int maxDigits = countDigits(m);
    unsigned long long totalDigits = 0;

    while (m <= n) {
        int maxDigitsCount = countDigits(m);
        unsigned long long maxNumDigits = findMaxNumberDigits(maxDigitsCount);

        if (n >= maxNumDigits) {
            totalDigits += maxDigitsCount * (maxNumDigits - m + 1);
        } else {
            totalDigits += maxDigitsCount * (n - m + 1);
        }

        m = maxNumDigits + 1;
        maxDigits++;
    }

    return totalDigits;
}

int main() {
    std::ifstream inputFile(INPUT_FILE_DIRECTORY);
    std::ofstream outputFile(OUTPUT_FILE_DIRECTORY);

    if (!inputFile) {
        std::cout << INPUT_FILE_ERROR << std::endl;
        return 1;
    }

    unsigned long long m, n;
    inputFile >> m >> n;

    unsigned long long result = countTotalDigits(m, n);
    outputFile << result;
    std::cout << result;

    inputFile.close();
    outputFile.close();

    return 0;
}
