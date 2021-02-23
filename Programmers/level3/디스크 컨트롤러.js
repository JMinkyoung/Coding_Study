function solution(jobs) {
    let answer = 0;
    let queue = [];
    let time = 0;
    let pointer = 0;
    const len = jobs.length;
    
    // 요청 시간을 오름차순으로 정렬한다
    jobs.sort((a,b)=>{
        return a[0]-b[0];
    });
    
    while(pointer<len || queue.length !==0){
        //
        if(len > pointer && time>=jobs[pointer][0]){
            queue.push(jobs[pointer++]);
            queue.sort((a,b)=>{
                return a[1]-b[1];
            });
            continue;
        }
        // 우선순위 큐가 비어있지 않을 때
        if(queue.length !== 0){
            time+=queue[0][1];
            answer += time - queue[0][0];
            queue.shift();
        // 우선순위 큐가 비어있을 때, 가장 앞에 있는 작업이 들어온다
        }else{ 
            time = jobs[pointer][0];
        }
    }
    
   
    return parseInt(answer/len) ;
}