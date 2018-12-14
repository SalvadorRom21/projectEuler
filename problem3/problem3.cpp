#include <iostream>

using namespace std;

int main (){
	int long n = 600851475143;
	int z = 2;
	while(z * z <= n){
		if(n % z == 0){
			cout << z << endl;
			n = n/z;
	}
	else {
		z++;
	}
	if (n > 1)
		cout << n << endl;
}

}