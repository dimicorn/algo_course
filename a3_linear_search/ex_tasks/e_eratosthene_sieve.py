def eratosthene(n: int) -> list:
    primes = [2]
    for num in range(3, n+1):
        count = 0
        for prime in primes:
            if num % prime == 0:
                count += 1
        if count == 0:
            primes.append(num)
    return primes