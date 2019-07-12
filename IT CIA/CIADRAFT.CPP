#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()

{
	/*THIS AN IT PRE-ASSESSMENT  TEST.*/
	int a,total=1,score=0;
	char name[100],last[100],mid[100],answer;
	clrscr();

	printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");
	printf("\nWelcome to IT CIA! We are now here to assess your Academic and Computer Knowledge so we can know if you have the guts and intelligence in taking a program Bachelor of Science in Information Technology (BSIT).\n");
	printf("GENERAL INSTRUCTIONS: \n");
	printf("1. Please enter your name in 3-name format (First name/Second or Middle Name (or initial)/Last Name)\n");
	printf("(Example: My name is Arthur Tristan M. Ramos. I can only type as Arthur M. Ramos or Arthur Tristan Ramos or Arthur Mancao Ramos.\n");
	printf("2. Please enter the NUMBER of your chosen subject same with the next one. You will exactly answer 2. If you entered the Word, wrong Word, number, letter, character or any symbol, the Program will not activate. You need to try again.\n");
	printf("3. Please answer the questions by answering it using UPPERCASE/CAPITAL LETTERS only. Not WORDS, NUMBERS, OTHER SYMBOLS and LOWERCASE/SMALL LETTERS. If you violate this instruction, this program will recognize your answer as INCORRECT.\n");
	printf("4. You will pass only if you answered at least 17 out of 20 questions from the 2 chosen subjects. If you have the score below 17, you will fail but there is a next time and anyway, this is a half-actual pre-assessment/additional test in your Curriculum. Achieve your goals in becoming an IT Expert. God bless you! :)\n");
	printf("5. Good luck! :)\n");


	printf("\n\nEnter your Name: ");
	scanf("%s", &name);
	scanf("%s", &mid);
	scanf("%s", &last);

	printf("\n\nPress (1) - Programming\n");
	printf("Press (2) - Computing\n");
	printf("Press (3) - Electronics\n");
	printf("\nChosen subject to take: ");
	scanf("%d",&a);

	clrscr();

	printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

	if(a==1)
	{
		printf("\n\n1. What is the machine which we use nowadays that performs a variety of tasks that contains input (e.g.Keyboard) and output (e.g.Monitor) devices?\n");
		printf("A. Mechanical Pen\tB. Radio \tC. Television\tD. Computer\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'D':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Computer is the correct answer.\n");
			}
		}
		printf("\n\n2. A high-level programming language known in older cellphone apps such as apps in old Nokia phones. It has a coffee in it.\n");
		printf("A. C\tB. Python\tC. Java\tD. Unity\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Java is the correct answer.\n");
			}
			printf("\n\n3. It is a logical operator which requires both values true to become fully TRUE\n");
			printf("A. Logical AND\tB.Logical OR\tC. Logical NOT\tD. None\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Logical AND is the correct answer.\n");
				}
			printf("\n\n4. These are the programs that are needed to keep all the hardware and software systems running together smoothly.\n");
			printf("A. Graphics Software\tB. Application Program\tC. Systems Programs\tD. Compiler\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Systems Programs is the correct answer.\n");
				}
			printf("\n\n5. What do we call the electronic and mechanical parts of a computer?\n");
			printf("A. Software\tB. Hardware\tC. Peopleware");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Hardware is the correct answer.\n");
				}
			printf("\n\n6. 6*6+10/2 = ? (* - Multiplication and / - Division)\n");
			printf("A. 23\tB. 48\tC. 41\tD. All of the above\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 41 is the correct answer.\n");
				}
			printf("\n\n7. Convert the octal number 64 to a binary number.\n");
			printf("A.110100\tB.110000\tC.110111\tD.110011\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 110100 is the correct answer.\n");
				}
			printf("\n\n8. If a>b, c<a, and b>c. What is the highest variable?\n");
			printf("A. a\tB.b\tC.c\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! a is the correct answer.\n");
				}

			printf("\n\n9. What do you call the process of fixing bugs in a program (software)?\n");
			printf("A. Format\tB. Defrag\tC. Debug\tD. Restart\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Debug is the correct answer.\n");
				}
			printf("\n10. Why is 10 an EVEN number? Give a clear and precise reason\n");
			printf("A. Its remainder is 0 which is the Genesis of Even Numbers.\nB. Its remainder is 1.\nC. It is a multiple of 2.\nD. Undefined!\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! (Its remainder is 0 which is the Genesis of Even Numbers.) is the correct answer.\n");
				}
				printf("Please press Enter to proceed...");
				getch();
				clrscr();
				printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

				printf("\n\n\tPress (2) - Computing\n\tPress (3) - Electronics\n");
				printf("\n\tNext subject: ");
				fflush(stdin);
				scanf("%d",&a);

				clrscr();
				printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

				if(a==2)
				{
					while(a==2)
					{
		printf("\n\n1. It is a global network of computers spanning the globe and also known as World Wide Web.\n");
		printf("A. Internet\tB. Load\tC. Socialization\tD. BitTorrent\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Internet is the correct answer!\n");
			}
		}
		printf("\n\n2. It is a family of operating systems made by Microsoft. It is used nowadays by many of us people in the world.\n");
		printf("A. MAC\tB. MS-DOS\tC. Windows\tD. Linux\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Windows is the correct answer.\n");
			}
			printf("\n\n3. It is a computer made by Apple in 1984 known for its very friendly graphical user interface?\n");
			printf("A. Macintosh\tB.MacBook Pro\tC. iPad\tD. Apple II\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Macintosh is the correct answer.\n");
				}
			printf("\n\n4. It is original mechanical counting device made in China.\n");
			printf("A. Iron Dome\tB. Cartesian Coordinate Plane\tC. Abacus\tD. Calculator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Abacus is correct answer.\n");
				}
			printf("\n\n5. It is the word processor of Microsoft Office.\n");
			printf("A. Outlook\tB. Excel\tC. PowerPoint\tD.Word\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Word is the correct answer.\n");
				}
			printf("\n\n6. It is commonly a touch-screen device larger than a smartphone which it also has finger or stylus gestures but measures 7 inches or larger.\n");
			printf("A. Nokia 9210 Communicator\tB. iPod Shuffle\tC. PS Vita\tD. Tablet\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Tablet is the correct answer.\n");
				}
			printf("\n\n7. It is a branch of Artificial Intelligence where it has a concept that robots can do high-precision jobs.\n");
			printf("A.Robotics\tB.Information Engineering\tC.Neural Network\tD. Expert System\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Robotics is the correct answer.\n");
				}
			printf("\n\n8. It refers to images or anything that outputs pictures.\n");
			printf("A. Graphics\tB. Animation\tC. Multimedia\tD.Video\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Graphics is the correct answer.\n");
				}
			printf("\n\n9. What is the information that computer uses to get the job done?\n");
			printf("A. Hardware\tB. Software\tC. Peopleware\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Software is the correct answer.\n");
				}
			printf("\n\n10. What is the most important program that runs a computer from the start?\n");
			printf("A. Operating System\nB. Application Program\nC. AntiVirus\nD. Office Package\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Operating System is the correct answer.\n");
				}
					break;
				}
				    }
				else if(a==3)
				{
					while(a==3)
					{
						printf("\n\n1. It is an electronic device that converts electrical energy into sound.\n");
		printf("A. Loudspeaker\tB. Microphone\tC. Amplifier\tD. Radio\n");
		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Loudspeaker is the correct answer.\n");
			}
		}
		printf("\n\n2. It is an electronic device intended to convert sound waves into electrical energy.\n");
		printf("A. Amplifier\tB. Loudspeaker\tC. Microphone\tD. Cellphone\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Microphone  is the correct answer.\n");
			}
			printf("\n\n3.In Ohm's Law, a voltage is a product of a current and resistance. (V = IR). An electronic device has a current of 12 A and a resistance of 6 Ohms. What is the Voltage of the device?\n");
			printf("A. 72 V\tB. 2 V\tC. 36 V\tD. 27 V\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 72 V  is the correct answer.\n");
				}
			printf("\n\n4. Ohm's Law is still applied. A computer has a voltage of 25 V and a current of 12 A. What is the resistance?\n");
			printf("A. 2.08 Ohms\tB. 208 Ohms\tC. 300 Ohms\tD. 3 Ohms\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 2.08 Ohms  is the correct answer.\n");
				}
			printf("\n\n5. It is a switch where its circuit is designed to light the bulb in a bright environment and to turn it off in the dark.\n");
			printf("A. Light-Emitting Diode\tB. Heat-Operated Switch\tC. Light-Operated Switch\tD. AVR");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Light - Operated Switch  is the correct answer.\n");
				}
			printf("\n\n6. It is a switch where its circuit is designed to respond to the surrounding temperature and commonly used in fire alarm systems.\n");
			printf("A. Light-Operated Switch\tB. LED\tC. AVR\tD. Heat-Operated Switch\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Heat - Operated Switch  is the correct answer.\n");
				}
			printf("\n\n7. It is an electronic p-n diode which lights when current passes through it.\n");
			printf("A. Photodiode\tB. Small-Signal Diode\tC. Zener Diode\tD. Light-Emitting Diode\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Light-Emitting Diode is the correct answer.\n");
				}
			printf("\n\n8. It is an electronic device (a small box in a computer) that supplies electric energy to an electrical load.\n");
			printf("A. Power Supply\tB. Transformer\tC. Inductor\tD. Generator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Power Supply is the correct answer.\n");
				}
			printf("\n\n9. It is a device for radiating electromagnetic signals fed into it from a radio transmitter into space.\n");
			printf("A. Amplifier\tB. Antenna\tC. Transformer\tD. Electric Motor\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Antenna is the correct answer.\n");
				}

			printf("\n\n10. It is the property of a device or material to attract bodies of iron and other magnetic materials or magnets.\n");
			printf("A. Magnetism\nB. Induction\nC. Attraction\nD. Electricity\n");
			printf("\nAnswer: \n");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Magnetism is the correct answer.\n");
				}
					break;
				}

		}
		if(score>=17)
		{
			printf("%s, %s %s\n", last, name, mid);
			printf("You got %d out of 20 items. You passed. :)", score);
		}
		else
		{
			printf("%s, %s %s\n",last,name,mid);
			printf("Sorry! You only got %d out of 20 items. You failed. :(",score);
		}


	}

	else if(a==2)
	{
		printf("\n\n1. It is a global network of computers spanning the globe and also known as World Wide Web.\n");
		printf("A. Internet\tB. Load\tC. Socialization\tD. BitTorrent\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Internet is the correct answer.\n");
			}
		}
		printf("\n\n2. It is a family of operating systems made by Microsoft. It is used nowadays by many of us people in the world.\n");
		printf("A. MAC\tB. MS-DOS\tC. Windows\tD. Linux\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Windows is the correct answer.\n");
			}
			printf("\n\n3. It is a computer made by Apple in 1984 known for its very friendly graphical user interface?\n");
			printf("A. Macintosh\tB.MacBook Pro\tC. iPad\tD. Apple II\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Macintosh is the correct answer.\n");
				}
			printf("\n\n4. It is original mechanical counting device made in China.\n");
			printf("A. Iron Dome\tB. Cartesian Coordinate Plane\tC. Abacus\tD. Calculator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Abacus is the correct answer.\n");
				}
			printf("\n\n5. It is the word processor of Microsoft Office.\n");
			printf("A. Outlook\tB. Excel\tC. PowerPoint\tD.Word\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Word is the correct answer.\n");
				}
			printf("\n\n6. It is commonly a touch-screen device larger than a smartphone which it also has finger or stylus gestures but measures 7 inches or larger.\n");
			printf("A. Nokia 9210 Communicator\tB. iPod Shuffle\tC. PS Vita\tD. Tablet\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Tablet is the correct answer.\n");
				}
			printf("\n\n7. It is a branch of Artificial Intelligence where it has a concept that robots can do high-precision jobs.\n");
			printf("A.Robotics\tB.Information Engineering\tC.Neural Network\tD. Expert System\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Robotics  is the correct answer.\n");
				}
			printf("\n\n8. It refers to images or anything that outputs pictures.\n");
			printf("A. Graphics\tB. Animation\tC. Multimedia\tD.Video\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Graphics is the correct answer.\n");
				}
			printf("\n\n9. What is the information that computer uses to get the job done?\n");
			printf("A. Hardware\tB. Software\tC. Peopleware\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Software is the correct answer.\n");
				}
			printf("\n\n10. What is the most important program that runs a computer from the start?\n");
			printf("A. Operating System\nB. Application Program\nC. AntiVirus\nD. Office Package\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Operating System is the correct answer.\n");
				}
				printf("Please press Enter to proceed...");
				getch();
				clrscr();
				printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

				printf("\n\n\tPress (1) - Programming\n\tPress (3) - Electronics\n");
				printf("\n\tNext subject: ");
				fflush(stdin);
				scanf("%d",&a);

				clrscr();
				printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

				if(a==1)
				{
					while(a==1)
					{
		printf("\n\n1. What is the machine which we use nowadays that performs a variety of tasks that contains input (e.g.Keyboard) and output (e.g.Monitor) devices?\n");
		printf("A. Mechanical Pen\tB. Radio \tC. Television\tD. Computer\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'D':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Computer is the correct answer.\n");
			}
		}
		printf("\n\n2. A high-level programming language known in older cellphone apps such as apps in old Nokia phones. It has a coffee in it.\n");
		printf("A. C\tB. Python\tC. Java\tD. Unity\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Java is the correct answer.\n");
			}
			printf("\n\n3. It is a logical operator which requires both values true to become fully TRUE\n");
			printf("a. Logical AND\tB.Logical OR\tC. Logical NOT\tD. None\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Logical AND is the correct answer.\n");
				}
			printf("\n\n4. These are the programs that are needed to keep all the hardware and software systems running together smoothly.\n");
			printf("\tA. Graphics Software\tB. Application Program\tC. Systems Programs\tD. Compiler\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Systems Programs is the correct answer.\n");
				}
			printf("\n\n5. What do we call the electronic and mechanical parts of a computer?\n");
			printf("A. Software\tB. Hardware\tC. Peopleware");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Hardware is the correct answer.\n");
				}
			printf("\n6. 6*6+10/2 = ? (* - Multiplication and / - Division)\n");
			printf("A. 23\tB. 48\tC. 41\tD. All of the above\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 41 is the correct answer.\n");
				}
			printf("\n\n7. Convert the octal number 64 to a binary number.\n");
			printf("A.110100\tB.110000\tC.110111\tD.110011\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 110100 is the correct answer.\n");
				}
			printf("\n\n8. If a>b, c<a, and b>c. What is the highest variable?\n");
			printf("A. a\tB.b\tC.c\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! a is the correct answer.\n");
				}

			printf("\n\n9. What do you call the process of fixing bugs in a program (software)?\n");
			printf("A. Format\tB. Defrag\tC. Debug\tD. Restart\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Debug is the correct answer.\n");
				}
			printf("\n\n10. Why is 10 an EVEN number? Give a clear and precise reason\n");
			printf("A. Its remainder is 0 which is the Genesis of Even Numbers.\nB. Its remainder is 1.\nC. It is a multiple of 2.\nD. Undefined!\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! (Its remainder is 0 which is the Genesis of Even Numbers.) is the correct answer.\n");
				}
					break;
				}
			}
				else if(a==3)
				{
					while(a==3)
					{
						printf("\n\n1. It is an electronic device that converts electrical energy into sound.\n");
		printf("A. Loudspeaker\tB. Microphone\tC. Amplifier\tD. Radio\n");
		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Loudspeaker is the correct answer.\n");
			}
		}
		printf("\n\n2. It is an electronic device intended to convert sound waves into electrical energy.\n");
		printf("A. Amplifier\tB. Loudspeaker\tC. Microphone\tD. Cellphone\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Microphone is the correct answer.\n");
			}
			printf("\n\n3.In Ohm's Law, a voltage is a product of a current and resistance. (V = IR). An electronic device has a current of 12 A and a resistance of 6 Ohms. What is the Voltage of the device?\n");
			printf("A. 72 V\tB. 2 V\tC. 36 V\tD. 27 V\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 72 V is the correct answer.\n");
				}
			printf("\n\n4. Ohm's Law is still applied. A computer has a voltage of 25 V and a current of 12 A. What is the resistance?\n");
			printf("A. 2.08 Ohms\tB. 208 Ohms\tC. 300 Ohms\tD. 3 Ohms\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 2.08 Ohms is the correct answer.\n");
				}
			printf("\n\n5. It is a switch where its circuit is designed to light the bulb in a bright environment and to turn it off in the dark.\n");
			printf("A. Light-Emitting Diode\tB. Heat-Operated Switch\tC. Light-Operated Switch\tD. AVR");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Light-Operated Switch is the correct answer.\n");
				}
			printf("\n\n6. It is a switch where its circuit is designed to respond to the surrounding temperature and commonly used in fire alarm systems.\n");
			printf("A. Light-Operated Switch\tB. LED\tC. AVR\tD. Heat-Operated Switch\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Heat-Operated Switch is the correct answer.\n");
				}
			printf("\n\n7. It is an electronic p-n diode which lights when current passes through it.\n");
			printf("A. Photodiode\tB. Small-Signal Diode\tC. Zener Diode\tD. Light-Emitting Diode\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! light - Emitting Diode is the correct answer.\n");
				}
			printf("\n\n8. It is an electronic device (a small box in a computer) that supplies electric energy to an electrical load.\n");
			printf("A. Power Supply\tB. Transformer\tC. Inductor\tD. Generator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Power Supply is the correct answer.\n");
				}
			printf("\n\n9. It is a device for radiating electromagnetic signals fed into it from a radio transmitter into space.\n");
			printf("A. Amplifier\tB. Antenna\tC. Transformer\tD. Electric Motor\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Antenna is the correct answer.\n");
				}

			printf("\n\n10. It is the property of a device or material to attract bodies of iron and other magnetic materials or magnets.\n");
			printf("A. Magnetism\nB. Induction\nC. Attraction\nD. Electricity\n");
			printf("\nAnswer: \n");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Magnetism is the correct answer.\n");
				}
					break;
				}
			}
			if(score>=17)
			{
				printf("%s, %s %s\n",last,name,mid);
				printf("You got %d out of 20 items. You passed. :)",score);
			}
			else
			{
				printf("%s, %s %s\n,",last,name,mid);
				printf("Sorry! You only got %d out of 20 items. You failed. :(",score);
			}
	}
	else if(a==3)
	{
		printf("\n\n1. It is an electronic device that converts electrical energy into sound.\n");
		printf("A. Loudspeaker\tB. Microphone\tC. Amplifier\tD. Radio\n");
		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Loudspeaker is the correct answer.\n");
			}
		}
		printf("\n\n2. It is an electronic device intended to convert sound waves into electrical energy.\n");
		printf("A. Amplifier\tB. Loudspeaker\tC. Microphone\tD. Cellphone\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Microphone is the correct answer.\n");
			}
			printf("\n\n3.In Ohm's Law, a voltage is a product of a current and resistance. (V = IR). An electronic device has a current of 12 A and a resistance of 6 Ohms. What is the Voltage of the device?\n");
			printf("A. 72 V\tB. 2 V\tC. 36 V\tD. 27 V\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 72 V is the correct answer.\n");
				}
			printf("\n\n4. Ohm's Law is still applied. A computer has a voltage of 25 V and a current of 12 A. What is the resistance?\n");
			printf("A. 2.08 Ohms\tB. 208 Ohms\tC. 300 Ohms\tD. 3 Ohms\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 2.08 Ohms is the correct answer.\n");
				}
			printf("\n\n5. It is a switch where its circuit is designed to light the bulb in a bright environment and to turn it off in the dark.\n");
			printf("A. Light-Emitting Diode\tB. Heat-Operated Switch\tC. Light-Operated Switch\tD. AVR");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Light-Operated Switch is the correct answer.\n");
				}
			printf("\n\n6. It is a switch where its circuit is designed to respond to the surrounding temperature and commonly used in fire alarm systems.\n");
			printf("A. Light-Operated Switch\tB. LED\tC. AVR\tD. Heat-Operated Switch\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Heat-Operated Switch is the correct answer.\n");
				}
			printf("\n7. It is an electronic p-n diode which lights when current passes through it.\n");
			printf("A. Photodiode\tB. Small-Signal Diode\tC. Zener Diode\tD. Light-Emitting Diode\n");
			printf("Answer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Light-Emitting Diode is the correct answer.\n");
				}
			printf("\n\n8. It is an electronic device (a small box in a computer) that supplies electric energy to an electrical load.\n");
			printf("A. Power Supply\tB. Transformer\tC. Inductor\tD. Generator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Power Supply is the correct answer.\n");
				}
			printf("\n\n9. It is a device for radiating electromagnetic signals fed into it from a radio transmitter into space.\n");
			printf("A. Amplifier\tB. Antenna\tC. Transformer\tD. Electric Motor\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Antenna is the correct answer.\n");
				}

			printf("\n\n10. It is the property of a device or material to attract bodies of iron and other magnetic materials or magnets.\n");
			printf("A. Magnetism\nB. Induction\nC. Attraction\nD. Electricity\n");
			printf("\nAnswer: \n");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Magnetism is the correct answer.\n");
				}
				printf("Please press Enter to proceed...");
				getch();
				clrscr();
				printf("\tInformation Technology Computer Information Assessment (IT CIA)");

				printf("\n\n\tPress (1) - Programming\n\tPress (2) - Computing\n");
				printf("\n\tNext subject: ");
				fflush(stdin);
				scanf("%d",&a);

				clrscr();
				printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");

				if(a==1)
				{
				while(a==1)
				{
		printf("\n\n1. What is the machine which we use nowadays that performs a variety of tasks that contains input (e.g.Keyboard) and output (e.g.Monitor) devices?\n");
		printf("A. Mechanical Pen\tB. Radio \tC. Television\tD. Computer\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'D':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Computer is the correct answer.\n");
			}
		}
		printf("\n\n2. A high-level programming language known in older cellphone apps such as apps in old Nokia phones. It has a coffee in it.\n");
		printf("A. C\tB. Python\tC. Java\tD. Unity\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Java is the correct answer.\n");
			}
			printf("\n\n3. It is a logical operator which requires both values true to become fully TRUE\n");
			printf("A. Logical AND\tB.Logical OR\tC. Logical NOT\tD. None\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Logical AND is the correct answer.\n");
				}
			printf("\n\n4. These are the programs that are needed to keep all the hardware and software systems running together smoothly.\n");
			printf("A. Graphics Software\tB. Application Program\tC. Systems Programs\tD. Compiler\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Systems Programs is the correct answer.\n");
				}
			printf("\n\n5. What do we call the electronic and mechanical parts of a computer?\n");
			printf("A. Software\tB. Hardware\tC. Peopleware");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Hardware is the correct answer.\n");
				}
			printf("\n\n6. 6*6+10/2 = ? (* - Multiplication and / - Division)\n");
			printf("A. 23\tB. 48\tC. 41\tD. All of the above\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 41 is the correct answer.\n");
				}
			printf("\n\n7. Convert the octal number 64 to a binary number.\n");
			printf("A.110100\tB.110000\tC.110111\tD.110011\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! 110100 is the correct answer.\n");
				}
			printf("\n\n8. If a>b, c<a, and b>c. What is the highest variable?\n");
			printf("A. a\tB.b\tC.c\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! a is the correct answer.\n");
				}

			printf("\n\n9. What do you call the process of fixing bugs in a program (software)?\n");
			printf("A. Format\tB. Defrag\tC. Debug\tD. Restart\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Debug is the correct answer.\n");
				}
			printf("\n\n10. Why is 10 an EVEN number? Give a clear and precise reason\n");
			printf("A. Its remainder is 0 which is the Genesis of Even Numbers.\nB. Its remainder is 1.\nC. It is a multiple of 2.\nD. Undefined!\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! (Its remainder is 0 is the Genesis of Even Numbers.) is the correct answer.\n");
				}
				break;
				}
			   }
			       else if(a==2)
				{
					while(a==2)
					{
		printf("\n\n1. It is a global network of computers spanning the globe and also known as World Wide Web.\n");
		printf("A. Internet\tB. Load\tC. Socialization\tD. BitTorrent\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

		switch(answer)
		{
		case 'A':

				printf("\nCorrect!\n");
				total=score++;
				break;

		default:
			{
				printf("\nIncorrect! Internet is the correct answer.\n");
			}
		}
		printf("\n\n2. It is a family of operating systems made by Microsoft. It is used nowadays by many of us people in the world.\n");
		printf("A. MAC\tB. MS-DOS\tC. Windows\tD. Linux\n");

		printf("\nAnswer: ");
		fflush(stdin);
		scanf("%c",&answer);

			switch(answer)
			{
			case 'C':
				printf("\nCorrect!\n");
				total=score++;
				break;
			default:
				printf("\nIncorrect! Windows is the correct answer.\n");
			}
			printf("\n\n3. It is a computer made by Apple in 1984 known for its very friendly graphical user interface?\n");
			printf("A. Macintosh\tB.MacBook Pro\tC. iPad\tD. Apple II\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Macintosh is the correct answer.\n");
				}
			printf("\n\n4. It is original mechanical counting device made in China.\n");
			printf("A. Iron Dome\tB. Cartesian Coordinate Plane\tC. Abacus\tD. Calculator\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'C':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Abacus is the correct answer.\n");
				}
			printf("\n\n5. It is the word processor of Microsoft Office.\n");
			printf("A. Outlook\tB. Excel\tC. PowerPoint\tD.Word\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Word is the correct answer.\n");
				}
			printf("\n\n6. It is commonly a touch-screen device larger than a smartphone which it also has finger or stylus gestures but measures 7 inches or larger.\n");
			printf("A. Nokia 9210 Communicator\tB. iPod Shuffle\tC. PS Vita\tD. Tablet\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'D':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Tablet is the correct answer.\n");
				}
			printf("\n\n7. It is a branch of Artificial Intelligence where it has a concept that robots can do high-precision jobs.\n");
			printf("A.Robotics\tB.Information Engineering\tC.Neural Network\tD. Expert System\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Robotics is the correct answer.\n");
				}
			printf("\n\n8. It refers to images or anything that outputs pictures.\n");
			printf("A. Graphics\tB. Animation\tC. Multimedia\tD.Video\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Graphics is the correct answer.\n");
				}
			printf("\n\n9. What is the information that computer uses to get the job done?\n");
			printf("A. Hardware\tB. Software\tC. Peopleware\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'B':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Software is the correct answer.\n");
				}
			printf("\n\n10. What is the most important program that runs a computer from the start?\n");
			printf("A. Operating System\nB. Application Program\nC. AntiVirus\nD. Office Package\n");
			printf("\nAnswer: ");
			fflush(stdin);
			scanf("%c",&answer);
				switch(answer)
				{
				case 'A':
					printf("\nCorrect!\n");
					total=score++;
					break;
				default:
					printf("\nIncorrect! Operating System is the correct answer.\n");
				}
					break;

				    }
				    clrscr();
				    printf("\n\tInformation Technology Computer Information Assessment (IT CIA)");
				    if(score>=17)
				    {
					printf("\n\n%s, %s %s\n",last,name,mid);
					printf("\nYou got %d out of 20 items. You passed. :)",score);
				    }
				    else
				    {
					printf("\n\n%s, %s %s\n",last,name,mid);
					printf("\nSorry! You only got %d out of 20 items. You failed. :(",score);
				    }
				}
	}
	getch();

}
