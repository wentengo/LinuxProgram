#include "stdio.h"
#include "string.h"
#include "unistd.h"

#define END "\033[0m"               //关闭转义序列
#define BLACK "\033[30m"            //黑
#define RED "\033[31m"              //红
#define GREEN "\033[32m"            //绿
#define YELLOW "\033[33m"           //黄
#define BULE "\033[34m"             //蓝
#define PORPLE "\033[35m"           //洋红 
#define DGREEN "\033[36m"           //青
#define WHITE "\033[37m"            //白

int main()
{
  int i=0;
  char bar[102];
  memset(bar,0,sizeof(bar));
  const char *lable="|/-\\";
  while(i<=100)
  {
    printf(GREEN);
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    bar[i++]='#';
    usleep(10000);
  }
  printf("\n");
  printf(END);
  return 0;
}
