#include<stdio.h>

int main (){
    char a;
    int b,res;
    double c,d;
    printf("Welcome to unit converter!\n\n");
    printf("Choose only one Character:");
    printf("\n'T' for Temperature.\n");
    printf("'C' for Currency.\n");
    printf("'M' for Mass.\n");
    printf("-Your choise: ");
    scanf("%c",&a);
    while(a!='T' && a!='M' && a!='C' && a!='t' && a!='m' && a!='c'){
    printf("\nWrong input!\n");
    printf("Choose only one character('T'or'C'or'M')\n-Your choise: ");
    scanf(" %c",&a);
    }
    switch (a){
        case 'T':
        case 't':
            printf("\nChoose:\n'1' to convert from Celcius to Fahrenheit.\n");
            printf("'2' to convert from Fahrenheit to Celcius.\n");
            printf("-Your choise: ");
            scanf("%d",&b);
            while(b!=1 && b!=2){
                printf("\nWrong input!\nChoose '1' or '2'!\n-Your choise: ");
                scanf("%d",&b);
                }
            if(b==1){
                printf("Give tempreture in Celcius: ");
                res = scanf("%lf",&c);
                 while((res != 1) || (getchar()!='\n')){
                     while(getchar()!='\n');
                     printf("Wrong input!\n-Your choise: ");
                     res = scanf("%lf", &c);
                }
                d=c*1.8+32;
                printf("%.3lf in celsius= %.3lf in Fahrenheit!",c,d);}

            else{
                printf("Give tempreture in Fahrenheit : ");
                res = scanf("%lf",&c);
                while((res != 1) || (getchar()!='\n')){
                    while(getchar()!='\n');
                    printf("Wrong input!\n-Your choise: ");
                    res = scanf("%lf", &c);
                }
                d=(c-32)*0.55555555556;
                printf("%.3lf in Fahrenheit= %.3lf in Celsius!",c,d);}
            break;

        case 'C':
        case 'c':
            printf("Choose:\n");
            printf("'1' to convert from EUR to USD.\n");
            printf("'2' to convert from EUR to GBP.\n");
            printf("'3' to convert from EUR to CNY.\n");
            printf("-Your choise: ");
            scanf("%d",&b);


            while(b!=1 && b!=2 && b!=3){
                printf("\nWrong input!\nChoose '1' or '2' or '3'\n-Your choise: ");
                scanf("%d",&b);
                }

                if(b==1){
                    printf("Give ammount in Euros: ");
                    res = scanf("%lf",&c);
                    while((c<=0) || (res != 1) || (getchar()!='\n')){
                        while(getchar()!='\n');
                        printf("Wrong input!\n-Your choise: ");
                        res = scanf("%lf", &c);
                    }
                    d=c*1.048932;
                    printf("%.2lf EUR= %.2lf USD",c,d);}

                if(b==2){
                    printf("Give ammount in Euros: ");
                    res = scanf("%lf",&c);
                    while((c<=0) || (res != 1) || (getchar()!='\n')){
                        while(getchar()!='\n');  
                        printf("Wrong input!\n-Your choise: ");
                        res = scanf("%lf", &c);
                    }
                    d=c*0.861409513600;
                    printf("%.2lf EUR= %.2lf GBP",c,d);}

                if(b==3){
                    printf("Give ammount in Euros: ");
                    res = scanf("%lf",&c);
                    while((c<=0) || (res != 1) || (getchar()!='\n')){
                        while(getchar()!='\n');
                        printf("Wrong input!\n-Your choise: ");
                        res = scanf("%lf", &c);
                    }
                    d=c*7.30738482;
                    printf("%.2lf EUR= %.2lf CNY",c,d);}
            break;
        
        case 'M':
        case 'm':
            printf("Choose:\n");
            printf("'1' to convert from Kg to lb.\n");
            printf("'2' to convert from Gr to oz.\n");
            printf("-Your choise: ");
            scanf("%d",&b);

            while(b!=1 && b!=2){
                printf("\nWrong input!\n");
                printf("Choose '1' or '2'\n");
                printf("-Your choise: ");
                scanf("%d",&b);}


            if(b==1){
                printf("Give Kg: ");
                res = scanf("%lf",&c);
                while((c<=0) || (res != 1) || (getchar()!='\n')){
                    while(getchar()!='\n');
                    printf("Wrong input!\n-Your choise: ");
                    res = scanf("%lf", &c);
                }   
                d=c*2.2046226218;
                printf("%.3lf Kg= %.3lf lb",c,d);}
            else{
                printf("Give Gr: ");
                res = scanf("%lf",&c);
                while((c<=0) || (res != 1) || (getchar()!='\n')){
                     while(getchar()!='\n');
                     printf("Wrong input!\n-Your choise: ");
                     res = scanf("%lf", &c);
                }
                d=c/28.34952;
                printf("%.3lf Gr= %.3lf Oz",c,d);}
            break;
    }
    printf("\nEnd of converting!!!\n");
    return 0;
}
