#include <bits/stdc++.h>
using namespace std;

struct student {
    int id;
    string name;
};

int main() {
    int myAge = 43; // an int variable
    int *p = &myAge;
    // printf("%d", myAge);  // Outputs the value of myAge (43)
    // printf("%p", p); // Outputs the memory address of myAge (0x7ffe5367e044)

    int *arr = (int *)malloc(5 * sizeof(int));
    // int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    arr[0] = 6;
    arr[1] = 12;
    arr[2] = 3;
    *(arr+3) = 100; // same thing
    arr[4] = 123;
    printf("%d", *(arr + 2));

    // declaring a struct
    struct student stu1;
    stu1.name = "Nasif";
    stu1.id = 201;

    // array of structures
    // struct student[10] students; --> does not work
    struct student *students;
    students = (student *)malloc(5 * sizeof(student));
    students[0].name = "Nasif";
    students[0].id = 201;
}

// struct node {
//   int value;
//   struct node* next;
// };

// int main() {
//   struct node* first;
//   struct node* second;
//   struct node* third;

//   // initialization
//   first = (node*) malloc(sizeof(struct node));
//   second = (node*) malloc(sizeof(struct node));
//   third = (node*) malloc(sizeof(struct node));

//   // add/update
//   first->value = 10;
//   first->next = second;
//   second->value = 14;
//   second->next = third;
//   third->value = 14;
//   third->next = NULL;

//   // traversal
//   struct node* head = first;
//   while (head->next != NULL) {
//     cout << head->value << endl;
//     head = head->next;
//   }
// }
