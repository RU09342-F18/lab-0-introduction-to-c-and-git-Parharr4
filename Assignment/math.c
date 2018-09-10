
/*
* math.c
*  Created on: 9/10/2018
* 	Last Edited: Sept 10, 2018
*      Author: Rajinder Parhar
*/

#include <math.h>
int operations(int num1, int num2, char Operator, int result)
{
    switch(Operator)
    {
       case'+': result = num1 + num2;
            break;
       case'-': result = num1 - num2;
            break;
       case'*': result = num1 * num2;
            break;
       case'/': result = num1 / num2;
            break;
       case'%': result = num1 % num2;
            break;
       case'<': result = num1 << num2;
            break;
       case'>': result = num1 >> num2;
            break;
       case'&': result = num1 & num2;
            break;
       case'|': result = num1 | num2;
            break;
       case'^': result = num1 ^ num2;
            break;
       case'~': result = ~num1;
            break;
       case'`': result = ~num2;
            break;
       default: printf("Not an Operator please use: +, -, *, /, %', <, >, &, |, ^, ~, `");
            break;
      /*
      ** + Add 
      * - Subtract 
      * * Multiply 
      * / Divide 
      * % Modulus 
      * < Left Shift 
      * > Right Shift 
      * & Bitwise AND 
      * | Bitwise OR 
      * ^ Bitwise XOR 
      * ~ Bitwise Inverse Num1
      * ` Bitwise Inverse Num2
      */
}
}
int main()
{
    int num1 = 5, num2 = 3; // Variables to change
    char Operator = '|';
    int result = 0; //Don't change this number automatically changes
   // printf("Choose an Operator: +, -, *, /, %', <, >, &, |, ^, ~ used for num1 ,` used for num2 \n");
   // scanf("%c", Operator);
   // printf("Input first integer value \n");
   // scanf("%i", num1);
   // printf("Input Second integer value \n");
   // scanf("%i" , num2);    
   // Attempted User input
    result = operations(num1, num2 , Operator, result);
    printf("%i %c %i = %i \n", num1, Operator, num2, result);
    
}
#endif /* MATH_H_ */

