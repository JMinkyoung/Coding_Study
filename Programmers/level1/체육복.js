function solution(n, lost, reserve) {
    let answer = n-lost.length;
let test = lost.slice();

for(let i=0; i<test.length; i++){
    const str = test[i];
    if(reserve.indexOf(str)!==-1){
        reserve.splice(reserve.indexOf(str),1);
        lost.splice(lost.indexOf(str),1);
        answer++;
    }
}

for(let i=0; i<test.length; i++){
    const temp = lost[i];
    if(reserve.indexOf(temp-1) !== -1){
        reserve.splice(reserve.indexOf(temp-1),1);
        answer++;
    }else if(reserve.indexOf(temp+1) !== -1){
        reserve.splice(reserve.indexOf(temp+1),1);
        answer++;
    }
}
    return answer;
}