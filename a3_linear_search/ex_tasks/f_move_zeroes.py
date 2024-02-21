def move_zeroes(arr: int) -> None:
    count_zeroes, pointer = 0, 0
    first_zero = None
    for pointer, num in enumerate(arr):
        if num == 0:
            count_zeroes += 1
            if first_zero is None:
                first_zero = pointer
        elif count_zeroes >= 1:
            arr[first_zero], arr[pointer] = arr[pointer], arr[first_zero]
            first_zero += 1

arr = [0, 0, 0, 1, 1, 1, 0, 1]
move_zeroes(arr)
print(arr)