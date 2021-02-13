function solution(clothes) {
    let answer = 1;
    let obj = {};
    const len = clothes.length;
//     let clothe = [];
//     let cnt = [0,0,0,0];
//     let zerocnt = 0;

//     for(let i=0; i<clothes.length; i++){
//         let temp = clothe.indexOf(clothes[i][1]);
//         console.log(temp);
//         if(temp ===-1){
//             clothe.push(clothes[i][1]);
//             cnt[clothe.indexOf(clothes[i][1])]++;
//         }else{
//             cnt[temp]++;
//         }
//     }
//     for(let i=0; i<cnt.length; i++){
//         if(cnt[i] === 0){
//             zerocnt++;
//         }
//     }
//     if(zerocnt !== 3){
//         const result = cnt.filter((value)=>value>0);
//         answer += result.reduce((prev,curr)=> prev*curr+1,1);
//     }
    for(let i=0; i<len; i++){
        obj[clothes[i][1]] = (obj[clothes[i][1]] || 1) + 1;
    }
    for(let key in obj){
        answer *= obj[key];
    }
    return answer-1;
}