def generate(arr: list, t: int = 0):
    n = len(arr)
    if t == n - 1:
        print(*arr)
    else:
        for j in range(t, n):
            arr[t], arr[j] = arr[j], arr[t]
            t += 1
            generate(arr, t)
            t -= 1
            arr[t], arr[j] = arr[j], arr[t]

arr = list(range(3))
generate(arr)