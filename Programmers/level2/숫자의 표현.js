function solution(n) {
    let answer = 0;

    for(let max = 1; max<=n; max++){
        let sum = 0;
        for(let i=max; i>=1; i--){
            sum+=i;
            if(sum===n){
                answer++;
                break;
            }else if(sum>n){
                break;
            }
        }
    }
    return answer;
}