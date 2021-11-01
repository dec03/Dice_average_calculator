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
    float onec, twoc, threec, fourc, fivec, sixc, sevenc, eightc, ninec, tenc, elevenc, twelvec, thirteenc, fourteenc, fifteenc, sixteenc, seventeenc, eighteenc, nineteenc, twentyc, twentyonec, twentytwoc, twentythreec, twentyfourc, twentyfivec;


    /*this is to store the result of the amount of ones, twos
    etc to calculate the percentage*/
    float onecr, twocr, threecr, fourcr, fivecr, sixcr,sevencr, eightcr, ninecr, tencr, elevencr,twelvecr, thirteencr, fourteencr, fifteencr, sixteencr, seventeencr, eighteencr, nineteencr, twentycr, twentyonecr, twentytwocr, twentythreecr, twentyfourcr, twentyfivecr;

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
    sixteenc = 0;
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
      if (num == 7) {
        sevenc += 1;
      }
      if (num == 8) {
        eightc += 1;
      }
      if (num == 9) {
        ninec += 1;
      }
      if (num == 10) {
         tenc += 1;
      }
      if (num == 11) {
        elevenc += 1;
      }
      if (num == 12) {
        twelvec += 1;
      }
      if (num == 13) {
        thirteenc += 1;
      }
      if (num == 14) {
        fourteenc += 1;
      }
      if (num == 15) {
        fifteenc += 1;
      }
      if (num == 16) {
        sixteenc += 1;
      }
      if (num == 17) {
        seventeenc += 1;
      }
      if (num == 18) {
        eighteenc += 1;
      }
      if (num == 19) {
        nineteenc += 1;
      }
      if (num == 20) {
        twentyc += 1;
      }
      if (num == 21) {
        twentyonec += 1;
      }
      if (num == 22) {
        twentytwoc += 1;
      }
      if (num == 23) {
        twentythreec += 1;
      }
      if (num == 24) {
        twentyfourc += 1;
      }
      if (num == 25) {
        twentyfivec += 1;
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
    sevencr = (sevenc/throws)*100;
    eightcr = (eightc/throws)*100;
    ninecr = (ninec/throws)*100;
    tencr = (tenc/throws)*100;
    elevencr = (elevenc/throws)*100;
    twelvecr = (twelvec/throws)*100;
    thirteencr = (thirteenc/throws)*100;
    fourteencr = (fourteenc/throws)*100;
    fifteencr = (fifteenc/throws)*100;
    sixteencr = (sixteenc/throws)*100;
    seventeencr = (seventeenc/throws)*100;
    eighteencr = (eighteenc/throws)*100;
    nineteencr = (nineteenc/throws)*100;
    twentycr = (twentyc/throws)*100;
    twentyonecr = (twentyonec/throws)*100;
    twentytwocr = (twentytwoc/throws)*100;
    twentythreecr = (twentythreec/throws)*100;
    twentyfourcr = (twentyfourc/throws)*100;
    twentyfivecr = (twentyfivec/throws)*100;



    /*this prints out the results of the percentage of
    occurances of each number*/


    printf("Occurance of %d: %f\n", 1, onecr);
    printf("Occurance of %d: %f\n", 2, twocr);
    printf("Occurance of %d: %f\n", 3, threecr);
    printf("Occurance of %d: %f\n", 4, fourcr);
    printf("Occurance of %d: %f\n", 5, fivecr);
    printf("Occurance of %d: %f\n", 6, sixcr);
    printf("Occurance of %d: %f\n", 7, sevencr);
    printf("Occurance of %d: %f\n", 8, eightcr);
    printf("Occurance of %d: %f\n", 9, ninecr);
    printf("Occurance of %d: %f\n", 10, tencr);
    printf("Occurance of %d: %f\n", 11, elevencr);
    printf("Occurance of %d: %f\n", 12, twelvecr);
    printf("Occurance of %d: %f\n", 13, thirteencr);
    printf("Occurance of %d: %f\n", 14, fourteencr);
    printf("Occurance of %d: %f\n", 15, fifteencr);
    printf("Occurance of %d: %f\n", 16, sixteencr);
    printf("Occurance of %d: %f\n", 17, seventeencr);
    printf("Occurance of %d: %f\n", 18, eighteencr);
    printf("Occurance of %d: %f\n", 19, nineteencr);
    printf("Occurance of %d: %f\n", 20, twentycr);
    printf("Occurance of %d: %f\n", 21, twentyonecr);
    printf("Occurance of %d: %f\n", 22, twentytwocr);
    printf("Occurance of %d: %f\n", 23, twentythreecr);
    printf("Occurance of %d: %f\n", 24, twentyfourcr);
    printf("Occurance of %d: %f\n", 25, twentyfivecr);

    /*this terminates the program so it will no return back to the beggining of the function */
    exit(0);
    
    
    return 0;
}
