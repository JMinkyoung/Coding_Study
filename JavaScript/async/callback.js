'use strict';

//자바스크립트는 동기적이다. 
//호이스팅이 된 이후부터 작성된 프로그램이 하나하나씩 동기적으로 실행
//hoisting: var, fucntion 선언들이 제일 위로 올라가는 현상
console.log('1');
setTimeout(() => {
    console.log('2');
}, 1000);
console.log('3');

//Synchronos Callback
function printImmediately(print){
    print();
}
printImmediately(()=>console.log('hello'));


//Asynchronous Callback
function printWithDelay(print, timeout){
    setTimeout(print,timeout);
} 
printWithDelay(()=>console.log('async callback'), 2000);

//Callback Hell example
class UserStorage{
    loginUser(id,password,onSuccess,onError){
        setTimeout(()=>{
            if(
                (id ==='ellie' && password === 'dream') ||
                (id ==='coder' && password ==='academy')
            ){
                onSuccess(id);
            }else{
                onError(new Error('not found'));
            }
        },2000);
    }

    getRoles(user,onSuccess, onError){
        setTimeout(() => {
            if(user==='ellie'){
                onSuccess({name:'ellie', role: 'admin'});
            }else{
                onError(new Error('no access'));
            }
        }, 1000);
    }
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter your password');
userStorage.loginUser(
    id,
    password,
    user=>{
        userStorage.getRoles(
            user,
            userWithRole =>{
                alert(`Hello ${userWithRole.name}, you have a ${userWithRole.role}`);
            }, 
            error=>{
                console.log(error);
            }
        );
    },
    error=>{console.log(error)}
);
