# Python solution for reading and printing five data types

# Read inputs as a list from a single line
data_list = input().split()

# Convert strings to appropriate types
intValue = int(data_list[0])
longLongValue = int(data_list[1])
charValue = data_list[2]
floatValue = float(data_list[3])
doubleValue = float(data_list[4])

# Print each value on a new line
print(intValue)
print(longLongValue)
print(charValue)
print(floatValue)
print(doubleValue)
