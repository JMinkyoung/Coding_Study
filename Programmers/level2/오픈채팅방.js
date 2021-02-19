function solution(record) {
    let answer = [];
    let arr = record.map(value => value.split(" "));
    let user = {};
    
    for(let i=0; i<arr.length; i++){
        if(arr[i].length===3) {
            user[arr[i][1]] = arr[i][2];
        }
    }
    
    for(let i=0; i<arr.length; i++){
        if(arr[i][0] === 'Enter'){
            answer.push(user[arr[i][1]]+'님이 들어왔습니다.');
        }else if(arr[i][0] === 'Leave'){
            answer.push(user[arr[i][1]]+'님이 나갔습니다.');
        }
    }

    return answer;
}