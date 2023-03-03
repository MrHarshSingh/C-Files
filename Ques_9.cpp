//Hollow Diamond

#include<iostream>
using namespace std;

int main()
{
	int rows;
	cout<< "Enter the no of rows: ";
	cin>> rows;
	
	for(int i=0;i<rows;i++){
		for(int space1=0;space1<rows-i;space1++){
			cout<< " ";
		}
		cout<< "*";
		if(i>0){
		for(int space2=0;space2<2*i-i;space2++){
			cout<< " ";
		}
		cout<< "*";
		}
		cout<< endl;
	}
}
