/*
5. Разработайте следующие целые функции:
а) функцию Celsius, которая возвращает температуру по Цельсию,
эквивалентную температуре по Фаренгейту;
б) функцию Fahrenheit, которая возвращает температуру по
Фаренгейту, эквивалентную температуре по Цельсию;
a) используйте эти функции для написания программы, которая
печатает таблицу, показывающую эквивалент по Фаренгейту всех
температур по Цельсию от 0 до 100 градусов и эквивалент по Цельсию всех
температур по Фаренгейту от 32 до 212 градусов. Сделайте листинг в
аккуратном табулированном формате, с минимальным количеством строк
при сохранении хорошей читаемости.
*/
#include <iostream>
#include <cmath>

using namespace std;


void Celsuis_Temperature(int fahrenheit, int *t_celsius);
void Fahrenheit_Temperature(int celcius, int *t_fahrenheit);

int main()
{
    int t_f = 31, t_c = 0;
    int res_c, res_f;
    while (t_c < 100)
    {
        Fahrenheit_Temperature( t_c, &res_c);
        cout << "Цельсий= " << t_c << " Фаренгейт=  " << res_c << endl;
        t_c++;
    }
    while (t_f < 212)
    {
        Celsuis_Temperature(t_f,  &res_f);
        cout << "Фаренгейт= " << t_f << " Цельсий = " << res_f << endl;
        t_f++;
    }
    return 0;
}

void Celsuis_Temperature(int fahrenheit, int *t_celsius)

{
    *t_celsius = (fahrenheit - 32) * 5 / 9;
}

void Fahrenheit_Temperature(int celcius, int *t_fahrenheit)
{
    *t_fahrenheit = (celcius * 9 / 5) + 32;
}