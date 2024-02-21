def gcd_recursive(a: int, b: int) -> int:
    if b > a:
        a, b = b, a
    if a == 0 and b == 0:
        return 0
    elif a == 0:
        return b
    elif b == 0:
        return a
    
    return gcd_recursive(b, a % b)


a, b = map(int, input().split())
print(gcd_recursive(a, b))