def cyclic_shift(arr: list, d: int) -> list:
    # return arr[d:] + arr[:d]
    n = len(arr)
    buf = [0] * n
    ind = 0
    for i in range(d, n):
        buf[ind] = arr[i]
        ind += 1
    
    for i in range(d):
        buf[ind] = arr[i]
        ind += 1
    return buf

def reverse(arr: list, left: int, right: int) -> None:
    n = right - left + 1
    for _ in range(n // 2):
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1

arr = [1, 2, 3, 4, 5]
k = 2
print(*cyclic_shift(arr, k))

reverse(arr, 0, k)
reverse(arr, k, len(arr) - k - 1)
reverse(arr, 0, len(arr) - 1)
print(*arr)