//Half Pyramid

#include<iostream>

using namespace std;

int main()
{
	int rows;
	
	cout<< "Enter the no of rows: ";
	cin>> rows;
	
	for(int i=0;i<rows;i++){
		for(int col=0;col<i+1;col++){
			cout<< "*";
		}
		cout<< endl;
	}
}
