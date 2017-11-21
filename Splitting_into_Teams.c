/*Question:-
During the Physical Education hour, PD sir Mr. Sundar has decided to conduct some team games. He wants to split the students in the 
class into equal sized teams. In some cases, there may be some students who are left out from teams and he wanted to use the left out 
students to assist him in conducting the team games.
For instance, if there are 50 students in the class and if the class has to be divided into 7 equal sized teams, 7 students will be there in each team and 1 student will be left out.
PD sir asks your help to automate this team splitting task. Can you please help him out?
 
Sample Input:
Enter the number of students in the class
60
Enter the number of teams
8

Sample Output:
  The number of students in each team is 7 and the number of students left out is 4
 */
  
  Source Code: 
  #include<stdio.h>
    int main(){
      int student,team,quo,rem;
      printf("Enter the number of students in the class\n");
      scanf("%d",&student);
      printf("Enter the number of teams\n");
      scanf("%d",&team);
      quo = student/team;
      rem = student%team;
      printf("The number of students in each team is %d and the number of students left out is %d",quo,rem);
    return 0;
}
