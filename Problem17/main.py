#If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

#If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

#NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

inventory = ["","one","two","three","four","five","six","seven","eight","nine","ten",
"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen", "twenty",
"","","","","","","","","","thirty","","","","","","","","","","forty","","","","","","","","","","fifty",
"","","","","","","","","","sixty","","","","","","","","","","seventy","","","","","","","","","","eighty",
"","","","","","","","","","ninety","","","","","","","","","","hundred"]

def numChars(integer):
	"""Converts integer parameter to number of characters in number. Eg: 7 will return [5](s-e-v-e-n)"""
	
	sum = 0
	
	if integer == 1000:
		sum = len("onethousand")
	
	intPos0 = integer % 10
	sum = sum + len(inventory[intPos0])
	
	#print "intPos0 = ",
	#print len(inventory[intPos0])
	
	intPos1 = integer % 100
	intPos1 = intPos1 / 10
	intPos1 = intPos1 * 10
	sum = sum + len(inventory[intPos1]) 
	
	#print "intPos1 = ",
	#print len(inventory[intPos1]) 
	
	intPos2 = integer / 100
	if intPos2 != 0:
		sum = sum + len(inventory[intPos2]) + len(inventory[100]) + len("and")
	
	#print "intPos2 = ",
	#print len(inventory[intPos2]) + len(inventory[100])
	
	
	return sum

total = 0

for i in range(1001):
	total = total + numChars(i)
	
print total
