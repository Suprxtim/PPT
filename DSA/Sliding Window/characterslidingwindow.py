def max_vowels(s, k):
  left=0
  vowels={"a","e","i","o","u"}
  max_vowel=0
  vowel_count=0
  for right in range(len(s)):
    if s[right] in vowels:
      vowel_count+=1
      
    if right-left+1 == k :
      max_vowel=max(max_vowel, vowel_count)

      if s[left] in vowels:
        vowel_count-=1

      left+=1
  return max_vowel
s = "abciiidef"
k = 3
print(max_vowels(s, k))
    