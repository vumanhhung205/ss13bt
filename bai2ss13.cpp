#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char delChar(char s[], char s1[])
{
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] == s1[0])
        {
            int j;
            for (j = i; j < strlen(s); j++)
            {
                s[j] = s[j + 1];
            }
            s[j + 1] = NULL;
            i--;
        }
    }
    printf("Chuoi ki tu sau khi xoa: '%s'", s);
}
int main()
{
    char str[100];
    do
    {
        char str1[2];
        int count = 0;
        char searchValue[100], delValue[100];
        printf("-------------------------------Menu---------------------------------\n");
        printf("1.Nhap vao chuoi ky tu\n");
        printf("2.In ra noi dung chuoi vua nhap\n");
        printf("3.Nhap vao 1 ky tu, dem so lan xuat hien cua ky tu trong chuoi\n");
        printf("4.Nhap vao 2 ky tu, thay the cac ky tu thu hai thanh ky tu thu nhat\n");
        printf("5.Nhap vao 1 ky tu,xoa bo cac ky tu trong chuoi\n");
        printf("6.Thoat\n");
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
            for (int i = 0; i < strlen(str); i++)
            {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        case 3:
            count = 0;
            printf("Nhap ky tu can tim ");
            scanf("%s", &searchValue);
            for (int i = 0; i < strlen(str); i++)
            {
                if (searchValue[0] == str[i])
                {
                    count++;
                }
            }
            printf("So lan xuat hien cua no trong chuoi la %d\n", count);
            break;
        case 4:
            printf("Nhap 2 ky tu can su dung");
            scanf("%s", &str1);
            for (int i = 0; i < strlen(str); i++)
            {
                if (str1[1] == str[i])
                {
                    str[i] = str[0];
                }
            }
            for (int i = 0; i < strlen(str); i++)
            {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        case 5:
            printf("Nhap ky tu can xoa ");
            scanf("%s", &delValue);

            delChar(str, delValue);
            for (int i = 0; i < strlen(str); i++)
            {
                 printf("%c", str[i]);
          	}
            break;
        case 6:
        	exit(0);
        default:
            printf("vui long nhap lai");
        }
    } while (1 == 1);
}
