function solution(n) {
    let answer = [];
    let str = String(n);
    for(let i=0; i<str.length; i++){
        answer.unshift(Number(str.charAt(i)));
    } 
    return answer;
}