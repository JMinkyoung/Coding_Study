// async & awiat
// clear style of using promise

// 1.async
async function fetchUser(){
    // do network requst in 10 secs..
    return 'ellie';
}

const user = fetchUser();
user.then(console.log);
console.log(user);

// 2. await 
function delay(ms){
    return new Promise(resolve => setTimeout(resolve,ms));
}

async function getApple(){
    await delay(2000);
    return '🍎';
}

async function getBanana(){
    await delay(1000);
    return '🍌';
}

async function pickFruits(){
    const applePromise = getApple();
    const bananaPromise = getBanana();
    const apple = await applePromise;
    const banana = await bananaPromise;

    return `${apple} + ${banana}`;
}

pickFruits().then(console.log);

// 3. useful Promise APIs
function pickAllFruits(){
    return Promise.all([getApple(), getBanana()])
    .then(fruits => fruits.join(' + '));
}

pickAllFruits().then(console.log);

function pickOnlyOne(){
    return Promise.race([getApple(), getBanana()]);
}

pickOnlyOne().then(console.log);


// async 실습
class UserStorage{
    loginUser(id,password){
        return new Promise((resolve, reject)=>{
            setTimeout(()=>{
                if(
                    (id ==='ellie' && password === 'dream') ||
                    (id ==='coder' && password ==='academy')
                ){
                    resolve(id);
                }else{
                    reject(new Error('not found'));
                }
            },2000);
        });
    }

    getRoles(user){
        return new Promise((resolve, reject)=>{
            setTimeout(() => {
                if(user==='ellie'){
                    resolve({name:'ellie', role: 'admin'});
                }else{
                    reject(new Error('no access'));
                }
            }, 1000);
        });
    }

    async getUserWithRole(id, password) {
        const user = await this.loginUser(id, password);
        const role = await this.getRoles(user);
        return role;
    }
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter your password');
// userStorage.loginUser(id,password)
// .then(userStorage.getRoles)
// .then(user=>alert(`Hello ${user.name}, you have a ${user.role}`))
// .catch(console.log);
userStorage
    .getUserWithRole(id,password)
    .catch(console.log)
    .then(console.log);
