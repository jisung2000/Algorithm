def solution(array, commands):
    answer = []
    #commands 돌아가면서 하나씩 탐색
    #commands 안에 있는 수대로 슬라이싱해서 정렬.
    #정렬한 숫자의 [?][2]값을 배열에 저장.
    for command in commands:
        i, j, k = command
        sliced = array[i-1:j]
        sliced.sort()
        answer.append(sliced[k-1])
    return answer