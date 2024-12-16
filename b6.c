#include <stdio.h>

int main() {
    int first, end, elec;
    float money = 0;
    printf("nhap cong to dau thang: ");
    scanf("%d", &first);
    printf("nhap cong to cuoi thang: ");
    scanf("%d", &end);
    elec = end - first;

    if (elec < 0) {
        printf("sai du lieu\n");
        return 1; 
    }
      else{
        if (elec <= 50) {
            money = elec * 10000;
        } else if (elec <= 100) {
            money = 50 * 10000 + (elec - 50) * 15000;
        } else if (elec <= 150) {
            money = 50 * 10000 + 50 * 15000 + (elec - 100) * 20000;
        } else if (elec <= 200) {
            money = 50 * 10000 + 50 * 15000 + 50 * 20000 + (elec - 150) * 25000;
        } else {
            money = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (elec - 200) * 30000;
        }
    }
    printf("so dien tieu thu: %d kWh\n", elec);
    printf("so tien dien phai tra: %.0f VND\n", money);
    return 0;
}
