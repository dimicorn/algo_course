def max_subarr_sum(arr) -> int:
    curSum = 0
    maxSum = arr[0]
    for i in arr:
        if curSum < 0:
            curSum = 0
        curSum += i
        maxSum = max(maxSum, curSum)
    return maxSum

arr = [-2, 1, 3, -5, -6]
print(max_subarr_sum(arr))