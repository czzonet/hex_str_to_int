/**
  ******************************************************************************
  * @file    hex.c
  * @author  CZZ
  * @version V1.0.0
  * @date    2018-06-05
  * @brief   convertion between hex str and int
  ******************************************************************************
  十六进制字符串和十进制数之间的相互转化
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "hex.h"
#include "stdio.h"
/* Private define ------------------------------------------------------------*/

uint8_t hex_str_to_int(char hex_str[]){
    /* code */
    return strtol(hex_str, NULL, 16);
}

void int_to_hex_str(uint8_t num, char hex_str[]){
    if(num > 0x0F ){
        sprintf(hex_str, "%X", num);
    }else{
        hex_str[0] = '0';
        sprintf(&(hex_str[1]), "%X", num);
    }
}

/************************ (C) COPYRIGHT *****END OF FILE****/
