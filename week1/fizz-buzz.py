class Solution(object) :
    def fizzBuzz(self, n):
        output=[]
        values=range(1,n+1)
        for x in values:
            if x%15==0:
                output.append("FizzBuzz")
            elif x%3==0:
                output.append("Fizz")
            elif x%5==0:
                output.append("Buzz")
            else:
                 output.append(str(x))
        return output
