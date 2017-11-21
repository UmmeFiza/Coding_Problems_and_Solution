/*Question:-
Given the values of m and c of the line equation y=mx+c, write a C program to find the sum of x-intercept and y-intercept.

Sample Input:
Enter the value of m
5
Enter the value of c
10

Output:
The line equation is y=5x+10
The x intercept is -2
The y intercept is 10
The house number is 8
*/

Source code:
#include<stdio.h>
int main(){
    int m,x,y,c;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    x = (0-c)/m;
    y = (m * 0)+c;
    printf("The line equation is y=%dx+%d\n",m,c);
    printf("The x intercept is %d\n",x);
    printf("The y intercept is %d\n",y);
    printf("The house number is %d\n",x+y);
 return 0;
}
