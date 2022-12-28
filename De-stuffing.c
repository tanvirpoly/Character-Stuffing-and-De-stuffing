#include<stdio.h>
#include<string.h>
main()
{
    int i,j,k,l,n,count;
    char s[100],cs[50];
    printf("\n ENTER THE STUFFED STRING :");
    gets(s);
    n=strlen(s);
    printf("\nTHE STRING IS\n");
    for(i=0; i<n;)
    {
        if(s[i]=='$')
        {
            i++;
            count=(s[i]-'0')*10+(s[i+1]-'0');
            if(count<5)
            {
                printf("INVALIDE MESSAGE");
                exit(1);
            }
            while(count>0)
            {
                printf("%c",s[i+2]);
                count--;
            }
            i=i+3;
        }
        else
        {
            printf("%c",s[i]);
            i++;
        }
    }
    getch();
}
