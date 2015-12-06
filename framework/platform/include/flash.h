#ifndef __SFLASH_H__
#define __SFLASH_H__

#include "platform/include/pando_types.h"

#define STM32_FLASH_SIZE 256 	 		//sizeof stm32 flash(KB)  
#define STM32_FLASH_WREN 1              //0: disable   1: enable 
//////////////////////////////////////////////////////////////////////////////////////////////////////

// Start address of flash  
#define STM32_FLASH_BASE 0x08000000 	
 
void flash_write(uint32_t WriteAddr,uint16_t *pBuffer,uint16_t NumToWrite);		//��ָ����ַ��ʼд��ָ�����ȵ�����
void flash_read(uint32_t ReadAddr,uint16_t *pBuffer,uint16_t NumToRead);   		//��ָ����ַ��ʼ����ָ�����ȵ�����

#endif

















