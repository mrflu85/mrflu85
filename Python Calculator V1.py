#Goal is to make a basic calculator with 2 inputs

import re

#Function to add
def add(x, y):
    return(x + y)

#function to subtract
def subtract(x, y):
    return(x - y)

#function to multiply
def multiply(x, y):
    return(x * y)

#function to divide
def divide(x, y):
    if y == 0:
        print("Don't divide by 0 dummy")
        return()
    return(x / y)

print("What would you like to do?")
print("A: Add")
print("B: Subtract")
print("C: Multiply")
print("D: Divide")

while True:
    #user input on math type
    choice = input("Enter choice: A, B, C, D:    ")
    if not re.search(r"[A-Da-d]", choice):
        print("Invalid Entry. Please Try again")
        continue
    x = float(input("Select first number: "))
    y = float(input("Select second number: "))

    #Make sure choice is valid option
    if re.search(r"[Aa]", choice):
        print(add(x, y))
    elif re.search(r"[Bb]", choice):
        print(subtract(x, y))
    elif re.search(r"[Cc]", choice):
        print(multiply(x, y))
    elif re.search(r"[Dd]", choice):
        print(divide(x, y))
    
    #see if they want to do another math
    #break the loop if they say no

    valid = False
    while not valid:
        next_calculation = input("Would you like to do another math? Yes or No: ")
        if next_calculation.lower() == "yes":
            valid = True 
            break
        elif next_calculation.lower() == "no":
            quit()
        else:
            print("invlaid entry. try again")