#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int treeNum = 0, getSize = 0, treeSize = 0, height = 0;

	cin >> treeNum >> getSize;

	int* tree = new int[treeNum];

	for (int i = 0; i < treeNum; i++) {
		cin >> treeSize;
		tree[i] = treeSize;
	}

	height = *max_element(tree, tree + treeNum) + 1;

	int getSum = 0;

	while (getSize > getSum) {
		getSum = 0;
		height--;
		for (int i = 0; i < treeNum; i++) {
			int temp = tree[i] - height;
			if (temp < 0) temp = 0;
			getSum += temp;
		}
	}

	cout << height << endl;

	return 0;
}
