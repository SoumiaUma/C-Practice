#include<iostream>
#include<cstring>

using namespace std;

int main(){
	//Purpose: To encrypt and decrypt messages 
	//Declaring Variables 
	int numShifts;
	char text[80]; //An array of characters to store the letters user enters to encrypt/decrypt
	int position; //variable to store ascii value of character after the shift has been performed 
	string newText; //variable to store the converted ascii integer to char 
	string finalText; //variable to create the final encrypted/decrypted message 
	int ans;//variable to store user's choice of encryption or decryption
	
	cout << "Would you like to\n1)Encrypt a Message\n2)Decrypt a Message:" << endl;
	cin >> ans;
	//Encrypting message 
	if (ans == 1)
	{
		cout<<"Enter shift +/- 26:" << endl;
		cin >> numShifts;
		cout << "Enter plaintext message (A-Z only, no spaces):" << endl;
		cin >> text;
		
		/*
		For loop to add num of shifts, then convert the new ascii position to a char, 
		then add it to a new string for each letter in message entered by user 
		*/
		for(int i=0;i<strlen(text);i++)
		{
			position = int(text[i])+numShifts;
			newText = char(position);
			finalText = finalText+newText;
		}
		
		//Displaying the ciphertext and plain text
		cout << "Cipher Text: " << finalText << endl;
		cout << "Plain Text: " << text << endl;
	}
	else if (ans == 2)
	{
		cout<<"Enter shift +/- 26:" << endl;
		cin >> numShifts;
		cout << "Enter ciphertext message (A-Z only, no spaces):" << endl;
		cin >> text;
		
		/*
		For loop to add num of shifts, then convert the new ascii position to a char, 
		then add it to a new string for each letter in message entered by user 
		*/
		for(int i=0;i<strlen(text);i++)
		{
			position = int(text[i])+numShifts;
			newText = char(position);
			finalText = finalText+newText;
		}
		
		//Displaying the ciphertext and plain text 
		cout << "Cipher Text: " << text << endl;
		cout << "Plain Text: " << finalText << endl;
	}
		
	return 0;
}