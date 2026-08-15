class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]
        operators=['+', '-', '*', '/']
        for token in tokens:
            if token in operators:
                y=stack.pop()
                x=stack.pop()

                if token=='+':
                    result=x+y
                elif token=='-':
                    result=x-y
                elif token=='*':
                    result=x*y
                elif token=='/':
                    result=abs(x)//abs(y)
                    if (x < 0) != (y < 0):
                        result = -result
                stack.append(result)
            else:
                stack.append(int(token))
        return stack.pop()
                    
