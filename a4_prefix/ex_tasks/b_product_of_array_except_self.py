def multiply_except_one(arr: list, ind: int) -> int:
    res = 1
    count_zeroes = 0
    for num in arr:
        if num == 0:
            count_zeroes += 1
        else:
            res *= num
    
    if count_zeroes > 1:
        return 0
    elif count_zeroes == 1:
        if arr[ind] == 0:
            return res
        else:
            return 0
    else:
        return res // arr[ind]