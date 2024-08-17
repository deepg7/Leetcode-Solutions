class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        cols = len(points[0])
        current_row = [0] * cols
        previous_row = [0] * cols

        for row in points:
        
            running_max = 0

            for col in range(cols):
                running_max = max(running_max - 1, previous_row[col])
                current_row[col] = running_max

            running_max = 0
            for col in range(cols - 1, -1, -1):
                running_max = max(running_max - 1, previous_row[col])
                current_row[col] = max(current_row[col], running_max) + row[col]

            previous_row = current_row.copy()

        return max(previous_row)