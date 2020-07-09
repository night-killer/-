#include<bits/stdc++.h>
#define PI 3.1415926535897932
int main()
{
    float re[10001],g[10001];
    for(int i=0;i<10000;i++)
    {
        re[i+1]=sqrt(-2*log(rand()/(RAND_MAX+1.0)));
        g[i+1]=re[i+1]*cos(2*PI*(rand()/(RAND_MAX+1.0)));
    }
    FILE *fp;
    fp=fopen("D:\\VS code\\random\\random3\\data2","w");
    for(int i=1;i<=10000;i++)
    {
        fprintf(fp,"%f ",g[i]);
    }
    fclose(fp);
    return 0;
}