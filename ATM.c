#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pass=1234;
    int PIN,option;
    float balance=1000;
    int attempts=0;
    float D_amount,W_amount;
    while(attempts<=3)
   {
      printf("Enter PIN:");
      scanf("%d",&PIN);
    if (PIN==pass)
    {
        printf("\n====Login Successful====\n");
        do
        {
            printf("\n");
            printf("=======================\n");
            printf("        MENU\n");
            printf("=======================\n");
            printf("1.Check balance\n");
            printf("2.Deposit Money \n");
            printf("3. Withdraw Money \n");
            printf("4. exit\n");
            printf("Enter the option :");
            scanf("%d",&option);
            switch(option)
            {
                case 1: printf("Your balance is %g\n",balance);
                printf("\n");
                break;
                
                case 2: printf("Enter the amount :");
                scanf("%f",&D_amount);
                if (D_amount<=200000)
                {
                    balance=balance+D_amount;
                    printf("========================\n");
                    printf("Deposit Successful\n");
                     printf("========================\n");
                    printf("Your balance is %g\n",balance);
    
                }
                else
                {
                    printf("Above Limit\n");
                }
                printf("\n");
                break;
                case 3:
                printf ("Enter the amount:");
                scanf("%f",&W_amount);
                if (W_amount>balance  || W_amount<400 )
                {
                    printf("Insufficient Balance\n");
                }
                else 
                {
                     printf("========================\n");
                    printf("Withdrawal Successful\n");
                     printf("========================\n");
                    balance=balance-W_amount;
                    printf("========================\n");
                    printf("Your balance is %g\n",balance);
                    printf("========================\n");
                }
                printf("\n");   
                break;
                case 4:
                printf("Thank You For Visiting\n");
                exit(0);
                
                break;
                default:printf("Invalid Option");
                
            }
            
        }while(1);
    }
    else
    {
       printf("Incorrect PIN");
       attempts++;
    }
   }
    
    if(attempts==3)
    {
        printf("Account Terminated");
    }
    return 0;
}