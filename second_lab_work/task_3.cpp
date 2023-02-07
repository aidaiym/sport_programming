/*
3. Известны количество денег в сомах, а также курсы доллара и рубля к
сому. Написать функцию, определяющую количество денег в долларах и рублях.
Функция имеет 5 параметров: курс доллара, курс рубля, количество денег в
сомах, в долларах и рублях.
*/

#include <iostream>
#include <cmath>

using namespace std;

int exchangeRate(float dollar, float ruble, float som)
{
    float amount_dollar = som / dollar;
    float amount_ruble = som / ruble;
    cout << "Количество денег в долларах= " << amount_dollar << endl;
    cout << "Количество денег в рублях= " << amount_ruble << endl;
    return 0;
}

int main()
{
    exchangeRate(90, 1.01, 2000);
    return 0;
}
