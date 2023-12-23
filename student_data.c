#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    char address[80];
};

struct student getstudent();
void putstudent();

main()
{
    struct student s;
    s = getstudent();
    putstudent(s);
}

struct student getstudent()
{
    struct student s1;
    printf("Enter rool number  ");
    scanf("%d", &s1.roll);
    fflush(stdin);
    printf("enter name  ");
    gets(s1.name);
    printf("enter adress ");
    gets(s1.address);
    return s1;
}

void putstudent(struct student s2)
{
    printf("%d\n%s\n%s", s2.roll, s2.name, s2.address);
}