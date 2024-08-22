class Solution:
    def findComplement(self, num: int) -> int:

        s = str(bin(num)).replace("0b","")

        x = s.replace("0",'a').replace('1','b')
        y = x.replace('a', '1').replace('b', '0')

        return int(y, 2)