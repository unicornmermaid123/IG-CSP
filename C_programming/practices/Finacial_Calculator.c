// IG 6th Financial Calculator
#include <stdio.h>

int main(void) {
    double income, rent, utilities, groceries, transportation;
    double savings, spendingMoney;
    double rentPercent, utilitiesPercent, groceriesPercent, transportationPercent, savingsPercent;

    printf("What is your monthly income: ");
    scanf("%lf", &income);

    printf("What is your monthly rent/mortgage: ");
    scanf("%lf", &rent);

    printf("What is your monthly utilities: ");
    scanf("%lf", &utilities);

    printf("What is your monthly groceries: ");
    scanf("%lf", &groceries);

    printf("What is your monthly transportation: ");
    scanf("%lf", &transportation);

    savings = income * 0.10;

    rentPercent = (rent / income) * 100;
    utilitiesPercent = (utilities / income) * 100;
    groceriesPercent = (groceries / income) * 100;
    transportationPercent = (transportation / income) * 100;
    savingsPercent = (savings / income) * 100;

    spendingMoney = income - (rent + utilities + groceries + transportation + savings);

    printf("\nYour rent is $%.2f and that is %.0f%% of your income.\n",rent,rentPercent);
    printf("Your utilities are $%.2f and that is %.0f%% of your income.\n",utilities,utilitiesPercent);
    printf("Your groceries are $%.2f and that is %.0f%% of your income.\n",groceries,groceriesPercent);
    printf("Your transportation is $%.2f and that is %.0f%% of your income.\n",transportation,transportationPercent);
    printf("You should save $%.2f a month, that is %.0f%% of your income.\n",savings,savingsPercent);
    printf("You have $%.2f of spending money each month!\n",spendingMoney);

    return 0;
}