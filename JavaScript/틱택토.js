var body = document.body;
var table = document.createElement('table');
var lines = [];
var squares = [];
var turn = 'X';
var result = document.createElement('div');

var 비동기콜백 = function(e){

    var linenum = lines.indexOf(e.target.parentNode);
    var squarenum = squares[linenum].indexOf(e.target);

    //칸이 이미 채워져 있는가
    if(squares[linenum][squarenum].textContent!==''){
    
    }else{
        squares[linenum][squarenum].textContent = turn;
        //세칸 다  채워졌나? 
        var 다참 = false;
        //가로줄 검사
        if(
            squares[linenum][0].textContent===turn && 
            squares[linenum][1].textContent===turn && 
            squares[linenum][2].textContent===turn){
    
            다참 = true;
        }
        //세로줄 검사
        if(
            squares[0][squarenum].textContent === turn &&
            squares[1][squarenum].textContent === turn &&
            squares[2][squarenum].textContent === turn){
        
            다참 = true;
        }
        //대각선 검사
        if(linenum - squarenum === 0 || Math.abs(linenum-squarenum)==2){ //대각선 검사 필요한 경우
            if(
                squares[0][0].textContent===turn&&
                squares[1][1].textContent===turn&&
                squares[2][2].textContent===turn){
    
                다참 =true
            }else if(
                squares[0][2].textContent===turn&&
                squares[1][1].textContent===turn&&
                squares[2][0].textContent===turn){
    
                다참 =true
            }
    
        }
    
        //다 찼으면
        if(다참){
            result.textContent=turn+' 님이 승리!';
            
            turn ='X';
            squares.forEach(function (line){
                line.forEach(function (square){
                    square.textContent='';
                });
            });
        }else{
            if(turn ==='X'){
                turn ='O';
            }else{
                turn ='X';
            }
        }
    }
};

for(var i=1; i<=3; i++){
 var line = document.createElement('tr');
 lines.push(line);
 squares.push([]);
 for(var j=1; j<=3; j++){
     var square = document.createElement('td');
     square.addEventListener('click',비동기콜백);
     squares[i-1].push(square);
     line.appendChild(square);
 }
 table.appendChild(line);
}

body.appendChild(table);
body.appendChild(result);
console.log(lines, squares);
