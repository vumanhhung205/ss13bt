#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char str[100];
    do
    {
        int count = 0;
        printf("-------------------------------Menu---------------------------------\n");
        printf("1.Nhap vao chuoi ky tu\n");
        printf("2.In ra do dai chuoi va noi dung chuoi vua nhap\n");
        printf("3.In ra chuoi dao nguoc\n");
        printf("4.In ra so luong chu cai trong chuoi\n");
        printf("5.In ra so luong chu so trong chuoi\n");
        printf("6.In ra so luong ky tu dac biet trong chuoi\n");
        printf("7.Thoat\n");
        int choice;
        printf("nhap lua chon cua ban\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap ky tu can dua vao\n");
            scanf("%s", &str);
            break;
        case 2:
            printf("Do dai cua chuoi la %d\n", strlen(str));
            printf("%s\n", str);
            break;
        case 3:
            printf("Chuoi dao nguoc la");
            for (int i = strlen(str) - 1; i > 0; i--)
            {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        case 4:
            for (int i = 0; i < strlen(str); i++)
            {
                if ((str[i] >= 97 && str[i] < 122) || (str[i] >= 65 && str[i] <= 90))
                {
                    count++;
                }
            }
            printf("so luong chu cai co trong chuoi la %d\n", count);
            break;
        case 5:
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] >= 48 && str[i] <= 57)
                {
                    count++;
                }
            }
            printf("so luong chu cai co trong chuoi la %d\n", count);
            break;
        case 6:
        	count=0;
            for (int i=0;i<strlen(str);i++) {
                if ( (isalpha(str[i])) || (isdigit(str[i])) ) {
                } else count++;
            }
            printf("\nso cac ki tu dac biet trong mang la %d\n",count);
            break;
        case 7:
        	exit(0);
        default:
            printf("vui long nhap lai");
        }
    } while (7 == 7);
}
