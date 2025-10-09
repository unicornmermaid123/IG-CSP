# LM IG SB VC 6th Build A Game.


# Display the game

def welcome(info):
      return float(input(f"What is your {info}"))#function


name = input("What is your name?")#variable
age = input("How old are you?")#variable
play = int(input("would you like to play a game?(0 means no, 1 means yes)"))

if play == 1:
     print(f"Good Morning", (name),". Your birthday's today. Happy Birthday, you are", (age),"years old! You just wake up in a cabin in the middle of the woods, and you dont know where you are. You either...")
     question1 = input("look around or try to escape...(2 means look around, 3 means try to escape)") # sophia question
if question1 == 2:
      print("You ")
elif question1 == 3:
      print("You")
elif play == 0:
      print("Okay, have a good day!")
#isabella german the greeting and introduction