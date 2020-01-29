/*

 * wzip.c
 *
 *  Created on: Jan 21, 2020
 *      Author: Wayne Cook
 */


#include <stdio.h>
#include <stdlib.h>

// Method Declarations
void readAndCompress(char*);

int main(int argc, char** argv)
{
	/* disabling buffer for eclipse to actually use printf
	 * and scanf to show on the console.*/
	setbuf(stdout, NULL);

	//if there's no file exit
	if (argc == 1)
	{
		printf("wzip: file1 [file2 ...]\n");
		exit(1);
	}//if()
	//for loop to transverse through files
	for (int i = 1; i < argc; i++)
	{
		readAndCompress(argv[i]);
	}//end for()

	//readAndCompress("TextTwo.txt");
}//end main()

//function to read the files and compress them into binary
void readAndCompress(char* file2)
{
	// Declaring the FILE variable pointer
	FILE* fileP2;
	// character variables
	char uno, dos;
	//count variable
	int count=1;

	//Assigning fileP2 to the file and setting it to read only
	fileP2 = fopen(file2, "r");

	//Printing to the screen the file is opening
	//printf("Initializing and opening file..\n");

	//if statement  to check if the two files are empty or not
	if (fileP2 == NULL)
	{
		exit(1);
	} //end if()


	while (dos != EOF)
	{
		//Assigning characters to uno and dos variables
		uno = fgetc(fileP2);
		dos = fgetc(fileP2);

		//while loop to check if variables are equal
		while (uno == dos)
		{
			count++;
			dos = fgetc(fileP2);
		}//end if()

		//FORMAT 4-byte integer in binary and 1 character
		fwrite(&count, 4, 1, stdout);
		fwrite(&uno, 1, 1, stdout);
		//Assigning file pointer
		fseek(fileP2, -1, SEEK_CUR);
		count = 1;
	}//end while()

	fclose(fileP2);
}//end readAndCompressed()
