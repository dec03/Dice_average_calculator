#include <stdio.h>


//this imports the random module for c
#include <stdlib.h>


//this is the defined function
int main(){

//this assigns the variables faces, throws, counter, count and output_count as integers
    int faces, throws, num;
    int counter, count;
    int output_count;
    float percentage;


/*this assigns array as a float to store up to 25 float values, and i is an index that is stored as an integer to point to an item inside the array*/
    float array[25];
    int i;

//this assigns calc as a float to store up to 25 float values for the percentages of the occurances
    float calc[25];
    int x;

/*this variable will be used to count the amount of ones, twos, threes, etc, thrown*/
    float onec, twoc, threec, fourc, fivec, sixc, sevenc, eightc, ninec, tenc, elevenc, twelvec, thirteenc, fourteenc, fifteenc, sixteenc, seventeenc, eighteenc, nineteenc, twentyc, twentyonec, twentytwoc, twentythreec, twentyfourc, twentyfivec;


/*this is to store the result of the amount of ones, twos
etc to calculate the percentage*/
    float onecr, twocr, threecr, fourcr, fivecr, sixcr,sevencr, eightcr, ninecr, tencr, elevencr,twelvecr, thirteencr, fourteencr, fifteencr, sixteencr, seventeencr, eighteencr, nineteencr, twentycr, twentyonecr, twentytwocr, twentythreecr, twentyfourcr, twentyfivecr;



/*assigns the value 0 to counter and the value 6 to the number
of faces on the dice*/
    counter = 0;
    count = 0;
    faces = 0;
    throws = 0;
    output_count = 1;



//assigns the value 0 to all of these variables
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

    if (faces < 1 || faces > 25){
      printf("Enter a number greater than 1 and less than 25\n");
      main();
    }

      

/*this allows the user to decide the number of throws they get*/
  printf("how many throws would you like?\n");
  scanf("%d", &throws);

    if (throws < 1 || throws > 500){
      printf("Enter a number greater than 1 and less than 500\n");
      main();
  }
    



    printf("Number of faces: %d\n", faces);
    printf("Number of throws: %d\n", throws);
    

    



    //this is used before rand() to make sure that everytime the code is compiled, the numbers generated are random everytime
    srand(time(0));

    //while loop to print the result from each throw
    while (counter != throws)
    {
      //the counter increments everytime the code passes through so it will stop when the counter is equal to the amount of throws
      counter += 1;

      //this assigns the random number to the variable num temporarily, until the code passes through the while loop again
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


    //this assigns the value of the percentage of the different results from certain rolls to their corresponding variables
 
    /*
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
    */

    //this assigns the correct values to the correct index inside the array

    array[0] = 0;
    array[1] = onec;
    array[2] = twoc;
    array[3] = threec;
    array[4] = fourc;
    array[5] = fivec;
    array[6] = sixc;
    array[7] = sevenc;
    array[8] = eightc;
    array[9] = ninec;
    array[10] = tenc;
    array[11] = elevenc;
    array[12] = twelvec;
    array[13] = thirteenc;
    array[14] = fourc;
    array[15] = fifteenc;
    array[16] = sixteenc;
    array[17] = sevenc;
    array[18] = eighteenc;
    array[19] = nineteenc;
    array[20] = twentyc;
    array[21] = twentyonec;
    array[22] = twentytwoc;
    array[23] = twentythreec;
    array[24] = twentyfourc;
    array[25] = twentyfivec;


    //this for loop will get the count of each number that was thrown that is stored in array[], and store the percentage of the occurances for each number in calc[]
    for (x = 0; x <= faces; x++) {
        calc[x] = (array[x]/throws)*100;
    }


    //this prints out the results of the percentage of occurances of each number by using a for loop

    /*this for loop will output the occurance of each number of faces (output_count from 1 to number of faces) 
    that the user inputed and will increment both the percentage at the index of the array and the output_count to 
    output the corresponding value*/
    for (x = 1; x <= faces; x++)
    {
    //%0.2f%% is used to format the float to two significant figures
      printf("Occurance of %d: %0.2f%%\n", output_count, calc[x]);
      output_count += 1;
    }
    



    //this terminates the program so it will no return back to the beggining of the function
    exit(0);
    
    
    return 0;
}
