#include<stdio.h>
#include<conio.h>
int main()
{
    int choice, amt=0 ;
    int n,m;
    x:
    printf("     ********welcome to XYZ restaurant******** \n\n");
    printf("Press 1. TEA -rs.25\n");
    printf("Press 2. COFFEE -rs.35\n");
    printf("Press 3. COLD DRINK -rs.45\n");
    printf("Press 4. LASSI -rs.30\n");
    printf("Press 5. RED BULL -rs.100\n");


    scanf("%d",&choice);
    switch(choice)
     {
     case 1:
         printf("enter the number of items\n");
         scanf("%d",&n);
         amt+=25;
         printf("do you want more itmes \n");
       printf("press 1 for yes or 2 for no \n");
         scanf("%d",&m);
         if(m==1){
         goto x;
         }
         else
            break;
     case 2:
          printf("enter the number of items\n");
         scanf("%d",&n);
        amt+=35*n;
       printf("do you want more itmes \n");
       printf("press 1 for yes or 2 for no \n");
         scanf("%d",&m);
         if(m==1){
         goto x;
         }
         else{
            break;}
     case 3:
          printf("enter the number of items\n");
         scanf("%d",&n);
         amt+=45*n;
        printf("do you want more itmes \n");
       printf("press 1 for yes or 2 for no \n");
         scanf("%d",&m);
         if(m==1){
         goto x;
         }
         else
            break;
     case 4:
          printf("enter the number of items\n");
         scanf("%d",&n);
         amt+=30*n;
       printf("do you want more itmes \n");
       printf("press 1 for yes or 2 for no \n");
         scanf("%d",&m);
         if(m==1){
         goto x;
         }
         else
            break;
     case 5:
          printf("enter the number of items\n");
         scanf("%d",&n);
         amt+=100*n;
      printf("do you want more itmes \n");
       printf("press 1 for yes or 2 for no \n");
         scanf("%d",&m);
         if(m==1){
         goto x;
         }
         else
            break;
        }
       printf("               Thankyou for your order\n");
         printf("**********Your grand total bill amount is rupees-->%d  **********",amt);

return 0;
}
