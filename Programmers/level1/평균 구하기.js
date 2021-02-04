function solution(arr) {
    let answer = 0;
    for(const temp of arr){
        answer+=temp;
    }
    answer/=arr.length;
    return answer;
}