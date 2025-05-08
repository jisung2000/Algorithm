def solution(numbers, n):
    k =0
    for i in numbers:
        k+=i
        if k>n:
            return k