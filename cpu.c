#include <stdio.h>
#include "stdint.h"

#include "main.h"


int main(void)
{
	printf("Hello there\n");



	return(0);
}


// These functions should be used to fill the combined value registers
uint16_t reg_af() 
{
	return (reg.a << 8) + reg.f;
}

uint16_t reg_bc() 
{
	return (reg.b << 8) + reg.c;
}

uint16_t reg_de()
{
	return (reg.d << 8) + reg.e;
}

uint16_t reg_hl() 
{
	return (reg.hl << 8) + reg.hl;
}