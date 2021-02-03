function solution(s){
    let pcnt = 0; let ycnt = 0;
    for(let i=0; i<s.length; i++){
        if(s.charAt(i)==="p" || s.charAt(i)==="P"){
            pcnt++;
        }else if(s.charAt(i)==="y" || s.charAt(i)==="Y"){
            ycnt++;
        }
    }
    
    return pcnt===ycnt;
}