//5. Имеется два текстовых файла.В первом из них содержится
//некоторое описание.Переносы слов  допускаются.Второй  файл
//содержит  список  слов, не подлежащих разглашению.Требуется
//переписать  первый  файл, заменив  каждое  из  подобных  слов
//точками.Результат не должен зависеть от регистра букв в файле
//и заданном слове(6).

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>

//void toLow(char& word) {
//    switch (word) {
//    case 'А': word = 'а'; break;
//    case 'Б': word = 'б'; break;
//    case 'В': word = 'в'; break;
//    case 'Г': word = 'г'; break;
//    case 'Д': word = 'д'; break;
//    case 'Е': word = 'е'; break;
//    case 'Ё': word = 'ё'; break;
//    case 'Ж': word = 'ж'; break;
//    case 'З': word = 'з'; break;
//    case 'И': word = 'и'; break;
//    case 'Й': word = 'й'; break;
//    case 'К': word = 'к'; break;
//    case 'Л': word = 'л'; break;
//    case 'М': word = 'м'; break;
//    case 'Н': word = 'н'; break;
//    case 'О': word = 'о'; break;
//    case 'П': word = 'п'; break;
//    case 'Р': word = 'р'; break;
//    case 'С': word = 'с'; break;
//    case 'Т': word = 'т'; break;
//    case 'У': word = 'у'; break;
//    case 'Ф': word = 'ф'; break;
//    case 'Х': word = 'х'; break;
//    case 'Ц': word = 'ц'; break;
//    case 'Ч': word = 'ч'; break;
//    case 'Ш': word = 'ш'; break;
//    case 'Щ': word = 'щ'; break;
//    case 'Ъ': word = 'ъ'; break;
//    case 'Ы': word = 'ы'; break;
//    case 'Ь': word = 'ь'; break;
//    case 'Э': word = 'э'; break;
//    case 'Ю': word = 'ю'; break;
//    case 'Я': word = 'я'; break;
//    case 'A': word = 'a'; break;
//    case 'B': word = 'b'; break;
//    case 'C': word = 'c'; break;
//    case 'D': word = 'd'; break;
//    case 'E': word = 'e'; break;
//    case 'F': word = 'f'; break;
//    case 'G': word = 'g'; break;
//    case 'H': word = 'h'; break;
//    case 'I': word = 'i'; break;
//    case 'J': word = 'j'; break;
//    case 'K': word = 'k'; break;
//    case 'L': word = 'l'; break;
//    case 'M': word = 'm'; break;
//    case 'N': word = 'n'; break;
//    case 'O': word = 'o'; break;
//    case 'P': word = 'p'; break;
//    case 'Q': word = 'q'; break;
//    case 'R': word = 'r'; break;
//    case 'S': word = 's'; break;
//    case 'T': word = 't'; break;
//    case 'U': word = 'u'; break;
//    case 'V': word = 'v'; break;
//    case 'W': word = 'w'; break;
//    case 'X': word = 'x'; break;
//    case 'Y': word = 'y'; break;
//    case 'Z': word = 'z'; break;
//    }
//}

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
    system("chcp 1251");
    std::string input1path;
    std::string input2path;
    std::string outputpath;
    std::cout << "Введите имя файла с текстом: ";
    std::cin >> input1path;
    std::cout << "Введите имя файла с запрещенными словами: ";
    std::cin >> input2path;
    std::cout << "Введите имя выходного файла: ";
    std::cin >> outputpath;
    std::ifstream input1(input1path);
    std::ifstream input2(input2path);
    std::ofstream output(outputpath);
    if (!input1.is_open() || !input2.is_open() || !output.is_open()) {
        std::cout << "fail :/";
        return 0;
    }
    std::vector<std::string> forbidden_words;
    std::string word;
    std::string line;
    std::set<char> alphabet = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
        /*u'А', u'Б', u'В', u'Г', u'Д', u'Е', u'Ё', u'Ж', u'З', u'И', u'Й', u'К', u'Л', u'М', u'Н', u'О', u'П', u'Р', u'С', u'Т', u'У', u'Ф', u'Х', u'Ц', u'Ч', u'Ш', u'Щ', u'Ъ', u'Ы', u'Ь', u'Э', u'Ю', u'Я', 
        u'а', u'б', u'в', u'г', u'д', u'е', u'ё', u'ж', u'з', u'и', u'й', u'к', u'л', u'м', u'н', u'о', u'п', u'р', u'с', u'т', u'у', u'ф', u'х', u'ц', u'ч', u'ш', u'щ', u'ъ', u'ы', u'ь', u'э', u'ю', u'я' */};
    /*char ch;*/
    while (std::getline(input2, line)) { //из 2 файла добавляем слова в вектор
        //i += 1;
        //std::cout << i << ' ';
        /*std::cout << line << std::endl;*/
        size_t len = line.length();
        int i = 0;
        while (i < len) {
            while (alphabet.count(line[i]) == 1) {
                word = word + line[i];
                i++;
            }
            std::string last_word;
            if (line.back() == '-' && alphabet.count(line[line.length() - 2]) == 1) {
                std::getline(input2, line);
                //std::cout << "Перенос: " << line << std::endl;
                int c = 0;
                while (alphabet.count(line[c]) == 1) {
                    last_word = last_word + line[c];
                    c++;
                }
                word = word + last_word;
                i = c;
                len = line.length();
            }
            if (!word.empty()) {
                forbidden_words.push_back(toLower(word));
            }
            word = "";
            i++;
        }
    }
    std::cout << "Запрещенные слова: ";
    for (int i = 0; i < forbidden_words.size(); i++) {
        std::cout << forbidden_words[i] << ' ';
    }
    std::cout << "Текст: ";
    while (std::getline(input1, line)) {
        size_t len = line.length();
        int i = 0;
        while (i < len) {
            while (alphabet.count(line[i]) == 1) {
                word = word + line[i];
                i++;
            }
            std::string last_word;
            if (line.back() == '-' && alphabet.count(line[line.length() - 2]) == 1) {
                std::getline(input1, line);
                //std::cout << "Перенос: " << line << std::endl;
                int c = 0;
                while (alphabet.count(line[c]) == 1) {
                    last_word = last_word + line[c];
                    c++;
                }
                word = word + last_word;
                i = c;
                len = line.length();
            }
            std::cout << word << ' ';
            if (std::count(forbidden_words.begin(), forbidden_words.end(), toLower(word))) {
                size_t len = word.length();
                word = "";
                for (int n = 0; n < len; n++) {
                    word += "*";
                }
            }
            i++;
            output << word << ' ';
            word = "";
        }
        output << std::endl;
    }
    input1.close();
    input2.close();
    output.close();
    return 0;
}
