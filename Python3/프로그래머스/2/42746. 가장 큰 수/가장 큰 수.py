def solution(numbers):
    #앞에올수있는가장 큰수. 
    numbers = list(map(str, numbers))
    numbers = sorted(numbers, key=lambda x: x*3, reverse=True)
    answer = ''.join(numbers)
    
    return '0' if answer[0] == '0' else answer