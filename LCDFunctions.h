#ifndef LCDFunctions_H
#define LCDFunctions_H

#include "stm32f10x.h"


#define LCDD0PIN 12					//LCD PIN D0
#define LCDD0PORT GPIOB
#define LCDD1PIN 13					//LCD PIN D1
#define LCDD1PORT GPIOB
#define LCDD2PIN 14					//LCD PIN D2
#define LCDD2PORT GPIOB
#define LCDD3PIN 15					//LCD PIN D3
#define LCDD3PORT GPIOB
#define LCDD4PIN 8 					//LCD PIN D4
#define LCDD4PORT GPIOA
#define LCDD5PIN 9					//LCD PIN D5
#define LCDD5PORT GPIOA
#define LCDD6PIN 10					//LCD PIN D6
#define LCDD6PORT GPIOA
#define LCDD7PIN 11					//LCD PIN D7
#define LCDD7PORT GPIOA
#define LCDRSPIN 10					//LCD PIN Command/Data Pin
#define LCDRSPORT GPIOB
#define LCDRWPIN 11					//LCD PIN Read/Write mode
#define LCDRWPORT GPIOB
#define LCDEnablePIN 8			//LCD PIN Enable pin
#define LCDEnablePORT GPIOB
#define DelayBeforeEnable 100 
#define DelayAfterEnable 300



/*void NotExactDelay(int delay);
void SetPinandPortForOutputPushPull(GPIO_TypeDef *port, int pinnumber);
void InitializingPortsForLCD(void);
void SendBitToPortandPin(GPIO_TypeDef *port, int pinnumber, uint8_t bitstate);
void LCDEnable(void);
void LCDSetToWrite(void);
void LCDSetToRead(void);
void LCDCommandMode(void);
void LCDCharacterMode(void);
void LCDByte(char character);
void LCDSendCharacter(char character);
void LCDSendCommand(char command);    */
void LCDClear(void);
void LCDBegin(void);
void LCDSendString(char *stringofcharacters);
void LCDSendInteger(int Integer ,uint8_t MaxLengthOfString);
void LCDSendFloat(float floatnumber ,uint8_t MaxLengthOfString);
//void LCDCursorPositionBitCheck(void);
void LCDSetCursorPosition(int X, int Y);
//

#endif

