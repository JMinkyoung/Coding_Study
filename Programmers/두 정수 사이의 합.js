function solution(a, b) {
    var answer = 0;
    if(a===b){
        answer = a;
    }else if(a>b){
        for(var i=b; i<=a; i++){
            answer += i;
        }
    }else if(a<b){
        for(var i=a; i<=b; i++){
            answer += i;
        }
    }
    return answer;
}