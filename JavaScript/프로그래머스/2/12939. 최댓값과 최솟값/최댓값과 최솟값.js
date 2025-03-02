function solution(s) {
    let numbers = s.split(" ").map(Number); // 문자열을 숫자 배열로 변환
    return `${Math.min(...numbers)} ${Math.max(...numbers)}`; // 최소값과 최대값을 반환
}
