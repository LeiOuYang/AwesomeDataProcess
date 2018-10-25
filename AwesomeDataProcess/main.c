#include <stdio.h>
#include <stdlib.h>

#include "AwesomeDataProcess.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	unsigned int i = 0;
	char* src = "0123456789";
	char dest[50] = {0};
	char nmea[] = "PGKC242,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0" ;
	
	string_copy(dest, src);
	printf("dest=%s, len=%d\n", dest, strlen(dest));
	
	string_copy_len(dest, src, 9);
	printf("dest=%s, len=%d\n", dest, strlen(dest));
		
	printf("F=%d\n", data_hex_to_uint('F'));
	
	nmea0183_crc_str(dest, nmea);
	printf("%s\n", dest);
	
	return 0;
}
