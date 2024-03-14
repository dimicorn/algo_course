def longestOnes(nums: list, k: int) -> int:
    l = r = 0
    n = len(nums)
    for r in range(n):
        if nums[r] == 0:
            k -= 1
        if k < 0:
            if nums[l] == 0:
                k += 1
            l += 1
    return r - l + 1

nums = [0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0]
k = 3
print(longestOnes(nums, k))