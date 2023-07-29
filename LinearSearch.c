#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,found=0,k,a[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
             found=1;
            printf("%d",i);
         
        }
        else{
            continue;
        }
    }
    if(found==0){
        printf("-1");
        
    }
    return 0;
}
