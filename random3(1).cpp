#include<bits/stdc++.h>
#define PI 3.1415926535897932
/*注：因为Wichmann-Hill算法产生的随机数相关性过强，所以使用了C++自带的随机数发生器。
经多次实验，改变种子不能有效去除相关性。其余任务则均采用Wichmann-Hill算法。*/
int main()
{
    float re[10001],g[10001];
    for(int i=0;i<10000;i++)
    {
        re[i+1]=sqrt(-2*log(rand()/(RAND_MAX+1.0)));
        g[i+1]=re[i+1]*sin(2*PI*(rand()/(RAND_MAX+1.0)));//正交分量
        /*g[i+1]=re[i+1]*cos(2*PI*(rand()/(RAND_MAX+1.0)));//同相分量*/
    }
    FILE *fp;
    fp=fopen("D:\\VS code\\random\\random3\\data1","w");
    for(int i=1;i<=10000;i++)
    {
        fprintf(fp,"%f ",g[i]);
    }
    fclose(fp);
    return 0;
}