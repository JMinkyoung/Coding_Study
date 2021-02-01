function solution(x) {
    let answer = true;
    let arr = String(x).split("");
    let temp=0;
    
    for(let i=0; i<arr.length; i++){
        temp +=Number(arr[i]);
    }
    if(x%temp===0 ? answer = true : answer = false);
    
    return answer;
}