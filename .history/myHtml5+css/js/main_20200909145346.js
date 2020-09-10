// console.log('hello');
// console.warn('this XX')
// console.error('XX');

// let, const
const age = 30;
const name = 'Join';
const numbers = new Array(1,2,4,5,6);
const fruits = ['name','name2','name3'];
const person = [
    {
        id: 1,
        firstName: 'John',
        lastName: 'Doe',
        isCom: false
    },
    {
        id: 2,
        firstName: 'John2',
        lastName: 'Doe2',
        isCom: false
    }
];

// console.log(person);

/* 
    forEach 循环
    map 从数组中创建新数组
    filter 根据条件创建新数组
*/
// forEach, map, filter
person.forEach(function(perso){
    //console.log(perso.firstName);
});


const personCom = person.filter(function(personT){
    return personT.isCom === false;
}).map(function(todo){
    return todo.firstName;
})

console.log(personCom);

const addNums = (num1 =1, num2 = 1) =>{
    return num1 + num2;
}

console.log(addNums(5,5));

person.forEach((todo) => console.log(todo))

//
function Ppe(fn, ln, dob){
    this.fn = fn;
    this.ln = ln;
    this.dob = dob;
    this.getBirth = function(){
        return this.fn + ' ' + this.ln;
    }
}

// Class
class Persons {
    constructor(fn, ln, dob){
        this.fn = fn;
        this.ln = ln;
        this.dob = dob;
    }
    getBirth(){
        return this.fn + ' ' + this.ln;
    }
}


const Ppe1 = new Ppe('fn', 'ln' ,'3');

console.log(Ppe1.getBirth());

// ----- DOM
// const form = document.getElementById('myform');
// console.log(document.querySelector('h1'));
// console.log(document.querySelectorAll('.item'));
// console.log(document.getElementsByClassName('item'));
// console.log(document.getElementsByName('li'));
// const items = document.querySelectorAll('.item');
// items.forEach((item) => console.log(item));
const ul = document.querySelector('.items');

// ul.remove();
// ul.lastElementChild.remove();
ul.firstElementChild.textContent = 'Hello';
ul.children[1].innerText = 'Brad';
ul.lastElementChild.innerHTML = '<h4>Hello</h4>'

const btn = document.querySelector('.btn');
// btn.style.background = 'red';

// click点击 moseover鼠标放着-上面 mouseout放在上面-移出后
/*
btn.addEventListener('click', (e) => {
    e.preventDefault();
    console.log('click');
    // console.log(e.target.className);
    document.querySelector('#mainContent').style.background = '#ccc';
    // 调用css里面的bg-dark样式
    document.querySelector('body').classList.add('bg-dark');
    
});
*/
// 获取数据
const myFormm = document.querySelector('#myform');
const namee = document.querySelector('#name');
const emaill = document.querySelector('#email');
const msg = document.querySelector('.msg');
const userList = document.querySelector('#users');

myFormm.addEventListener('submit', onSubmit);
function onSubmit(e){
    e.preventDefault();
    // console.log(namee.value);
    // 判断是否为空
    if(namee.value === '' || emaill.value === ''){
        msg.classList.add('error')
        msg.innerHTML = 'Please enter all fields';
        // 等待3秒后删除
        setTimeout(() => msg.remove(), 3000);
    }else{
        // 在msg列表输出name数值
        const li = document.createElement('li');
        li.appendChild(document.createTextNode(namee.value));
        userList.appendChild(li);
        namee.value = '';
        emaill.value = '';
    }
}