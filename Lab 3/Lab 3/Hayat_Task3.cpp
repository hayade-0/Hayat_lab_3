#include<iostream>
using namespace std;
void swap_sort(int* a, int* b, int* c, bool order)
{
	int temp = 0;
	if (order == 0)//descending
	{

		if (*a >= *c && *c >= *b) {
			temp = *c;
			*c = *b;
			*b = temp;
		}
		if (*b >= *a && *a >= *c) {
			temp = *a;
			*a = *b;
			*b = temp;
		}
		if (*b >= *c && *c >= *a) {
			temp = *b;
			*b = *a;
			*a = *c;
			*c = temp;
		}
		if (*c >= *b && *b >= *a) {
			temp = *c;
			*c = *a;
			*a = temp;
		}
		if (*c >= *a && *a >= *b) {
			temp = *c;
			*c = *a;
			*a = *b;
			*b = temp;
		}

	}
	else
	{
		if (*a <= *c && *c <= *b) {
			temp = *c;
			*c = *b;
			*b = temp;
		}
		if (*b <= *a && *a <= *c) {
			temp = *a;
			*a = *b;
			*b = temp;
		}
		if (*b <= *c && *c <= *a) {
			temp = *a;
			*a = *b;
			*b = *c;
			*c = temp;
		}
		if (*c <= *b && *b <= *a) {
			temp = *c;
			*c = *a;
			*a = temp;
		}
		if (*c <= *a && *a <= *b) {
			temp = *c;
			*c = *b;
			*b = *a;
			*a = temp;
		}

	}
}
/*
int main() {
	bool oneMore = true;
	bool order;
	int a, b, c;
	while (oneMore == true)
	{
		cout << ("give a (0 to quit)") << endl;
		cin >> a;
		if (a == 0) {
			cout << "Good Bye!";
			oneMore = false;
			break;
		}
		cout << ("give b ") << endl;
		cin >> b;
		cout << ("give c") << endl;
		cin >> c;
		cout << "Sort ascending/descending (1/0)";
		cin >> order;
		int* ptr1 = &a;
		int* ptr2 = &b;
		int* ptr3 = &c;

		swap_sort(ptr1, ptr2, ptr3, order);
		cout << "result:  " << a << " ," << b << " ," << c << ".";
	}
}*/