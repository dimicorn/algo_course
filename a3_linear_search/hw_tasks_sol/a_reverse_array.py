def reverse_array(arr: list) -> list:
    # return arr[::-1]
    l, r = 0, len(arr) - 1
    for _ in range(len(arr) // 2):
        arr[l], arr[r] = arr[r], arr[l]
        l += 1
        r -= 1
    return arr
    
arr = list(range(1, 6))
reverse_array(*arr)