#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>Names;
vector<string>Phones;

void NewContact(){
	string phone;
	string name;
	cout << "\n\nEnter a name for the contact: ";
	cin >> name;
	cout << "\nEnter a phone number for the contact: ";
	cin >> phone;
	cout << "\nThe ID for this contact will be " << Names.size() << endl << endl;
	Names.push_back(name);
	Phones.push_back(phone);
}
void SearchByID(){
	int value;
	cout << "\n\nEnter the ID of the contact to search: ";
	cin >> value;
	if(value >= Names.size()){
		cout << "This ID does not exist \n\n"; 
		return;
	}
		cout << "Information for contact " << value << endl;
		cout << "Name: " << Names[value] << endl;
		cout << "Phone No: "<< Phones[value] << endl;
}
void SearchByName(){
	bool found = false;
	string name;
	cout << "\n\nEnter the name to search: ";
	cin >> name;
	for(int i = 0; i != Names.size(); i++){
		if(Names[i] == name){
			cout << "Name: " << Names[i] << endl;
			cout << "Phone No: " << Phones[i] << endl;
			found = true;
		}
	}
	if(!found){
		cout << "No contact was found with this name!\n\n";
	}
}
int main(){
	int sel = 0;
	while(true){	
		cout << "My Agenda++\n\n";
		cout << "Enter number to execute an option\n\n"; 
		cout << "1.Add new contact\n";
		cout << "2.Search by ID\n";
		cout << "3.Search by Name\n";
		cout << "4.Exit\n";
		cin >> sel;
		if(sel == 4){
			break;
		}else{
			switch(sel){
			case 1: NewContact();break;
			case 2: SearchByID();break;
			case 3: SearchByName();break;
			default: break;
		}
		}
		
	}
	return 0;
}
