function solution(n) {
    let answer = n;
    let bin = n.toString(2);
    let arr = bin.match(/1/g);
   
    while(true){
        answer++;
        let temp = answer.toString(2).match(/1/g);
        if(temp.length === arr.length){
            break;
        }
    }
    return answer;
}