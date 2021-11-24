#include <stdio.h>
#include <stdlib.h>
char name[30];
int userScore=0,countQ=0;
void calculateScore()
{
    if (userScore >= 80&&userScore <= 100)
    {
        printf("\nCongrats! %s You win the quiz.\n",name);
        printf("you got %d numbers.\n",userScore);
        printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 60&&userScore < 80)
    {
        printf("Congrats! %s You win the quiz.\n",name);
        printf("you got %d numbers.\n",userScore);
        printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 40&&userScore < 60)
    {
        printf("Congrats! %s You win the quiz.\n",name);
        printf("you got %d numbers.\n",userScore);
        printf("your %d Question in correct.\n",countQ);
    }
    else if(userScore >= 10&&userScore < 40)
    {
        printf("Sorry! %s You loose the quiz.\n",name);
        printf("you got %d numbers.\n",userScore);
        printf("your %d Question in correct.\n",countQ);
        printf("*******Better luck lext time*********\n");
    }
    exit(0);
}
char result(char choose,char correct)
{
    char next;
    if (choose==correct)
    {
        countQ++;
        userScore=userScore+10;
        printf("Answer is correct!\n");
        printf("Press (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        fflush(stdin);
        scanf("%c",&next);
        return(next);
    }else
    {
        printf("Sorry Answer is wrong!\n");
        printf("Press (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        fflush(stdin);
        scanf("%c",&next);
        return(next);
    }
}
void question()
{
    char choose,correct;
    printf("1.Q-Who was the Indian captain in ICC World Cup 1983?\n");
    printf("\t(A).Ravi Shastri\t(B).Kapil Dev\n");
    printf("\t(C).Sunil Gavaskar\t(D).Madan Lal\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    printf("2.Q-In which year, India played their first Test match?\n");
    printf("\t(A).1932\t(B).1942\n");
    printf("\t(C).1922\t(D).1952\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    printf("3.Q- India hosted Cricket World Cup in which year?\n");
    printf("\t(A).1983\t(B).1975\n");
    printf("\t(C).1987\t(D).1995\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    printf("4.Q-Which Indian player had scored highest run in One Day cricket in 2018?\n");
    printf("\t(A).Rohit Sharma\t(B).Virat Kohli\n");
    printf("\t(C).KL Rahul\t(D).Hardik Pandya\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    printf("5.Q-Who was the highest run scorer in ICC Cricket World Cup 2003?\n");
    printf("\t(A).Rahul Dravid\t(B).Saurav Ganguly\n");
    printf("\t(C).Virendra Sehwag\t(D).Sachin Tendulkar\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    printf("6.Q-Sourav Ganguly was retired in which year?\n");
    printf("\t(A).2009\t(B).2008\n");
    printf("\t(C).2010\t(D).2007\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }