#importing string and random library
import string
import random

#input from the user for password strengt
l = int(input("How many letters do you wish to have in your password ? "))
n = int(input("How many numbers do you wish to have in your password ? "))
s = int(input("How many symbols do you wish to have in your password ? "))

#using predefined fuctions from the library
upper = string.ascii_uppercase       #for uppercase using ascii
lower = string.ascii_lowercase       #for lowercase using ascii
numbers = string.digits              #for digits
symbols = string.punctuation         #for symbols

#using random.choices() to allow repetition, extracted from library
letter = random.choices(upper + lower,k=l)
num = random.choices(numbers, k=n)
sym = random.choices(symbols, k=s)

#concatenate the lists and shuffle them
word = letter + num + sym
random.shuffle(word)

#join the shuffled list elements to create the password
password = "".join(word)
print("The Generated Password is "+password)