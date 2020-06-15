#include <stdio.h>
#include <string.h>

void dau();
void cuoi();
void giua();
void chuanhoa();

struct hotensv {
	char name[50];
} sv[120];

int j=0;

int main() {
	int n=0,i=0;
	do {
		scanf("%d",&n);
	} while ((n<=0) || (n>100));
	for (i;i<n;i++) {
		fflush(stdin);
		gets(sv[i].name);
	}
	for (j;j<n;j++) {
		dau(strlen(sv[j].name));
		cuoi(strlen(sv[j].name));
		giua(strlen(sv[j].name));
		chuanhoa(strlen(sv[j].name));
		if (j<n-1)
			printf("%s:%d\n",sv[j].name,strlen(sv[j].name));
		else printf("%s:%d",sv[j].name,strlen(sv[j].name));
	}
	return 0;
}

void chuanhoa(int max) {
	int i=0;
	for (i;i<max;i++)
		if ((97<=sv[j].name[i])&&(sv[j].name[i]<=122))
			sv[j].name[i]=sv[j].name[i]-32;
}

void giua(int max) {
	int i=0;
	while (i<max) {
		while ((sv[j].name[i]==' ') && (sv[j].name[i+1]==' '))
			strcpy(&sv[j].name[i],&sv[j].name[i+1]);
		i++;
	}
}

void cuoi(int max) {
	int i=max-1;
	for (i;i>=0;i--)
		if (((65<=sv[j].name[i]) && (sv[j].name[i]<=90)) || ((97<=sv[j].name[i]) && (sv[j].name[i]<=122)))
			break;
	i++;
	strcpy(&sv[j].name[i],&sv[j].name[max]);
}

void dau (int max) {
	int i=0;
	for (i;i<max;i++)
		if (((65<=sv[j].name[i]) && (sv[j].name[i]<=90)) || ((97<=sv[j].name[i]) && (sv[j].name[i]<=122)))
			break;
	strcpy(&sv[j].name[0],&sv[j].name[i]);
}
