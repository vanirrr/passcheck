#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    int leng;
    int digit = 0;
    int special = 0;

    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    leng = strlen(password);

    for (int i = 0; i < leng ; i++) {
        if (password[i] >= '0' && password[i] <= '9') {
            digit++;
        }
        if (strchr("_.@", password[i])) {
            special++;
        }
    }
    printf("Password has %i digits and %i special characters\n", digit, special);
    printf("The password has %i characters\n", leng-1);
    if (digit >= 1 && special >= 1 && leng >= 8) {
        printf("The password is strong\n");
    }
    else {
        printf("The password is weak\n");
    }
}