#include <stdio.h>

/*
#Find the missing letter

Write a method that takes an array of consecutive (increasing) letters as input and that returns the missing letter in the array.

You will always get an valid array. And it will be always exactly one letter be missing. The length of the array will always be at least 2.
The array will always contain letters in only one case.

Example:

['a','b','c','d','f'] -> 'e' ['O','Q','R','S'] -> 'P'

["a","b","c","d","f"] -> "e"
["O","Q","R","S"] -> "P"
*/


char findMissingLetter(char array[], int arrayLength)
{
  int i=0;
  char answer;
  for(i=0;i<arrayLength-1; i++) {
    if(array[i+1] - array[i] != 1) {
      answer = array[i] + 1;
    }
  } 
  return answer;
}