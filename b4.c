#include<stdio.h>
int main(){
    int thang,nam;
    printf("nhap thang");
    scanf("%d",&thang);
    printf("nhap nam");
    scanf("%d",&nam);
switch (thang){ 
case 12:
case 10:
case 8:
case 7:
case 5:
case 3:
case 1:
printf(" co 31 ngay");
break;
case 2:
if(nam%400==0){
printf("thang 2 co 29 ngay");
}
else{
    printf("thang 2 co 28 ngay");
}
break;
case 4:
case 6:
case 9:
case 11:
printf("co 30 ngay");
break;
}
    return 0;
}