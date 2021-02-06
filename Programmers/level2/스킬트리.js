function solution(skill, skill_trees) {
    let answer = 0;
    let master = skill.split("");
    for(let i=0; i<skill_trees.length; i++){
        const temp = skill_trees[i];
        let check = 1;
        for(let j=0; j<master.length-1; j++){
            const current = temp.indexOf(master[j]);
            const next = temp.indexOf(master[j+1]);
            if(next !== -1 && next < current || current === -1 && next !== -1){
                check = 0;
                break;
            }
        }
        answer += check;
    }
    
    return answer;
}