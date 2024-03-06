#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;

std::string reverse(const std::string& word) {
    std::string reversed = word;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

std::string removeVowels(const std::string& word) {
    std::string result;
    std::string vowels = "aeiouAEIOU";
    for (char c : word) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

std::string removeConsonants(const std::string& word) {
    std::string result;
    std::string vowels = "aeiouAEIOU";
    for (char c : word) {
        if (vowels.find(c) != std::string::npos) {
            result += c;
        }
    }
    return result;
}

std::string shuffle(const std::string& word) {
    std::string shuffled = word;
    std::random_shuffle(shuffled.begin(), shuffled.end());
    return shuffled;
}

int main() {

    setlocale(LC_ALL, "Russian");

    srand(time(0));
    std::string word;
    int choice;
    std::cout << "Напишите слово: ";
    std::cin >> word;
    std::cout << "Выберите действие:\n"
        << "1. Задом наперед\n"
        << "2. Слово без гласных\n"
        << "3. Слово без согласных\n"
        << "4. Рандомно раскидывать буквы заданного слова\n"
        << "выбор: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Задом наперед: " << reverse(word) << std::endl;
        break;
    case 2:
        std::cout << "Без гласных: " << removeVowels(word) << std::endl;
        break;
    case 3:
        std::cout << "Без согласных: " << removeConsonants(word) << std::endl;
        break;
    case 4:
        std::cout << "рандомно: " << shuffle(word) << std::endl;
        break;
    default:
        std::cout << "Неверный выбор!" << std::endl;
    }
    return 0;
}