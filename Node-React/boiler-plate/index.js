const express = require('express')
const {User} = require("./models/User")
const bodyParser = require('body-parser')
const config = require('./config/key')
const app = express()
const port = 5000

//application/x-www-form-unlencoded
app.use(bodyParser.urlencoded({extended:true}));

//application/json
app.use(bodyParser.json());

//moongoDB 연결
const mongoose = require('mongoose')
mongoose.connect(config.mongoURI,{
    useNewUrlParser:true, useUnifiedTopology: true, useCreateIndex:true, useFindAndModify:false 
}).then(()=> console.log('MongoDB Connected..'))
.catch(err=> console.log(err))


app.get('/',(req,res)=>res.send('새해복 많이 받으세요!!!'))


//회원가입을 위한 route
app.post('/register',(req,res)=>{
    //회원가입 할 때 필요한 정보들을 clinet 에서 가져오면
    //그것들을 DB에 넣어준다.
    const user = new User(req.body);
    user.save((err,doc)=>{
        if(err) return res.json({success:false,err})
        return res.status(200).json({
            success:true
        })
    })

})
app.listen(port,() => console.log(`Example app listening on port ${port}!`))