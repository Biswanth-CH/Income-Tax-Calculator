#include<stdio.h>
#include<math.h>
#include<stdlib.h>
char name[15], gender[6];
float ai=0.0,it=0.0;
int age;
float p=0.0,r=0.0,E=0.0,y=0.0,z=0.0,di=0.0;
int n,choice;


int income_tax_output(float ai, float it)
{

    printf("\n\t\t--> Name :      %s",name);
    printf("\n\t\t--> Age :       %d",age);
    switch(choice)
        {
        case 1:

            printf("\n\t\t--> Category:  Individual.");

            break;

        case 2:

            printf("\n\t\t--> Category:    Senior Citizen.");
            break;
        case 3:

            printf("\n\t\t--> Category:    Super Senior Citizen.");
            break;

        }

    printf("\n\t\t--> Gender:     %s",gender);
    printf("\n\t\t--> Tax imposed %f on %f Annual Income",it,ai);
    printf("\n\n\t\tPress Enter to Return to Main Menu.");



}


int annual_income()
{
    individual();
    senior_citizen();
    super_senior_citizen();
}

int individual()
{
                    if(ai<=250000.0)
                    {
                        it=0;
                        income_tax_output(ai,it);

                    }
                    else if(ai>250000&&ai<500000)
                    {
                        it=ai*(0.05);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=500000&&ai<750000)
                    {
                        it=ai*(0.1);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=750000&&ai<1000000)
                    {
                        it=ai*(0.15);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=1000000&&ai<1250000)
                    {
                        it=ai*(0.2);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=1250000&&ai<1500000)
                    {
                        it=ai*(0.25);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=1500000)
                    {
                        it=ai*(0.3);
                        income_tax_output(ai,it);
                    }
}

int senior_citizen()
{
                    if(ai<=300000.0)
                    {
                        it=0;
                        income_tax_output(ai,it);
                    }
                    else if(ai>300000&&ai<500000)
                    {
                        it=ai*(0.05);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=500000&&ai<1000000)
                    {
                        it=ai*(0.2);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=1000000)
                    {
                        it=ai*(0.3);
                        income_tax_output(ai,it);
                    }
}

int super_senior_citizen()
{
                    if(ai<=500000.0)
                    {
                        it=0;
                        income_tax_output(ai,it);
                    }
                    else if(ai>500000&&ai<1000000)
                    {
                        it=ai*(0.2);
                        income_tax_output(ai,it);
                    }
                    else if(ai>=1000000)
                    {
                        it=ai*(0.3);
                        income_tax_output(ai,it);
                    }
}

int age_module()
{
            if(age>=18 && age<60)
            {
                choice=1;
                {
                    individual();
                }

            }
            else if(age>=60 && age<80)
            {
                choice=2;
                {
                    senior_citizen();
                }
            }
            else if(age>=80)
            {
                choice=3;
                {
                    super_senior_citizen();
                }
            }
            else if(age<18)
            {
                choice=4;
                printf("\n\n\t\t--> INVALID AGE : TRY AGAIN  :-( ");
                printf("\n\n\t\t--> Press Enter to Return to Main Menu");



            }
}
int income_tax()
{

     printf("\n\n\n\t\t*************************************************");
     printf("\n\t\t||        {* INCOME TAX  CALCULATOR  *}        ||");
     printf("\n\t\t*************************************************\n");
     printf("\n\t\t--> Enter Name (don't use space) : ");
            scanf("%s",&name);
            printf("\n\t\t--> Enter Age : ");
            scanf("%d",&age);
            printf("\n\t\t--> Enter Gender : ");
            scanf("%s",&gender);
            printf("\n\t\t--> Enter Annual Income :");
            scanf("%f",&ai);
            system("cls");
            age_module();
             getch();
            system("cls");


}

int menu(int num)
{
    switch(num)
        {
        case 1:

            income_tax();

            break;

        case 2:

            printf("\n\n\t\t-------------------------------------------------");
            printf("\n\t\t||\t \t   THANK YOU! :-)              ||\n");
            printf("\t\t-------------------------------------------------");

            exit(0);

        default:
            printf("\n\t\t--> Wrong Input : TRY AGAIN  :-( \n");
            printf("\n\n\t\tPress Enter to Return to Main Menu.");


        }
    return 0;
}

int main()
{
    while(1)
    {
        int num;

            printf("\n\n\n\t\t*************************************************");
     printf("\n\t\t||                  INCOME TAX                 ||");
     printf("\n\t\t*************************************************\n");
     printf("\n\t\t-------------------------------------------------");
     printf("\n\t\t|| --> Enter 1 : TO CALCULATE YOUR INCOME TAX. ||");
     printf("\n\t\t-------------------------------------------------");
     printf("\n\t\t|| --> Enter 2 : TO EXIT.                      ||");
     printf("\n\t\t-------------------------------------------------");
     printf("\n\t\t--> ENTER YOUR CHOICE : ");
        scanf("%d",&num);
            system("cls");

        menu(num);

    }
}
