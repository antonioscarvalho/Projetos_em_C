#include<stdio.h>
int main( ){
    FILE *fp;
    char ch;
    fp = fopen ("arquivo1.txt", "r" );
    while ( 1 )
    {
        ch = fgetc(fp);
        if(ch==EOF)
        break;
        printf("%c\n\n",ch);
    }
    fclose ( fp );
    return 0;
}