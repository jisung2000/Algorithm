from collections import Counter
import math

def solution(participant, completion):
    str = Counter(participant)- Counter(completion)
    
    return list(str.keys())[0]
    