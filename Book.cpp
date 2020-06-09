#include "Book.h"

Book::Book()
{
	name = "no_name";
	authors = "no_name";
	publishing_house = "no_name";
	year = 0;
	rating = 0;
}
Book::Book(string name,string authors, string publishing_house, int year, int rating)
{
	this->name = name;
	this->authors = authors;
	this->publishing_house = publishing_house;
	this->year = year;
	this->rating = rating;
}
void Book::Print_Book()const
{
	cout << " Name:" << name << endl; 
	cout << " Authors:" << authors << endl;
	cout << " Publishing house:" << publishing_house << endl;
	cout << " Year:" << year << endl;
	cout << " Rating:" << rating << endl;
}