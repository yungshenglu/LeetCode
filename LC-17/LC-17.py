class Solution:
    '''
    Concepts: Recursion
    1. Define letter array for all digits
    2. Recursive combine every letter in the first digit
    '''
    def letterCombinations(self, digits: str) -> List[str]:
        n = len(digits)
        result = [];
        if n == 0:
            return result;

        myLetters = [
            [' '], [''], ['a', 'b', 'c'],
            ['d', 'e', 'f'], ['g', 'h', 'i'], ['j', 'k', 'l'],
            ['m', 'n', 'o'], ['p', 'q', 'r', 's'], ['t', 'u', 'v'],
            ['w', 'x', 'y', 'z']
        ]
        
        if n == 1:
            return myLetters[int(digits)]
        else:
            return [
                (y + x) for y in self.letterCombinations(digits[0])
                for x in self.letterCombinations(digits[1:])
            ]
        