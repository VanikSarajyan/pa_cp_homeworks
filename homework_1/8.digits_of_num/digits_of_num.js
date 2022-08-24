const prompt = require('prompt-sync')()

let n = +prompt()

let max = 1, n_copy = n;

while(n != 0){
    n = Math.floor(n / 10);
    max *= 10;
}

while(max != 1){
    max /= 10;
    let digit = Math.floor((n_copy % (max * 10)) / max);
    console.log(digit);
}