def partition(l: int, r: int, arr: list)->int:
    pivot = arr[r]
    i = l
    for j in range(l, r):
        if arr[j] <= pivot:
            arr[j], arr[i] = arr[i], arr[j]
            i += 1
    arr[i], arr[r] = arr[r], arr[i]
    return i

def quick_sort(l: int, r: int, arr: list)->None:
    if l >= r or l < 0:
        return
    ind = partition(l, r, arr)
    quick_sort(l, ind-1, arr)
    quick_sort(ind+1, r, arr)


n = int(input())
arr = list(map(int, input().split()))
quick_sort(0, n-1, arr)
print(arr)