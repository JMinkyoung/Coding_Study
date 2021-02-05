function solution(numbers) {
    let answer = new Set();
    let primenumbers = [];
    let nums = numbers.split("");
   
    //소수 판별 함수
    const checkPrime = (num)=>{
        let cnt = 0;
        if(num<=1 || num===2)
            cnt = 0;
        
        for(let i=2; i<=Math.sqrt(num); i++){
            if(num%i===0){
                cnt++;
            }
            if(cnt!==0){
                break;
            }
        }
        if(cnt!==0 && !primenumbers.includes(num)){
            primenumbers.push(num);
        }

    }
    
    //주어진 숫자들로 새로운 조합 만드는 함수
    const makePermutation = (arr, str) =>{
        if(arr.length>0){
            for(let i=0; i<arr.length; i++){
                const temp = [...arr];
                temp.splice(i,1);
                makePermutation(temp, str + arr[i]);
            }
        }
        if(str.length>0){
            checkPrime(str*1);
        }
    };
    
    makePermutation(nums,"");
    answer = primenumbers.length;
    return answer;
}