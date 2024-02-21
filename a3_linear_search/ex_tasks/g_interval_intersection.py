def interval_intersection(intervals: list) -> list:
    intersections = []
    for i in range(1, len(intervals)):
        a, b = intervals[i-1][0], intervals[i-1][1]
        c, d = intervals[i][0], intervals[i][1]
        if b > c and a < d:
            intersections.append([max(a, c), min(b, d)])
    return intersections

interval_intersection([[1, 3], [3, 4]])