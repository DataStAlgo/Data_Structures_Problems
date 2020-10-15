# Is Unique: Implement an algorithm to determine if a string has all unique characters.
# What if you cannot use additional data structures?


# Assumptions:
# 	1. The string characters are in ASCII

# Create an array of boolean values, where the flag at index i indicates whether character
# i in the alphabet is contained in the string. The second time we see this character we can immediately
# return false.
# We can also immediately return false if the string length exceeds the number of unique characters in the
# alphabet. After all, we can't form a string of 280 unique characters out of a 128-character alphabet.

# If we can't use additional data structure, we can do the following:
# 		1. Compare every character of the string to every other character of the string.
# 		   This will take O(n^2) time and O(1) space.
# 		2. If we are allowed to modify the input string, we could sort the string in O(n log(n)) time
# 		   and then traverse the array while checking the adjacent characters and returning false if two are same.

def isUnique(arr):
	if (len(arr) > 128):		# ASCII characters (0-127)
		return False

	boolArr = [False] * 128
	for char in arr:
		ind = ord(char)
		if (boolArr[ind] == True):
			return False

		boolArr[ind] = True

	return True


arr = input('Enter the string: ')
print(isUnique(arr))

# another approach
def isunique_char(string):
	if(len(set(string))==len(string)):
		return True
	else:
		return False
string=input('Enter string')
print(isunique_char(string))
