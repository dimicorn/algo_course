def remove_duplicates(arr: list) -> list:
    unique = 1
    n = len(arr)
    for i in range(1, n):
        if arr[i] != arr[i-1]:
            arr[unique] = arr[i]
            unique += 1
    return arr[:unique]

n = int(input())
arr = list(map(int, input().split()))
print(*remove_duplicates(arr))