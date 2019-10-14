#include <iostream>               //std::cout 要用到的头文件  
#include <stdio.h>                //标准输入输出头文件  
using namespace std;

int main()  
{  
  printf("Hello,World!--Way 1\n");    //printf 语句打印,C语言格式的
  puts("Hello,World!--Way 2");        //puts 语句  
  puts("Hello," " " "World!--Way 3"); //字符串拼接  
  cout << "Hello,World!--Way 4" << endl; //C++ 教科书上写法  
  return 0;
}
