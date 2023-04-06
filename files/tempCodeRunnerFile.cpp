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
    cout << "Enter filename: ";
    cin >> filename;

    ifstream input(filename);
    if (!input.is_open()) {
        cout << "Error: Failed to open file." << endl;
        return 1;
    }

    string outputFilename = "output.txt";
    ofstream output(outputFilename);
    if (!output.is_open()) {
        cout << "Error: Failed to create output file." << endl;
        return 1;
    }

    string line;
    while (getline(input, line)) {
        for (char& c : line) {
            c = toupper(c);
        }
        output << line << endl;
    }

    cout << "File successfully processed. Output written to " << outputFilename << endl;

    input.close();
    output.close();
    return 0;
}
