def merge_sort(arr: list) -> list:
    length = len(arr)

    if length == 1:
        return arr

    mid = length // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)

def merge(left: list, right: list) -> list:
    output = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            output.append(left[i])
            i += 1
        else:
            output.append(right[j])
            j += 1

    if i < len(left):
        output.extend(left[i:])
    elif j < len(right):
        output.extend(right[j:])

    return output

arr = [5, 4, 3, 2, 1, 0, 1, 3, 5, 7, 5, 6]
print(merge_sort(arr))