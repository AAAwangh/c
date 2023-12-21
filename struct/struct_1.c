#include<stdio.h>

struct pp
{
    int sex;
    char name[11];
};

int main(void)
{
    int n=0;
    scanf("%d",&n);
    struct pp stu[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&stu[i].sex,stu[i].name);
    }
    for(int i=0;i<n;i++)
        for(int j=n;j>0;j--)
        {
            if(stu[i].sex+stu[j].sex==1)
                {
                    printf("%s %s\n",stu[i].name,stu[j].name);
                    break;
                }
            else continue;
        }
    return 0;
}