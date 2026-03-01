#include<stdio.h>
#include<math.h>

void Nhapmang(int a[], int n){
    for (int i=0; i<n; i++){
        printf("nhap a%d: ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int n){
    for(int i=0; i<n; i++){
        printf("%d", a[i]);
    }
}


int maxchiahetcho4(int a[], int n, int *found ){
    int max =0;
    *found =0;

    for(int i=0; i<n; i++){
        if(a[i]%4==0){
            if(*found ==0||a[i]>max){
                max = a[i];
                *found =1;
            }
        }
    }
    return max;
}

int tinhbieuthuc(int a[], int n, double *ketqua){
    *ketqua = 0;

    for(int i=0; i<n-1; i++){
        if(a[i+1]==0)return 0;
        *ketqua +=(double)a[i]/a[i+1];
    }
    if(a[0]==0)return 0;
    *ketqua +=(double)a[n-1]/a[0];

    return 1;
}

int main(){
    int n;
    int a[100];

    printf("Nhap n: ");
    scanf("%d", &n);

    Nhapmang(a, n);
    printf("Day so: \n");
    xuatmang(a, n);

    int found;
    int max = maxchiahetcho4(a, n, &found);
    if(found){
        printf("Gia tri lon nhat chia het cho 4: %d\n", max);
    } else {
        printf("Khong co so chia het cho 4\n");
    }

    double ketqua;
    if(tinhbieuthuc(a, n, &ketqua)){
        printf("Gia tri bieu thuc: %.2lf\n", ketqua);
    } else {
        printf("Khong tinh duoc\n");
    }

    return 0;
}