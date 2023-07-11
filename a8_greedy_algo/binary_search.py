def binary_search(nums, target):
    l = 0
    r = len(nums) - 1
    while l <= r:
        m = (l + r) // 2
        if nums[m] == target:
            return m
        elif nums[m] < target:
            l = m + 1
        else:
            r = m - 1
    return -1


nums = [1, 5, 6, 8, 10]
target1 = 1
target2 = 2

print(binary_search(nums, target1))
print(binary_search(nums, target2))