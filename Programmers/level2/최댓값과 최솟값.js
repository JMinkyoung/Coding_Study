function solution(s) {
    let answer = '';
    let arr = s.split(" ");
    let min = 0; let max = 0;
    
    min = arr[0];
    max = arr[0];
    
    for(let i in arr){
        let temp = Number(arr[i]);
        if(temp<=min){
            min = temp;
        }
        if(temp>=max){
            max = temp;
        }
    }
    
    answer += min + " " + max;
    return answer;
}