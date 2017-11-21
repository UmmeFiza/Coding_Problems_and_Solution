/*Question:-
The shape of the college ground is Square. For the Independence day Flag Hoisting Function, it has been decided to place the flag
post at the exact center of the ground. Can you please help them in placing the flag post at the exact center?
Given the coordinates of the left bottom vertex of the square ground and the length of the side, you need to write a program 
to determine the coordinates of the centre of the ground.
[Assumption --- Length of the side is always even]

Sample Input
Enter the x-coordinate of the left bottom vertex
4
Enter the y-coordinate of the left bottom vertex
0
Enter the length of a side
8

Output:
The centre of the ground is at (8,4)
*/

Source Code:
#include<stdio.h>
int main(){
    int x,y,l;
    printf("Enter the x-coordinate of the left bottom vertex\n");
    scanf("%d",&x);
    printf("Enter the y-coordinate of the left bottom vertex\n");
    scanf("%d",&y);
    printf("Enter the length of a side\n");
    scanf("%d",&l);
    x = x + (l/2);
    y = y + (l/2);
    printf("The centre of the ground is at (%d,%d)",x,y);
return 0;
}
