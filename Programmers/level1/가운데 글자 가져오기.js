function solution(s) {
    let answer = '';
    let len = s.length;
    
    if(len%2===0){
        answer = s.substr(len/2-1,2);
    }else{
        answer = s.substr(Math.ceil(len/2)-1,1);  
    }
    return answer;
}