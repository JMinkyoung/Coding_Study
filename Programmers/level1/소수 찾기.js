function solution(n) {
    const arr = [];
    for(let i=0; i<=n; i++){
        arr.push(true)
    }
    for(let i=2; i*i<=n; i++){
        if(arr[i]){
            for(let j=i*i; j<=n; j+=i){
                arr[j] = false;
            }
        }
    }
    arr.splice(0,2,false,false);
    
    let answer = arr.filter((number)=> {return number!==false});
    
    return answer.length;
}