#include<stdio.h>
int main(){
    int a,b,c;
    printf("nhap vao 3 so nguyen");
    scanf("%d %d %d",&a,&b,&c);
    if (a<c<b || b<c<a){
        printf(" co nam trong khoang");
    }
    else{
        printf("khong nam trong khoang");
    }
    return 0;
}