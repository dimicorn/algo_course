def generate_number(n: int, m: int, prefix=None):
    prefix = prefix or []
    if m == 0:
        print(*prefix)
        return
    
    for digit in range(n):
        prefix.append(digit)
        generate_number(n, m-1, prefix)
        prefix.pop()

generate_number(2, 3)