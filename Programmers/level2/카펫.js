function solution(brown, yellow) {
    let answer = [];
    let sum = brown + yellow;

    for(let i=1; i<=sum; i++){
        if(sum%i===0){
            let temp = sum/i;
            if((i-2)*(temp-2)>=yellow){
                answer.push(temp);
                answer.push(i);
                break;
            }
        }
    }
    return answer;
}