import random

questions = [
    ("Q1", "A1"),
    ("Q2", "A2"),
    ("Q3", "A3"),
    ("Q4", "A4"),
    ("Q5", "A5"),
    ("Q6", "A6"),
    ("Q7", "A7"),
    ("Q8", "A8"),
    ("Q9", "A9"),
    ("Q10", "A10")
]

game_questions = random.sample(questions, 4)
correct_answers = 0

for question, answer in game_questions:
    user_answer = input(f"{question}\nYour answer: ")
    if user_answer.strip().lower() == answer.lower():
        correct_answers += 1
        print("You're right!")
    else:
        print(f"You're wrong, the correct answer is {answer}.")

print(f"You were correct in {correct_answers} out of 4.")