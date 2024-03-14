def heapify(arr: list, n: int, i: int) -> None:
    largest = i
    l = 2 * i + 1  # левый лист
    r = 2 * i + 2  # правый лист

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r
 
    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)

def heap_sort(arr: list) -> None:
    n = len(arr)
    for i in range(n // 2, -1, -1):
        heapify(arr, n, i)
    
    for i in range(n - 1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)

arr = [1, 3, 5, 7, 9]
heap_sort(arr)
print(arr)