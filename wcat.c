/*

 * wcat.c
 *
 *  Created on: Jan 21, 2020
 *      Author: Wayne Cook


#include <stdio.h>
#include <stdlib.h>

// Method Declarations
int readAndOutput(char*);


int main(int argc, char** argv)
{
	 disabling buffer for eclipse to actually use printf
	 * and scanf to show on the console.
	setbuf(stdout, NULL);

// for loop to iterate through files
	for (int i = 1; i < argc; i++)
	{
		readAndOutput(argv[i]);
	}//end for()

	//readAndOutput("TextOne.txt");

}//end main()

//////////////////////////////////////////////////////////////////////////////////////////////////////////

//function to read and output the file to the screen
int readAndOutput(char* file1)
{
	// Declaring the FILE variable pointer
	FILE* fileP1;

	// Declaring the character variables
	char data[100];

	//Assigning fileOne and fileTwo to the two files and setting it to read only
	fileP1 = fopen(file1, "r");

	//Printing to the screen the file is opening
	//printf("Initializing and opening file..");

	//if statement  to check if the two files are empty or not
	if (fileP1 == NULL)
	{
		printf ("wcat: cannot open file\n");
		exit(1);
	}//end if()
	else
	{
		//printing when the files are open
		//printf("File is open\n");

		while (fgets(data, 50, fileP1) != NULL)
		{
			printf("%s", data);
		}//end while()

	}//end else()


	fclose(fileP1);
	return 0;
}//end readAndWrite()
*/
