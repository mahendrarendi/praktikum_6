#include <iostream> 

int main() {
int array_a[10]={10,15,20,25,30,35,40,45,50,55};
int i, search, flag=0;
printf("Data yang ingin dicari : ");
scanf("%i",&search);
for (i=0;i<10;i++) {
if (array_a[i]==search) {
flag=1;
break;
}
}
if (flag==1) printf(" Data berada pada index ke-%i",i);
else printf("data yang anda cari tidak ditemukan");

printf("\n ");
printf("\ndevelop @mahendrarendi");

}



