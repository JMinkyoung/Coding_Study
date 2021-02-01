function solution(n) {
    let answer = '';
    let even = '수박'; let odd = '수';
    if(n%2===0){
        answer+= even.repeat(n/2);
    }else{
        answer+= even.repeat(n/2) + odd.repeat(n%2);
    }
    return answer;
}