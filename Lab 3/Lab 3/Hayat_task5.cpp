#include<iostream>
using namespace std;

void replace_chars(char* str, char search, char replacement)
{
	int index = 0;
	while (*(str + index) != '\0')
	{
		char currentChar = *(str + index);
		if (currentChar == search)
			*(str+index) = replacement;
		index += 1;

	}
	cout << str << endl;
}
/*
int main()
{
	char str[] = "HayatAdam";
	char search = 'a';
	char replacement = 'U';
	replace_chars(str, search, replacement);
	cout << str << endl;

}*/