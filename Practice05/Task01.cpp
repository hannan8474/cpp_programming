#include "iostream"
using namespace std;

int calculate_population (int previous_population, int birth_rate, int death_rate, int number_of_years)
{
    int i, new_population = 0;

    for (i = 0; i < number_of_years; i++)
    {
        new_population = previous_population + birth_rate - death_rate;
        previous_population = new_population;
    }
    return new_population;
}

int main ()
{
    int previous_population, birth_rate, death_rate, number_of_years, total_population;
    
    do 
    {
        cout << "Enter starting population size: ";
        cin >> previous_population;
    } while (previous_population < 2);

    do 
    {
        cout << "Enter annual birth rate: ";
        cin >> birth_rate;
    } while (birth_rate < 0);

    do 
    {
        cout << "Enter annual death rate: ";
        cin >> death_rate;
    } while (death_rate < 0);

    do 
    {
        cout << "Enter number of years: ";
        cin >> number_of_years;
    } while (number_of_years < 1);

    total_population = calculate_population (previous_population, birth_rate, death_rate, number_of_years);

    cout << "Total population: " << total_population << endl;
    return 0;
}