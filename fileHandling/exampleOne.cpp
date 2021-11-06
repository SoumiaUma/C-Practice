/*
Program to create and write a file
*/
#include <iostream> 
#include <fstream> 


using namespace std;

int main(){
	//Creating the size of the file (how many strings could be written to the file)
	int size = 10;
	//Declaring an array of size with size of the file to store the strings inputted from user
	string data[size];
	
	//Creating a variable to store the name of the file
	string filename;
	//Asking user input for file name
	cout <<"Please enter the file name" << endl;
	//Getting user input for file name
	cin >> filename;
	
	//Creating a file with the user's file name
	ofstream myOutput (filename);
	
	//Loop to ask for user to enter string to put in the file
	for(int i=0;i<size;i++)
	{
		cout << "Enter a string: " ;
		cin >> data[i];
	}
	
	//Dispalying the strings inputted by the user 
	for(int i=0;i<size;i++)
	{
		myOutput<< data[i] << endl;
	}
	//Closing the file to make sure all data remianing in output buffer is written to the output file
	myOutput.close();	
	return 0;
}