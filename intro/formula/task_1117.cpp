/*
В некоторой школе занятия начинаются в 9:00. 
Продолжительность урока – 45 минут, после 1-го, 3-го, 5-го и т.д. уроков перемена длится 5 минут, а после 2-го, 4-го, 6-го и т.д. – 15 минут.
По номеру урока требуется определить время его окончания.
*/ 

#include <iostream>
using namespace std;
int main()
{
    int l, minute, hour;
    cin >> l;
    if(l % 2 == 0){
minute  = (l * 45); 
    }
  
    return 0;
}