class Solution:
    def isPalindrome(self, x: int) -> bool:

        if x < 0:
            return False
        
        str_x = str(x)
        
        return str_x == str_x[::-1]

# 예제 테스트
solution = Solution()
print(solution.isPalindrome(121)) 
print(solution.isPalindrome(-121)) 
print(solution.isPalindrome(10))   
        