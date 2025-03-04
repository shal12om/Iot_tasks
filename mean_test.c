////






































































#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
int i;
double sum = 0.0;
int n = 1000;

srand(time(NULL));


for (i = 0; i< n; i++){
int num = rand ();
sum += num;

}


double mean = sum / n;
printf ("The mean of 1000 random numbers is: %F\n", mean);



return 0;


}











































