#include<stdio.h>

int main(){
    int x,y,z;
    int a;
    
    printf("cac phuong an co tong la 200000 VND:");
    for (x=0; x<=200; x++)
    {
        for (y=0; y<=100; y++)
        {
            for (z=0; z<=40;z++)
            {
                if ((x*1000+y*2000+z*5000)==200000)
                {
                    printf("%d :1000 VND, %d :2000 VND, %d :5000 VND\n", x, y, z);
                    a++;
                }
            }
        }
    }
    printf("\n tong co %d phuong an", a);
    return 0;
}