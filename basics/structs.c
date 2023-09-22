#include <stdio.h>

enum {
  STUDENTLIST_LEN = 80,
  STUDENTNAME_LEN = 80,
};

struct Student {
  int studentID;
  char name[STUDENTLIST_LEN];
  float marks;
};

void getRecords(struct Student[], int);
void display(struct Student[], int);

int main() {
  struct Student studentList[STUDENTLIST_LEN];
  int n;
  int choice;
  int studentID;

  printf("Number of records you want to enter?\n>");
  scanf("%d", &n);

  if (n > STUDENTLIST_LEN || n < 1) {
    printf("ERROR: trying to add an out of bounds amount of records\n");
    return 7;
  }

  getRecords(studentList, n);
  display(studentList, n);

  return 0;
}

void getRecords(struct Student studentList[STUDENTLIST_LEN], int n) {
  for (int i = 0; i < n; ++i) {
    printf("\nEnter data for record #%d\n", i);

    printf("Enter studentID:\n>");
    scanf("%d", &studentList[i].studentID);

    printf("Enter student name:\n>");
    scanf("%s", studentList[i].name);

    printf("Enter marks:\n>");
    scanf("%f", &studentList[i].marks);
  }
}

void display(struct Student studentList[STUDENTLIST_LEN], int n) {
  for (int i = 0; i < n; ++i) {
  }
}
