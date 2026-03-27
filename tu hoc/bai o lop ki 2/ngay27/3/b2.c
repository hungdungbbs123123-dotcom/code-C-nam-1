
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {
	char model[10],hsx[30];
	long gia;
}LapTop;
int main(){	
    int n,i;
	FILE *f;
	LapTop *a;
	f=fopen("InLaptop.txt","rt");
	if(f==NULL) {
		puts("loi doc tep"); return 1;
	}
	fscanf(f,"%d\n",&n);
	a=(LapTop*) malloc(sizeof(LapTop)*n);
	for(i=0;i<n;i++)
	{
		fgets(a[i].model,10,f);
		a[i].model[strlen(a[i].model)-1]='\0';
		fgets(a[i].hsx,30,f);
		a[i].hsx[strlen(a[i].hsx)-1]='\0';
		fscanf(f,"%ld\n",&a[i].gia);
		printf("%s\t%s\t%ld\n",a[i].model,a[i].hsx,a[i].gia);
	}
	fclose(f);

    f=fopen ("asus.txt", "w");
    for (i=0; i<n; i++){
        if (strcmp(a[i].hsx, "Asus")==0){
            fprintf(f,"%s %ld\n", a[i].model, a[i].gia);
        }
    }
    fclose(f);

    f=fopen("LaptopB.dat","wb");
	fwrite(a,sizeof(LapTop),n,f);
	fclose(f);
	f=fopen("LaptopB.dat","rb");
	puts("\n..............\nDl doc tu tep LapTopB.dat\n");
	for(i=0;i<n;i++)
	{
		LapTop x;
		fread(&x,sizeof(LapTop),1,f);
		printf("%s\t%s\t %ld\n",x.model,x.hsx,x.gia);
	}
	fclose(f);
}


