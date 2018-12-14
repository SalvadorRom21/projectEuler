#include <iostream>

using namespace std;

int main(){

	int firstTerm = 1;
	int secondTerm = 2;
	long int nextTerm = 0 ;
	long int counter = 2;

	cout << firstTerm << endl;
	cout << secondTerm << endl;

	do{
	 
	nextTerm = firstTerm + secondTerm;
	if((nextTerm % 2) == 0)
		counter = counter + nextTerm;
	firstTerm = secondTerm;
	secondTerm = nextTerm;
	cout << nextTerm << endl;
}while(nextTerm < 4000000);
cout << counter;

}