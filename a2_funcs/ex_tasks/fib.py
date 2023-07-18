def fib_recursive(n: int)->int:
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib_recursive(n - 1) + fib_recursive(n - 2)


n = int(input())
print(fib_recursive(n))