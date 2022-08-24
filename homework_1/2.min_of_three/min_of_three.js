const prompt = require("prompt-sync")({ sigint: true });

const x = +prompt();
const y = +prompt();
const z = +prompt();

let min = x;
if(y < min)
    min = y;
if(z < min)
    min = z;

console.log(min)
