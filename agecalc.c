#include<stdio.h>
#include<conio.h>
int main()
{
int c,d,m,y,dd,mm,yy,day,mon,year;
agecalc:
printf("\t  Age Calculator\n");
printf("\t  ⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆⋆\n");

printf("\n » Please enter Your Birth date \n");
printf(" Day : ");
scanf("%d",&d);
printf(" Month : ");
scanf("%d",&m);
printf(" Year : ");
scanf("%d",&y);

printf("\n » please enter today date \n");
printf(" Day : ");
scanf("%d",&dd);
printf(" Month : ");
scanf("%d",&mm);
printf(" Year : ");
scanf("%d",&yy);

if(d>dd)
{
dd+=30;
mm-=1;
}
if(m>mm)
{
mm+=12;
yy-=1;
}
day=dd-d;
mon=mm-m;
year=yy-y;

if(y>yy)
{
printf("\n *something wrong \n please check again\n\n");
goto agecalc;
}
printf("\n=========================\n");
printf(" » Your age is :\n %d(year) %d(mon) %d(day)",year,mon,day);
printf("\n=========================\n");
again:
printf("\nif you want check again press \n 1 for check again  \n 0 for exit \n");
scanf("%d",&c);
if(c==1)
{
goto agecalc;
}
if(c==0)
{
goto end;
}
else
{
printf("\nwrong input please enter correct option \n");
goto again;
}

end:
getch();
}