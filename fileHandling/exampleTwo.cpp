/*
Program to create and write to a file. The contents in the file is read and outputted in console.
*/
#include <iostream> 
#include <fstream> 

using namespace std;

int main(){
	int size = 5;
	string data[size];
	
	//Asking user to enter a file name
	string filename;
	cout <<"Please enter the file name" << endl;
	cin >> filename;
	
	//Creating a file
	ofstream myOutput (filename);
	
	//Asking user to enter five strings 
	for(int i=0;i<size;i++)
	{
		cout << "Enter a string: " ;
		cin >> data[i];
	}
	
	//Dispalying the output for every other one 
	for(int i=0;i<size;i=i+2)
	{
		myOutput << data[i] << endl;
	}
	
	//Closing the file 
	myOutput.close();	
	
	cout <<endl; 
	
	//Reading from the file 
	cout << "Reading from the file " << endl;
	ifstream myInput (filename);
	
	//read the file while its not the end (myInput.eof())
	//Create a string variable line 
	//Inputting the string line (the array) using myInput
	//Dispalying the values of line from the file that was read in this loop
	while (!myInput.eof()){
		string line ;
		myInput >> line;
		cout << line << endl;
	}
	
	//Closing the file
	myInput.close();
	
	return 0;
}