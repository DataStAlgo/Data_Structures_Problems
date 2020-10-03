// URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
// has sufficient space at the end to hold the additional characters, and that you are given the "true"
// length of the string.



// Firstly, convert the string taken as input to char array because
// strtok() works on a char array.
// Then, the function strtok() to print all the tokens, followed by %20


#include<bits/stdc++.h>
using namespace std;

void urlify(char s[])
{
	char delim[] = " ";
	char *token = strtok(s, delim);	// The strtok function is explained in detail at the EOF
	while(token)
	{
		cout << token << "%20";
		token = strtok(NULL, delim);
	}
}

int main()
{
	string str;
	cout << "Enter the string: ";
	// Since, the input will contain spaces, getline() is used
	getline(cin, str);
	char s[str.length() + 1];	// One extra character for '\0'
	// The c_str() function is used to return a pointer to an array
	// that contains a null terminated sequence of character
	// representing the current value of the string.
	// (Ref: GeeksforGeeks)
	strcpy(s, str.c_str());
	urlify(s);
}



// The strtok() function takes two arguments: str and delim. This function finds the token
// in the string pointed to by strtok. The pointer delim points to the separator characters.

// This function can be called multiple times to obtain tokens from the same string.
// There are two cases:

// If str is not NULL:
// A call to strtok() is considered first call for that string. The function searches for
// the first character that is not contained in delim. If no such character is found,
// the string does not contain any token. So a null pointer is returned. If such character is found,
// from there on the function searches for a character that is present in delim.
// If no separator is found, str has only one token. If a separator is found, it is replaced by '\0'
// and the pointer to the following character is stored in a static location for subsequent invocations.
// Finally, the function returns the pointer to the beginning of the token.

// If str is NULL:
// The call is considered as subsequent calls to strtok and the function continues
// from where it left in previous invocation.
