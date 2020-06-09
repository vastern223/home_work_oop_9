#include "Library.h"

Library::Library() : arr_Book(nullptr), size_Book(0) {}

void Library::Add_book(const Book& other)
{
	Book* arr_new = new Book[size_Book + 1];

	for (int i = 0; i < size_Book; i++)
	{
		arr_new[i] = arr_Book[i];
	}
	arr_new[size_Book] = other;
	delete[] arr_Book;
	++size_Book;
	arr_Book = arr_new;
}

void Library::Sort_book_year()
{
	for (int i = 0; i < size_Book - 1; i++) {
		for (int j = 0; j < size_Book - i - 1; j++) {
			if (arr_Book[j].year > arr_Book[j + 1].year) {

				swap(arr_Book[j], arr_Book[j + 1]);
			}
		}
	}

}

void Library:: Sort_book_name()
{
	for (int i = 0; i < size_Book - 1; i++) {
		for (int j = 0; j < size_Book - i - 1; j++) {
			if (arr_Book[j].name > arr_Book[j + 1].name) {

				swap(arr_Book[j], arr_Book[j + 1]);
			}
		}
	}
}

void  Library::Sort_book_authors()
{
	for (int i = 0; i < size_Book - 1; i++) {
		for (int j = 0; j < size_Book - i - 1; j++) {
			if (arr_Book[j].authors > arr_Book[j + 1].authors) {

				swap(arr_Book[j], arr_Book[j + 1]);
			}
		}
	}

}

void Library::Sort_book_publishing_house()
{
	for (int i = 0; i < size_Book - 1; i++) {
		for (int j = 0; j < size_Book - i - 1; j++) {
			if (arr_Book[j].publishing_house > arr_Book[j + 1].publishing_house) {

				swap(arr_Book[j], arr_Book[j + 1]);
			}
		}
	}
}

void Library::Sort_book_rating()
{
	for (int i = 0; i < size_Book - 1; i++) {
		for (int j = 0; j < size_Book - i - 1; j++) {
			if (arr_Book[j].rating > arr_Book[j + 1].rating) {

				swap(arr_Book[j], arr_Book[j + 1]);
			}
		}
	}
}

void Library::Print_Library()const
{
	for (int i = 0; i < size_Book; i++)
	{
		arr_Book[i].Print_Book();
	}
}

void Library::Search_by_name(string name)const
{
	for (int i = 0; i < size_Book; i++)
	{
		if (arr_Book[i].name.find(name) != string::npos)
		{
			arr_Book[i].Print_Book();
		}
	}

}

void Library::Search_by_authors(string authors)const
{
	for (int i = 0; i < size_Book; i++)
	{
		if (arr_Book[i].name.find(authors) != string::npos)
		{
			arr_Book[i].Print_Book();
		}
	}

}

void Library::Search_by_publishing_house(string publishing_house)const
{
	for (int i = 0; i < size_Book; i++)
	{
		if (arr_Book[i].name.find(publishing_house) != string::npos)
		{
			arr_Book[i].Print_Book();
		}
	}

}

Library::~Library()
{
	if (arr_Book != nullptr)
		delete[] arr_Book;
}


