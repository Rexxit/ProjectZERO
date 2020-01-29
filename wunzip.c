/*
 wunzip.c
 *
 *  Created on: Jan 21, 2020
 *      Author: Wayne Cook
 */



/*
#include <stdio.h>
#include <stdlib.h>

// Method Declarations
int readAndUncompress(char*);

int main(int argc, char** argv)
{
	 disabling buffer for eclipse to actually use printf
	 * and scanf to show on the console.
	setbuf(stdout, NULL);

	if (argc == 1)
	{
		printf("wunzip: file1 [file2 ...]\n");
		exit(1);
	}

	for (int i = 1; i < argc; i++)
	{
		readAndUncompress(argv[i]);
	}//end for()

}//end main()

int readAndUncompress(char* file2)
{
	// Declaring the FILE variable pointer
		FILE* fileP2;
		char Uno;
//		int buffer[100];
		int count;
		size_t temp;

		//Assigning fileP2 to the file and setting it to read only
		fileP2 = fopen(file2, "r");

		if (fileP2 == NULL)
		{
			//printf("wunzip: file1 [file2 ...]\n");
		 	exit(1);
		} //end if()


		while(fread(&count, 4, 1, fileP2) > 0)
		{

			fread(&Uno, 1, 1, fileP2);

			for (int i = 0; i < count; i++)
			{
				printf("%c", Uno);
			}//end for()

		}//end while()


	fclose(fileP2);
	return 0;
}
*/
