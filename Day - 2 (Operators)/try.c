#include <stdio.h>
#include <math.h>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    // Write your code here
    double tip = (meal_cost / 100) * tip_percent;
    double tax = (meal_cost / 100) * tax_percent;
    double total_cost = meal_cost + tip + tax;
    printf("%d\n", (int)round(total_cost));
}

int main() {
    double meal_cost;
    int tip_percent, tax_percent;

    // Input
    scanf("%lf", &meal_cost);
    scanf("%d", &tip_percent);
    scanf("%d", &tax_percent);

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
