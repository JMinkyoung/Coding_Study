function solution(n) {
    let answer = '';
    let temp = n;
    while(temp>0){
        if(temp%3===0){
            answer = '4' + answer;
            temp = temp/3-1;
        }else if(temp%3===1){
            answer = '1' + answer;
            temp = Math.floor(temp/3);
        }else{
            answer = '2' + answer;
            temp = Math.floor(temp/3);
        }
    }
    return answer;
}