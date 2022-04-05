#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printb (void);
void printb (void){
   for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==1||(j==2&&(i==0||i==4||i==2))||(j==3&&(i==0||i==4||i==2))||((j==4)&&(i==1||3)))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
}

void printa (void);
void printa (void)
{
    int i,j,n=4;
    for(i=0;i<5;i++)
    {
       for(j=0;j<=9;j++)
        {  if(j==n||j==9-n||(i==2&&j>n&&j<9-n))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
        n--;
    }
    printf("\n");
}

void printc (void);
void printc (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j==3||j==4||j==5))||(j==2&&(i==1||i==2||i==3))||(i==4&&(j==3||j==4||j==5)))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printd (void);
void printd (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==0&&(j==3||j==4))||(j==6&&(i==1||i==2||i==3))||(i==4&&(j==3||j==4))) 
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printe (void);
void printe (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==0&&(j>1&&j<6))||(i==2&&(j>1&&j<6))||(i==4&&(j>1&&j<6)))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void print1 (void);
void print1 (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==1||(i==0&&(j==2||j==3||j==4))||(i==2&&(j==2||j==3||j==4)))
            printf(" *");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printg (void);
void printg (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
        if(j==1||(i==0&&(j==2||j==3||j==4))||(i==4&&(j==2||j==3||j==4))||(i==2&&(j==3||j==4||j==5))||(i==3&&j==7))
        printf(" *");
        else
        printf(" ");
        }
    printf("\n");
    }
    printf("\n");
}
void printh (void);
void printh (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==2&&(j>2&&j<8))||j==8)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void printi (void);
void printi (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if(j==5||(i==0&&(j==1||j==2||j==3||j==4))||(i==4&&(j==1||j==2||j==3||j==4)))
            printf(" *");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printj (void);
void printj (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
        if((i!=4&&j==4)||(i==0&&(j==1||j==2||j==3))||(i==4&&(j==1||j==2)))
           printf(" *");
        else
          printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printk (void);
void printk (void){
    for(int i=0;i<5;i++){
    for(int j=0;j<=9;j++){
                if(j==2||(i==0&&j==5)||(i==4&&j==5)||(j==4&&(i==1||i==3)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printl (void);
void printl (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==1||(i==4&&(j==2||j==3||j==4)))
            printf(" *");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printm (void);
void printm (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||j==8||(i==1&&(j==3||j==7))||(i==2&&(j==4||j==6)||(i==3&&j==5)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printn (void);
void printn (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==2&&j==3)||(i==3&&j==4)||(i==4&&j==5)||j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void printo (void);
void printo (void)
{
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j==3||j==4||j==5))||(i==4&&(j==3||j==4||j==5))||(j==2&&(i==1||i==2||i==3))||(j==6&&(i==1||i==2||i==3)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    } 
    printf("\n");  
}
void printp (void);
void printp (void)
{
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==0&&(j==3||j==4))||(i==1&&j==6)||(i==2&&(j==3||j==4)))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printq (void);
void printq (void)
{
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==1||j==4||(i==0&&(j==2||j==3))||(i==4&&(j==2||j==3))||(i==2&&j==2)||(i==3&&j==3)||(i==4&&j==5))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void prints (void);
void prints (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<9;j++){
            if((i==0&&(j>1&&j<5))||(i==1&&j==2)||(i==2&&(j>1&&j<5))||(i==3&&j==8)||(i==4&&(j>1&&j<5)))
            printf("*  ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void printr(void);
void printr(void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==0&&(j==3||j==4))||(i==1&&j==6)||(i==2&&(j==3||j==4))||(i==3&&j==5)||(i==4&&j==6))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printt (void);
void printt (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j<6))||(j==5&&i!=0))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printv (void);
void printv (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j==1||j==9))||(i==1&&(j==2||j==8))||(i==2&&(j==3||j==7))||(i==3&&(j==4||j==6)||(i==4&&j==5)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printu (void);
void printu (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((j==2&&i!=4)||(i==4&&(j==3||j==4))||(j==5&&i!=4))
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printw (void);
void printw (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if(j==2||(i==3&&(j==4||j==6))||(i==2&&j==5)||(i==4&&(j==3||j==4||j==6||j==7))||j==8)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void printx (void);
void printx (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j==2||j==6))||(i==1&&(j==3||j==5))||(i==2&&j==4)||(i==3&&(j==3||j==5))||(i==4&&(j==2||j==6)))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printy (void);
void printy (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j==2||j==6))||(i==1&&(j==3||j==5))||(i==2&&j==4)||(i==3&&j==3)||(i==4&&j==2))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void printz (void);
void printz (void){
    for(int i=0;i<5;i++){
        for(int j=0;j<=9;j++){
            if((i==0&&(j>1&&j<7))||(i==4&&(j>1&&j<7))||(i==1&&j==5)||(i==2&&j==4)||(i==3&&j==3))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void main(void){
    char s[50];
    int i,j;
    system("COLOR 0A");
    printf("enter a name *lowercase*\n");
    scanf("%[^\n]s",s);
    for(i=0;i<strlen(s);i++)
    {
        switch(s[i])
        {
        case 'a':
            printa();
            break;
        case 'b':
            printb();
             break;
        case 'c':
            printc();
            break;
        case 'e':
            printe();
            break;
        case 'd':
            printd();
            break;
        case 'f':
            print1();
            break;
        case 'g':
            printg();
            break;
        case 'h':
            printh();
            break;
        case 'i':
            printi();
            break;
        case 'j':
            printj();
            break;
        case 'k':
            printk();
            break;
        case 'l':
            printl();
            break;
        case 'm':
            printm();
            break;
        case 'n':
            printn();
            break;
        case 'o':
            printo();
            break;
        case 'p':
            printp();
            break;
        case 'q':
            printq();
            break;
        case 'r':
            printr();
            break;
        case 's':
            prints();
            break;
        case 't':
            printt();
            break;
        case 'v':
            printv();
            break;
        case 'u':
            printu();
            break;
        case 'w':
            printw();
            break;
        case 'x':
            printx();
            break;
        case 'y':
            printy();
            break;
        case 'z':
            printz();
            break;
        default:
             printf("\n\n");
        }
    }
}