/*
Создайте программу, которая читает текстовый файл и подсчитывает количество слов в нем. 
Программа должна вывести общее количество слов, найденных в файле.
*/ 
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Введите название файла: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    int count = 0;
    string word;
    while (file >> word) {
        count++;
    }

    cout << "Oбщее количество слов, найденных в файле: " << count << endl;

    file.close();
    return 0;
}
