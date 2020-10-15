// Check Permutation: Given two strings, write a method to decide
// if one is a permutation of the other.


// Assumptions:
// 		1. The comparison is case sensitive, i.e.
// 		   abc is not a permutation of bCa.

// Sort both the strings in any order, and then compare
// whether they are equal or not. Time Complexity: O(n log(n))

#include<bits/stdc++.h>

using namespace std;

bool checkPermutation(string str1, string str2)
{
	if (str1.length() != str2.length())
		return false;

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	if (str1 == str2)
		return true;
	else
		return false;
}

int main()
{
	string str1, str2;
	cout << "First string: ";
	getline(cin, str1);
	cout << "second string: ";
	getline(cin, str2);
	(checkPermutation(str1, str2)) ? (cout << "True\n") : (cout << "False\n");
}