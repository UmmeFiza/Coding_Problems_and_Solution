/*Question:-
The mathematics teacher has recently taught the formula for computing the distance between 2 points to her students. She gave them an 
asssignment on calculating the distance between the points. In order to prevent copying, she gave each student a different set of questions.
But she found it very difficult to correct all 100 assignments. She seeks your help. Can you please help her out?

Sample Input:
Enter the x-coordinate of vertex A
5
Enter the y-coordinate of vertex A
10
Enter the x-coordinate of vertex B
10
Enter the y-coordinate of vertex B
10
Enter the x-coordinate of vertex C
8
Enter the y-coordinate of vertex C
4
Output:[All floating pont values are displayed correct to 1 decimal place]

Length of side AB is 5.0
Length of side BC is 6.3
Length of side AC is 6.7
*/
Source Code:
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    float ab,bc,ac;
    printf("Enter the x-coordinate of vertex A\n");
    scanf("%d",&x1);
    printf("Enter the y-coordinate of vertex A\n");
    scanf("%d",&y1);
    printf("Enter the x-coordinate of vertex B\n");
    scanf("%d",&x2);
    printf("Enter the y-coordinate of vertex B\n");
    scanf("%d",&y2);
    printf("Enter the x-coordinate of vertex C\n");
    scanf("%d",&x3);
    printf("Enter the y-coordinate of vertex C\n");
    scanf("%d",&y3);
    ab = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    bc = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    ac = sqrt(pow((x1-x3),2) + pow((y1-y3),2));
    printf("Length of side AB is %.1f\n",ab);
    printf("Length of side BC is %.1f\n",bc);
    printf("Length of side AC is %.1f\n",ac);
return 0;
}
