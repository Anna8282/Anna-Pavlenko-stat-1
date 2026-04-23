#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip> 
int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Помилка: не вдалося відкрити вхідний файл." << std::endl;
        return 1;
    }

    std::vector<double> numbers;
    std::string temp;

    while (std::getline(inputFile, temp, ';')) {
        try {
            if (!temp.empty()) {
                numbers.push_back(std::stod(temp));
            }
        } catch (...) {
            continue;
        }
    }
    inputFile.close();

    std::ofstream outputFile("output.txt");
    
    outputFile << std::scientific << std::setprecision(4);

    for (double val : numbers) {
        if (val >= -1.0 && val <= 1.0) {
            double result = std::asin(val);
            outputFile << result << std::endl;
        } else {
            continue;
        }
    }

    outputFile.close();
    std::cout << "Обробка завершена. Результати збережені в output.txt." << std::endl;

    return 0;
}
