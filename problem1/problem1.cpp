#include <iostream>
#include <fstream>

using namespace std;

int main(){

	int max = 100;
	int multiple1 = 3;
	int multiple2 = 5;
	int counter = 0;

	for(int i=0; i < 1000 ;i++){
		int mod3 = i%3;
		int mod5 = i%5;


		if(mod3 == 0){
			cout << i << endl;
			counter = counter + i;
	}
		if(mod5 == 0){
			cout << i << endl;
			counter = counter + i;
		}
		if(mod5 == 0 && mod3 == 0)
			counter = counter - i;
}
	cout << counter  << endl;

	return 0;
}