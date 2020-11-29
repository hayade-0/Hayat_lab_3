#include<iostream>
using namespace std;
void swap_sort_ptr_addr(int** a, int** b, int** c, bool order)
{
	int temp = 0;
	if (order == 0)//descending
	{

		if (**a >= **c && **c >= **b) {
			temp = **c;
			**c = **b;
			**b = temp;
		}
		if (**b >= **a && **a >= **c) {
			temp = **a;
			**a = **b;
			**b = temp;
		}
		if (**b >= **c && **c >= **a) {
			temp = **b;
			**b = **a;
			**a = **c;
			**c = temp;
		}
		if (**c >= **b && **b >= **a) {
			temp = **c;
			**c = **a;
			**a = temp;
		}
		if (**c >= **a && **a >= **b) {
			temp = **c;
			**c = **a;
			**a = **b;
			**b = temp;
		}

	}
	else
	{
		if (**a <= **c && **c <= **b) {
			temp = **c;
			**c = **b;
			**b = temp;
		}
		if (**b <= **a && **a <= **c) {
			temp = **a;
			**a = **b;
			**b = temp;
		}
		if (**b <= **c && **c <= **a) {
			temp = **a;
			**a = **b;
			**b = **c;
			**c = temp;
		}
		if (**c <= **b && **b <= **a) {
			temp = **c;
			**c = **a;
			**a = temp;
		}
		if (**c <= **a && **a <= **b) {
			temp = **c;
			**c = **b;
			**b = **a;
			**a = temp;
		}

	}
}

/*
int main() {
	int a = 7, b = 6, c = 1;
	int* p1 = &a, * p2 = &b, * p3 = &c;
	swap_sort_ptr_addr(&p1, &p2, &p3, true);
	cout << *p1 << " " << *p2 << " " << *p3;    // Points "1 6 7"
}
*/