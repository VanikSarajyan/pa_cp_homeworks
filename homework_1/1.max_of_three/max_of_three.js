const prompt = require("prompt-sync")({ sigint: true });

// +"5" ~> 5
const x = +prompt();
const y = +prompt();
const z = +prompt();

let max = x;
if(y > max)
    max = y;
if(z > max)
    max = z;

console.log(max)
