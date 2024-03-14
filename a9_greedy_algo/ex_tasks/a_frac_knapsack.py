def knapsack_greedy(objects: list[tuple], x: int) -> int:
    objects_s = sorted(objects, key=lambda x : x[0] / x[1], reverse=True)
    profit = 0
    for obj in objects_s:
        if obj[1] <= x:
            x -= obj[1]
            profit += obj[0]
        else:
            rate = obj[0] / obj[1]
            profit += rate * x
            return profit

arr = [(2, 2), (3, 7), (6, 6), (6, 3)]
print(knapsack_greedy(arr, 10))