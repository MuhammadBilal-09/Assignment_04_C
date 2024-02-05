#include<stdio.h>
int main()
{
   double calories_per_minute = 3.9;

   int time = 10;

   while(time <= 30)
    {
       double calories_burned = calories_per_minute * time;
        printf("After %d minutes, you've burned %.2f calories\n", time, calories_burned);
           time += 5;
    }
          return 0;
}
