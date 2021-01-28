function solution(s) {
    var answer = true;

    if(s.length !== 4 && s.length !== 6){
        answer = false;
    }else if(s.length === 4 || s.length === 6){
        return s.split("").every((char)=>!isNaN(char));
    }
        
    return answer;
}