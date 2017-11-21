/*Question:-
Each Sunday, a newspaper agency sells x copies of a certain newspaper for Rs.a per copy. The cost to the agency of each newspaper is Rs.b . The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit obtained on sundays. Can you please help them out by writing a C program to compute the profit given x, a and b.

Sample Input:
Enter the number of copies sold
1000
Enter the cost of 1 copy of the newspaper
2
Enter the cost spent by the agency on 1 copy of the newspaper
1

Output:
The profit obtained is Rs.900
*/
Source Code:
#include<stdio.h>
int main(){
    int sold,sp,cp,profit;
    printf("Enter the number of copies sold\n");
    scanf("%d",&sold);
    printf("Enter the cost of 1 copy of the newspaper\n");
    scanf("%d",&sp);
    printf("Enter the cost spent by the agency on 1 copy of the newspaper\n");
    scanf("%d",&cp);
    profit  = (sold*sp) - ((sold*cp) + 100);
    printf("The profit obtained is Rs.%d",profit);
return 0;
}
