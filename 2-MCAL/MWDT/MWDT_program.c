/************************************/
/*   Author:    mBravo18            */
/*   SWC:       WATCHDOG TIMER      */
/*   Layer:     MCA                 */
/*   Date:      September 07, 2023  */
/*   Last Edit: N/A                 */
/************************************/

/*library Includes*/
#include "LSTD_types.h"
#include "LBIT_math.h"

/*SWC Includes*/
#include "MWDT_private.h"
#include "MWDT_interface.h"

STD_error_t MWDT_stderrInit(u8 ARG_u8Prescalar)
{
	STD_error_t L_stdERROR = E_OK;
	if(ARG_u8Prescalar <= 7)
	{
		WDTCR = (WDTCR & 0xF8) |  ARG_u8Prescalar;
	}
	else
	{
		L_stdERROR = E_NOK; 
	}
	return L_stdERROR;
}


void MWDT_voidEnable(void)
{
	SET_BIT(WDTCR,WDE);
}
void MWDT_voidDisable(void)
{
	//WDTCR |= (0x03 << 3);
	SET_BIT(WDTCR,WDE);
	SET_BIT(WDTCR,WDTOE);
	CLEAR_BIT(WDTCR,WDE);
}

void MWDT_voidReset(void)
{
	__asm__ __volatile__ ("wdr"); //assemply instruction __asm__("") to reset watchdog timer
}
