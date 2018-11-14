/******************************************************************************

 @file  app_event_wifimod.h

 @brief 

 Group: 
 Target Device: 

 ******************************************************************************

 ******************************************************************************
 Release Name: 
 Release Date: 
 *****************************************************************************/
#ifndef __APP_EVENT_WIFIMOD_H__
#define __APP_EVENT_WIFIMOD_H__

#ifdef __cplusplus
extern "C"
{
#endif

/**************************************************************************************************
 * INCLUDES
 **************************************************************************************************/
#include <stdint.h>

/**************************************************************************************************
 * CONSTANTS
 **************************************************************************************************/

/**************************************************************************************************
 * GLOBAL VARIABLES
 **************************************************************************************************/


/**************************************************************************************************
 * FUNCTIONS - API
 **************************************************************************************************/

extern void app_event_wifimod_bootup( void );
extern void app_event_wifimod_reboot( void );
extern void app_event_wifimod_update_mode( uint8_t mode );
extern void app_event_wifimod_update_source( uint8_t src );
extern void app_event_wifimod_update_volume( uint8_t vol );
extern void app_event_wifimod_update_state( uint8_t state );
extern void app_event_wifimod_hn_timeout( void );
extern void app_event_wifimod_hn_disconnect( void );
extern void app_event_wifimod_miss_lucicmd( void );

#ifdef __cplusplus
}
#endif

#endif

/**************************************************************************************************
**************************************************************************************************/
