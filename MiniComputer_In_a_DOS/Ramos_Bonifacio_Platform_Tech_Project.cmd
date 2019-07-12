@echo off
echo MINI-COMPUTER in a DOS
echo (by: Arthur Tristan M. Ramos and Lee Robin P. Bonifacio of BSIT 2-A)
:program
echo.
echo 1 - Arithmetic Sequence
echo 2 - Real Integer Arithmetic Calculator
echo 3 - Odd or Even Number Checker
echo 4 - IP Configuration
echo 5 - Windows Version, Disk Volume and Serial Number Checker
echo 6 - Command Shell Color Customizer
echo 7 - Windows Explorer - a Quick Access graphical file checker
echo 8 - Windows Graphical Calculator
echo 9 - Meet The Task Checker
echo 10 - Website IP Address Checker
echo 11 - Website Availability Checker
echo 12 - Quiz Bee
echo 13 - Windows Control Panel
echo 14 - Folder Maker
echo 15 - Folder Remover
echo 16 - File Copier
echo 17 - File Remover
echo 18 - File Mover
echo 19 - Text Creator/Editor
echo 20 - Wanna know what PC you are using and who is using it? Choose me.
echo X - Exit
set /p number_of_choice=Number or symbol of choice: 
goto choice
:choice
if /i %number_of_choice% equ x (goto stop)
if %number_of_choice% equ 1 (goto arithmeticseq) else (goto choice2)
:arithmeticseq
cls
echo ARITHMETIC SEQUENCE
set /p initial_number=Initial number: 
set /p difference=Difference: 
set /p max_number=Maximum: 
for /l %%a in (%initial_number%,%difference%,%max_number%) do echo %%a
goto program
:choice2
if %number_of_choice% equ 2 (goto calculator) else (goto choice3)
:calculator
cls
echo REAL INTEGER CALCULATOR
echo + - Add
echo - - Subtract
echo * - Multiply
echo / - Divide
set /p num1=1st number = 
set /p operator=Operator: 
set /p num2=2nd number = 
if %operator% equ + (goto add) else (goto opechoice2)
:add
set /a answer=%num1%+%num2%
echo Sum is %answer%
goto program
:opechoice2
if %operator% equ - (goto subtract) else (goto opechoice3)
:subtract
set /a answer=%num1%-%num2%
echo Difference is %answer%
goto program
:opechoice3
if %operator% equ * (goto multiply) else (goto opechoice4)
:multiply
set /a answer=%num1%*%num2%
echo Product is %answer%
goto program
:opechoice4
if %operator% equ / (goto divide) else (goto invalid)
:divide
set /a answer=%num1%/%num2%
echo Quotient is %answer%
goto program
:invalid
echo Invalid operator! Please choose only from +, -, * and /. Sorry. Please try again.
goto program
:choice3
if %number_of_choice% equ 3 (goto odd_or_even) else (goto choice4)
:odd_or_even
cls
echo ODD OR EVEN CHECKER
set /p num=Enter a number to check if odd or even. = 
set /a result=num%%2 
if %result% equ 0 (echo %num% is even.) else (echo %num% is odd.)
goto program
:choice4
if %number_of_choice% equ 4 (goto ip_config) else (goto choice5)
:ip_config
cls
echo IP CONFIGURATOR
echo.
ipconfig
goto program
:choice5
if %number_of_choice% equ 5 (goto win_check) else (goto choice6)
:win_check
cls
echo WINDOWS VERSION CHECKER 
ver
vol
goto program
:choice6
if %number_of_choice% equ 6 (goto color_custom) else (goto choice7)
:color_custom
cls
echo COLOR CUSTOMIZER
echo Set your background and foreground color using these letters or numbers.
echo 0 - black
echo 1 - blue
echo 2 - green
echo 3 - cyan
echo 4 - red
echo 5 - magenta
echo 6 - yellow/brown
echo 7 - white
echo 8 - gray
echo 9 - bright blue
echo A - bright green
echo B - bright cyan
echo C - bright red
echo D - bright magenta
echo E - bright yellow
echo F - white
set /p backcolor=Set background color: 
set /p forecolor=Set text/foreground color: 
color %backcolor%%forecolor%
cls
goto program
:choice7
if %number_of_choice% equ 7 (goto explore) else (goto choice8)
:explore
cls
explorer
goto program
:choice8
if %number_of_choice% equ 8 (goto graphical_calc) else (goto choice9)
:graphical_calc
cls
start calc
goto program
:choice9
if %number_of_choice% equ 9 (goto tasklister) else (goto choice10)
:tasklister
cls
tasklist
goto program
:choice10
if %number_of_choice% equ 10 (goto ip_check) else (goto choice11)
:ip_check
cls
set /p website=Enter the website (Example: www.google.com) wherein you will check its IP address: 
nslookup %website%
goto program
:choice11
if %number_of_choice% equ 11 (goto ping_website) else (goto choice12)
:ping_website
cls
set /p website=Enter the website (Example: www.google.com) wherein you will check if its available: 
ping %website%
goto program
:choice12
if %number_of_choice% equ 12 (goto quiz_bee) else (goto choice13)
:quiz_bee
cls
echo Quiz Bee
echo Answer the questions by entering the letters of their correct answers. The quiz bee has a total of 10 questions and 100 points. When you get the correct answer in a question, you will get 10 points. If you get a total of 50 and above, you pass. Otherwise, you fail. Enjoy!
echo SPECIAL NOTE: If you did not answer any question, you have 0 points but the computer will not output 0 but instead a blank space until you answer a question correctly.
set /p name=Please enter your name to start this quiz bee: 
goto question1
set /a score=0
:question1
echo.
echo 1. Bark! Bark! Bark! Which animal says that?
echo a. Dog b. Cat c. Rabbit d. Fish
set /p answer1=Answer: 
if /i %answer1% equ a (goto correct_question1) else (goto incorrect_question1)
:correct_question1
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question2
:incorrect_question1
echo.
echo You are incorrect. A is the correct answer. You still have %score% pts.
goto question2
:question2
echo.
echo 2. Who is the Philippine National Hero who wrote Noli Me Tangere and El Filibusterismo?
echo a. Andres Bonifacio b. Marcelo H. Del Pilar c. Jose P. Rizal d. Graciano Lopez Jaena
set /p answer2=Answer: 
if /i %answer2% equ c (goto correct_question2) else (goto incorrect_question2)
:correct_question2
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question3
:incorrect_question2
echo.
echo You are incorrect. C is the correct answer. You still have %score% pts.
goto question3
:question3
echo.
echo 3. Where planet do we live in and is known as the 3rd planet of the Solar System?
echo a. Saturn b. Jupiter c. Mars d. Earth
set /p answer3=Answer: 
if /i %answer3% equ d (goto correct_question3) else (goto incorrect_question3)
:correct_question3
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question4
:incorrect_question3
echo.
echo You are incorrect. D is the correct answer. You still have %score% pts.
goto question4
:question4
echo.
echo 4. How many alphabets do we have in the English language?
echo a. 21 b. 28 c. 26 d. 24
set /p answer4=Answer: 
if /i %answer4% equ c (goto correct_question4) else (goto incorrect_question4)
:correct_question4
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question5
:incorrect_question4
echo.
echo You are incorrect. C is the correct answer. You still have %score% pts.
goto question5
:question5
echo.
echo 5. Our body needs this because we have 70 percent of it so we need to drink 8 glasses of it everyday. What is this?
echo a. Water b. Sugar c. Blood d. Acid
set /p answer5=Answer: 
if /i %answer5% equ a (goto correct_question5) else (goto incorrect_question5)
:correct_question5
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question6
:incorrect_question5
echo.
echo You are incorrect. A is the correct answer. You still have %score% pts.
goto question6
:question6
echo.
echo 6. What do you use to see?
echo a. Eyes b. Nose c. Ears d. Skin
set /p answer6=Answer: 
if /i %answer6% equ a (goto correct_question6) else (goto incorrect_question6)
:correct_question6
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question7
:incorrect_question6
echo.
echo You are incorrect. A is the correct answer. You still have %score% pts.
goto question7
:question7
echo.
echo 7. In a computer, what do you use to type numbers, and letters to say something?
echo a. Mouse b. Keyboard c. Monitor d. Speaker
set /p answer7=Answer: 
if /i %answer7% equ b (goto correct_question7) else (goto incorrect_question7)
:correct_question7
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question8
:incorrect_question7
echo.
echo You are incorrect. B is the correct answer. You still have %score% pts.
goto question8
:question8
echo.
echo 8. Where do we go when we are sick to ask for a doctor?
echo a. School b. Internet Cafe c. Hospital d. Police Station
set /p answer8=Answer: 
if /i %answer8% equ c (goto correct_question8) else (goto incorrect_question8)
:correct_question8
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question9
:incorrect_question8
echo.
echo You are incorrect. C is the correct answer. You still have %score% pts.
goto question9
:question9
echo.
echo 9. What meal do you eat in the morning after you set yourself in the wake up of the day?
echo a. Lunch b. Merienda Cena c. Breakfast d. Dinner
set /p answer9=Answer: 
if /i %answer9% equ c (goto correct_question9) else (goto incorrect_question9)
:correct_question9
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto question10
:incorrect_question9
echo.
echo You are incorrect. C is the correct answer. You still have %score% pts.
goto question10
:question10
echo.
echo 10. What are we?
echo a. Aliens b. Humans/People c. Monkeys d. Dogs
set /p answer10=Answer: 
if /i %answer10% equ b (goto correct_question10) else (goto incorrect_question10)
:correct_question10
echo.
echo +10 pts.
set /a score=%score%+10
echo You got the correct answer. You now have %score% pts.
goto result
:incorrect_question10
echo.
echo You are incorrect. B is the correct answer. You still have %score% pts.
goto result
:result
echo.
echo Name: %name%
if %score% geq 50 (goto passed) else (goto failed)
:passed
echo You got %score% points out of 100. You passed. Very good! Keep it up.
goto program
:failed
echo You only got %score% points out of 100. You failed. Sorry! Better luck next time.
goto program
:choice13
if %number_of_choice% equ 13 (goto control_panel) else (goto choice14)
:control_panel
cls
start control
goto program
:choice14
if %number_of_choice% equ 14 (goto make_folder) else (goto choice15)
:make_folder
cls
echo FOLDER MAKER 
cd..
dir
set /p directory=Directory where to create your folder: 
cd %directory%
dir
set /p folder=Name of folder: 
md %folder%
goto program
:choice15
if %number_of_choice% equ 15 (goto remove_folder) else (goto choice16)
:remove_folder
cls
echo EMPTY FOLDER REMOVER 
cd..
dir
set /p directory=Directory where to remove your folder: 
cd %directory%
dir
set /p folder=Name of folder (to check if empty first before deleting): 
rd %folder%
goto program
:choice16
if %number_of_choice% equ 16 (goto copy_file) else (goto choice17)
:copy_file
cls
echo FILE COPIER
cd.. 
dir
set /p directory=Directory where to copy your file: 
cd %directory%
dir
set /p choice=Copy from a directory from this directory? (Y or N): 
if /i %choice% equ y (goto yes) else (goto no)
:yes
dir
set /p dire=Directory where to copy your file: 
cd %dire%
dir
set /p filespec=Name of file (with its extension) to copy: 
cd..
cd..
dir
set /p direct=Where to copy?: 
copy c:\users\g20arthur\%directory%\%dire%\%filespec% c:\users\g20arthur\%direct%
goto program
:no
if /i %choice% equ n (goto process_of_no) else (goto stop)
:process_of_no
set /p file=Name of file (with its extension) to copy: 
cd..
dir
set /p direct=Where to copy?: 
copy c:\users\g20arthur\%directory%\%file% c:\users\g20arthur\%direct%
goto program
:choice17
if %number_of_choice% equ 17 (goto remove_file) else (goto choice18)
:remove_file
cls
echo FILE REMOVER 
cd..
dir
set /p directory=Directory where to remove your file: 
cd %directory%
dir
set /p file=Name of file (with extension): 
del /p %file%
goto program
:choice18
if %number_of_choice% equ 18 (goto move_file) else (goto choice19)
:move_file
cls
echo FILE MOVER 
cd..
dir
set /p directory=Directory where to move your file: 
cd %directory%
dir
set /p choice=Move from a directory from this directory? (Y or N): 
if /i %choice% equ y (goto yes_move) else (goto no_move)
:yes_move
dir
set /p dire=Directory where to move your file: 
cd %dire%
dir
set /p filespec=Name of file (with its extension) to move: 
cd..
cd..
dir
set /p direct=Where to move?: 
move c:\users\g20arthur\%directory%\%dire%\%filespec% c:\users\g20arthur\%direct%
goto program
:no_move
if /i %choice% equ n (goto process_of_no_move) else (goto stop)
:process_of_no_move
set /p file=Name of file (with its extension) to move: 
cd..
dir
set /p direct=Where to move?: 
move c:\users\g20arthur\%directory%\%file% c:\users\g20arthur\%direct%
goto program
:choice19
if %number_of_choice% equ 19 (goto text_creator) else (goto choice20)
:text_creator
cls
echo TEXT FILE CREATOR 
cd..
dir
set /p directory=Directory where to create your text file: 
cd %directory%
dir
set /p indir=Directory from this directory? (Y or N): 
if /i %indir% equ y (goto indir_go) else (goto n_o)
:n_o
if /i %indir% equ n (goto dir_go) else (goto stop)
:indir_go
set /p dire=Where?: 
cd %dire%
set /p filename=Filename of the text file you will create: 
set /p text=The text you will write for this text file (%filename%.txt): 
if exist %filename%.txt (goto overwrite_option) else (goto just_add_the_text)
:dir_go
set /p filename=Filename of the text file you will create: 
set /p text=The text you will write for this text file (%filename%.txt): 
if exist %filename%.txt (goto overwrite_option) else (goto just_add_the_text)
:overwrite_option
echo This file currently exists.
type %filename%.txt
set /p overwrite=Overwrite? (Y or N to just add it to the text)?: 
if /i %overwrite% equ y (goto overwrite) else (goto no_but_add)
:overwrite
del %filename%.txt
pause
echo  >> %filename%.txt
echo %text% >> text.txt
move text.txt %filename%.txt
echo %filename%.txt now contains: 
type %filename%.txt
goto program
:no_but_add
if /i %overwrite% equ n (goto just_add_the_text) else (goto stop)
:just_add_the_text
echo %text% >> %filename%.txt
echo %filename%.txt now contains: 
type %filename%.txt
goto program
:choice20
if %number_of_choice% equ 20 (goto know_me) else (goto stop)
:know_me
cls
whoami
goto program
:stop
close