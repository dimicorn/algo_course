def fib_iterative(n: int)->int:
    a0 = 0
    a1 = 1
    if n == 0:
        return a0
    elif n == 1:
        return a1
    else:
        for i in range(2, n + 1):
            temp = a0 + a1
            a0 = a1
            a1 = temp
        return temp


n = int(input())
print(fib_iterative(n))