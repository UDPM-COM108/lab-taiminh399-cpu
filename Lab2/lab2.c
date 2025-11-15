#include <stdio.h>
#define PI 3.14

int main(){
    // Bai 1: Tinh tong va hieu 2 so nguyen
   float a, b, nhan, chia;
    printf("nhap vao 2 so thuc: ");
    scanf("%f %f", &a, &b);
    printf("xuat ra 2 so thuc: %f %f", a,b);
    nhan = a * b;
    chia = a/b;
    printf("\nhan 2 so thuc: %.2f", nhan);
    printf("\nchia 2 so thuc: %.2f",chia);
    // Bai 2 : Tinh chu vi va dien tich HCN
    float chieudai, chieurong;
    printf("\nNhapvso chieudai va chieurong:");
    scanf("%f %f", &chieudai, &chieurong);
    float chuvi = (chieudai + chieurong) * 2;
    float dientich = chieudai * chieurong;
    printf("Chu vi hcn la:  %f.2 cm\n", chuvi);
    printf("Dien tich hcn la: %f.2 cm%c", dientich);
    // Bai 3 Tinh chu vi va dien tich hinh tron
     //Input: Nhập bán kính hình tròn
    //Output: In ra chu vi và diện tích hình tròn
     float cvi, dtich;
    float bankinh;
    printf ("Nhap vao ban kinh hinh tron: ");
    scanf ("%f", &bankinh);
    cvi = 2 * pi * bankinh;
    dtich = pi * bankinh * bankinh;
    printf ("Chu vi hinh tron la: %.2f\n", cvi);
    printf ("Dien tich hinh tron la: %.2f\n", dtich);
    // Bai 4 tinh diem trung binh he so
    float diemtoan, diemly, diemhoa, diemtb;
    printf("\nnhap vao diem toan, ly, hoa: ");
    scanf("%f %f %f", &diemtoan, &diemly, &diemhoa);
    diemtoan*=3; diemly*=2; diemhoa*=1;
    diemtb = (diemtoan + diemly + diemhoa) / 3;
    printf("diem trung binh: %.2f", diemtb);
    return 0;
}

