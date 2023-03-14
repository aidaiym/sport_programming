/*
Create a struct named "Student" that contains fields for name, major, and GPA.
Write a function that takes an array of Student objects as input and returns the Student object with the highest GPA.
Then, create an array of 5 Student objects and populate it with data.
Call the function to find the Student object with the highest GPA.
*/

#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    string major;
    double gpa;
    Student(string n,
            string m,
            double g)
    {
        name = n;
        major = m;
        gpa = g;
    }
};

Student highestGPA(Student students[], int size)
{
    Student highest = students[0];

    for (int i = 1; i < size; i++)
    {
        if (students[i].gpa > highest.gpa)
        {
            highest = students[i];
        }
    }

    return highest;
}

int main()
{
    Student students[5] = {
        Student("Begai", "History", 3.5),
        Student("Eldiyar", "Computer Science", 3.99),
        Student("Aidaiym", "Computer Science", 3.9),
        Student("Manas", "BA", 2.8),
        Student("Mek", "Low", 2.4),

    };
    Student highest = highestGPA(students, 5);
    cout << "The student with the highest GPA is " << highest.name << " with a GPA of " << highest.gpa << "." << endl;

    return 0;
}
