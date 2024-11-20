/******************
Name: Omer Marom
ID: 329459283
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  int num;
  scanf("%d", &num);
  printf("Please enter a position:\n");
  int pos;
  scanf("%d", &pos);
  int mask = 1 << pos;
  int result = num & mask;
  printf("the bit in position %d of number %d is: %d\n", pos, num, result >> pos);


  // Set bit
  printf("\nSet bit\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  printf("Please enter number: \n");
  scanf("%d", &num);
  printf("Please enter position: \n");
  scanf("%d", &pos);
  mask = 1 << pos;
  printf("The number with bit %d set to 1: %d \n", pos, num | mask);
  printf("The number with bit %d set to 0: %d \n", pos, num & (~mask));


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter number: \n");
  scanf("%d", &num);
  printf("Please enter position: \n");
  scanf("%d", &pos);
  mask = (1 << pos);
  printf("Number with bit %d toggled: %d\n", pos, mask ^ num);


  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number: \n");
  scanf("%d", &num);
  mask = 1;
  printf("%d\n",~(mask & num) & mask);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number(octal)\n");
  int first;
  scanf("%o", &first);
  printf("Please enter the second number(octal)\n");
  int second;
  scanf("%o", &second);
  int sum = first + second;
  printf("the sum in hexadecimal: %X \n", sum);
  mask = 1;
  sum = sum >> 3;
  int third = sum & mask; 
  sum = sum >> 2;
  int fifth = sum & mask;
  sum = sum >> 2;
  int seventh = sum & mask;
  sum = sum >> 4;
  int eleventh = sum & mask;
  printf("the 3,5,7,11 bits are: %d%d%d%d \n", third,fifth,seventh,eleventh);


  printf("Bye!\n");
  
  return 0;
}
