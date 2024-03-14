import numpy as np

def brute_force(A: np.array, B: np.array) -> np.array:
    n, m, p = A.shape[0], A.shape[1], B.shape[1]
    C = np.zeros((n, p))
    for i in range(n):
        for j in range(p):
            for k in range(m):
                C[i][j] += A[i][k] * B[k][j]
    return C

def split(matrix: np.array):
    n = len(matrix)
    return (matrix[:n//2, :n//2], matrix[:n//2, n//2:],
            matrix[n//2:, :n//2], matrix[n//2:, n//2:])

def strassen(A, B):
    if len(A) <= 2:
        return brute_force(A, B)
    a, b, c, d = split(A)
    e, f, g, h = split(B)
    p1 = strassen(a + d, e + h)
    p2 = strassen(d, g - e)
    p3 = strassen(a + b, h)
    p4 = strassen(b - d, g + h)
    p5 = strassen(a, f - h)
    p6 = strassen(c + d, e)
    p7 = strassen(a - c, e + f)
    C11 = p1 + p2 - p3 + p4
    C12 = p5 + p3
    C21 = p6 + p2
    C22 = p5 + p1 - p6 - p7
    up = np.hstack((C11, C12))
    down = np.hstack((C21, C22))
    C = np.vstack((up, down))
    return C

A = np.array([[0, 1, 1, 1], [2, 3, 5, 4], [1, 1, 1, 1], [2, 2, 2, 2]])
B = np.array([[1, 0, 0, 0], [0, 1, 0, 0], [0, 0, 1, 0], [0, 0, 0, 1]])
print(strassen(A, B))