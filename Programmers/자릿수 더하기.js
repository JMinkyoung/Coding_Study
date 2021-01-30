function solution(n)
{
    let answer = 0;
    let arr = String(n).split("");
    
    for(const arg of arr){
        answer+= arg*1;
    }

    return answer;
}