#include <stdio.h>

/*this imports the random module for c*/
#include <stdlib.h>

/*this is the defined function*/
int main() {

/*this assigns the variables faces, throws and counter as integers*/
    int faces, throws, num;
    int counter;
    float percentage;
    /*this is to count the amount of ones, twos, threes, etc*/
    float onec, twoc, threec, fourc, fivec, sixc;
    /*this is to store the result of the amount of ones, twos
    etc to calculate the percentage*/
    float onecr, twocr, threecr, fourcr, fivecr, sixcr;

/*assigns the value 0 to counter and the value 6 to the number
of faces on the dice*/
    counter = 0;
    faces = 6;

/*assigns the value 0 to all of these variables*/
    onec = 0;
    twoc = 0;
    threec = 0;
    fourc = 0;
    fivec = 0;
    sixc = 0;
    
/*this allows the user to decide the number of throws they get*/
    printf("how many throws would you like?\n");
    scanf("%d", &throws);
    
    printf("Number of faces: %d\n", faces);
    printf("Number of throws: %d\n", throws);
    
    /*this is used before rand() to make sure that
    everytime the code is compiled, the numbers
    generated are random everytime*/
    srand(time(0));

    /*while loop to print the result from each throw*/
    while (counter != throws)
    {
      /*the counter increments everytime the code passes through so it will
      stop when the counter is equal to the amount of throws*/
      counter += 1;
      /*this assigns the random number to the variable num temporarily,
      until the code passes through the while loop again*/
      num = rand() % 6 + 1;
      printf("%d\n", num);



    /*this increments/adds one to the amount of occurances of either 1,2
    3,4,5 or 6, so if 1 occurs five times, the value for the
    counter for one (onec) will be 5*/
      if (num == 1) {
        onec += 1;
      }
      if (num == 2) {
        twoc += 1;
      }
      if (num == 3) {
        threec += 1;
      }
      if (num == 4) {
        fourc += 1;
      }
      if (num == 5) {
        fivec += 1;
      }
      if (num == 6) {
        sixc += 1;
      }



    }

    /*this assigns the value of the percentage of 
    the different results from certain rolls to their corresponding 
    variables*/
    onecr = (onec/throws)*100;
    twocr = (twoc/throws)*100;
    threecr = (threec/throws)*100;
    fourcr = (fourc/throws)*100;
    fivecr = (fivec/throws)*100;
    sixcr = (sixc/throws)*100;

    /*this prints out the results of the percentage of
    occurances of each number*/

    printf("Occurance of %d: %f\n", 1, onecr);
    printf("Occurance of %d: %f\n", 2, twocr);
    printf("Occurance of %d: %f\n", 3, threecr);
    printf("Occurance of %d: %f\n", 4, fourcr);
    printf("Occurance of %d: %f\n", 5, fivecr);
    printf("Occurance of %d: %f\n", 6, sixcr);

    
    
    return 0;
}
