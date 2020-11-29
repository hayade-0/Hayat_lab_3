#include<iostream>
using namespace std;
int return_length(char *strPointer )
{
	int length = 0;
	for (int i = 0;i < 100;i++)
	{
		if (*(strPointer + i) != '\0')
			length += 1;
		else
			break;
	}
	return length;
}
/*int main()
{
	char arr[] = "computer";
	char* ptr = arr;
	int strLength = return_length(ptr);
	cout << "the length of " << *ptr << " is: " << strLength << endl;
}*/