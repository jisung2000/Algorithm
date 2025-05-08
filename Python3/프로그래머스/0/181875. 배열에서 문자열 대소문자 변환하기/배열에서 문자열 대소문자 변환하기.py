def solution(strArr):
    n = len(strArr)
    for i in range(n):
        if(i%2==0):
            strArr[i] = strArr[i].lower()
        else :
            strArr[i] = strArr[i].upper()
    return strArr