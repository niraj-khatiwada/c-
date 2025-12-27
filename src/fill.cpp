#include <iostream>

int main()
{
    // fill(begin pointer, end pointer, value): Fills a range with a specified element
    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + SIZE / 2, "pizza");
    fill(foods + SIZE / 2, foods + SIZE, "burger");

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << i << " | " << foods[i] << "\n";
    }
    return 0;
}