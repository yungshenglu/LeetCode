class Solution:
    '''
    Concepts: Backtracking
    1. Enumerate all case of the combination of parentheses pairs
    2. Recursion
    '''
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        def backtracking(s = [], left = 0, right = 0):
            if len(s) == n * 2:
                result.append(''.join(s))
                return
            if left < n:
                s.append('(')
                backtracking(s, left + 1, right)
                s.pop()
            if right < left:
                s.append(')')
                backtracking(s, left, right + 1)
                s.pop()
        backtracking()
        return result
                