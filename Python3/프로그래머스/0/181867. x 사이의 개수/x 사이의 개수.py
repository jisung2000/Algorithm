def solution(myString):
    answer = []
    answer = myString.split('x')
    arr = [len(p) for p in answer]
    return arr