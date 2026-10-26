#include<stdio.h>

int main() {
    int item, quantity, cost,total;
    char response[20];

    printf("\n\n    WELCOME TO HARJOT'S CAFE\n");
    printf("  Menu -->\n");
    // Printing Menu
    printf("Item ID     Item       Cost\n");
    printf("1.         Tea         15.00 Rs.\n");
    printf("2.         Coffee      25.00 Rs.\n");
    printf("3.         Burger      50.00 Rs.\n");
    printf("4.         Pizza       100.00 Rs.\n");
    printf("5.         Sandwich    70.00 Rs.\n");

   
    do
    {
         // Taking Order
    printf("\nWhat would you like to order?");
    printf("\nEnter item id = ");
    scanf("%d", &item);
    printf("Quantity = ");
    scanf("%d", &quantity);

    // Making bill
    switch (item) {
        case 1:
            cost = 15 * quantity;
            printf("Cost of %d Tea = %d Rs.\n", quantity,cost);
            break;
        case 2:
            cost = 25 * quantity;
            printf("Cost of %d Coffee = %d Rs.\n",quantity, cost);
            break;
        case 3:
            cost = 50 * quantity;
            printf("Cost of %d Burger = %d Rs.\n",quantity, cost);
            break;
        case 4:
            cost = 100 * quantity;
            printf("Cost of %d Pizza = %d Rs.\n",quantity, cost);
            break;
        case 5:
            cost = 70 * quantity;
            printf("Cost of %d Sandwich = %d Rs.\n",quantity, cost);
            break;
        default:
            printf("Invalid item ID. Please try again.\n");
    }
    total+=cost;
    printf("\nDo you want to order something else?(Yes/No):");
    scanf("%s",response);
    } while (response[0]=='Y' || response[0]=='y');
   printf("\nYour total is = %d",total); 
    printf("\n\nThank you.Hope you like our sevice...\n\n");


    return 0;
}
