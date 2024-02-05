#include<stdio.h>
int main()
{
     char choice;
     float balance = 0;
     float amount;

      printf("Enter Choice: 1) Add Deposit press 'D' or 'd' 2) Withdrawl press 'W' or 'w'\n");

     while(1)
       {
          printf("Users Enters: ");
          scanf(" %c", &choice);

        if(choice == 'D' || choice == 'd')
          {
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);
            balance += amount;
          }
         else if(choice == 'W' || choice == 'w')
          {
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);
            balance -= amount;
          }
         else
          {
            printf("Invalid Choice! Please enter 'D/d' or 'W/w'.\n");
               continue;
          }
         if(balance < 0)
          {
             printf("Your account now is %.2f dollars\n", balance);
              break;
          }

       }
            return 0;
}