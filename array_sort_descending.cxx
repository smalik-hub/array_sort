/*
 * array_sort_descending.cxx
 *
 *  Created on: Sep. 17, 2019
 *      Author: Shahzaib Malik
 */

// C++ program to demonstrate descending order sort using
// greater<>()
#include <bits/stdc++.h>

using namespace std;

int main() {

	int array[] = { 8, 6, 9, 3, 5, 2, 0, 4, 1, 10, 7 };

	int n = sizeof(array) / sizeof(array[0]);

	sort(array, array + n, greater<int>());

	cout << "After sort in descending order: " << endl;

	for (int i = 0; i < n; i++) {

		cout << array[i] << " ";
	}

	return 0;
}

