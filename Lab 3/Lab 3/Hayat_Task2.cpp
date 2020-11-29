#include<iostream>
using namespace std;
float average_salary(int total_employee,float const* salary)
{
	float average;
	float sum = 0;
	for (int i = 0;i < total_employee;i++)
	{
		sum += *(salary + i);
	}
	average = sum / total_employee;
	return average;
}
/*
int main()
{
	int total_employee;
	float averageSalary;
	cout << "enter the total number of employee in your department" << endl;
	cin >> total_employee;
	float* salary = new float[total_employee];
	for (int i = 0;i < total_employee;i++)
	{
		cout << "Enter Employee number: " << i + 1 << " salary" << endl;
		cin >> salary[i];
	}
	averageSalary = average_salary(total_employee, salary);
	cout << " the Average salary in your department is "<<averageSalary << endl;

}*/