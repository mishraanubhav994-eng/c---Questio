#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter n ");
    scanf("%d",&n);
    //int p = n.sizeof();
    int x = log10(n)+1;
    if(n % x==0){
   printf("Not a Duck Number");
    }
    else{
        while(n>10){
            int ld = n%10;
            n = n/10;
            if(ld==0){
                printf("Duck number");
                break;
            }
            else printf("not a duck number");
        }
    }
}