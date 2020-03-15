/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   串口中断接收测试
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 iSO-MINI STM32 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */ 
 
 
#include "stm32f10x.h"
#include "bsp_usart1.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{
	/* USART1 configuration mode is 115200 8-N-1, interrupt reception */
	USART1_Config();
	
	NVIC_Configuration();

	printf("\r\n This is a serial port interrupt receiving echo experiment \r\n");
	printf("\r\n Please enter the character in HyperTerminal or Serial Debug Assistant \r\n");

	for(;;)
	{
		
	}
}
/*********************************************END OF FILE**********************/
