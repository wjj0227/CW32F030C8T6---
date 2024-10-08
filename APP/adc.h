/**
* @file         adc.h
* @brief		配置模数转换相关操作的头文件
* @author		VRxiaojie
* @date		    2024-08-11
* @version	    v1.0
* @note 	 	哔哩哔哩	:		VR小杰		https://space.bilibili.com/11526854 <br>
* 				嘉立创开源广场:	vrxiaojie	https://oshwhub.com/vrxiaojie/	
*/

#ifndef ADC_H_
#define ADC_H_

	#include "board.h"
	#include "main.h"
	#include "GUI.h"


	#define BAT_VOL_PIN GPIO_PIN_7   ///<电池电量测量引脚
	#define BAT_VOL_PIN_PORT CW_GPIOA  ///<电池电量测量引脚端口

	void Init_VAmeter_ADC(void);
	void ADC_GET(void);
	uint16_t Battery_Volume(void);

	extern uint16_t adc_value[3];

#endif
