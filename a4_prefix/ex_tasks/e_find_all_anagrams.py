def findAnagrams(s: str, p: str) -> list:
    ans = []
    if len(s) < len(p):
        return ans
    
    freq, window = [0] * 26, [0] * 26
    for i in p:
        freq[ord(i) - ord('a')] += 1
    
    for i in range(len(p)):
        window[ord(s[i]) - ord('a')] += 1
    
    if window == freq:
        ans.append(0)
    
    for i in range(len(p), len(s)):
        window[ord(s[i-len(p)]) - ord('a')] -= 1
        window[ord(s[i]) - ord('a')] += 1
        if window == freq:
            ans.append(i - len(p) + 1)
    return ans

string1 = 'adeabcbddeaa'
string2 = 'aade'
print(findAnagrams(string1, string2))