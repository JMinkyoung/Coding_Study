function solution(s){
    let answer = true;
    let arr = s.split("");
    let st = [];
    for(let i=0; i<arr.length; i++){
        if(arr[i] === '('){
            st.push('(');
        }else if(arr[i] === ')'){
            if(st.length!==0){
                st.pop();
            }else{
                answer = false;
                break;
            }
        }
    }
    
    if(answer){st.length === 0 ? answer = true : answer = false;}
    
    return answer;
}