def bubble_sort(n: int, arr: list) -> None:
    for i in range(n):
        for j in range(n):
            if arr[i] < arr[j]:
                arr[i], arr[j] = arr[j], arr[i]


n = int(input())
arr = list(map(int, input().split()))
bubble_sort(n, arr)
print(arr)