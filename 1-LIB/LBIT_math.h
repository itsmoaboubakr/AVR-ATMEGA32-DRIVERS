/************************************/
/*   Author:    mBravo18            */
/*   SWC:       BIT MATH            */
/*   Layer:     LIB                 */
/************************************/

#ifndef _LBIT_MATH_H_
#define _LBIT_MATH_H_

#define 	SET_BIT(reg,bit)     reg |= (1 << bit)
#define 	CLEAR_BIT(reg,bit)   reg &= ~(1 << bit)
#define 	TOGGLE_BIT(reg,bit)  reg ^= (1 << bit)
#define 	GET_BIT(reg,bit)     ((reg >> bit) & 1)

#endif
