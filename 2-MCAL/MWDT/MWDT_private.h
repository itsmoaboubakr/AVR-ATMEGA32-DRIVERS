/************************************/
/*   Author:    mBravo18            */
/*   SWC:       WATCHDOG TIMER      */
/*   Layer:     MCAL                */
/*   Date:      September 07, 2023  */
/*   Last Edit: N/A                 */
/************************************/

#ifndef _MWDT_PRIVATE_H_
#define _MWDT_PRIVATE_H_

#define WDTCR *((volatile u8*)0x41)
#define WDTOE 4
#define WDE   3
#define WDP2  2
#define WDP1  1
#define WDP0  0

#endif
