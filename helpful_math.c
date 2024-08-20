#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    for(int i=0;i<strlen(str);i+=2)
    {
        for(int j=0;strlen(str)-1;j+=2)
        {
            if(str[j]>str[j+2])
                strcpy(str[j],str[j+2]);
        }
    }
    puts(str);
    return 0;
}
