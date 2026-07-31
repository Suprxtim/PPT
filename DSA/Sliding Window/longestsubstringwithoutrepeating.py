def lengthOfLongestSubstring(s):
    seen = {}
    l = 0
    length = 0

    for r in range(len(s)):
        if s[r] in seen:
            l = max(seen[s[r]] + 1, l)

        seen[s[r]] = r
        length = max(r - l + 1, length)

    return length


# Main Program
s = input("Enter the string: ")
ans = lengthOfLongestSubstring(s)
print("Length of the longest substring:", ans)