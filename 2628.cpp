#include <iostream>
using namespace std;

int main() {

	int row, col, cut;

	cin >> row >> col;
	cin >> cut;

	int* arr1 = new int[row - 1];
	int* arr2 = new int[col - 1];

	arr1[row - 2] = 1;
	arr2[col - 2] = 1;

	for (int i = 0; i < cut; i++) {
		int a = -1, b = -1;

		cin >> a >> b;
		if (a == 1) {
			arr1[b - 1] = 1;
		}
		else if(a == 0) {
			arr2[b - 1] = 1;
		}
	}


	int rowmax = 0, colmax = 0;
	int temp1 = 0, temp2 = 0;
	for (int i = 0; i < row - 1; i++) {
		
		if (arr1[i] == 1) {
			if (i - rowmax >= rowmax) {
				rowmax = i - temp1;
			}
			temp1 = i;
		}
	}
	for (int i = 0; i < col - 1; i++) {
		if (arr2[i] == 1) {
			if (i - colmax >= colmax) {
				colmax = i - temp2;
			}
			temp2 = i;
		}
	}

	cout << (rowmax + 1)*(colmax + 1) << endl;


	return 0;
}
