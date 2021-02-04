function solution(arr) {
    var answer = [];
    var min = Math.min.apply(null, arr);
    
    if(arr.length===1){
        answer.push(-1);
    }else{
         arr.splice(arr.indexOf(min),1);
        answer = arr.slice();
    }
    return answer;
}