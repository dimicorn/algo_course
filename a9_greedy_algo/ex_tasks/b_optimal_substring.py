def string_partition(string: str) -> int:
    seen = set()
    count_br = 0
    for letter in string:
        if letter in seen:
            count_br += 1
            seen = set(letter)
        else:
            seen.add(letter)
    return count_br + 1

string = "abacdg"
print(string_partition(string))