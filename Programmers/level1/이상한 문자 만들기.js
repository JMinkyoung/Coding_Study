function solution(s) {
    //짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자
    let answer = '';
    let cnt = 0;
    for(let i=0; i<s.length; i++){
        if(s[i] === ' '){
            answer+=' ';
            cnt=0;
        }else if(cnt%2===0 || cnt===0){
            answer+=s[i].toUpperCase();
            cnt++;
        }else{
            answer+=s[i].toLowerCase();
            cnt++;
        }
    }
    return answer;
}