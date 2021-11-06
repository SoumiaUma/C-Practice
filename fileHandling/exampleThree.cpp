#include <iostream> 
#include <fstream> 


using namespace std;

int main(){
	/*Create a program to store student names and grades (letter) 
	in two different arrays and store them in a file then read both files together
	Displaying the student's name with their mark beside it) 
	*/
	int size = 4;
	//Creating and array for the student names
	string name[size];
	//Creating an array for the student marks (letter grade)
	char mark[size];
	
	//Asking user to enter a file name for students' names 
	string filename;
	cout <<"Please enter a file name to store student's name" << endl;
	cin >> filename;
	
	//Asking user to enter a file name for the students' marks 
	string filename2;
	cout <<"Please another enter file name to store the marks" << endl;
	cin >> filename2;
	
	//Creating a file for students' names
	ofstream myOutput (filename);
	//Creating a file for students' marks
	ofstream myOutput2 (filename2);
	
	//Asking user to enter names of the four students
	for(int i=0;i<size;i++)
	{
		cout << "Enter name of student " << (i+1) << ": " ;
		cin >> name[i];
	}
	//Asking user to enter the marks of the four students 
	for(int i=0;i<size;i++)
	{
		cout << "Enter the mark of student " << (i+1) << ": " ;
		cin >> mark[i];
	}
	//Displaying the output for the students' names in the first file 
	for(int i=0;i<size;i++)
	{
		myOutput << name[i] << endl;
	}
	//Closing the file for student names 
	myOutput.close();
	//Displaying the output for the students' marks in the second file
	for(int i=0;i<size;i++)
	{
		myOutput2 << mark[i] << endl;
	}
	//Closing the second file for the mark
	myOutput2.close();	
	
	//Putting a space for the output to display the readings in the file
	cout <<endl; 
	
	//Reading from the file 
	cout << "Reading from the file " << endl;
	//Accessing the information from file one
	ifstream myInput (filename);
	//Accessing the information from file two
	ifstream myInput2 (filename2);
	//read the file while its not the end (myInput.eof())
	//Create a string variable line to read the information in file one
	//Inputting the string line (the array) using myInput
	//Dispalying the values of line from the file that was read in this loop
	while (!myInput.eof() && !myInput2.eof())
	{
		string line;
		string line2;
		myInput >> line;
		myInput2 >> line2;
		cout << line << " " << line2 << endl;
	}
	
	//Closing the both file
	myInput.close();
	myInput2.close();
	
	return 0;
}