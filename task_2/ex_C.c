#include <stdio.h>
#include <stdbool.h>

double rounded(double n,int p){
    int power = 1;

    for (int i = 0;i<p;i++)
        power*=10;

    n = (int) (n * power+0.5);
    n=n/power;
    return n;
}

int main (void){
    double mid = 0;
    bool flag = true;
    int i = 0;

    while(flag){
        int num = 0;
        
        scanf("%d",&num);            
        if (num==0) flag=false;
        else{
        i++;
        mid+=num;
        } 
    }

    mid = rounded(mid/i,2);    
    printf("\n%.2f\n",mid);
}
