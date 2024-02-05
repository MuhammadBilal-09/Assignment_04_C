#include<stdio.h>
int main()
{
    int denominations[] = {1, 2, 5, 10, 50, 100, 500, 1000};
    int total_notes[] = {0, 0, 0, 0, 0, 0, 0, 0};

    int total_bill, customer_paid, change;

    printf("Enter the total bill amount: ");
    scanf("%d", &total_bill);

    printf("Enter the amount paid by the customer: ");
    scanf("%d", &customer_paid);

    change = customer_paid - total_bill;

    if(change < 0)
     {
        printf("The customer has not paid enough.\n");
     }
    else
     {
        int i = 7;

     while(i >= 0)
      {
         if(change >= denominations[i])
          {
             int count = change / denominations[i];
             total_notes[i] = count;
             change -= count * denominations[i];
          }
            i--;    
      }
         printf("Rs.1 Notes: %d\n", total_notes[0]);
         printf("Rs.2 Notes: %d\n", total_notes[1]);
         printf("Rs.5 Notes: %d\n", total_notes[2]);
         printf("Rs.10 Notes: %d\n", total_notes[3]);
         printf("Rs.50 Notes: %d\n", total_notes[4]);
         printf("Rs.100 Notes: %d\n", total_notes[5]);
         printf("Rs.500 Notes: %d\n", total_notes[6]);
         printf("Rs.1000 Notes: %d\n", total_notes[7]);
         printf("These notes are given to the customer."); 

     }

         return 0;
}