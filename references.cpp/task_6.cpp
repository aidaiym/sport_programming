/*
6. Напишите функцию quality_Points, которая вводит среднюю
оценку студента и если она в интервале 90-100, то возвращает 4, если в
интервале 80-89, возвращает 3, если в интервале 70-79, возвращает 2,
если в интервале 60-69, возвращает 1, и если она &lt;60, то возвращает 0.
*/
#include <iostream>
#include <cmath>

using namespace std;

void quality_Points(int &);

int main()
{
    int number;
    cout<<"Write your Point"<<endl;
    cin>>number;
    quality_Points(number);
    return 0;
}

void quality_Points(int& point)
{
    if (90 <= point && point <= 100)
    {
        cout << "Ваш балл= " << point << " Ваша оценка= 4 " << endl;
    }
    else if (80 <= point && point <= 89)
    {
        cout << "Ваш балл= " << point << " Ваша оценка= 3 " << endl;
    }
    else if (70 <= point && point <= 79)
    {
        cout << "Ваш балл= " << point << " Ваша оценка= 2 " << endl;
    }
    else if (60 <= point && point <= 69)
    {
        cout << "Ваш балл= " << point << " Ваша оценка= 1 " << endl;
    }
    else if (point < 60)
    {
        cout << "Ваш балл= " << point << " Ваша оценка= 0 " << endl;
    }
}