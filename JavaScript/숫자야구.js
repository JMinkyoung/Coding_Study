var body = document.body;

var num;
var numArr;

function 숫자뽑기(){
    num= [1,2,3,4,5,6,7,8,9];
    numArr = [];
    for(var i =0; i<4; i++){
        var 뽑은것 = num.splice(Math.floor(Math.random() * (9-i)) ,1)[0];
        numArr.push(뽑은것);
    }
}

숫자뽑기();

var result = document.createElement('h1');
body.append(result);

var form = document.createElement('form');
document.body.append(form);

var input = document.createElement('input');
form.append(input);
input.type = 'text';
input.maxLength = 4;
input.minLength = 4;

var button = document.createElement('button');
button.textContent='입력!';
form.append(button);

var incorrect = 0;

form.addEventListener('submit', function 콜백함수(e){
    e.preventDefault();
    var answer = input.value;
    if(answer === numArr.join('')){
        result.textContent='홈런';
        input.value='';
        input.focus();
        숫자뽑기();
        incorrect = 0;
    }else{
        var answerArr = answer.split('');
        var strike = 0;
        var ball = 0;
        incorrect++;
        if(incorrect >4){
            result.textContent = '10번 넘게 틀려서 실패! 답은' + numArr.join('')+'였습니다!';
            input.value='';
            input.focus();
            숫자뽑기();
            incorrect = 0;
        }else{
            for(var i=0; i<4;i++){
                if(Number(answerArr[i]) === numArr[i]){
                    strike++;
                }else if(numArr.indexOf(Number(answerArr[i]))>-1){
                    ball++;
                }
            }
            result.textContent = strike +' 스트라이크 '+ball+' 볼 입니다. 남은 기회는 '+(4-incorrect)+'회 입니다.';
            input.value='';
            input.focus();
        }


    }
});