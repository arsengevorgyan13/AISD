// 5. Имеется два текстовых файла. В первом из них содержится
// некоторое описание.Переносы слов  допускаются. Второй  файл
// содержит  список  слов, не подлежащих разглашению. Требуется
// переписать  первый  файл, заменив  каждое  из  подобных  слов
// точками. Результат не должен зависеть от регистра букв в файле
// и заданном слове(6).

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <Windows.h>

bool checkRus(char c) {
    if (c == 'А' || c == 'Б' || c == 'В' || c == 'Г' || c == 'Д' || c == 'Е' || c == 'Ё' || c == 'Ж' || c == 'З' || c == 'И' || c == 'Й' || c == 'К' || c == 'Л' || c == 'М' || c == 'Н' || c == 'О' || c == 'П' || c == 'Р' || c == 'С' || c == 'Т' || c == 'У' || c == 'Ф' || c == 'Х' || c == 'Ц' || c == 'Ч' || c == 'Ш' || c == 'Щ' || c == 'Ъ' || c == 'Ы' || c == 'Ь' || c == 'Э' || c == 'Ю' || c == 'Я' ||
        c == 'а' || c == 'б' || c == 'в' || c == 'г' || c == 'д' || c == 'е' || c == 'ё' || c == 'ж' || c == 'з' || c == 'и' || c == 'й' || c == 'к' || c == 'л' || c == 'м' || c == 'н' || c == 'о' || c == 'п' || c == 'р' || c == 'с' || c == 'т' || c == 'у' || c == 'ф' || c == 'х' || c == 'ц' || c == 'ч' || c == 'ш' || c == 'щ' || c == 'ъ' || c == 'ы' || c == 'ь' || c == 'э' || c == 'ю' || c == 'я') {
        return true;
    }
    else {
        return false;
    }
}

