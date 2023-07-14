def binary_search(n: int, arr: list, target: int)->int:
    l = 0
    r = n - 1
    while l <= r:
        m = (l + r) // 2
        if arr[m] == target:
            return m
        elif arr[m] < target:
            l = m + 1
        else:
            r = m - 1
    return -1


n, target = map(int, input().split())
arr = list(map(int, input().split()))
print(binary_search(n, arr, target))