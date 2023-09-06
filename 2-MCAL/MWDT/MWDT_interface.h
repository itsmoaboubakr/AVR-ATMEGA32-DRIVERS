/************************************/
/*   Author:    mBravo18            */
/*   SWC:       WATCHDOG TIMER      */
/*   Layer:     MCAL                */
/*   Date:      September 07, 2023  */
/*   Last Edit: N/A                 */
/************************************/

#ifndef _MWDT_INTERFACE_H_
#define _MWDT_INTERFACE_H_

#define	MWDT_PRESCALAR_16K 	0
#define	MWDT_PRESCALAR_32K 	1
#define	MWDT_PRESCALAR_64K 	2
#define	MWDT_PRESCALAR_128K 	3
#define	MWDT_PRESCALAR_256K 	4
#define	MWDT_PRESCALAR_512K 	5
#define	MWDT_PRESCALAR_1024K 	6
#define	MWDT_PRESCALAR_2048K 	7

STD_error_t MWDT_stderrInit(u8 ARG_u8Prescalar);

void MWDT_voidEnable(void);
void MWDT_voidDisable(void);

void MWDT_voidReset(void);

#endif
