/*
Calculate discount based on shopping amount purchased,
 apply the discount as per the following discount criteria,
 then find and print the final amount that has to be paid by the customer after subtracting the discount amount:

If the user has purchased something that costs from $101 to $200, the discount will be 5%.
If the user has purchased something that costs from $201 to $400, the discount will be 10%.
If the user has purchased something that costs from $401 to $800, the discount will be 20%.
And if the user has purchased something that costs more than $800, the total discount that will be applied to the whole purchase amount is 25%.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float amount, discount, amountToBePaid;
    printf("How much shopping amount you have done here ? ");
    scanf("%f", &amount);
    printf("\n");
    if(amount<=100)
        printf("You have to paid: %0.2f", amount);
    else
    {
        if(amount>100 && amount<=200)
        {
            //discount = (amount-100)*5/100;
            //amountToBePaid = amount-discount;
            amount=amount-100;
            amountToBePaid = 100+(amount-amount*0.05);
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>200 && amount<=400)
        {
            //discount = (amount-200)*10/100;
            amount=amount-200;
            amountToBePaid = 100+(100-100*0.05)+(amount-amount*0.10);
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else if(amount>400 && amount<=800)
        {
            //discount = (amount*20)/100;
            //amountToBePaid = amount-discount;
            amount=amount-400;
             amountToBePaid = 100+(100-100*0.05)+(200-200*0.10)+(amount-amount*0.20);
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
        else
        {
            discount = (amount*25)/100;
            amountToBePaid = amount-discount;
            printf("After applying the discount, you have to paid: %0.2f", amountToBePaid);
        }
    }
    getch();
    return 0;
}
