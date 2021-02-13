function solution(people, limit) {
    let answer = 0;
    let left = 0;
    let right = people.length-1;
    const sortedPeople = people.sort((a,b)=>a-b);
    
    while(left<=right){
        if(sortedPeople[left] + sortedPeople[right] <= limit){
            left++;
        }
        right--;
        answer++;
    }
    return answer;
}