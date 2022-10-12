def verbose(number):
    digits = ['', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine']
    teens = ['', 'ten','eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen']
    tens = ['twenty', 'thirty','fourty', 'fifty', 'sixty', 'seventy', 'eighty', 'ninety', 'hundred']

    if number > 1015:
        return "can't handle"

    if number < 0:
        return f"negative {verbose(-number)}"

    if number == 0:
        return 0

    if number <= 9:
        return digits[number]

    if number <= 19:
        return teens[number - 9]
    
    if number <= 100:
        return f"{tens[number // 10 - 2]}  {digits[number % 10]}"
    
    if number <= 999:
        words = f"{digits[number // 100]} hundred "
        if number % 100 <= 9:
            words += digits[number % 10]
        elif number % 100 <= 19:
            words += teens[(number % 100) - 9]
        else:
            words += f"{tens[(number % 100) // 10 - 2]} {digits[(number % 100) % 10]}"
        return words
    
    if number <= 1015:
        words = f"{digits[number // 1000]} thousand "
        if number % 1000 <= 9:
            words += digits[number % 1000]
        elif number % 1000 <= 19:
            words += teens[(number % 1000) - 9]
        elif number % 1000 <= 99:
            words += f"{tens[(number % 1000) // 10 - 2]} {digits[(number % 1000) % 10]}"
        return words

print(verbose(1066))