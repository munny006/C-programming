#include<stdio.h>
int main(){

    long long T,a,b,i,res = 0;
    char c;
    scanf("%lld",&T);
    for(  i= 1;  i<= T; i++){
        scanf("%lld %lld %c",&a,&b,&c);
        if(c == '+')res = a+b;
        else if(c == '-')res = a-b;
        else if(c == '%')res = a%b;
        else if(c == '/')res = a/b;
        else if(c == '*')res = a*b;
        printf("Case %d: %lld\n",i,res);
    }
    return 0;
}