std::string toLower(std::string word) {
    std::string lowercaseWord(word);
    size_t size = word.length();
    for (int i = 0; i < size; i++) {
        switch (lowercaseWord[i]) {
        case 'А': lowercaseWord[i] = 'а'; break;
        case 'Б': lowercaseWord[i] = 'б'; break;
        case 'В': lowercaseWord[i] = 'в'; break;
        case 'Г': lowercaseWord[i] = 'г'; break;
        case 'Д': lowercaseWord[i] = 'д'; break;
        case 'Е': lowercaseWord[i] = 'е'; break;
        case 'Ё': lowercaseWord[i] = 'ё'; break;
        case 'Ж': lowercaseWord[i] = 'ж'; break;
        case 'З': lowercaseWord[i] = 'з'; break;
        case 'И': lowercaseWord[i] = 'и'; break;
        case 'Й': lowercaseWord[i] = 'й'; break;
        case 'К': lowercaseWord[i] = 'к'; break;
        case 'Л': lowercaseWord[i] = 'л'; break;
        case 'М': lowercaseWord[i] = 'м'; break;
        case 'Н': lowercaseWord[i] = 'н'; break;
        case 'О': lowercaseWord[i] = 'о'; break;
        case 'П': lowercaseWord[i] = 'п'; break;
        case 'Р': lowercaseWord[i] = 'р'; break;
        case 'С': lowercaseWord[i] = 'с'; break;
        case 'Т': lowercaseWord[i] = 'т'; break;
        case 'У': lowercaseWord[i] = 'у'; break;
        case 'Ф': lowercaseWord[i] = 'ф'; break;
        case 'Х': lowercaseWord[i] = 'х'; break;
        case 'Ц': lowercaseWord[i] = 'ц'; break;
        case 'Ч': lowercaseWord[i] = 'ч'; break;
        case 'Ш': lowercaseWord[i] = 'ш'; break;
        case 'Щ': lowercaseWord[i] = 'щ'; break;
        case 'Ъ': lowercaseWord[i] = 'ъ'; break;
        case 'Ы': lowercaseWord[i] = 'ы'; break;
        case 'Ь': lowercaseWord[i] = 'ь'; break;
        case 'Э': lowercaseWord[i] = 'э'; break;
        case 'Ю': lowercaseWord[i] = 'ю'; break;
        case 'Я': lowercaseWord[i] = 'я'; break;
        case 'A': lowercaseWord[i] = 'a'; break;
        case 'B': lowercaseWord[i] = 'b'; break;
        case 'C': lowercaseWord[i] = 'c'; break;
        case 'D': lowercaseWord[i] = 'd'; break;
        case 'E': lowercaseWord[i] = 'e'; break;
        case 'F': lowercaseWord[i] = 'f'; break;
        case 'G': lowercaseWord[i] = 'g'; break;
        case 'H': lowercaseWord[i] = 'h'; break;
        case 'I': lowercaseWord[i] = 'i'; break;
        case 'J': lowercaseWord[i] = 'j'; break;
        case 'K': lowercaseWord[i] = 'k'; break;
        case 'L': lowercaseWord[i] = 'l'; break;
        case 'M': lowercaseWord[i] = 'm'; break;
        case 'N': lowercaseWord[i] = 'n'; break;
        case 'O': lowercaseWord[i] = 'o'; break;
        case 'P': lowercaseWord[i] = 'p'; break;
        case 'Q': lowercaseWord[i] = 'q'; break;
        case 'R': lowercaseWord[i] = 'r'; break;
        case 'S': lowercaseWord[i] = 's'; break;
        case 'T': lowercaseWord[i] = 't'; break;
        case 'U': lowercaseWord[i] = 'u'; break;
        case 'V': lowercaseWord[i] = 'v'; break;
        case 'W': lowercaseWord[i] = 'w'; break;
        case 'X': lowercaseWord[i] = 'x'; break;
        case 'Y': lowercaseWord[i] = 'y'; break;
        case 'Z': lowercaseWord[i] = 'z'; break;
        }
    }
    return lowercaseWord;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");

    std::string input1path = "input1.txt";
    std::string input2path = "input2.txt";
    std::string outputpath = "output.txt";

    /*std::cout << "Введите имя файла с текстом: ";
    std::cin >> input1path;
    std::cout << "Введите имя файла с запрещенными словами: ";
    std::cin >> input2path;
    std::cout << "Введите имя выходного файла: ";
    std::cin >> outputpath;*/

    std::ifstream input1(input1path);
    std::ifstream input2(input2path);
    std::ofstream output(outputpath);

    if (!input1.is_open() || !input2.is_open() || !output.is_open()) {
        std::cout << "fail :/";
        return 1;
    }

    std::vector<std::string> forbidden_words;
    std::string word;
    std::string line;
    std::set<char> alphabet = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    while (std::getline(input2, line)) { //из 2 файла добавляем слова в вектор
        size_t len = line.length();
        int i = 0;
        while (i < len) {
            while (alphabet.count(line[i]) == 1 || checkRus(line[i])) {
                word = word + line[i];
                i++;
            }
            if (line.back() == '-' && (alphabet.count(line[line.length() - 2]) == 1 || checkRus(line[line.length() - 2]))) {
                std::getline(input2, line);
                std::string last_word;
                int n = 0;
                while (alphabet.count(line[n]) == 1 || checkRus(line[n])) {
                    last_word = last_word + line[n];
                    n++;
                }
                word = word + last_word;
                i = n;
                len = line.length();
            }
            if (!word.empty()) {
                forbidden_words.push_back(toLower(word));
            }
            word = "";
            i++;
        }
    }

    while (std::getline(input1, line)) {
        size_t len = line.length();
        int i = 0;
        bool hyphen = false;
        std::string last_word = "";
        while (i < len) {
            hyphen = false;
            last_word = "";
            if (alphabet.count(line[i]) == 0 && !checkRus(line[i])) {
                output << line[i];  
                i++;
            }
            else {
                while (alphabet.count(line[i]) == 1 || checkRus(line[i])) {
                    word = word + line[i];
                    i++;
                }

                if (line.back() == '-' && (alphabet.count(line[line.length() - 2]) == 1 || checkRus(line[line.length() - 2])) && (i == line.length() - 1)) {
                    hyphen = true;
                    std::getline(input1, line);
                    int n = 0;
                    while (alphabet.count(line[n]) == 1 || checkRus(line[n])) {
                        last_word = last_word + line[n];
                        n++;
                    }
                    i = n;
                    len = line.length();
                }
                size_t lenBefore = word.length();
                word = word + last_word;
                std::cout << word << ' ';
                size_t len = word.length();
                if (std::count(forbidden_words.begin(), forbidden_words.end(), toLower(word))) {
                    word = "";
                    for (int v = 0; v < len; v++) {
                        word += "*";
                    }
                }
                int t = 0;
                while (t <= len - 1) {
                    if (t == lenBefore) {
                        if (hyphen) {
                            output << '-';
                        }
                        output << std::endl;
                    }
                    output << word[t];
                    t++;
                }
                word = "";
            }
        }
        output << std::endl;
    }

    input1.close();
    input2.close();
    output.close();

    return 0;
}
