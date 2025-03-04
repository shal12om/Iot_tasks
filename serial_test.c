#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PAIR_COUNT 10000


int main() {

int i, first_digit, second_digit;
int frequency[10][10] = {0};

srand(time(NULL));

for (int i = 0; i < PAIR_COUNT; i++){

first_digit = rand() % 10;
second_digit = rand() % 10;
frequency[first_digit][second_digit]++;
}

printf("The frequency of digit pairs (00 to 99):\n");
for (int row = 0; row < 10; row++) {
for (int col = 0; col < 10; col++){
printf("The pair %d%d: %dtimes\n", row, col, frequency[row][col]);
}

}

return 0;


}

