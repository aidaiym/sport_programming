/*
3. Известны количество денег в сомах, а также курсы доллара и рубля к
сому. Написать функцию, определяющую количество денег в долларах и рублях.
Функция имеет 5 параметров: курс доллара, курс рубля, количество денег в
сомах, в долларах и рублях.
*/

#include <iostream>
#include <cmath>

using namespace std;
void exchangeRate(double som, double ruble, double dollar, double *amount_dollar, double *amount_ruble);

int main()
{
    double s, d, r, a_d, a_r;
    cout << "Som" << endl;
    cin >> s;
    cout << "Ruble" << endl;
    cin >> r;
    cout << "Dollar" << endl;
    cin >> d;
    exchangeRate(s, r, d, &a_d, &a_r);
    cout << "Количество денег в долларах= " << a_d << endl;
    cout << "Количество денег в рублях= " << a_r << endl;
    return 0;
}

void exchangeRate(double som, double ruble, double dollar, double *amount_dollar, double *amount_ruble)

{
    *amount_dollar = som / dollar;
    *amount_ruble = som / ruble;
}