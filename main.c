#include <stdio.h>
#include <stdlib.h>
int main()
{
int zi, luna, an,nr,zile_luna,bisect;
    printf("Ziua: ");
    scanf("%d", &zi);
    printf("Luna: ");
    scanf("%d", &luna);
    printf("anul: ");
    scanf("%d", &an);
    printf("Introduceti numarul de zile: ");
    scanf("%d", &nr);
    if(an%4==0&&an%100!=0) bisect=1;
    else if(an%400==0) bisect=1;
    else bisect=0;
    while(nr!=0)
{
    if(luna==1||luna==3||luna==5||luna==7||luna==8||luna==10)
    {       zile_luna=31;
            while(zi!=zile_luna&&nr!=0)
        {   zi++;
            nr--; }
        if(nr!=0)
        {   zi=1;
            luna++;
            nr--; }
    }
      if(luna==2)
    {   if(bisect==0) zile_luna=28;
        else zile_luna=29;
            while(zi!=zile_luna&&nr!=0)
        {   zi++;
            nr--;}
        if(nr!=0)
        {   zi=1;
            luna++;
            nr--; }
    }
      if(luna==4||luna==6||luna==9||luna==11)
    {       zile_luna=30;
        while(zi!=zile_luna&&nr!=0)
        {   zi++;
            nr--;}
        if(nr!=0)
        {   zi=1;
            luna++;
            nr--;}
    }
      if(luna==12)
    {       zile_luna=31;
        while(zi!=zile_luna&&nr!=0)
        {   zi++;
            nr--;}
        if(nr!=0)
        {   zi=1;
            luna=1;
            an++;
            nr--;}
    }
}
  printf("\n%d  %d  %d",zi,luna,an);
    return 0;
}
