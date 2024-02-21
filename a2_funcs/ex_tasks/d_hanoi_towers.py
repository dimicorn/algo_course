def HanoiTowers(n: int, fromPeg: int, toPeg: int) -> None:
    if n == 1:
        print(f'Move disk 1 from peg {fromPeg} to peg {toPeg}')
        return
    unusedPeg = 6 - fromPeg - toPeg
    HanoiTowers(n-1, fromPeg, unusedPeg)
    print(f'Move disk {n} from peg {fromPeg} to peg {toPeg}')
    HanoiTowers(n-1, unusedPeg, toPeg)

HanoiTowers(3, 1, 3)