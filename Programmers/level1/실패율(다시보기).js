function solution(N, stages) {
    let answer = [];
    let arr = [];
    let people = stages.length;

    for(let i=1; i<=N; i++){
        const len = stages.filter(v => v === i).length;
        if(len === 0){
            arr.push({stage:i, ratio:0})
        }else{
            arr.push({stage:i, ratio:(len/people)});
            people-=len;
        }
    }
    
    arr.sort((a,b)=>{
        if(a.ratio === b.ratio){
            return a.stage-b.stage;
        }else{
            return b.ratio-a.ratio;
        }
    });    
    answer = arr.map(v => v.stage);
    
    return answer;
}