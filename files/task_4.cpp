/*
Напишите программу, которая читает текстовый файл и заменяет все вхождения указанного слова другим указанным словом. 
Программа должна вывести измененный текст.

*/ 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, oldWord, newWord;
    cout << "Введите название файла: ";
    cin >> filename;

    ifstream fileIn(filename);
    if (!fileIn.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    cout << "Введите слово для замены: ";
    cin >> oldWord;
    cout << "Введите заменяющее слово: ";
    cin >> newWord;

    string line;
    string output;
    while (getline(fileIn, line)) {
        size_t pos = 0;
        while ((pos = line.find(oldWord, pos)) != string::npos) {
            line.replace(pos, oldWord.length(), newWord);
            pos += newWord.length();
        }
        output += line + "\n";
    }

    fileIn.close();

    ofstream fileOut(filename);
    fileOut << output;
    fileOut.close();

    cout << "Замененный " << oldWord << " c " << newWord << " в " << filename << endl;

    return 0;
}
