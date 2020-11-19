Overview: 
The program consists of number of functions, some of the used to get information from the user and the other print this information again if the user asks for them. 


Functions:
•	Struct: built in function to store the data from the user 
•	students_registerion(): to scan the  name and the id of the user 
•	students_number(): to print the number of students who registered 
•	add_books(): to get from user the name and the id of the books who want to print
•	viewbook(): to print the books which the user already wrote their names  
•	searchbook(): allow the user the search for the book by its id 
•	mainmenu(): contain all of the above and allows the user to choose which operation he wants. 


Algorithm: 
in the end of every function, I call the mainmenu function to still working until the user choose exit. 
I make two counters, one in student_registration () function it starts from zero and add 1 every time the user input his name and use this counter tin the function 
of student number to know the number of students who input their information. The other counter in the add book function
and it is also add 1 every time the user add book to use and make a counter i and y to be the indexes for the arrays of the ID and the name of the books to use them in the
function view book and search book. 
