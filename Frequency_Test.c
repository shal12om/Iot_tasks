#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SAMPLE_SIZE 10000

int main() {

int frequency[10] = {0};
int i, random_number;

srand(time(NULL));


for(int i = 0; i  < SAMPLE_SIZE; i++) {
random_number = rand() % 10;
frequency[random_number]++;

}

printf("This is the digit frequency cout:\n");
for(i = 0; i < 10; i++){

printf ("The digit %d: %d times\n", i, frequency[i]);

}

return 0;

}
