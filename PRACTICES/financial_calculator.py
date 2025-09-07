# IG 6th Finacial calculator
income = float(input("what is your monthly income: "))
rent = float(input("what is your monthly rent: "))
utillities = float(input("what is your monthly utillities"))
groceries = float(input("what is your monthly groceries: "))
transportation = float(input("what is your monthly transportation: "))

total_expenses = rent + utillities + groceries + transportation
saving = income * 0.10
spending_money = income - (total_expenses + saving)

rent_percent = (rent/income) * 100
utillities_percent = (utillities/income) * 100
groceries_percent = (groceries/income) * 100
transportation_percent = (transportation/income) * 100
savings_percent = (saving/income) * 100

print(f"\nYour rent is ${rent:.2f} and that is {rent_percent:.0f}% of your income.")
print(f"Your utilities are ${utillities:.2f} and that is {utillities_percent:.0f}% of your income.")
print(f"Your groceries are ${groceries:.2f} and that is {groceries_percent:.0f}% of your income.")
print(f"Your transportation is ${transportation:.2f} and that is {transportation_percent:.0f}% of your income.")
print(f"\nYou should save ${saving:.2f} a month, that is {savings_percent:.0f}% of your income.")
print(f"\nYou have ${spending_money:.2f} of spending money each month!")
