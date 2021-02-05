function solution(citations) {
    let answer = 0;
    let hIdx = 0;
    
    for(let hIdx=1; hIdx<=citations.length; hIdx++){
        let no = 0; let yes = 0;
        
        for(let i=0; i<citations.length; i++){
            if(citations[i]>=hIdx){
                yes++; //h번 이상 인용된 논문
            }else if(citations[i]<=hIdx){
                no++;  //h번 이하 이용된 논문
            }
        }
        if(yes>=hIdx && no<=hIdx){
            answer = hIdx;
        }
    }
    return answer;
}