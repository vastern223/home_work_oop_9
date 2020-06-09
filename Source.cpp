#include<iostream>
#include "Library.h"
#include "Book.h"
using namespace std;

int main()
{
	Library Ok;
	Book b1("vasa", "flecks", "flecks_house", 2000, 100);
	Book b3("vlad", "lol", "kek", 768, 880);
	Book b4("xto", "kavo", "boom", 227, -20);
	Ok.Add_book(b1);
	Ok.Add_book(b3);
	Ok.Add_book(b4);
	Ok.Print_Library();
	cout << "\n\n\n\n\n\n";
	Ok.Sort_book_publishing_house();
	Ok.Print_Library();
	cout << endl;
	Ok.Search_by_authors("fleck");

	system("pause");
	return 0;
}