#include<stdio.h>
int main()
{
int choice;
float celcius,fahrenheit;

    printf("enter\n 1.convert from celcius to fahrenheit\n\n2.convert from fahrenheit to celcius\n");
    
    printf("\n\tchoice your desire from the given above\n");
    scanf("%d",&choice);
    
    switch(choice){
    case1:{
   printf("enter temperature in celcius\n"); 
   scanf("%f",&celcius);
    
    fahrenheit=(celcius*9/5)+32;
    
    printf("the temperature is %.2f fahrenheit",fahrenheit);
     break;
    }
    
    case 2:
    {
    
    printf("enter temperature in fahrenheit\n");
    scanf("%f",&fahrenheit);
    celcius=(fahrenheit-32)*5/9;
    
    printf("the temperature is %.2f celcius",celcius);
    break;
    }
    
    default:{
    
    printf("ludia tena mjinga wewe");
    
    }}
    return 0;
}