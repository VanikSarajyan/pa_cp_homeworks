const prompt = require("prompt-sync")();

const x = +prompt();
const y = +prompt();
const z = +prompt();

let min = x;
if(y < min)
    min = y;
if(z < min)
    min = z;

console.log(min)
