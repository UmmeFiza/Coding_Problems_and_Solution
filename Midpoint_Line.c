/*Question:-
Given the coordinates of the 2 end points of a line (x1,y1) and (x2,y2), write a C program to find the midpoint of the line.

Sample Input:
Enter x1
2
Enter y1
4
Enter x2
10
Enter y2
15

Output:
Binoy's house is located at (6.0 , 9.5)
*/

Source Code:

#include<stdio.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter x1\n");
    scanf("%d",&x1);
    printf("Enter y1\n");
    scanf("%d",&y1);
     printf("Enter x2\n");
    scanf("%d",&x2);
    printf("Enter y2\n");
    scanf("%d",&y2);
    printf("Binoy's house is located at (%.1f , %.1f)",(float)(x1+x2)/2,(float)(y1+y2)/2);
  return 0;
}
