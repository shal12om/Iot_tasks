#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM_COUNT 10000

int main(){
int i, num, odd_count = 0, even_count = 0;

srand(time(NULL));

for (int i = 0; i < NUM_COUNT; i++){

num = rand();

if (num % 2 == 0){

even_count++;
}else{

odd_count++;
}

}

printf("The odd count is: %d\n", odd_count);
printf("The even count is: %d\n", even_count);


return 0;


}
