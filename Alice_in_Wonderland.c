/* Question:-
Alice was bored that day,so she was sitting on the riverbank .Suddenly  she notices a talking, White Rabbit with a pocket watch.
It ran fast,and she followed it, down a rabbit hole .She fell into the hole and found a magical wonderland with dark trees, beautiful 
flowers.She found many ways numbered from 1,2,3,........18.she was confused which is the right way that will lead her to her home. 
She found a cute bird, standing in one of the tree. Alice asked the bird the way to go back to her home.
The bird said a two digit number( say 23 ) and asked her to find the sum of its digits (2+3=5) and that numbered way will lead 
her to her home.Alice was already confused, so pls help Alice in finding the route to her home....

SAMPLE INPUT OUTPUT 1 :
The bird said:
23
output:
Alice must go in path-5 to find her way to home

SAMPLE INPUT OUTPUT 2 :
The bird said:
99
Output:
Alice must go in path-18 to find her way to home.
*/

Source Code:
#include<stdio.h>
   int main(){
    int num,sum=0,rem;
    printf("The bird said:\n");
    scanf("%d",&num);
    while(num>0){
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    printf("Alice must go in path-%d to find her way to home",sum);
   return 0;
}
