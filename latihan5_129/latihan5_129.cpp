
#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "mengisi array" << endl;
	for(int i = 0; i < 5; i++) {
		cout << "data ke-" << (i) << ";";
		cin >> a[i];
	}
	cout << "masukan array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i) << ";" << a[i] << endl;
	}
}



