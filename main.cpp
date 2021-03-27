#include <iostream>

int main() {

    char choice;
    float firstNumber;
    float secondNumber;
    float result;

    printf("Wskaz jakie pole chcesz obliczyc:\n 1 - kwadrat\n 2 - trojkat \n 3 - trapez \n");
    scanf("%f", &choice);

    switch (choice) {
        case '1':

            result = firstNumber * firstNumber;

            printf("Podaj bok kwadratu\n");
            scanf("%f", &firstNumber);
            printf("Pole kwadratu wynosi: %f", result);
            break;

        case '2':

            result = firstNumber * secondNumber;

            printf("Podaj podstawe trojkata\n");
            scanf("%s", &firstNumber);
            printf("Podaj wysokosc trojkata\n");
            scanf("%s", &secondNumber);
            printf("Pole trojkata wynosi: %d\n", result);
            break;
    }

    return 0;
}
