n, m = map(int, input().split())
arr = list(map(int, input().split()))
ind = []
prefix = [0] * (n + 1)
for i in range(m):
    a, b = map(int, input().split())
    ind.append((a, b))

for i in range(1, n+1):
    prefix[i] = prefix[i - 1] + arr[i - 1]

for i in ind:
    sum = prefix[i[1]] - prefix[i[0]]
    print(sum)