# URLify: Write a method to replace all spaces in a string with '%20'. You may assume that the string
# has sufficient space at the end to hold the additional characters, and that you are given the "true"
# length of the string.



# Use the .split to generate a list obtained by separating the string at the places
# where the separator occurs.
# Then use the .join() method to join the elements of the list with the separator defined


def urlify(s):
	removed_spaces = s.split()
	joined = '%20'.join(removed_spaces)
	print(joined)


s = input('Enter the string: ')
urlify(s)
