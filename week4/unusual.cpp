#include <iostream>

using namespace std;

int main() {

	int a = 1;
	cout << static_cast<float>(a) << endl;

	int b = 2147483647; //this is 2^31-1
	cout << static_cast<long long>(b+1) << endl;
	
	int c = -2147483648; //this is -2^31
	cout << static_cast<long long>(c) - 1 << endl;

	int d = 1;
	cout << static_cast<double>(d + 0.5) << endl;
	cout << static_cast<double>(d += 0.5) << endl;

	int e = 2147483648;
	cout << e << endl;

	int f = 256;
	cout << static_cast<int>(static_cast<char>(f)) << endl;

	cout << (5 - - - - - - 6) << endl;
	return 0;
}
