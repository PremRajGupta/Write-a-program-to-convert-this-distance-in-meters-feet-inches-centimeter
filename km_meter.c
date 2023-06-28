//Write a program to Convert Km to Meter.
#include<stdio.h>
#include<conio.h>
void main()
{
    int km;
    printf("\n Enter KM=");
    scanf("%d",&km);
    km=km*1000;
    printf("\n %dMeter",km);
    getch();
}