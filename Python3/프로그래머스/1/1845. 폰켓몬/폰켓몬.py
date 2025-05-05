from collections import Counter

def solution(nums):
    count = len(Counter(nums))
    m = len(nums)/2
    if count>m:
        return m
    else:
        return count
    