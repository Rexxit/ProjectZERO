/*
 * wgrep.c
 *
 *  Created on: Jan 21, 2020
 *      Author: Wayne Cook
 */


/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Method Declarations
void readAndFind(char*, FILE*);

int main(int argc, char** argv)
{
	 disabling buffer for eclipse to actually use printf
	 * and scanf to show on the console.
	setbuf(stdout, NULL);
	FILE* fileP1;

// if there's no search term
	if (argc == 1)
	{
		printf("wgrep: searchterm [file ...]\n");
		exit(1);
	}//end if()
// if there's no file
	if (argc == 2)
	{
		readAndFind(argv[1], stdin);
	}
	//for loop to iterate through files
	for (int i = 2; i < argc; i++)
	{
		fileP1 = fopen(argv[i], "r");
		readAndFind(argv[1], fileP1);
		fclose(fileP1);
	}//end for()

	//char x[10] = "off";
	//readAndFind("TextOne.txt", x);

	return 0;
}//end main()

//function to read the file and scan it for the word
void readAndFind(char* text1, FILE* file1)
{
	// Declaring the FILE variable pointers
	//FILE* fileP1;
	char* lineTracker = NULL;
	size_t lineTrackerSize = 0;
	int count = 0;
	ssize_t size = 0;

	//Assigning fileP1 to the file and setting it to read only
	//fileP1 = fopen(file1, "r");

	//Printing to the screen the file is opening
	//printf("Initializing and opening file..\n");

	//if statement  to check if the two files are empty or not
	if (file1 == NULL)
	{
		printf ("wgrep: cannot open file\n");
		exit(1);
	}//end if()
	else
	{
		//printing when the files are open
		//printf("File is open\n");
		//printf("Searching the file for the word '%s'\n", text1);

		// Loop through until we are done with the file.
		while (size >= 0)
		{
			size = getline(&lineTracker, &lineTrackerSize, file1);
			 //Increment our line count
			count++;

			if (strstr(lineTracker, text1) != NULL)
			{	//if match found
				//printf("Found match on line %d\n", line_count);
				printf("%s", lineTracker);
			}//end if()
			else
			{
				printf("wgrep: searchterm [file ...]\n", text1);
				exit(1);
			}//end else()
		}//end while()
////////////////////////////////////////////////////////////////////////////////
		while (fscanf(fileP1, "%s", data) == 1)
		{
			//Add a for loop till strstr(string, student) does-not returns null.
			if (strstr(data, text1) != 0)
			{	//if match found
				printf("Data: %s", data);
			}
		}

	}//end else()
}//end readAndFine()
*/
