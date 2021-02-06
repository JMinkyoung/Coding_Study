function solution(number, k) {
    let answer = '';
    let st = [];
    for(let i=0; i<number.length; i++){
        const temp = number[i];
        
        while(k>0 && st[st.length-1] < temp){
            st.pop();
            k--;
        }
        st.push(temp);
    }
    
    st.splice(st.length-k, k);
    answer=st.join("");

    return answer;
}