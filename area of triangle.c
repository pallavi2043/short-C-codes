#include<stdio.h>
#include<math.h>
void main(){
double s,a,b,c,area;
printf("enter values of a,b,c");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area is=%f",area);
}
