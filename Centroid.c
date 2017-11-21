/*Question:-
Given the 3 vertices {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a C program to determine the centroid of the 3 vertices.

Sample Input:
Enter x1
2
Enter y1
4
Enter x2
10
Enter y2
15
Enter x3
5
Enter y3
8

Output:
Dinesh's house is located at (5.7 , 9.0)
*/
Source Code:
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1\n");
    scanf("%d",&x1);
    printf("Enter y1\n");
    scanf("%d",&y1);
    printf("Enter x2\n");
    scanf("%d",&x2);
    printf("Enter y2\n");
    scanf("%d",&y2);
    printf("Enter x3\n");
    scanf("%d",&x3);
    printf("Enter y3\n");
    scanf("%d",&y3);
    printf("Dinesh's house is located at (%.1f , %0.1f)",(float)(x1+x2+x3)/3,(float)(y1+y2+y3)/3);
return 0;
}
