#include<stdio.h>

int main(){
    int ngay, thang;
    printf("nhap ngay: ");
    scanf("%d", &ngay);
    printf("nhap thang: ");
    scanf("%d", &thang);

    switch(thang){
        case 1:
            if(ngay <=19)
                printf("Ma Ket");
            else if(ngay >= 20)
                printf("Bao Binh");
            break;
        case 2:
            if(ngay <=18)
                printf("Bao Binh");
            else if(ngay >= 19)
                printf("Song Ngu");
            break;
        case 3:
            if(ngay <=20) 
                printf("Song Ngu");
            else if(ngay >= 21)
                printf("Bach Duong");
            break;
        case 4:
            if (ngay <=19)
                printf("Bach Duong");
            else if(ngay >=20)
                printf("Kim Nguu");
            break;
        case 5:
            if(ngay <=20)
                printf("Kim Nguu");
            else if(ngay >=21)
                printf("Song tu");
            break;
        case 6:
            if(ngay <=21)
                printf("Song tu");
            else if(ngay >=22)
                printf("Cu Giai");
            break;
        case 7:
            if(ngay <=22)
                printf("Cu Giai");
            else if(ngay >=23)
                printf("Su Tu");
            break;
        case 8:
            if(ngay <=22)
                printf("Su Tu");
            else if(ngay >=23)
                printf("Xu Nu");
            break;
        case 9:
            if(ngay <=22)
                printf("Xu Nu");
            else if(ngay >=23)
                printf("Thien Binh");
            break;
        case 10:
            if(ngay  <=23)
                printf("Thien Binh");
            else if(ngay >=24)
                printf("Bo Cap");
            break;
        case 11:
            if(ngay <=22)
                printf("Bo Cap");
            else if(ngay >=23)
                printf("Nhan Ma");
            break;
        case 12:
            if(ngay <=21)
                printf("Nhan Ma");
            else if(ngay >=22)
                printf("Ma Ket");
            break;            
        
    }
    return 0;
}