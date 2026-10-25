// check given number is prime number
# include<stdio.h>

int main() {
    int n,i;
    printf("enter the number which you want to check :");
    scanf("%d",&n);
    if(n<=1)
    printf("not a prime number");
    else
    for(int i=2;i<n;i++){
        if(n%i==0){
             break;
        }
    }
    if(i==n){
        printf("number is a prime number");
    }
    
    else{
        printf("not a prime number");
    }
    return 0;
}