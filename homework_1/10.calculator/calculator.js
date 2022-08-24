const prompt = require('prompt-sync')()

const a = +prompt();
const b = +prompt();

const c = prompt();

if (c == '+')
    console.log(a + b);
else if (c == '-')
    console.log(a - b);
else if (c == '*')
    console.log(a * b);
else if (c == '/')
    console.log(a / b);