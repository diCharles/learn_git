#include <stdio.h>

void ws_init( int arg1);

void ws_Deinit( void);

int main()
{
	int a = 0;
	ws_init(a);

}
void ws_init( int arg1)// do not pass bad parameter
{
	// INIT SPECIFIC HARWARE
}
void ws_Deinit( void ){
	// de INIT SPECIFIC HARWARE

	// set free TPM

	// set free ADC

	// todo: DEinti funct for ADC

}
