function solution(participant, completion) {
    participant.sort();
    completion.sort();
    
    const n = completion.length;
    for(let i=0; i<n; i++){
        if(participant[i] != completion[i]){
            return participant[i];
        }
    }
    return participant[participant.length-1];
}