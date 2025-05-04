from collections import Counter
import math

def solution(participant, completion):
    participant.sort()
    completion.sort()
    n = len(participant)-1
    for i in range(len(completion)):
        if(participant[i]!=completion[i]):
            return participant[i]
    return participant[n]