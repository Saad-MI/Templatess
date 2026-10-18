// C++ templlate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;


template <typename T>
vector<T> vec_fill(T Elements) {
	vector<T> filledup;
	for (int i = 0; i < 10;i++) {
		filledup.push_back(Elements + i);

	}
	return filledup;
}


template <typename T>
void order(T& a, T& b, T& c) {
	T swap;
	if (a < b) {
		swap = a;
		a = b;
		b = swap;
	}
	if (a < c) {
		swap = a;
		a = c;
		c = swap;
	}
	if (b < c) {
		swap = b;
		b = c;
		c = swap;
	}


}


template <typename T>
T search(T begin, T end, int elem) {
	for (T i = begin; i != end; i++) {
		if (*i == elem) {
			return i;
		}
	}
	return end;
}



int main()
{
	vector<int> test = vec_fill(5);
	assert(test.size() == 10);
	for (int i = 1; i < test.size(); i++) {
		assert(test[i] - test[i - 1] == 1);
	}

	vector<double> test2 = vec_fill(5.5);
	assert(test2[1] == 6.0);

	vector<char> test2 = vec_fill('c);
		assert(test2[1] == 'd');


	int a = 4;
	int b = 6;
	int c = 1;
	order(a, b, c);
	assert(a == 6 && b == 4 && c == 1);


	char a = 'l';
	char b = 'm';
	char c = 'n';
	order(a, b, c);
	assert(a == 'n' && b == 'm' && c == 'l');

	string a = "Blueberry";
	string b = "chick";
	string c = "apple";
	order(a, b, c);
	assert(a == "chick" && b == "Blueberry" && c == "apple");

	vector<int> testing = { 3, 8, 15, 21, 23, 42 };
	assert(search(v.begin(), v.end(), 21) == v.begin() + 3);

	

}

