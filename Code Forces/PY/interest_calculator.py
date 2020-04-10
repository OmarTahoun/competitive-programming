# Default messages to use in printing
welcome_msg = ".*.*.*.*Welcome to the Interest Calculator*.*.*.*."
line_separator = ".................................................."
short_line_separator = "-----------------------------"


def print_duration(months):
	"""
		Given a duration in months, this function calculates:
		1 - number of years in given duraiton
		2 - number of months in given duration after removing the years.
		3 - prints the number of years and number f months
	"""
	curr_year = str(months//12)		# Division without remainder(gets number of years in duration)
	curr_month = str(months%12)		# Modulas to get number of months in duration after taking out the years.
	print("-> year:" + curr_year + ", month:" + curr_month)


def print_money(money):
	"""
		Given an amount of money (float), this function:
		1 - rounds the number to the nearest point (using the python round function)
		2 - adds the dollar sign to the end of the number
		3 - prints the number in the required format
	"""
	money = round(money,1)			# Rounding the number to the nearest point
	print(str(money)+"$")


def print_entry(loan_amount, int_rate, months):
	"""
		Given the loan amount, the interest rate and a duration (in months)
		this function:
		1 - calculates the total intrest for the duration
		2 - calculates the total payment for the duration
		3 - calculates the monthly payment for the duration
		4 - prints the total intrest, total payment and monthly payment
	"""

	total_interest = (loan_amount/100)*(int_rate/12)*months		# Calculating total intrest for durations
	total_payment = loan_amount + total_interest				# Calculating total payment for durations
	monthly_payment = total_payment / months					# Calculating monthly payment for durations

	print(short_line_separator)									# printing short line seperator
	print_duration(months)										# Calling the print_duration function to print number of years and months

	print("Total payment:")									
	print_money(total_payment)									# Calling print_money function to print the total payment


	print("Monthly payment:")
	print_money(monthly_payment)								# Calling print_money function to print the monthly payment


	print(short_line_separator)									# printing short line seperator



def print_full_report(loan_amount, int_rate, max_year, max_month, iter_interval):
	"""
	Given loan amount, intreset rate, maximum year, maximum month and iteration interval
	this function:
	1 - calculates total duration in months
	2 - loops starting from the first interval until the total duration 
		increasing the duration by the iteration interval each iteration
	
	3 - during each iteration it calls the print entry function to print the entry for the current duration
	"""
	print("\nReport for " + user_name + ":\n")
	
	total_duration = (max_year*12) + max_month							# Calculating the total duration in months

	for duration in range(iter_interval, total_duration+1, iter_interval):		# Looping over the duration
		print_entry(loan_amount, int_rate, duration)							# Calling the print_entry function each iteration





print(line_separator)
print(welcome_msg)																# Printing the welcoming message
print(line_separator)


user_name = input("Please enter your name: ")									# Asking the user to enter his/her name
loan_amount = int(input("Loan amount: "))										# Asking the user to enter the laon amount
int_rate = float(input("Interest rate (per year): "))							# Asking the user to enter the interest rate 

print("-> TIME LENGTH")															# Asking the user to enter loan duration
max_year = int(input("\tLoan term in years: "))									# Asking the user to enter the loan duration in years
max_month = int(input("\tLoan term in months: "))								# Asking the user to enter the loan duration in months
iter_interval = int(input("\tIteration in months: "))							# Asking the user to enter the iteration interval

print_full_report(loan_amount, int_rate, max_year, max_month, iter_interval)	# Calling the print_full_report function 
																				# to print the full report for given duration and interval

input("press any key to exit")													# Promting the user to press a key to exit