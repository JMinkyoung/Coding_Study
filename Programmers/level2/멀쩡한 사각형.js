function gcd(a,b) {
    if(b===0) return a;
    return gcd(b,a%b);
}

function solution(w, h) {
    let answer = 1;
    
    if(w===1 || h===1){
        return 0;
    }else if(w===h){
        return w*h-w;
    }
    answer = (w+h) - gcd(w,h);
    
    return w*h - answer;
}