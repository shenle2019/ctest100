#include "stdio.h"
int main()
{
    /* 定义需要计算的日期 */
    int year = 2008;
    int month = 8;
    int day = 8;
    int d,m;

    if((year%4==0&&year%100!=0)||year%400==0)
        {
            m=29;
        }
    else{
            m=28;
        }
    switch(month){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
        case 11:
        case 12:
            d=(month+1)/2*31+((month+1)/2-2)*30+m;
        break;
        case 8:
            d=(month/2+1)*31+(month/2-2)*30+m;//5*31+2*30+29
        break;
        default:
        puts("日期有误！");
        break;
    }
    if(month==2){
        d=d-(m-day);
    }
    else if(month%2!=0||month==8){
        d=d+day-31;
    }
    else{
        d=d+day-30;
    }
    printf("%d年%d月%d日是该年的第%d天\n",year,month,day,d);
    return 0;
}
