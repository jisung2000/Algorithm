const fs = require('fs');
const input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

const N = Number(input[0]);
const A = input[1].split(' ').map(Number);
const B = input[2].split(' ').map(Number);

// 정렬
A.sort((a, b) => a - b); // A 오름차순
B.sort((a, b) => b - a); // B 내림차순

// 최솟값 계산
let result = 0;
for (let i = 0; i < N; i++) {
    result += A[i] * B[i];
}

console.log(result);