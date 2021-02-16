function solution(arr) {
    let answer = 0;
    function gcd(a,b){
        if(b===0) return a;
        return gcd(b, a%b);
    };
    function lcd(a,b){
        return (a*b)/gcd(a,b);
    }

    answer = lcd(arr[0],arr[1]);

    for(let i=2; i<arr.length; i++){
        answer = lcd(answer,arr[i]);
    }
    return answer;
}