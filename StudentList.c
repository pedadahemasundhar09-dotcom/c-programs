#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks);
    }

    for(i = 0; i < n; i++) {
        printf("%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
    }

    return 0;
}