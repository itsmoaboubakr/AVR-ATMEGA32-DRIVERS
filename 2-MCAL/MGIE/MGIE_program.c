/************************************/
/*   Author:    mBravo18            */
/*   SWC:       GLOBAL INTERRUPT    */
/*   Layer:     MCAL                */
/************************************/

/*library Includes*/
#include "LSTD_types.h"
#include "LBIT_math.h"

/*SWC Includes*/
#include "MGIE_private.h"
#include "MGIE_interface.h"   //optianal no need since there is no macro used in program.c

void MGIE_voidEnableGI(void){
	SET_BIT(SREG,IBBIT);
}

void MGIE_voidDisableGI(void){
	CLEAR_BIT(SREG,IBBIT);
}
