function solution(n, computers) {
    let answer = 0;
    let visit = []; 
    
    for(let i=0; i<n; i++){
        visit.push(false);
    }
    
    function DFS(idx){
        visit[idx] = true;
        
        for(let i=0; i<n; i++){
            if(computers[idx][i] === 1 && !visit[i]){
                DFS(i);
            }
        }
    }
    
    for(let i=0; i<n; i++){
        if(!visit[i]){
            DFS(i);
            answer++;
        }
    }
    return answer;
}