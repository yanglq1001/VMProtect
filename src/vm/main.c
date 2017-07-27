#include <stdio.h>
#include "../include/vmop.h"
#include "../include/utils.h"


int main(int argc , char **argv)
{
	char testopcode[]={0x01,0x02,0x3}; 

	vm_setup(); 
	vm_load() ; 
//	vm_startup();
	vm_run() ;
//	vm_exit();
	return 0 ;
}
