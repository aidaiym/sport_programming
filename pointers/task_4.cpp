/*
4. Напишите функцию, которая воспринимает время как три целых
аргумента (часы, минуты я секунды) и возвращает количество секунд,
прошедших со времени, когда часы в последний раз показали 12.
Используйте эту функцию для вычисления интервала времени в секундах
между двумя моментами, находящимися внутри двенадцатичасового цикла.
*/

#include <iostream>
#include <cmath>

using namespace std;

void time(int hour, int minute, int second, int *num_sec);

int main()
{

    int h, m, s, n_s;
    cout << "Enter time" << endl;
    cin >> h >> m >> s;
    time(h, m, s, &n_s);
    cout << "Интервал времени в секундах= " << n_s << endl;
    return 0;
}

void time(int hour, int minute, int second, int *num_sec)
{
    *num_sec = 3600 * 24 - (hour * 3600 + (minute * 60) + second);
}
