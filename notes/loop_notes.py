# VC loops time

import datetime

current = datetime.datetime.now()
hour = current.hour

#print(f"The time in seconds since Jan 1, 1970)
print(f"The time is: {current}")
print(f"The hour is: {hour}")

# Lists
# They can always have any information as long as they are seprerated
siblings = ["karen", "raul", "mariel", "isabella"]

print(siblings[3])
print(siblings)
siblings[0]= "karen"
siblings[2] = "mariel"
siblings.remove("isabella")

#for loop
for sibling in siblings:
    print(f"Hello {sibling}")

for x in range(20,0, -1):
    print(x) 

#while loop
#infininite loops
#print("Oh NO!")

#good while loop
i = 1

while i < 21:
    print(i)
    i += 1

while 1 % 2 == "0":
    print(f"(i) is even")
else:
    print (f"(i) is odd")
i += 1

import random

number = random.randint(1,20)
x += 1
while x != number:
    print("duck")
    x += 1

print ("Goose!")

while True:
    if number == x:
        print("Goose!")
        break
    else:
        print("Duck")
        x += 1