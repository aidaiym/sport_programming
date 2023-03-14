/*
Create a struct named "Book" that contains fields for title, author, and publication year. 
Write a function that takes an array of Book objects as input and returns the number of books published in a given year. 
Then, create an array of 5 Book objects and populate it with data. 
Call the function to find the number of books published in a given year.
*/ 

#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int publicationYear;
    Book( string t,
    string a,
    int p){
title = t;
author = a;
publicationYear = p;
    }
};

int countBooksByYear(Book books[], int size, int year) {
    int count = 0; 

    for (int i = 0; i < size; i++) {
        if (books[i].publicationYear == year) {
            count++; 
        }
    }

    return count;
}

int main() {

    Book books[5] = {
        Book("Саманчынын жолу", "Чынгыз Айтматов", 1963),
        Book("Махабат", "Алыкул Осмонов", 1951),
        Book("Белегим", "Аалы Токомбаев", 1925),
        Book("Дүйнө", "Сүйүнбай Эралиев", 1991),
        Book("Туголбай сыдыкбеков", "Күрөш", 1991),

    };
    int count = countBooksByYear(books, 5, 1991);
    cout << "1991-жылы чыккан китептердин саны: " << count  << endl;

    return 0;
}
