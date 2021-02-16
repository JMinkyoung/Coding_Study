function solution(s) {
    let answer = '';
    let check_num = /[0-9]/;
    
    //첫 글자가 숫자일 때
    if(check_num.test(s[0])){
        answer = s[0]+s[1];
    //맨 앞에 공백이 올 때
    }else if(s[0]===' '){
        answer = s[0] + s[1].toUpperCase();
    }else{
        answer = s[0].toUpperCase()+s[1].toLowerCase();
    }
    
    for(let i=2; i<s.length; i++){
        if(s[i-1] === ' '){
            answer+= s[i].toUpperCase();
        }else{
            answer+= s[i].toLowerCase();
        }
    }
    
    /* 간단한 코드 */
    // let answer =  s.split(" ").map(v => v.charAt(0).toUpperCase() + v.substring(1).toLowerCase()).join(" ");
    return answer;
}