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
#include "peripherals_adConv1.h"

/*******************************************************************************
 * adConv1 initialization code
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'adConv1'
- type: 'adc_config'
- mode: 'general'
- custom_name_enabled: 'true'
- type_id: 'adc'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC_1'
- config_sets:
  - adc:
    - adcConverterCfg:
      - 0:
        - name: 'adConv1_ConvConfig0'
        - readonly: 'true'
        - clockDivide: 'ADC_CLK_DIVIDE_1'
        - sampleTime: '12'
        - resolution: 'ADC_RESOLUTION_12BIT'
        - inputClock: 'ADC_CLK_ALT_1'
        - trigger: 'ADC_TRIGGER_HARDWARE'
        - pretriggerSel: 'ADC_PRETRIGGER_SEL_PDB'
        - triggerSel: 'ADC_TRIGGER_SEL_PDB'
        - dmaEnable: 'false'
        - voltageRef: 'ADC_VOLTAGEREF_VREF'
        - continuousConvEnable: 'false'
        - supplyMonitoringEnable: 'false'
    - adcCompareCfg:
      - 0:
        - name: 'adConv1_HwCompConfig0'
        - readonly: 'true'
        - compareEnable: 'false'
        - compareGreaterThanEnable: 'false'
        - compareRangeFuncEnable: 'false'
        - compVal1: '0'
        - compVal2: '0'
    - adcAverageCfg:
      - 0:
        - name: 'adConv1_HwAvgConfig0'
        - readonly: 'true'
        - hwAvgEnable: 'false'
        - hwAverage: 'ADC_AVERAGE_4'
    - adcChanCfg:
      - 0:
        - name: 'adConv1_ChnConfig0'
        - readonly: 'true'
        - interruptEnable: 'false'
        - channel: 'ADC_INPUTCHAN_EXT6'
      - 1:
        - name: 'adConv1_ChnConfig1'
        - readonly: 'true'
        - interruptEnable: 'true'
        - channel: 'ADC_INPUTCHAN_EXT7'
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

const adc_converter_config_t adConv1_ConvConfig0 = {
  .clockDivide = ADC_CLK_DIVIDE_1,
  .sampleTime = 12U,
  .resolution = ADC_RESOLUTION_12BIT,
  .inputClock = ADC_CLK_ALT_1,
  .trigger = ADC_TRIGGER_HARDWARE,
  .pretriggerSel = ADC_PRETRIGGER_SEL_PDB,
  .triggerSel = ADC_TRIGGER_SEL_PDB,
  .dmaEnable = false,
  .voltageRef = ADC_VOLTAGEREF_VREF,
  .continuousConvEnable = false,
  .supplyMonitoringEnable = false
};

const adc_compare_config_t adConv1_HwCompConfig0 = {
  .compareEnable = false,
  .compareGreaterThanEnable = false,
  .compareRangeFuncEnable = false,
  .compVal1 = 0U,
  .compVal2 = 0U
};

const adc_average_config_t adConv1_HwAvgConfig0 = {
  .hwAvgEnable = false,
  .hwAverage = ADC_AVERAGE_4
};

const adc_chan_config_t adConv1_ChnConfig0 = {
  .interruptEnable = false,
  .channel = ADC_INPUTCHAN_EXT6
};

const adc_chan_config_t adConv1_ChnConfig1 = {
  .interruptEnable = true,
  .channel = ADC_INPUTCHAN_EXT7
};


