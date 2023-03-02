//Inverted Full Pyramid

#include<iostream>

using namespace std;

int main()
{
	int row;
	
	cout<< "Enter the no of rows: ";
	cin>> row;
	
	for(int i=1;i<=row;i++){
		for(int space=1;space<i;space++){
			cout<< " ";
		}
		for(int star=0;star<=row-i;star++){
			cout<< "* ";
		}
		cout<< endl;
	}
}
