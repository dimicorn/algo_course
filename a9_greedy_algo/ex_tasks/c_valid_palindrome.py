def valid_palindrome(string: str) -> bool:
    l, r = 0, len(string) - 1
    while l < r:
        if string[l] != string[r]:
            skipL, skipR = string[l+1:r+1], string[l:r]
            return (skipL == skipL[::-1] or skipR == skipR[::-1])
        l += 1
        r -= 1
    
string = "abbc"
print(valid_palindrome(string))