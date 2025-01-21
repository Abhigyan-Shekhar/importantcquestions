#include <stdio.h>

int main() {
    char choice;
    int quantity,price=0;
    printf("Menu:\nB:Burger\nF:French Fries\nP:Pizza\nS:Sandwich\n");
    printf("Enter choice and quantity\n");
    scanf("%c %d",&choice,&quantity);
    switch (choice)
    {
    case 'B':price=quantity*200;
        break;
    case 'F':price=quantity*50;
        break;
    case 'P':price=quantity*500;
        break;
    case 'S':price=quantity*150;
        break;
    
    default:printf("Invalid choice\n");
        break;
    }
    printf("Total price: %d\n",price);
    return 0;
}