const prompt = require('prompt-sync')()

const side = +prompt();

for(let i = 1; i < side + 1; ++i)
    console.log("*".repeat(i));
