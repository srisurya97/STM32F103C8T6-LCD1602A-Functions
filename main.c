#include "stm32f10x.h"
#include "LCDFunctions.h"
#include <stdio.h>	

int main(void)
	{
		
		LCDBegin();
		
		//LCDSendCommand(0x80);
		
		while(1)
			{
				//LCDCursorPositionBitCheck();
			LCDSetCursorPosition(5, 1);
				LCDSendString("SRISURYA");
			/*	for(int i=0;i<80;i++)
				{
					LCDSendCommand(0b10000000 + i);
					LCDSendString(" X");
					LCDSendCommand(0b10000000);
					LCDSendInteger(i + 1, 3);
					NotExactDelay(3000000);
				}
		 */
		
		
		
		}
		
	}

