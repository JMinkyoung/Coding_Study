function solution(s) {
    let answer = 1;
    let len = s.length;
    let arr = [];
    
    if(s.length===1) return answer;
    
    for(let i=0; i<len; i++){
        let temp='';
        let press = i+1; //압축 단위
        let cnt = 1; //문자열 반복 체크
        for(let j=0; j<len; j+=press){
            
            //substring(a,b)의 경우에 a는 포함하고 b는 포함하지 않는다.
            let current = s.substring(j,j+press);
            let next = s.substring(j+press,j+press+press);
            
            //앞 문자열과 다음 문자열이 같을 때
            if(current === next){
                cnt++;
            }else{
                //앞 문자열과 다음 문자열이 다르고 한번만 반복되었을 때
                if(cnt===1){
                    temp += current;
                //앞 문자열과 다음 문자열이 다르고 여러번 반복되었을 때 
                //(앞의 반복은 끝나고 다음 문자열로 넘어감)
                }else{
                    temp = temp + cnt + current;
                }
                cnt=1;
            } 
        }
        //새로운 문자열의 길이를 배열에 push
        arr.push(temp.length);
    }

    //길이들을 오름차순으로 정렬
    arr.sort((a,b)=>a-b);
    answer = arr[0];
    return answer;
}