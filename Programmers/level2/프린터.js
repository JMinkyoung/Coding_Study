function solution(priorities, location) {
    let answer = 1;
    let target = location;
    let cnt = 0;
    let temp = 0;
    
    while(priorities.length>0){
        temp = priorities.shift();
        if(priorities.filter((val)=> val > temp).length>0){
            priorities.push(temp);
        }else{
            cnt++;
            if(target === 0){
                return answer = cnt;
            }
        }
        target--;
        if(target === -1){
            target = priorities.length-1;
        }
    }
    
    return answer;
}