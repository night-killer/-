#include<bits/stdc++.h>
int main()
{
    float x[10001],y[10001],z[10001],u[10001];
    x[0]=1;
    y[0]=2;
    z[0]=3;
    for(int i=0;i<10000;i++)
    {
        x[i+1]=fmod(171*x[i],30269);
        y[i+1]=fmod(170*y[i],30307);
        z[i+1]=fmod(172*z[i],30323);
        u[i+1]=fmod(x[i+1]/30269+y[i+1]/30307+z[i+1]/30323,1);
    }
    FILE *fp;
    fp=fopen("D:\\VS code\\random\\random4\\data","w");
    for(int i=1;i<=10000;i++)
    {
        if(u[i]<0.2)
            fprintf(fp,"1 ");
        else if(u[i]<0.35)
            fprintf(fp,"2 ");
        else if(u[i]<0.6)
            fprintf(fp,"3 ");
        else
            fprintf(fp,"4 ");
    }
    fclose(fp);
    return 0;
}