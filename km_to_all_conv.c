//Write a program to convert and print this distance in meters,feet, inches and centimeters.
#include<stdio.h>
#include<conio.h>
void main()
{
    //Conversion of distance
    float km,m,cm,inch,ft;
    printf("\n Enter the distence in kilometers=");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("\n KM Distance in meter=%f",m);
    printf("\n KM Distance in centimeterr=%f",cm);
    printf("\n KM Distance in feet=%f",inch);
    printf("\n KM Distance in inches=%f",ft);
getch();
}