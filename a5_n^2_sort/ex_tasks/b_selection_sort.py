def selection_sort(n: int, arr: list) -> None:
    for i in range(n-1):
        min = arr[i]
        ind = i
        for j in range(i+1, n):
            if min > arr[j]:
                min = arr[j]
                ind = j
        if i != ind:
            arr[i], arr[ind] = arr[ind], arr[i]


n = int(input())
arr = list(map(int, input().split()))
selection_sort(n, arr)
print(*arr)