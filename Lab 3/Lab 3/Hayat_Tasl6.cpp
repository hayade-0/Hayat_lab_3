#include<iostream>
#include<cstring>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
void initialise(vector<string>* database,string confirm)
{
	
	if (confirm == "yes") {
		(*database).clear();
	}
}

void insert(vector<string>* database)
{
	bool repeating = true;
	while (repeating == true)
	{
		string newName;
		cout << "enter name to insert. inter Q or q to stop" << endl;
		cin >> newName;
		if ((newName == "Q" || newName == "q") && newName.length() == 1) {
			repeating = false;
			break;
		}
		else
			(*database).push_back(newName);

	}
}

void search(const vector<string>* database,string searchKey)
{
	int NoN =0;
	for (int i = 0;i < (*database).size();i++) {
		if (database->at(i).find(searchKey) != string::npos)
		{
			cout << database->at(i) << " ";
			NoN = 1;
		}
		if ((i == (*database).size() - 1) && NoN == 0)
			cout << "NONE" << endl;




	}
}

void delet(vector<string>* database, string rabbishName)
{
	
	
	for (int i = 0;i < (*database).size();i++) {
		if (rabbishName == database->at(i))
			(*database).erase((*database).begin() + i);

	}
}

void print(const vector<string>* database)
{
	for (int i = 0;i < (*database).size();i++) {
		cout << database->at(i) << " ";
	}
	cout << endl;
}
void save(const vector<string>* database, string fileAdress)
{	
	ofstream file;
	file.open(fileAdress, ios::trunc);
	if (file.is_open())
		for (int i = 0;i< (*database).size();i++)
			file << database->at(i) << "\n";
	else
		cout << "cant open the file" << endl;
	file.close();
}
void load(vector<string>* database, string fileAdress)
{
	ifstream file;
	string line;
	file.open(fileAdress);
	if (!file)
		cout << "Error reading file" << endl;
	else
	{
		while (std::getline(file, line))
			(*database).push_back(line);
	}

}

int main()
{
	bool running = true;
	string fileAdress;
	vector <string> names;
	string rabbishName;
	string confirm;
	string searchKey;
	string selection;
	while (running == true) {
		cout << " MENU:" << endl << endl;
		cout << "initialise \ninsert \n search\n delete \n print \n save \n load \n quit \n   Make your choice :" << endl;
		cin >> selection;
		if (selection == "initialise")
		{
			cout << "are you sure? yes/no" << endl;
			cin >> confirm;
			initialise(&names, confirm);
		}
		if (selection == "insert")
			insert(&names);
		if (selection == "search")
		{
			int NoN = 0;
			cout << "insert searchKey" << endl;
			cin >> searchKey;
			cout << "the name that is found in the data bease are: ";
			search(&names, searchKey);
		}
		if (selection == "delete")
		{
			cout << "enter name to delet" << endl;
			cin >> rabbishName;
			delet(&names, rabbishName);
		}
		if (selection == "print")
			print(&names);
		if (selection == "save")
		{
			cout << "enter the file adress \n ";
			cin.ignore();
			getline(cin, fileAdress);
			save(&names, fileAdress);
		}
		if (selection == "load")
		{
			cout << "enter the file location" << endl;
			cin.ignore();
			getline(cin, fileAdress);
			load(&names, fileAdress);
		}
		if (selection == "quit")
		{
			cout << "Good Bay!";
			break;
		}
	}
}