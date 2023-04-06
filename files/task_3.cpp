/*
Создайте программу, которая читает файл со списком чисел и вычисляет среднее значение чисел.
 Программа должна вывести среднее значение.
*/ 

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    string filename;
    cout << "Введите название файла:";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    vector<double> numbers;
    double num;
    while (file >> num) {
        numbers.push_back(num);
    }

    if (numbers.empty()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double mean = sum / numbers.size();

    cout << "Cреднее значение чисел: " << mean << endl;

    file.close();
    return 0;
}
