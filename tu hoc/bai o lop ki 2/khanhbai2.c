
Khánh
#include <stdio.h>
#include<string.h>
typedef struct {
	char ma[50];
	char ten[50];
	double gia;
}product;
int main(){
	int n;
	scanf("%d",&n);
	getchar();
	product a[n];
	for(int i=0;i<n;i++){
		printf("sp thu %d :",i+1);
		printf("nhap ma sp: ");
		fgets(a[i].ma,sizeof(a[i].ma),stdin);
		printf("nhap ten sp : ");		
		fgets(a[i].ten,sizeof(a[i].ten),stdin);
		a[i].ten[strcspn(a[i].ten,"\n")]='\0';
		printf("nhap gia sp: ");
		scanf("%lf",&a[i].gia);
		getchar();
	} 
	product temd;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j].gia<a[i].gia){
				temd=a[i];
				a[i]=a[j];
				a[j]=temd;
			}
		}
	}
	printf("gia theo thu tu tang dan la :");
	for(int i=0;i<n;i++){
		printf("sp thu %d\n",i+1);
		printf("ma sp : %s\n",a[i].ma);
		printf("ten sp : %s\n",a[i].ten);
		printf("gia : %lf\n",a[i].gia);
	}
}