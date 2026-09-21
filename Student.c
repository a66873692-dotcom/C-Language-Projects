#include <stdio.h>
struct Student()
{
    int id;
    float marks;
}
int main(void)
{
    struct Student s1={14,98.7};
    printf("Student ID:%d\n Marks:%.2f",s1.id,s1.marks);
    struct *ptr=&s1;
    printf("Via Pointer -> Id:%d\n Marks:%.2f\n",ptr->id,pt->marks);
    return 0;
}