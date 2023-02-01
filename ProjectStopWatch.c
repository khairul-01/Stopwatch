#include<conio.h>
#include<stdio.h>
#define c 60
#include<windows.h>
#include<stdlib.h>

int main()
{
    int h,m,s;
    printf("\n\n\n\t\tEnter Hour, Minute and second : \n\t\t\t");
    scanf("%d%d%d",&h,&m,&s);
    system("cls");

    int i=0,j=0,k=0;
    while(1)
    {
       printf("\n\n\n\n\n\n\t\t\t################ Stop Watch ###############\n\n");
       printf("\t\t\t\t\t%.2d : %.2d : %.2d\n",i,j,k);
       printf("\n\t\t\t-------------------------------------------\n\n\n\n\n\n\n");
       if(i==h&&j==m&&k==s){
        break;
       }
       else{
         system("cls");
       }
       k++;
       Sleep(100);
       if(k==c){
        j++;
        k=0;
       }
       if(j==c){
        i++;
        j=0;
       }

    }




    return 0;
}
