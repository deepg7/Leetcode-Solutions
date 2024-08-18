class Solution:
    def nthUglyNumber(self, n: int) -> int:
        
        ugly_numbers_set = set()
       
        ugly_numbers_set.add(1)

        current_ugly = 1
        for i in range(n):
           
            current_ugly = min(ugly_numbers_set)
           
            ugly_numbers_set.remove(current_ugly)

            ugly_numbers_set.add(current_ugly * 2)
            ugly_numbers_set.add(current_ugly * 3)
            ugly_numbers_set.add(current_ugly * 5)

        return current_ugly