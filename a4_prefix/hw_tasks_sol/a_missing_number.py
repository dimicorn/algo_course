def missing_number(n: int, arr: list) -> int:
    s = n * (n + 1) // 2
    for num in arr:
        s -= num
    return s

print(missing_number(5, [1, 2, 3, 5]))