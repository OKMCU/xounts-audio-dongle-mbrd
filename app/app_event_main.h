/******************************************************************************

 @file  app_event_main.h

 @brief 

 Group: 
 Target Device: 

 ******************************************************************************

 ******************************************************************************
 Release Name: 
 Release Date: 
 *****************************************************************************/
#ifndef __APP_EVENT_MAIN_H__
#define __APP_EVENT_MAIN_H__

#ifdef __cplusplus
extern "C"
{
#endif

/**************************************************************************************************
 * INCLUDES
 **************************************************************************************************/
#include <stdint.h>

/**************************************************************************************************
 * TYPES
 **************************************************************************************************/

/**************************************************************************************************
 * CONSTANTS
 **************************************************************************************************/

/**************************************************************************************************
 * GLOBAL VARIABLES
 **************************************************************************************************/

/**************************************************************************************************
 * FUNCTIONS - API
 **************************************************************************************************/
extern void app_event_main_por( void );
extern void app_event_main_init( void );
extern void app_event_main_led_wifir_cross_blink( void );
extern void app_event_main_led_wifib_cross_blink( void );
extern void app_event_main_inc_vol( void );
extern void app_event_main_dec_vol( void );
extern void app_event_main_set_dsp_vol( void );

#ifdef __cplusplus
}
#endif

#endif

/**************************************************************************************************
**************************************************************************************************/
