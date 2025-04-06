#include<stdio.h>
int main(){
    struct students{
        char name;
        char reg_no;
        int age;
        float cgpa;
    };
    struct students s{
        strcpy(s.name,"yogesh");
        strcpy(s.reg_no,"TA1234");
        s.age=12;
        s.cgpa=6.7934;
        printtf("%s%s%d%f",s.name,s.reg_no,s.age,s.cgpa);
    }
}