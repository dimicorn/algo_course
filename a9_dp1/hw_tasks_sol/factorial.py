def fact_iterative(n: int)->int:
    res = 1
    for i in range(1, n + 1):
        res *= i
    return res


n = int(input())
print(fact_iterative(n))