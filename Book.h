#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	string name;
	string authors;
	string publishing_house;
	int year;
	int rating;
public:
	Book();
	Book(string name, string authors, string publishing_house, int year, int rating);
	void Print_Book()const;
	friend class Library;
};

