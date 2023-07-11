def second_max(nums)->int:
    m = min(nums)
    sm = min(nums)
    for i, v in enumerate(nums):
        if v > m:
            sm = m
            m = nums[i]
        elif v > sm:
            sm = nums[i]
    return sm


nums = [3, 6, 1, 9, 11, 5]
print(second_max(nums))