#include<stdio.h>

int main(){

    int T,n,t,i;
  scanf("%d",&T);
    for( t = 1; t <= T; t++){
        scanf("d",&n);
        printf("Case %d:\n",i);
        for(i = 1; i <= n; i++){
            int tmp = i;
            while(tmp--)
                printf("*");
            printf("\n");
        }
        for( i = n-1; i >=1; i--){
            int tmp = i;
            while(tmp--)
               printf("*");
            printf("\n");
        }
    }
    return 0;
}
