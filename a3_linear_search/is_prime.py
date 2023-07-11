def is_prime(x: int)->bool:
    if x == 1:
        return False
    i = 2
    while (i * i <= x):
        if x % i == 0:
            return False
        i += 1
    return True


x = int(input())

if is_prime(x):
    print(x, "is a prime number")
else:
    print(x, "is not a prime number")