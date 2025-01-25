# CS_121_Lab2
This program is to sort an array of integers in an ascending order. The list of functions that I will be built are the swap, printValues, and sort functions. 
For the printValues function the input is an array of integers. as for step by step on this function:
1. For each element in the array:
If it's not the first element, print a space before printing the number.
Print the element.
2. Then its time for a new line
It should not return anything.

As for the swap function the input should be - Two integer pointers a and b, type: (int*). Step by step instructions:
1. Store the value of a in a temporary variable
2. Set the value of *a to the value of *b
3. Set the value of *b to the value of the temporary variable.
This function should also not RETURN anything

 For the sort function the input should be an array of integers. Step by step for this function:
1.  For each pass through the array (i = 0 to n-2):
- For each pair of adjacent elements (j = 0 to n-i-2):
- Compare values[j] with values[j+1].
- If values[j] > values[j+1], swap them.
- After each swap, print the array to show the current state.
2. The array will be sorted after completing all passes.
This function also should not return anything.

I also had to go and flip to make sure all the functions were at the beginning of the code and place the main function at the end. 
