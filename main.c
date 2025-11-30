#include<stdio.h>
#include<string.h>
int main()
{
    char pass[50];
    int uc=0,lc=0,dg=0,sp=0,len;
    printf("Enter Your password:");
    scanf("%s",pass);
    for(int i=0;pass[i]!='\0';i++)
    {
        if(pass[i]>='A' && pass[i]<='Z')
        {
            uc++;
        }
        else if(pass[i]>='a' && pass[i]<='z')
        {
            lc++;
        }
        else if(pass[i]>='0' && pass[i]<='9')
        {
            dg++;
        }
        else
        {
            sp++;
        }
    }
    len=strlen(pass);
    if(len>=8 && uc>=1 && lc>=1 && dg>=1 && sp>=1)
    {
        printf("Your password is strong\n");
        printf("Your password length is:%d\n",len);
        printf("Your password contain digit:%d\n",dg);
        printf("Your password conatin upercase:%d and lowercase:%d\n",uc,lc);
        printf("your password conatins special character:%d\n",sp);
        printf("You can go for this password\n");
    }
    else if(len>=6 && uc>=1 && lc>=1 && dg>=1 && sp>=1)
    {
        printf("Your password is Medium\n");
        printf("Your password length is:%d\n",len);
        printf("Your password contain digit:%d\n",dg);
        printf("Your password conatin upercase:%d and lowercase:%d\n",uc,lc);
        printf("your password conatins special character:%d\n",sp);
        
    }
    else 
    {
        printf("Your password is Weak\n");
        printf("Your password length is:%d\n",len);
        printf("Your password contain digit:%d\n",dg);
        printf("Your password conatin upercase:%d and lowercase:%d\n",uc,lc);
        printf("your password conatins special character:%d\n",sp);
        
    }
}