x = input()

if x.isdigit():
    print('{} is a digit'.format(x))
elif x.isalpha():
    print('{} is a letter'.format(x))
else:
    raise ValueError("Invalid Input!")