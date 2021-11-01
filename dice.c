#include <stdio.h>

/*this imports the random module for c*/
#include <stdlib.h>

/*this is the defined function*/
int main() {

/*this assigns the variables faces, throws and counter as integers*/
    int faces, throws, num;
    int counter;
    float percentage;

    /*this variable will be used to count the amount of ones, twos, threes, etc, thrown*/
    float onec, twoc, threec, fourc, fivec, sixc, sevenc, eightc, ninec, tenc, elevenc, twelvec, thirteenc, fourteenc, fifteenc, seventeenc, eighteenc, nineteenc, twentyc, twentyonec, twentytwoc, twentythreec, twentyfourc, twentyfivec;


    /*this is to store the result of the amount of ones, twos
    etc to calculate the percentage*/
    float onecr, twocr, threecr, fourcr, fivecr, sixcr,sevencr, eightcr, ninecr, tencr, elevencr,twelvecr, thirteencr, fourteencr, fifteencr, seventeencr, eighteencr, nineteencr, twentycr, twentyonecr, twentytwocr, twentythreecr, twentyfourcr, twentyfivecr;

/*assigns the value 0 to counter and the value 6 to the number
of faces on the dice*/
    counter = 0;
    faces = 0;

/*assigns the value 0 to all of these variables*/
    onec = 0;
    twoc = 0;
    threec = 0;
    fourc = 0;
    fivec = 0;
    sixc = 0;
    sevenc = 0;
    eightc = 0;
    ninec = 0;
    tenc = 0;
    elevenc = 0;
    twelvec = 0;
    thirteenc = 0;
    fourteenc = 0;
    fifteenc = 0;
    seventeenc = 0;
    eighteenc = 0;
    nineteenc = 0;
    twentyc = 0;
    twentyonec = 0;
    twentytwoc = 0;
    twentythreec = 0;
    twentyfourc = 0;
    twentyfivec = 0;

/*this allows the user to decide the number of faces they get*/
    printf("how many faces would you like?\n");
    scanf("%d", &faces);

  if (faces < 1){
    printf("Enter a number greater than 1 and less than 25\n");
    main();
  }
  else if (faces >25){
    printf("Enter a number greater than 1 and less than 25\n");
    main();
  }
    

/*this allows the user to decide the number of throws they get*/
    printf("how many throws would you like?\n");
    scanf("%d", &throws);

    if (throws < 1){
    printf("Enter a number greater than 1 and less than 500\n");
    main();
  }
  else if (throws >500){
    printf("Enter a number greater than 1 and less than 500\n");
    main();
  }
    
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
      num = rand() % faces + 1;
      printf("%d\n", num);



    /*this increments/adds one to the amount of occurances of either 1,2
    3,4,5 or 6, so if 1 occurs five times, the value for the
    counter for one (onec) will be 5*/

    #need to update this
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

    #need to update this
    onecr = (onec/throws)*100;
    twocr = (twoc/throws)*100;
    threecr = (threec/throws)*100;
    fourcr = (fourc/throws)*100;
    fivecr = (fivec/throws)*100;
    sixcr = (sixc/throws)*100;

    /*this prints out the results of the percentage of
    occurances of each number*/
    #need to update this
    printf("Occurance of %d: %f\n", 1, onecr);
    printf("Occurance of %d: %f\n", 2, twocr);
    printf("Occurance of %d: %f\n", 3, threecr);
    printf("Occurance of %d: %f\n", 4, fourcr);
    printf("Occurance of %d: %f\n", 5, fivecr);
    printf("Occurance of %d: %f\n", 6, sixcr);

    /*this terminates the program so it will no retuen back to the beggining of the function */
    exit(0);
    
    
    return 0;
}
