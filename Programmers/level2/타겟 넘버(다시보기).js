function solution(numbers, target) {
    let answer = 0;

    function dfs(index,total) {
        if(index === numbers.length) {
            if(total===target) answer++
            return
        }

        dfs(index+1,total+numbers[index])
        dfs(index+1,total-numbers[index])
    }
    dfs(0,0)
    return answer;
}