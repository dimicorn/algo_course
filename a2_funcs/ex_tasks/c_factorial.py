def fact_recursive(n: int) -> int:
    if n == 0:
        return 1
    elif n == 1:
        return 1
    else:
        return n * fact_recursive(n - 1)


n = int(input())
print(fact_recursive(n))