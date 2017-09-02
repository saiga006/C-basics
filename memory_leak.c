#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;
void Play(int bet)
{  char* C =(char *)malloc(sizeof(char)*10000);
  //char C[3]={'J','Q','K'};
   C[0]='J';
   C[1]='Q';
   C[2]='K';
  printf("Shuffling ....");
  srand(time(NULL));
  int i;
  for (i=0;i<5;i++)
  {
    int x=rand()%3;
    int y=rand()%3;
    int temp=C[x];
    C[x]=C[y];
    C[y]=temp;//Shuffling
    int playerguess;
    printf("whats the pos of queeen-1,2,3?");
    scanf("%d",&playerguess);
    if(C[playerguess-1]=='Q')
    {
      cash+=3*bet;
      printf("you win Result=%c %c %c Total Cash =%d\n",C[0],C[1],C[2],cash);
    }
    else
    {
      cash-=bet;
      printf("you loose! Result=%c %c %c Total Cash =%d\n",C[0],C[1],C[2],cash);
    }

  }
   //   free(C);
  
}

int main()
{
  int bet2;
  printf("welcome to the virtual casino \n \n");
  printf("total cash =%d\n",cash);
  while(cash>0)
  {
    printf("whats your bet?");
    scanf("%d",&bet2);
    if(bet2==0||bet2>cash)
    break;
    Play(bet2);
    printf("\n ######################################");
    
    
  }
}