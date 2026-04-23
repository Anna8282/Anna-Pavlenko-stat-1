#include <iostream>
#include <string>
#include <cctype> 

int main() {
    std::string sentence;

    std::cout << "Введіть речення латиницею: ";
    std::getline(std::cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (i == 0 || sentence[i - 1] == ' ') {
            sentence[i] = toupper(sentence[i]);
        }
    }

    std::cout << "Оновлене речення: " << sentence << std::endl;

    return 0;
}