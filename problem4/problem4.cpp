#include <iostream>

using namespace std;


int palindromeProduct(int x, int y){
	long long largestPal = 0;
	long long palNum;
	long long palCheck;
	long long palIter;


	for(int i = 1; i <= x; i++){		//the first loop will go from 0 to 999
		for(int p = 1; p <= y; p++){	//the second loop will go from 0 to 999
			palNum = i * p;				
			palIter = palNum;
			while(palNum > 0){

				palCheck = (palCheck * 10) + palNum % 10;
				palNum = palNum/10;
			}
		if(palIter == palCheck)
			if(palIter > largestPal)
				largestPal = palCheck;
	}
}
	cout << largestPal;


	return largestPal;
}

int main(){
	palindromeProduct(999,999);
}