#include <stdio.h>
 int main()
 {
  long long t,n,b,i,j=1;
   long cnt;
   scanf("%lld",&t);
   while(t--)
   {
   long long m[1000] = {0};
   cnt=0;
   scanf("%lld", &n);
   for(i=0; i<n; i++)
   {
     scanf("%lld",&b);
      m[b]++;
      if(m[b]>1)
         continue ;
      else
        cnt++;
    }
     printf("Case %lld: %lld\n",j++ , cnt);
    }

    return 0;
     }
