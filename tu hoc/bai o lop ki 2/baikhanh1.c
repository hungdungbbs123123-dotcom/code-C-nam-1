
#include <stdio.h>
int main(){
	int n ;
	int tong=0,dem=1;
	scanf("%d",&n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if (a[i][j]/2!=0){
				tong+=a[i][j];
				dem+=1;
			}
		}
	}
	float tb=tong/dem;
	printf("%.2f",tb);
}