const prompt = require('prompt-sync')()

let width = +prompt();
let height = width / 5;

function draw_line(width, symbol, newline){
    process.stdout.write(symbol.repeat(width));
    if (newline) console.log();
}

function draw_side_wall(height, width){
    for (let i = 0; i < height; ++i){
        console.log();
        process.stdout.write('|');
        draw_line(width - 2, ' ', false);
        console.log('|');
    }
}

function draw_roof(width){
    for(let i = 1; i < width + 1; i += 2){
        draw_line(Math.floor((width - i) / 2), ' ', false);
        draw_line(i, "*", true);
    }
}

draw_roof(width);
draw_line(width, "_", true);
draw_side_wall(height, width);
draw_line(width, "_", true);