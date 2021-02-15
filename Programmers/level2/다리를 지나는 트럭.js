function solution(bridge_length, weight, truck_weights) {
    let answer = 0;
    //다리 위 트럭들
    let bridge = [];
    //현재 다리 위 무게
    let currweight = 0;
    for(let i=0; i<bridge_length; i++){
        bridge.push(0);
    }
    
    let now = truck_weights.shift();
    bridge.unshift(now);
    currweight+=now;
    bridge.pop();
    answer++;
    
    while(currweight){
        
        currweight -= bridge.pop();
        
        now = truck_weights.shift();
        
        if(currweight + now <=weight){
            currweight+=now;
            bridge.unshift(now);
        }else{
            truck_weights.unshift(now);
            bridge.unshift(0);
            
        }
        answer++;
    }
    return answer;
}