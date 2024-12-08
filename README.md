
# Project Interview

Hello, these functions were written for Sigun Information Technologies and Consulting by Taha Yasin Turanoglu for the technical Interview. While making this project any kind of AI not used, except mergesort all the algorithms written by myself.




## How to Build and Run
Depending on what OS you are using you can make the file by using makefile document in linux based systems by running "make" command on the folder you can build the code after that you can use "make run" command to run the program.
```bash
  make
  make run
```
There is a already build version for the windows machines without neccesary framework, you can used this by running main.exe. if machine has gcc you can run this code to build the file "gcc main.c function1.c function2.c function3.c function4.c function5.c -o main" this will create the same main.exe.
```bash
  gcc main.c function1.c function2.c function3.c function4.c function5.c -o main
  main.exe
``` 
## Assumptions
- In the Function 2 swapBit, when choosing bit position it starts on 1 not 0. result return on binary.
- In the function 3 checkSignDiff, relational operators have been used instead of arithmathical ones.
- In the function 4 rightmostOff, function unsets the LSB (least significant bit) of the integer, result return on binary.
- In the Funtion 5 mergesort, main funtion uses a default array of numbers for the test, these number can be edited on main.c then program can be rebuilded for test.


## Usage
Function can be tested by main Function, you can chose what function to test and what parameters to test by running the main function.
