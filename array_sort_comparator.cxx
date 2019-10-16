/*
 * array_sort_comparator.cxx
 *
 *  Created on: Sep. 17, 2019
 *      Author: Shahzaib Malik
 */

// A C++ program to demonstrate STL sort() using
// our own comparator

#include <bits/stdc++.h>
using namespace std;


struct Interval {

	int start, end;
};

bool compareInterval(Interval i1, Interval i2){

	return (i1.start < i2.start);
}

int main(){

	Interval array[] = {{2,5}, {0,7}, {6,8}, {4,7}};

	int n = sizeof(array)/sizeof(array[0]);

	cout << "Interval sorted by start time: " << endl;

	sort(array, array+n, compareInterval);

	for (int i=0; i< n; i++){

		cout << "[" << array[i].start << "," << array[i].end << "]" << flush;
	}

	return 0;
}
