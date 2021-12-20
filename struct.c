#include<stdio.h>
#include<stdlib.h>
struct info{
    int roll;
    char name[50];
    float CGPA;
};
void print(struct info* s1)
{
    printf("name:%s\n",s1->name);
    printf("rollnumber:%d\n",s1->roll);
    printf("CGPA:%f\n",s1->CGPA);

}
int main()
{
    struct info s2;
    printf("name\n");
    scanf("%s",s2.name);
    scanf("%d",&s2.roll);
    scanf("%f",&s2.CGPA);
    print(&s2);
}