# Internship1
DE Used: I have visual studio 2019 to make this project.

Header Files:
	iostream: This is used to import all the basic and necessary 
                      functions of C++.

Functions:
	condition1(int[][9], int, int, int): The first parameter will accept
	 	suduko, then it will take a row, after that column, then the 
		number to store after checking some conditions.
	    Use:
		This function's main use is to check all the conditions satisfies
		for placing a number in the suduko or not.
	    Description:
		1)By using a nested loop I have checked that, is the number n is
		  present in the 3X3 submatrix or not.If the program founds 
		  the number in this matrix it will assign c1=1 & break the loop.
		2)Then I checked that, is the number n present in the
		  same row or not.If the program founds the number in the same row
		  it will assign c2=1 and breaks the loop.
		3)Then I checked that, is the number n present in the
		  same column or not.If the program founds the number in the same 
		  column it will assign c3=1 and breaks the loop.
		4)If n is not found in the above three conditions then the
		  the program will assign n to the kth row and lth column and then 
		  calls the function condition2(int[][9], int ,int) if this 
		  the function returns 0 then we will assign 0 to the kth row and 
		  lth column and then this function returns 0.
		5)If n is found in any of the above conditions then it will 
		  return any value except 0 and 1 here I have returned x which
		  has initial value 2.

	condition2(int[][9], int, int): The first parameter will accept
	 	suduko, then it will take a row, after that column.
	    Use:
		This function's main use is to check where is a blank space in the
		suduko(means 0) and pass every number from 1 to 9 for checking 
		and that is it suitable to store that number in place of zero.
	    Description:
		1)Firstly an if condition is used to check zero(denotes blank
		  spaces in suduko) if zero is found then I start a loop with
		  1 to 9 and pass each number to a function condition1() and 
		  if the condition1() returns 1 then this function returns 1,
		  and if the condition1() fails to assign 1-9 to a particular
		  the cell then this function returns 0 this means we have assigned
		  some wrong previously.
		2)If zero is not found at a particular matrix cell then I 
		  increased the cell and call the same function again to
		  check another cell. After this, we return the same value 
		  which was returned by the function.
	main():
	    Use: 
		It is the first function that should be called. This is used to 
		input and display the solution.
	    Description:
		1)Using nested for loop I am asking the user to input the
		  Unsolved suduko.(In place of blank 0 should be inserted).
		2)After that call a function condition2() for solving.
		3)If the function returns 0 this means that suduko cannot be
		  solved else print the sudoku.
