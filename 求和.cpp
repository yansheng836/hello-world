/*********************************************************************************
  *Copyright(C),2016-2020,Fosu
  *FileName: 求和.cpp
  *Author:	yansheng
  *Version: 1.0
  *Date:	2019.
  *Description:
  *Function List:
     1.…………
     2.…………
  *History:
     1.Date:
       Author:
       Modification:
     2.…………
**********************************************************************************/
#include<stdio.h>

int main()
{
	int i,sum = 0;
	for(i=0; i<=100; i++)
	{
		sum = sum + i;
	}
	printf("1+2···+100的和为：%d\n",sum);


	return 0;
}


