#include <stdio.h>
int main()
{
    int marks;
    
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks > 100 || marks < 0) {
        printf("Error: please vaild 0 to 100 marks!\n");
    }
    else if(marks >= 90)
    {
        printf("grad a\n");
            }
    else if(marks >= 80)
    {
        printf("grad b\n");
            }
    else if(marks >= 70)
    {
        printf("grad c\n");
        }
    else {
        printf("fail");
    }
    return 0;
    }