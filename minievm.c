#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int i,cand,voters,c,x,max=0,winner;
int *arr;
printf("ENTER THE NUMBER OF CANDIDATES ");
scanf("%d",&cand);
arr=(int*)malloc(cand*sizeof(int));
if(arr==NULL)
	return 1;
for(i=0;i<cand;i++)
	arr[i]=0;
printf("ENTER THE NUMBER OF VOTERS ");
scanf("%d",&voters);
for(i=0;i<voters;i++)
{
printf("VOTER %d VOTES FOR ",(i+1));
scanf("%d",&c);
arr[c-1]++;
}
printf("PRESS 1 TO VIEW RESULT AND 0 TO EXIT");
scanf("%d",&x);
if(x==1)
{
for(i=0;i<cand;i++)
{
	if(arr[i]>max)
	{
		winner=i+1;
		max=arr[i];
	}
	else if(arr[i]==max)
	{
	printf("IT'S A TIE. NO WINNER CAN BE DECLARED");
	getch();
	break;
	}
	else
	{
	printf("CANDIDATE %d IS THE WINNER ",winner);
	getch();
	}
}
}
else if(x==0)
{
free(arr);
return 0;
}
}
