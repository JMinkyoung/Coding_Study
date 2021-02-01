function gcd(a,b) {
    let c = 0;
    while(b!==0){
        c=a%b; 
        a=b;
        b=c;
    }
    return a;
}
function lcd(a,b){
    return a*b/gcd(a,b);
}

function solution(n, m) {
    var answer = [];
    answer.push(gcd(n,m));
    answer.push(lcd(n,m));
    return answer;
}