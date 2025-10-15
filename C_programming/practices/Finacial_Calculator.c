// IG 6th Financial Calculator
#include <stdio.h>

double getInput(char prompt[]) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

double calcPercent(double income, double expense) {
    return (expense / income) * 100;
}

int main(void) {
    double income, rent, utilities, groceries, transportation;
    double savings, spendingMoney;
    double rentPercent, utilitiesPercent, groceriesPercent, transportationPercent, savingsPercent;

    income = getInput("What is your monthly income: ");
    rent = getInput("What is your monthly rent/mortgage: ");
    utilities = getInput("What is your monthly utilities: ");
    groceries = getInput("What is your monthly groceries: ");
    transportation = getInput("What is your monthly transportation: ");

    savings = income * 0.10;

    rentPercent = calcPercent(income, rent);
    utilitiesPercent = calcPercent(income, utilities);
    groceriesPercent = calcPercent(income, groceries);
    transportationPercent = calcPercent(income, transportation);
    savingsPercent = calcPercent(income, savings);

    spendingMoney = income - (rent + utilities + groceries + transportation + savings);

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n", rent, rentPercent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n", utilities, utilitiesPercent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n", groceries, groceriesPercent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.", transportation, transportationPercent); // ❌ Mistake: Missing \n here
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n", savings, savingsPercent);
    printf("You have $%.2f of spending money each month!\n", spendingMoney);

    return 0;
}

