#include <stdio.h>
#include <string.h>

#define MAX_STATES 50

struct State {
    char name[50];
    int population;
    int literacy_rate;
    int per_capita_income;
};

int main() {
    struct State states[MAX_STATES];
    int num_states, i, max_literacy_rate_index, max_per_capita_income_index;

    printf("Enter the number of states: ");
    scanf("%d", &num_states); se

    // Accept records of different states
    for (i = 0; i < num_states; i++) {
        printf("\nEnter details of state %d\n", i+1);

        printf("Name: ");
        scanf("%s", states[i].name);

        printf("Population: ");
        scanf("%d", &states[i].population);

        printf("Literacy rate: ");
        scanf("%d", &states[i].literacy_rate);

        printf("Per capita income: ");
        scanf("%d", &states[i].per_capita_income);
    }

    // Find the state with the highest literacy rate
    max_literacy_rate_index = 0;
    for (i = 1; i < num_states; i++) {
        if (states[i].literacy_rate > states[max_literacy_rate_index].literacy_rate) {
            max_literacy_rate_index = i;
        }
    }

    // Find the state with the highest per capita income
    max_per_capita_income_index = 0;
    for (i = 1; i < num_states; i++) {
        if (states[i].per_capita_income > states[max_per_capita_income_index].per_capita_income) {
            max_per_capita_income_index = i;
        }
    }

    // Display the state with the highest literacy rate and per capita income
    printf("\nState with highest literacy rate: %s (%d%%)\n", states[max_literacy_rate_index].name, states[max_literacy_rate_index].literacy_rate);
    printf("State with highest per capita income: %s (Rs %d)\n", states[max_per_capita_income_index].name, states[max_per_capita_income_index].per_capita_income);

    return 0;
}
