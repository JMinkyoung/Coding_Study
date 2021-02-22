function solution(cacheSize, cities) {
    let answer = 0;
    let newArr = cities.map(v=>v.toLowerCase());
    let cache = [];
    
    //cacheSize가 0이면 전부 miss
    if(cacheSize === 0){
        return cities.length*5;
    } 
    
    for(let i=0; i<newArr.length; i++){

        //아직 캐시가 다 차지 않았을 때
        if(cache.length<cacheSize){
            //이미 캐시에 존재할 때
            if(cache.indexOf(newArr[i])>=0){
                answer+=1;
                cache.push(cache.splice(cache.indexOf(newArr[i]),1)[0]);
            }else{
                answer+=5;
                cache.push(newArr[i]);
            }
        }else{
            if(cache.indexOf(newArr[i])>=0){
                answer+=1;
                cache.push(cache.splice(cache.indexOf(newArr[i]),1)[0]);
            }else{
                cache.shift();
                cache.push(newArr[i]);
                answer+=5;
            }
        }
    }
    

    return answer;
}