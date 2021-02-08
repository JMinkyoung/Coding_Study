function solution(arr1, arr2) {
    let answer = [[]];
 
     for(let i in arr1){
         answer[i]=[];
         for(let j=0; j<arr1[0].length; j++){
             answer[i][j] = arr1[i][j]+ arr2[i][j];
         }
     }
     return answer;
 }