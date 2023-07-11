def bubble_sort(nums):
    for i in range(len(nums)):
        for j in range(len(nums)):
            if nums[i] < nums[j]:
                nums[i], nums[j] = nums[j], nums[i]


nums = [2, 8, 6, 4, 1]
print(nums)
bubble_sort(nums)
print(nums)