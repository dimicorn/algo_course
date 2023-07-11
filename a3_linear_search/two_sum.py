def two_sum(nums, sum):
    l = 0
    r = len(nums) - 1
    while l < r:
        if nums[l] + nums[r] == sum:
            return l, r
        elif nums[l] + nums[r] < sum:
            l += 1
        else:
            r += 1
    return -1, -1


nums = [1, 3, 4, 6, 7, 10]
sum1 = 14
sum2 = 20
print(two_sum(nums, sum1))
print(two_sum(nums, sum2))