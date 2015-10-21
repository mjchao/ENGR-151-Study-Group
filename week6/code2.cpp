#include <iostream>

using namespace std;

int main() {
	int arr1[] = { 1 , 3 , 5 , 7 , 9 };
	int arr2[] = { 2 , 4 , 6 , 8 , 10 };
	int arr3[ 10 ];
	int *p1 = arr1 , *p2 = arr2 , *p3 = arr3;
	while( p1 != arr1 + 5 || p2 != arr2 + 5 ) {
		if ( p1 == arr1 + 5 ) {
			*p3++ = *p2++;
		}
		else if ( p2 == arr2 + 5 ) {
			*p3++ = *p1++;
		}
		else {
			*p3++ = (*p1 < *p2) ? *p1++ : *p2++;
		}
	}
	cout << "Contents of arr3:";
	for ( int i=0 ; i<10 ; ++i ) {
		cout << " " << arr3[ i ];
	}
	cout << endl;
}
