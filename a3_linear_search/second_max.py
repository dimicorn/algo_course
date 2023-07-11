def second_max(n: int, nums: list)->int:
    m = nums[0]
    sm = nums[0]
    for i in range(n):
        if nums[i] > m:
            sm = m
            m = nums[i]
        elif nums[i] > sm:
            sm = nums[i]
    return sm


n = int(input())
nums = list(map(int, input().split()))
print(second_max(n, nums))