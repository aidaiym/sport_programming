/*
Напишите программу, которая читает текстовый файл, содержащий список чисел, и находит в нем наибольшее и наименьшее числа.
 Программа должна вывести как наибольшее, так и наименьшее число, найденное в файле.
*/ 

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string filename;
    cout << "Введите название файла: ";
    cin >> filename;

    ifstream fileIn(filename);
    if (!fileIn.is_open()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    vector<int> numbers;
    int number;
    while (fileIn >> number) {
        numbers.push_back(number);
    }

    fileIn.close();

    if (numbers.empty()) {
        cout << "Ошибка" << endl;
        return 1;
    }

    int minNumber = *min_element(numbers.begin(), numbers.end());
    int maxNumber = *max_element(numbers.begin(), numbers.end());

    cout << "Hаименьшее число: " << minNumber << endl;
    cout << "Hаибольшее число: " << maxNumber << endl;

    return 0;
}
