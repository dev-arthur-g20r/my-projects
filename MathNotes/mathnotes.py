import os
import random
import datetime
os.system("color 70")
exists = os.path.exists("mathnotes.txt")
if (exists == False):
	file = open("mathnotes.txt","w")
	infile = open("mathnotes.txt","r")
else:
	file = open("mathnotes.txt","a+")
	infile = open("mathnotes.txt","r")
def calculator():
	try:
		print("Allowed operators:\n+ - Additon\n- - Subtraction\n* - Multiplication\n/ - Division")
		num1 = float(input("First number = "))
		operator = input("Operator (+ - * /): ")
		num2 = float(input("Second number = "))
		if (operator == "+"):
			sum = num1 + num2
			print(num1,"+",num2,"=",sum)
			hhh = random.randint(0,1)
			if (hhh == 0):
				print("King Midas obtained",num1,"object(s) until he touched",num2,"more object(s), it became",sum,"golden objects! Stay away from the golden touch of King Midas to not add more of it.")
			elif (hhh == 1):
				print("The good Samaritan already had",num1,"blessing(s). He served the community well equivalent to",num2,"blessing(s) for the community. God gave him more",num2,"blessing(s). His blessing(s) is/are now",sum,"blessings.")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("{} + {} = {}\n".format(num1,num2,sum))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		elif (operator == "-"):
			difference = num1 - num2
			hhh = random.randint(0,1)
			if (difference >= 0):
				if (hhh == 0):
					if (difference > 0):
						print("Humpty Dumpty loses coins permanently according to the law when loses it, he will be subject to stealing if he gets that lost coin. Humpty Dumpty had",num1,"coin(s). He sat on the well, he fell, he lost",num2,"coin(s). He only legally now has",difference,"coin(s).")
					elif (difference == 0):
						print("Humpty Dumpty loses coins permanently according to the law when loses it, he will be subject to stealing if he gets that lost coin. Humpty Dumpty had",num1,"coin(s). He sat on the well, he fell, he lost",num2,"coin(s).",difference,"coins! Oh no! He now needs to work because he is now broke.")	
				elif (hhh == 1):
					if (difference > 0):
						print("Rocky's life decreases to 1 every time he is punched by Mr. T. Rocky's life is",num1,". In a boxing match, he received",num2,"punch(es) from Mr. T. His life is now",num2,". He still has a chance to win against Mr. T.")
					elif (difference == 0):
						print("Rocky's life decreases to 1 every time he is punched by Mr. T. Rocky's life is",num1,". In a boxing match, he received",num2,"punch(es) from Mr. T. His life is now",num2,". Mr. T wins by knock out.")
			print(num1,"-",num2,"=",difference)
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("{} - {} = {}\n".format(num1,num2,difference))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		elif (operator == "*"):
			product = num1 * num2
			hhh = random.randint(0,1)
			if (hhh == 0):
				print("In a classroom, there is/are",num1,"group(s). Each groups has",num2,"member(s) so there are",product,"student(s) in that classroom.")
			elif (hhh == 1):
				print("In an IT company, there is/are",num1,"subsystem group(s) when combined creates a whole system. Each group has",num2,"member(s) so there are",product,"employee(s) in that IT company.")
			print(num1,"*",num2,"=",product)
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("\n\n{} * {} = {}\n".format(num1,num2,product))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		elif (operator == "/"):
			if (num1 != 0 and num2 != 0):
				quotient = num1 / num2 
				print(num1,"/",num2,"=",quotient)
				hhh = random.randint(0,1)
				if (num1 >= num2):
					if (hhh == 0):
						print("Tree Trunks has",num1,"apple(s) to give to the community for",num2,"people. Each person should",quotient,"apple(s) from Tree Trunks.")
					else:
						print("SpongeBob SquarePants is feeding the hungry community. He needs to give Pretty Patt(ies) to the Bikini Bottom Hungry Community. He has",num1,"Pretty Patt(ies) for",num2,"citizens of Bikini Bottom. Each citizen should have received",quotient,"Pretty Patt(ies) from SpongeBob.")
			else:
				print(num1,"/",num2,"= Undefined")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					if (num1 != 0 and num2 != 0):
						date = datetime.datetime.now()
						file.write("\n\n{}\n".format(date))
						file.write("{} / {} = {}\n".format(num1,num2,quotient))
					else:
						date = datetime.datetime.now()
						file.write("\n\n{}\n".format(date))
						file.write("{} / {} = Undefined\n".format(num1,num2))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print("Sorry! + - * / are only allowed.")
			main()
	except ValueError:
		print("Sorry! Decimal numbers or integers are only allowed.")
		main()
