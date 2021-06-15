#include<stdio.h>

int main(){

    int T,a;
    char* res;
    scanf("%d",&T);
    for(int t = 1; t <= T; t++){
        scanf("%d",&a);
        if(a >= 90 && a <= 100)res = "A+";
        else if(a >= 80 && a <= 89)res = "A";
        else if(a >= 70 && a <= 79)res = "A-";
        else if(a >= 60 && a <= 69)res = "B+";
        else if(a >= 50 && a <= 59)res = "B-";
        else if(a >= 40 && a <= 49)res = "C";
        else if(a >= 35 && a <= 39)res = "D";
        else res = "F";
        printf("Student %d: %s\n",t,res);
    }
    return 0;
}
