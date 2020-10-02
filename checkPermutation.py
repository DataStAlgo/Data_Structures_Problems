# Check Permutation: Given two strings, write a method to decide
# if one is a permutation of the other.


# Assumptions:
# 		1. The comparison is case sensitive, i.e.
# 		   abc is not a permutation of bCa.
# 		2. The whitespace is not considered.
# 		   (If whitespace has to be considered, remove the .strip() method)

# Sort both the strings in any order, and then compare
# whether they are equal or not. Time Complexity: O(n log(n))

def checkPermutation(str1, str2):
	if str1 == str2:
		return True
	else:
		return False


str1 = input('First string: ').strip()
str2 = input('Second string: ').strip()

if (len(str1) != len(str2)):
	print(False)
else:
	# since strings are immutable, we cannot use .sort()
	# method. So we use sorted() which returns a sorted list
	print(checkPermutation(sorted(str1), sorted(str2)))