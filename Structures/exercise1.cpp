/*
 * Exercise 1: Simple structure - Declaration and output.
 * Create a Book structure with fields title (string), author (string), and year (int).
 * In the main function, create a variable of this structure, fill the fields with values
 * (book title, author, year of publication), and print them to the screen.
 * Make sure that the fields are accessed using the . operator.
 */

#include <iostream>

using namespace std;

// The main part of this code is structure
struct Book {
    string title;
    string author;
    int year;
};

int main(){
    Book b1;
    b1.title = "Lord of the rings"; // . operator
    b1.author = "J.R.R. Tolkien"; // . operator
    b1.year = 1995; // . operator
    cout << "Name of a book: " << b1.title <<
    "\nAuthor of a book: " << b1.author <<
    "\nYear when book published " << b1.year << endl;
}
