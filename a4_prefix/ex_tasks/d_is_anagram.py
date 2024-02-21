def check_if_anagram(string1: str, string2: str) -> str:
    buf1, buf2 = [0] * 26, [0] * 26
    for char in string1:
        buf1[ord(char) - ord('a')] += 1
    
    for char in string2:
        buf2[ord(char) - ord('a')] += 1
    res = 'YES' if buf1 == buf2 else 'NO'
    return res

print(check_if_anagram('aaabc', 'cbaaa'))