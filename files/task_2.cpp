/*
Напишите программу, которая берет введенное пользователем имя файла и создает новый файл с тем же содержимым, 
но со всеми буквами, преобразованными в верхний регистр.
*/ 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Введите название файла: ";
    cin >> filename;

    ifstream input(filename);
    if (!input.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    string outputFilename = "new.txt";
    ofstream output(outputFilename);
    if (!output.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    string line;
    while (getline(input, line)) {
        for (char& c : line) {
            c = toupper(c);
        }
        output << line << endl;
    }
    input.close();
    output.close();
    return 0;
}
