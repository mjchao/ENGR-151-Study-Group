#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 , 7, 8 , 9 , 10 };
	for ( int i=0 ; i<5 ; ++i ) {
		int *p1 = arr+i;
		int *p2 = arr+10-1-i;
		int p3 = *p2;
		*p2 = *p1;
		*p1 = p3;
	}

	cout << "arr is:";
	for ( int i=0 ; i<10 ; ++i ) {
		cout << " " << arr[ i ];
	}
	cout << endl;
	return 0;
}
