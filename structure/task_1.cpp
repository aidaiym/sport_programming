/*
1. Create a struct named "Person" that contains fields for name, age, and occupation.
Create an array of 10 Person objects and populate it with data.
Then, loop through the array and print out the name and occupation of each person.
*/
#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
    string occupation;
    Person(string n, int a, string o)
    {
        name = n;
        age = a;
        occupation = o;
    }
};

int main()
{
    Person people[10] = {
        Person("Aidaiym", 20, "Mobile Developer"),
        Person("Alina", 20, "Data Scientist"),
        Person("Begai", 22, "Pedagog"),
        Person("Eldiyar", 23, "Flutter Developer"),
        Person("Turat", 50, "Mentor"),
        Person("Asan", 28, "Manager"),
        Person("Manas", 35, "Teacher"),
        Person("Salih", 29, "Software Developer"),
        Person("Jibek", 22, "Assistant"),
        Person("Indira", 41, "Mother")};
    for (int i = 0; i < 10; i++)
    {
        cout << people[i].name << " - " << people[i].occupation << endl;
    }

    return 0;
}
