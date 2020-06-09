#pragma once
#include "Book.h"
class Library
{
private:
	Book* arr_Book;
	int size_Book;

public:
	Library();
	void Add_book(const Book& other);
	void Sort_book_year();
	void Sort_book_name();
	void Sort_book_authors();
	void Sort_book_publishing_house();
	void Sort_book_rating();
	void Print_Library()const;
	void Search_by_name(string name)const;
	void Search_by_authors(string authors)const;
	void Search_by_publishing_house(string publishing_house)const;
	~Library();

};

