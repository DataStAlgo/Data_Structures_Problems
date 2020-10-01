// Is Unique: Implement an algorithm to determine if a string has all unique characters.
// What if you cannot use additional data structures?


// Assumptions:
// 	1. The string characters are in ASCII

// Create an array of boolean values, where the flag at index i indicates whether character
// i in the alphabet is contained in the string. The second time we see this character we can immediately
// return false.
// We can also immediately return false if the string length exceeds the number of unique characters in the
// alphabet. After all, we can't form a string of 280 unique characters out of a 128-character alphabet.

// If we can't use additional data structure, we can do the following:
// 		1. Compare every character of the string to every other character of the string.
// 		   This will take O(n^2) time and O(1) space.
// 		2. If we are allowed to modify the input string, we could sort the string in O(n log(n)) time
// 		   and then traverse the array while checking the adjacent characters and returning false if two are same.

#include<bits/stdc++.h>
using namespace std;

void print_vec(vector<bool> array)
{
	for (int i=0; i<array.size(); i++)
	{
		cout << array[i];
	}
}

bool isUnique(string arr)
{
	if (arr.length() > 128)			// ASCII characters (0-127)
		return false;

	vector<bool> boolArr(26, false);
	// print_vec(boolArr);
	for (int i=0; i<arr.length(); i++)
	{
		int ind = arr[i];
		if (boolArr[ind] == true)
			return false;

		boolArr[ind] = true;
	}
	// print_vec(boolArr);
	return true;
}

int main()
{
	string arr;
	cout << "Enter the string: ";
	cin >> arr;
	// cout << arr;
	// cout << isUnique(arr);
	(isUnique(arr)) ? (cout << "True") : (cout << "False");
}