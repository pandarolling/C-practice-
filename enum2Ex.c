#include <stdio.h>

// Define the list of fruits using an X-macro
#define FRUIT_LIST \
    X(apple, 1)    \
    X(orange, 2)   \
    X(banana, 3)

// 1. Generate the enum from the FRUIT_LIST
#define X(name, val) name = val,
enum Fruits {
    FRUIT_LIST
};
#undef X // It's good practice to undefine X after use

// 2. Define the function to get the string name of the enum
const char* get_fruit_name(enum Fruits fruit) {
    switch (fruit) {
        // Generate the switch cases from the FRUIT_LIST
#define X(name, val) case name: return #name;
        FRUIT_LIST
#undef X // Undefine X again
        default: return "Unknown Fruit";
    }
}

int main() {
    enum Fruits my_fruit = orange;
    enum Fruits another_fruit = banana;

    printf("The value of my_fruit is %d and its name is '%s'.\n", my_fruit, get_fruit_name(my_fruit));
    printf("The value of another_fruit is %d and its name is '%s'.\n", another_fruit, get_fruit_name(another_fruit));

    // Example with an invalid value
    printf("Trying an invalid fruit value: '%s'.\n", get_fruit_name(99));

    return 0;
}