def oddOrEven():
	try:
		number = int(input("Number to check if odd or even: "))
		if (number % 2 == 0):
			print(number,"/ 2 =",(number // 2),"remainder",(number % 2))
			print(number,"is an even number.")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("{} / 2 = {} remainder {}\n".format(number,(number // 2),(number % 2)))
					file.write("{} is an even number.\n".format(number))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print(number,"is an odd number.")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("{} / 2 = {} remainder {}\n".format(number,(number // 2),(number % 2)))
					file.write("{} is an odd number.\n".format(number))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def summation():
	try:
		number = int(input("Number to check its summation (Greater than 0): "))
		from_p = int(input("Starting power (Lower than ending power): "))
		to = int(input("Ending power (Higher than starting power): "))
		i = from_p 
		sum = 0
		n = number
		f = from_p
		t = to
		if (number > 0 and from_p > 0 and to > 0):
			print("NOTE: ^ means 'raised to.'")
			if (from_p < to):
				while (i <= to):
					if i < to:
						print("(",number,"^",i,"= (",(number ** i),")) + ",end="")
					else:
						print("(",number,"^",i,"= (",(number ** i),"))",end="")
					sum += number ** i
					i += 1
				print(" =",sum)
				try:
					save = int(input("Save? (1 for yes or 0 for not): "))
					if (save == 1):
						j = f
						date = datetime.datetime.now()
						file.write("\n\n{}\n".format(date))
						file.write("Number to check exponential summation: {}\nFrom power: {}\nTo power: {}\n".format(number,from_p,to))
						while (j <= t):
							if (j < t):
								file.write("({} ^ {} = ({})) + ".format(n,j,(n ** j)))
							else:
								file.write("({} ^ {} = ({}))".format(n,j,(n ** j)))
							j += 1
						file.write(" = {}".format(sum))
						print("Notes saved successfully in savepoint.")
						main()
					elif (save == 0):
						main()
					else:
						print("Sorry. Invalid input!")
						main()
				except ValueError:
					print("Sorry! Numbers can only be entered.")
					main()
			else:
				print("Sorry! From (starting) power should be less than to (ending) power.")
				main()
		else:
			print("Sorry! Number, starting power and ending power should be greater than 0.")
			main()
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def factorial():
	try:
		number = int(input("Number to check its factorial: "))
		factorial = 1
		if (number > 0):
			i = number
			n = number
			print(number,end="")
			print("! = ",end="")
			while (i > 0):
				if (i > 1):
					print(i,"* ",end="")
				else:
					print(i,end="")
				factorial *= i 
				i -= 1
			print(" =",factorial)
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("Number to check its factorial: {}\n".format(number))
					j = n
					file.write("{}! = ".format(number))
					while (j > 0):
						if (j > 1):
							file.write("{} * ".format(j))
						else:
							file.write("{} ".format(j))
						j -= 1
					file.write("= {}".format(factorial))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		elif (number == 0):
			print("0! =",factorial)
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("Number to check its factorial: {}\n".format(number))
					file.write("{}! = {}".format(number, factorial))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print("Sorry! Numbers 0 and above are only allowed.")
			main()
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def gcf():
	try:
		num1 = int(input("First number (Non-zero) = "))
		num2 = int(input("Second number (Non-zero) = "))
		if (num1 != 0 and num2 != 0):
			n1 = num1
			n2 = num2
			first = n1
			second = n2
			print("The first number is divided by the 2nd number, it has a specific remainder until it finds the GCF. If the GCF is not yet found, the second number become the first number and the remainder becomes the second number. The GCF is the last remainder before 0.")
			if (num2 > 0):
				while (num2 > 0):
					remainder = num1 % num2
					print(num1,"/",num2,"=",(num1 // num2),"remainder",remainder)
					num1 = num2
					num2 = remainder
			else:
				while (num2 < 0):
					if (num1 > num2):
						remainder = num1 % num2
					else:
						remainder = num2 % num1
					print(num1,"/",num2,"=",(num1 // num2),"remainder",abs(remainder))
					num1 = num2
					num2 = remainder
			print("GCF:",abs(num1))
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("First number: {}\nSecond number: {}\n".format(n1,n2))
					if (second > 0):
						while (second > 0):
							r = first % second 
							file.write("{} / {} = {} remainder {}\n".format(first,second,(first // second),abs(r)))
							first = second 
							second = r
						file.write("GCF: {}".format(abs(first)))
					else:
						while (second < 0):
							r = first % second 
							file.write("{} / {} = {} remainder {}\n".format(first,second,(first // second),abs(r)))
							first = second 
							second = r
						file.write("GCF: {}".format(abs(first)))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print("Sorry! Both numbers should be non-zero.")
			main()
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def lcm():
	try:
		num1 = int(input("First number (Greater than 0) = "))
		num2 = int(input("Second number (Greater than 0)= "))
		if (num1 > 0 and num2 > 0):
			if (num1 < num2):
				min = num1 
				max = num2 
			else:
				min = num2 
				max = num1
			mn = min 
			mx = max
			i = 1
			print("If first number is lower than the second number, minimum is the first number and maximum is the second number. Otherwise, minimum is the second number and maximum is the first number. Counter starts from 1, to find LCM, it multiplies the maximum value to the counter repetitively until it finds the LCM but if the product is divisible to the minimum value. It stops because the product is now already the LCM.")
			while (i <= max):
				result = max * i
				if (min < 0):
					print(result,"/",mnm,"=",(result // min),"remainder",(abs(result % min)))
				else:
					print(result,"/",min,"=",(result // min),"remainder",(result % min))
				if (result % min == 0):
					lcm = result
					break
				i += 1
			print("LCM:",lcm)
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("First number: {}\nSecond number: {}\n".format(num1,num2))
					j = i
					while (j <= mx):
						r = mx * j
						file.write("{} / {} = {} remainder {}\n".format(r,mn,(r // mn),(r % mn)))
						if (r % mn == 0):
							break
						j += 1
					file.write("LCM: {}".format(lcm))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print("Sorry! Both numbers should be non-zero and positive.")
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def primeNumber():
	try:
		isPrime = True
		number = int(input("Number to check if prime: "))
		i = 2
		n = number
		j = i
		print("The number will be checked to (number / 2) times. In every iteration, there is a counter that starts with 2. If it does not find out that it is divisible to any of the counters, the counters increase by 1 until it finds the number where it is divisible to. If it is divisible to any number, it stops and tells that the number is not prime.")
		while (i <= number / 2):
			result = number % i 
			print("{} / {} = {} remainder {}".format(number,i,(number // i),(number % i)))
			if (result == 0):
				isPrime = False
				break 
			i += 1
		if (isPrime and number > 1):
			print(number,"is prime.")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					while (j <= n / 2):
						r = n % j
						file.write("{} / {} = {} remainder {}\n".format(n,j,(n // j),(n % j))) 
						j += 1
					file.write("{} is prime.".format(number))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print(number,"is not prime.")
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					while (j <= n / 2):
						r = n % j
						file.write("{} / {} = {} remainder {}\n".format(n,j,(n // j),(n % j))) 
						if (r == 0):
							break
						j += 1
					file.write("{} is not prime.".format(number))
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def fibonacciSequence():
	try:
		terms = int(input("Number of terms in Fibonacci sequence (Greater than 0): "))
		if (terms > 0):
			i = 0
			first = 0
			second = 1
			f = first 
			s = second
			j = i
			t = terms
			print("Fibonacci sequence:")
			while (i < terms):
				if (i < terms - 1):
					print(first,end=", ")
				else:
					print(first)
				nextTerm = first + second
				first = second
				second = nextTerm
				i += 1
			try:
				save = int(input("Save? (1 for yes or 0 for not): "))
				if (save == 1):
					date = datetime.datetime.now()
					file.write("\n\n{}\n".format(date))
					file.write("Number of terms in Fibonacci sequence: {}\n".format(terms))
					file.write("Fibonacci sequence:\n")
					while (j < t):
						if (j < terms - 1):
							file.write("{}, ".format(f))
						else:
							file.write("{}".format(f))
						n = f + s
						f = s 
						s = n
						j += 1
					print("Notes saved successfully in savepoint.")
					main()
				elif (save == 0):
					main()
				else:
					print("Sorry. Invalid input!")
					main()
			except ValueError:
				print("Sorry! Numbers can only be entered.")
				main()
		else:
			print("Sorry! Terms of Fibonacci sequence should be greater than 0.")
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def arithmeticSequence():
	try:
		terms = int(input("Number of terms in Arithmetic sequence (Greater than 0): "))
		t = terms
		if (terms > 0):
			i = 0
			first = int(input("First term (Greater than or equal to 0): "))
			difference = int(input("Common difference (Greater than 0): "))
			if (difference > 0 and first >= 0):
				f = first 
				x = first
				d = difference
				j = i
				print("Arithmetic sequence:")
				while (i < terms):
					if (i < terms - 1):
						print(first,end=", ")
					else:
						print(first)
					nextTerm = first + difference
					first = nextTerm
					i += 1
				try:
					save = int(input("Save? (1 for yes or 0 for not): "))
					if (save == 1):
						date = datetime.datetime.now()
						file.write("\n\n{}\n".format(date))
						file.write("Number of terms in Arithmetic sequence: {}\nFirst term: {}\nCommon difference: {}\n".format(terms,x,difference))
						file.write("Arithmetic sequence:\n")
						while (j < t):
							if (j < terms - 1):
								file.write("{}, ".format(f))
							else:
								file.write("{}".format(f))
							n = f + d
							f = n
							j += 1
						print("Notes saved successfully in savepoint.")
						main()
					elif (save == 0):
						main()
					else:
						print("Sorry. Invalid input!")
						main()
				except ValueError:
					print("Sorry! Numbers can only be entered.")
					main()
			else:
				print("Sorry! Common difference should not be less than or equal to 0 and first term should not be less than 0.")
				main()
		else:
			print("Sorry! Terms of Arithmetic sequence should be greater than 0.")
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def geometricSequence():
	try:
		terms = int(input("Number of terms in Geometric sequence (Greater than 0): "))
		t = terms
		if (terms > 0):
			i = 0
			first = int(input("First term (Greater than 0): "))
			ratio = int(input("Common ratio (Greater than 0): "))
			if (ratio > 0 and first > 0):
				f = first 
				x = first
				r = ratio
				j = i
				print("Geometric sequence:")
				while (i < terms):
					if (i < terms - 1):
						print(first,end=", ")
					else:
						print(first)
					nextTerm = first * ratio
					first = nextTerm
					i += 1
				try:
					save = int(input("Save? (1 for yes or 0 for not): "))
					if (save == 1):
						date = datetime.datetime.now()
						file.write("\n\n{}\n".format(date))
						file.write("Number of terms in Geometric sequence: {}\nFirst term: {}\nCommon difference: {}\n".format(terms,x,ratio))
						file.write("Geometric sequence:\n")
						while (j < t):
							if (j < terms - 1):
								file.write("{}, ".format(f))
							else:
								file.write("{}".format(f))
							n = f * r
							f = n
							j += 1
						print("Notes saved successfully in savepoint.")
						main()
					elif (save == 0):
						main()
					else:
						print("Sorry. Invalid input!")
						main()
				except ValueError:
					print("Sorry! Numbers can only be entered.")
					main()
			else:
				print("Sorry! Common ratio and first term should not be less than or equal to 0.")
				main()
		else:
			print("Sorry! Terms of Geometric sequence should be greater than 0.")
	except ValueError:
		print("Sorry! Integers are only allowed.")
		main()
def readNotes():
	os.system("notepad mathnotes.txt")
def main():
	print("\t\t\t\t\tMATH NOTES")
	print("Choose a program to execute (Please enter its NUMBER.): ")
	print("1 - Calculator of 2 numbers")
	print("2 - Odd Or Even Number?")
	print("3 - Summation of the Same Number with Different Powers (Positive Non-Zero Numbers)")
	print("4 - Factorial of a Number")
	print("5 - GCF of 2 numbers")
	print("6 - LCM of 2 only positive numbers")
	print("7 - Check if Prime Number")
	print("8 - Fibonacci Sequence")
	print("9 - Arithmetic Sequence of only Positive Integers")
	print("10 - Geometric Sequence of only Non-Zero Positive Integers")
	print("11 - Read Recent Notes in your text file")
	print("0 - Exit")
	print("NOTE: Notes saved in savepoint will be saved in the text file (mathnotes.txt) after closing this program. \nTO SAVE YOUR TEXT FILE SUCCESSFULLY, PLEASE PROPERLY CLOSE THIS SCRIPT BY CHOOSING 0 AT ALL TIMES TO NOT LOSE NOTES RECENTLY ENTERED FOR SAVING.")
	try:
		number = int(input("Choice: "))
		if (number == 1):
			calculator()
		elif (number == 2):
			oddOrEven()
		elif (number == 3):
			summation()
		elif (number == 4):
			factorial()
		elif (number == 5):
			gcf()
		elif (number == 6):
			lcm()
		elif (number == 7):
			primeNumber()
		elif (number == 8):
			fibonacciSequence()
		elif (number == 9):
			arithmeticSequence()
		elif (number == 10):
			geometricSequence()
		elif (number == 11):
			readNotes()
			main()
		elif(number == 0):
			print("Notes from savepoint saved successfully into your text file.")
			os.system("pause")
			exit()
		else:
			print("Sorry! Invalid input.")
			main()
	except ValueError:
		print("Sorry! Numbers can only be entered.")
		main()
main()
os.system("pause")