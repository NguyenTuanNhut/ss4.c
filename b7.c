#include<stdio.h>
 
 int main(){
    int nam;
    printf("nhap nam");
    scanf("%d",&nam);
    if(nam % 400 == 0){
        printf(" la nam nhuan");
    }
    else {
        printf("la nam khong nhuan");
    }
    return 0;
 }