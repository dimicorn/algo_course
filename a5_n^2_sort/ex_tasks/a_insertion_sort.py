def insertion_sort(n: int, arr: list) -> None:
    i = 1
    while i < n:
        j = i
        while j > 0 and arr[j-1] > arr[j]:
            arr[j], arr[j-1] = arr[j-1], arr[j]
            j -= 1
        i += 1


n = int(input())
arr = list(map(int, input().split()))
insertion_sort(n, arr)
print(arr)