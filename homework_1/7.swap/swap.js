const prompt = require("prompt-sync")();

let a = +prompt();
let b = +prompt();

/* Using destructuring 

[a,b] = [b,a]

*/

let temp = a;
a = b;
b = temp;

console.log(a,b)

