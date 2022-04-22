#include<stdio.h>
int main() 
{
    char d;
    scanf("%c", &d);
    if ((d=='a'||d=='A')||(d=='e'||d=='E')||(d=='i') ||(d=='o'||d=='O')||(d=='u')||(d=='U')) 
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
        return 0;
    }
}