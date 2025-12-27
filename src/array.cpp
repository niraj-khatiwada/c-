#include <iostream>

int integer = 100;

void loop_cars(int cars[], int car_size);

int main()
{
    // Arrays: Old way
    // - Fixed size

    // fixed size 1
    std::string cars[] = {"Niraj"};
    std::cout << cars[0] << "\n";

    // fixed size 3
    int cars2[3] = {};
    cars2[0] = 1;
    cars2[1] = 2;
    cars2[2] = 3;

    std::size_t cars2_length = sizeof(cars2) / sizeof(cars2[0]); // weird

    for (int i = 0; i < cars2_length; i++)
    {
        std::cout << cars2[i] << "\n";
    }

    // fixed size 3 with only 2 initialized
    int cars3[3] = {1, 2};

    std::size_t cars3_length = sizeof(cars3) / sizeof(cars3[0]);

    // for each loop
    for (int car : cars3)
    {
        std::cout << car << "\n";
    }

    loop_cars(cars3, (int)(sizeof(cars3) / sizeof(cars3[0])));

    // fixed size with no zero-initialization.
    std::string cars4[3];
    cars4[0] = "ford";
    cars4[1] = "mustang";
    for (int i = 0; !cars4[i].empty(); i++) // .empty() only works for std::string though.
    {
        std::cout << cars4[i] << "\n"; // only prints elements that hold actual values
    }

    return 0;
}

// When you pass an array into a function, it decays into a pointer int* and no longer knows the size of the array. So, sizeof(cars) will give size of pointer not the size of array itself. You've to manually pass the size of the array.
void loop_cars(int cars[], int cars_size)
{
    for (int i = 0; i < cars_size; i++)
    {
        std::cout << cars[i] << "\n";
    }
}