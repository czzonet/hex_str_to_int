/**
  ******************************************************************************
  * @file    test_example.c
  * @author  CZZ
  * @version V1.0.0
  * @date    2018-06-05
  * @brief   test_example program body
  ******************************************************************************
  测试用例
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "hex.h"
#include "stdio.h"

/* Private define ------------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(int argc, char const *argv[]) {
    /* code */
    char hex_str[3]= {0};

    printf("hex_str_to_int:\"1A\" -> %d\n",  hex_str_to_int("1A"));
    int_to_hex_str(15, hex_str);
    printf("int_to_hex_str:15 -> \"%s\"\n", hex_str);
    return 0;
}
/************************ (C) COPYRIGHT *****END OF FILE****/
