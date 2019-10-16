/*
 * array_sort_ascending.cxx
 *
 *  Created on: Sep. 17, 2019
 *      Author: sm2016
 */

// C++ STL provides a sort function that sorts a vector or array (items with random access).
// Below is a simple program to show working of sort().
#include <bits/stdc++.h>
using namespace std;

int main() {

	int array[] = { 8, 6, 9, 3, 5, 2, 0, 4, 1, 10, 7 };

	int n = sizeof(array) / sizeof(array[0]);

	sort(array,array+n); //By default, sort() sorts an array in ascending order.

	cout << "Array after sorting is: " << flush;

	for (int i=0; i<n; i++){

    	cout << array[i] << " ";
    }


    return 0;

}



