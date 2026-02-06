class Solution:
    def reverse(self, x: int) -> int:
        sign=-1 if x<0 else 1
        reversed_num=0
        num=abs(x)

        while num!=0:
            last_digit= num%10
            reversed_num=reversed_num*10+last_digit
            num=num//10
        res = reversed_num * sign
        if res < -2**31 or res > 2**31 - 1:
            return 0
        return res
