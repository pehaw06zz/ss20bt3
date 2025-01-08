#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[20];
};
int main(){
	struct student SV[5];
	for(int i = 0;i < 5;i++){
		printf("nhap thong tin sv thu %d:\n",i+1);
	    printf("nhap ten: ");
	    fgets(SV[i].name,sizeof(SV[i].name),stdin);
	    printf("nhap tuoi: ");
	    scanf("%d",&SV[i].age);
	    getchar();
	    printf("nhap sdt: ");
	    fgets(SV[i].phoneNumber,sizeof(SV[i].phoneNumber),stdin);
	    printf("\n");
	    
	}
	printf("thong tin sv");
	for(int i = 0;i < 5;i++){
		printf("sinh vien thu %d:\n",i+1);
		printf("ten sv la: %s",SV[i].name);
		printf("tuoi sv la: %d\n",SV[i].age);
		printf("sdt sv: %s\n",SV[i].phoneNumber);
	}
	return 0;
}
