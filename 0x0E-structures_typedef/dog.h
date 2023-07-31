#include <stdio.h>

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 *
*/

int main() {

    struct dog myDog;

    myDog.name = "Poppy";
    myDog.age = 3.5;
    myDog.owner = "Bob";


    printf("Dog's name: %s\n", myDog.name);
    printf("Dog's age: %.1f\n", myDog.age);
    printf("Owner's name: %s\n", myDog.owner);

    return 0;
}
