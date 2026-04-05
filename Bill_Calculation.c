#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;

    while(1) {
        printf("\n1.Idli - 30\n2.Dosa - 50\n3.Poori - 40\n4.Tea - 10\n5.Exit\n");
        scanf("%d", &choice);

        if(choice == 5)
            break;

        scanf("%d", &qty);

        switch(choice) {
            case 1:
                total += 30 * qty;
                break;
            case 2:
                total += 50 * qty;
                break;
            case 3:
                total += 40 * qty;
                break;
            case 4:
                total += 10 * qty;
                break;
            default:
                printf("Invalid\n");
        }
    }

    printf("Total Bill: %.2f", total);

    return 0;
}