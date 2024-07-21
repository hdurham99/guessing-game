#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int random_num;
  random_num = rand() % 100 + 1;
  int guess;
  do {
    printf("Guess the number 1-100!\n");
    scanf("%d", &guess);
    if (guess > random_num) {
      printf("Too high!\n");
    }
    else if (guess < random_num) {
      printf("Too low!\n");
    }
    else {
      printf("You got it!\n");
      break;
    }
  }
  while (guess != random_num); 

  return EXIT_SUCCESS;
}
