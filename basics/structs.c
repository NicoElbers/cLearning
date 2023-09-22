#include <stdio.h>

struct Student {
  int rollno;
  int age;
  char name[80];
  float marks;
};

int main() {
  struct Student s1, s3;

  scanf("%d%d%s%f", &s1.rollno, &s1.age, &s1.name, &s1.marks);
}
