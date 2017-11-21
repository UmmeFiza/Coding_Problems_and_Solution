/*Question:-
The college ground is rectangular in shape. The Management decides to build a fence around the ground. In order to help the construction 
workers to build a straight fence, they planned to place a thick rope around the ground. They wanted to buy only the exact length of
the rope that is needed. They also wanted to cover the entire ground with a thick carpet during rainy season. They wanted to buy only 
the exact quantity of carpet that is needed. They requested your help.
Can you please help them by writing a C program to find the exact length of the rope and the exact quantity of carper that is needed?

Sample Input:
Enter the length of the ground
50
Enter the width of the ground
20

Output:
The length of the rope needed is 140m
The quantity of carpet needed is 1000sqm
*/
Source Code:
#include<stdio.h>
int main(){
    int len,wid,rope,carpet;
    printf("Enter the length of the ground\n");
    scanf("%d",&len);
    printf("Enter the width of the ground\n");
    scanf("%d",&wid);
    rope = 2*(len + wid);
    carpet = len * wid;
    printf("The length of the rope needed is %dm\n",rope);
    printf("The quantity of carpet needed is %dsqm\n",carpet);
    return 0;
}
