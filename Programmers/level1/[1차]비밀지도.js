function solution(n, arr1, arr2) {
    let answer = [];
    let darr1 = [];
    let darr2 = [];

    for(let i=0; i<arr1.length; i++){
    darr1.push(arr1[i].toString(2));
    darr2.push(arr2[i].toString(2));

    if(darr1[i].length !== n){
        let len = darr1[i].length;
        for(let j=0; j<n-len; j++){
            darr1[i] = '0'+ darr1[i];
        }
    }
    if(darr2[i].length !== n){
        let len = darr2[i].length;
        for(let j=0; j<n-len; j++){
            darr2[i] = '0'+ darr2[i];
        }
    }
}

    for(let i=0; i<n; i++){
        let temp = '';
        for(let j=0; j<n; j++){
            if(darr1[i][j] === '1' || darr2[i][j] === '1'){
                temp += "#";
            }else{
                temp += " ";
            }
        }
        answer.push(temp);
    }

    return answer;
}