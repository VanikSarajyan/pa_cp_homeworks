const prompt = require("prompt-sync")({ sigint: true });

const x = +prompt();
const y = +prompt();
const z = +prompt();
const a = +prompt();

if(x + y + z + a == 0){
    let min = x;    
    if(y < min)
        min = y;
    if(z < min)
        min = z;
    if(a < min)
        min = a;
    
    console.log(min);
}