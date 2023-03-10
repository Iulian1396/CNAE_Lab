/***********************************************************************************************************************
 * This file was generated by the S32 Configuration Tools. Any manual edits made to this file
 * will be overwritten if the respective S32 Configuration Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v11.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_401
processor_version: 0.0.0
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: a6d43dcb-893a-49cd-9d9d-0bb26ff0f05b
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Included files 
 ******************************************************************************/
#include "peripherals_flexTimer_mc0.h"

/*******************************************************************************
 * flexTimer_mc0 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'flexTimer_mc0'
- type: 'flexTimer_mc'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'ftm_mc'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FTM_0'
- config_sets:
  - ftm_mc:
    - ftmUserConfig:
      - 0:
        - ClockSource: 'FTM_CLOCK_SOURCE_SYSTEMCLK'
        - ClockSourcePrescaler: '128'
        - DebugMode: 'FTM_BDM_MODE_00'
        - TimerOperationMode: 'FTM_MODE_UP_TIMER'
        - TimerOverInterrupt: 'true'
        - InitializationTrigger: 'true'
        - timerConfiguration:
          - InitialCounter: '0'
          - FinalCounter: '1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 */

/* Global configuration of flexTimer_mc0 InitConfig 0 */
ftm_user_config_t flexTimer_mc0_InitConfig_0 =
{
    {
        true,    /* Software trigger state */
        false,  /* Hardware trigger 1 state */
        false,  /* Hardware trigger 2 state */
        false,  /* Hardware trigger 3 state */
        false, /* Max loading point state */
        false, /* Min loading point state */
        FTM_SYSTEM_CLOCK, /* Update mode for INVCTRL register */
        FTM_SYSTEM_CLOCK, /* Update mode for SWOCTRL register */
        FTM_SYSTEM_CLOCK, /* Update mode for OUTMASK register */
        FTM_SYSTEM_CLOCK, /* Update mode for CNTIN register */
        false, /* Automatic clear of the trigger*/
        FTM_UPDATE_NOW, /* Synchronization point */
    },
        FTM_MODE_UP_TIMER, /* Mode of operation for FTM */
        FTM_CLOCK_DIVID_BY_128, /* FTM clock prescaler */
        FTM_CLOCK_SOURCE_SYSTEMCLK,   /* FTM clock source */
        FTM_BDM_MODE_00, /* FTM debug mode */
        true,    /* Interrupt state */
        true     /* Initialization trigger */
};

/* Timer mode configuration for flexTimer_mc0 TimerConfig 0 */
ftm_timer_param_t flexTimer_mc0_TimerConfig_0 =
{
        FTM_MODE_UP_TIMER, /* Counter mode */
        0, /* Initial counter value */
        1 /* Final counter value */
};


