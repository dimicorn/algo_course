def two_sum(n: int, nums: list, sum: int) -> tuple:
    l = 0
    r = n - 1
    while l < r:
        if nums[l] + nums[r] == sum:
            return l, r
        elif nums[l] + nums[r] < sum:
            l += 1
        else:
            r += 1
    return -1, -1


n, sum = map(int, input().split())
nums = list(map(int, input().split()))
print(two_sum(n, nums, sum))