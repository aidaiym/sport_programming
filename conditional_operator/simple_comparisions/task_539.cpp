/*
На свой день рождения Петя купил красивый и вкусный торт, который имел идеально круглую форму.
Петя не знал, сколько гостей придет на его день рождения, поэтому вынужден был разработать алгоритм, согласно которому он сможет быстро разрезать торт на N равных частей.
Следует учесть, что разрезы торта можно производить как по радиусу, так и по диаметру.
Помогите Пете решить эту задачу, определив наименьшее число разрезов торта по заданному числу гостей.
*/
#include <iostream>
using namespace std;
main()
{
    int N;
    cin >> N;
    if (N > 1)
    {
        if (N % 2 == 0)
            cout << N / 2;
        if (N % 2 != 0)
            cout << N;
    }
    else
        cout << "0";
}