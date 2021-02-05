function solution(progresses, speeds) {
    let answer = [0];
    let day = [];
    //let day = progresses.map((progress, index) => Math.ceil((100 - progress) / speeds[index]));
    let first = 0;
    
    for(let i=0; i<progresses.length; i++){
        let cnt = 1;
        
        while(progresses[i]+(speeds[i]*cnt)<100){
            cnt++;
        }
        
        day.push(cnt);
    }
    
    first = day[0];
    
    for(let i = 0, j = 0; i< day.length; i++){
        if(day[i] <= first) {
            answer[j] += 1;
        } else {
            first = day[i];
            answer[++j] = 1;
        }
    }
   
    console.log(day);
    return answer;
}

// function solution(progresses, speeds) {
//     var answer = [];
//     let temp = progresses;

//     while(speeds.length > 0){
//         for(let j = 0; j < speeds.length; j++) {
//             if(progresses[j] < 100) {
//                 progresses[j] += speeds[j];
//             }
//         }
//         let count = 0;
//         while (progresses[0] >= 100){
//             progresses.shift();
//             speeds.shift();
//             count++;
//         }
//         if (count > 0){
//             answer.push(count);
//         }
//     }
//     return answer;
// }