// check number is even or odd 
# include<stdio.h>

int main() {
    int n;
    printf("enter the number which you want to check :");
    scanf("%d",&n);
    if(n%2==0){
        printf("given number is a even number");
    }
    
    else{
        printf("given number is a odd number");
    }
    
    return 0;
}