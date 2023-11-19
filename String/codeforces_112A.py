
# Each of the first two lines contains a bought string.The strings' lengths range from 1 to 100 inclusive. It is
# guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.
# If the first string is less than the second one,print "-1".If the second string is less than the first one,
# print "1".If the strings are equal, print "0".Note that the letters' case is not taken into consideration
# when the strings are compared.

str1 = input().lower()
str2 = input().lower()

result = 0

if str1 < str2:
    result = -1
elif str1 > str2:
    result = 1

print(result)

