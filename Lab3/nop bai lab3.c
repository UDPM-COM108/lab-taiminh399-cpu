#include <stdio.h>
#include <math.h>
    int main() {
        float diem;
        printf("Nhap diem: ");
        scanf("%f", &diem);

        if (diem >= 9) {
            printf("Xep loai Xuat sac\n");
        } else if (diem >= 8 && diem < 9) {
            printf("Xep loai Gioi\n");
        } else if (diem >= 6.5 && diem < 8) {
            printf("Xep loai Kha\n");
        } else if (diem >= 5 && diem < 6.5) {
            printf("Xep loai Trung binh\n");
        } else if (diem >= 3 && diem < 5) {
            printf("Xep loai Kem\n");
        }else {
            printf("Xep loai Yeu\n");
        }
        //Bai2:Giải phương trình bậc nhất
        float a, b, x;
        printf("Nhap he so a va b: ");  
        scanf("%f %f", &a, &b);
        if (a == 0) {
            if (b == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x = -b / a;
            printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
        }
        //Bài 3: Giải Phương trình bậc 2

        float a2, b2, c2, delta, x1, x2;
        printf("Nhap he so a, b, c cua phuong trinh bac 2   : ");  
        scanf("%f %f %f", &a2, &b2, &c2);
        if (a2 == 0) {
            if (b2 == 0) {
                if (c2 == 0) {
                    printf("Phuong trinh vo so nghiem\n");
                } else {
                    printf("Phuong trinh vo nghiem\n");
                }
            } else {
                x = -c2 / b2;
                printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
            }
        } else {
            delta = b2 * b2 - 4 * a2 * c2;
            if (delta < 0) {
                printf("Phuong trinh vo nghiem\n");
            } else if (delta == 0) {
                x = -b2 / (2 * a2);
                printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
            } else {
                x1 = (-b2 + sqrt(delta)) / (2 * a2);
                x2 = (-b2 - sqrt(delta)) / (2 * a2);
                printf("Phuong trinh co 2 nghiem rieng biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
            }
        }
        //XÂY DỰNG MENU CHƯƠNG TRÌNH cho các bài tập trên
        int choice;
        printf("\nChon bai tap:\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n"); 
        printf("3. Giai phuong trinh bac hai\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Ban da chon bai tap Xep loai hoc luc\n");
                break;
            case 2:
                printf("Ban da chon bai tap Giai phuong trinh bac nhat\n");
                break;
            case 3:
                printf("Ban da chon bai tap Giai phuong trinh bac hai\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
            }

             //bai 4 tinh tien dien void bai4() {
    int kwh;
    double tien = 0;

    printf("Nhap so kWh dien su dung: ");
    scanf("%d", &kwh);

    if (kwh <= 50)
        tien = kwh * 1678;
    else if (kwh <= 100)
        tien = 50 * 1806 + (kwh - 50) * 1734;
    else if (kwh <= 200)
        tien = 50 * 1806 + 50 * 1866 + (kwh - 100) * 2014;
    else if (kwh <= 300)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + (kwh - 200) * 2536;
    else if (kwh <= 400)
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (kwh - 300) * 2834;
    else
        tien = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (kwh - 400) * 2927;

    printf("Tien dien phai tra: %.0lf VND\n", tien);


// ====================== MENU ======================
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh bac 1\n");
        printf("3. Giai phuong trinh bac 2\n")
    }
       return 0;

}
















































        }