/*
N школьников желают разделить K яблок между собой. Они рассматривают два способа дележа:

разделить яблоки поровну так, чтобы каждому досталось максимальное количество яблок, при этом оставшиеся яблоки можно положить в корзину;
разделить все яблоки так, чтобы количество яблок, доставшихся любым двум школьникам, отличалось бы не более, чем на 1. В этом случае могут обидеться те из них, кому достанется яблок меньше, чем другим.

*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int apples, people, amount_d, amount_basket, number_offended;
    cin >> apples >> people;
    amount_d = people / apples;
    amount_basket = people % apples;
    if (amount_basket != 0)
    {
        number_offended = apples - amount_basket;
    }
    else
    {
        number_offended = 0;
    }
    cout << amount_d << " " << amount_basket << " " << number_offended << endl;
    return 0;
}
