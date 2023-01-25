/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v11.0
processor: S32K144
package_id: S32K144_LQFP100
mcu_data: s32sdk_s32k1xx_rtm_401
processor_version: 0.0.0
pin_labels:
- {pin_num: '1', pin_signal: PTE16, label: Unused}
- {pin_num: '5', pin_signal: PTE11, label: Unused}
- {pin_num: '7', pin_signal: PTE13, label: Unused}
- {pin_num: '8', pin_signal: PTE5, label: Unused}
- {pin_num: '9', pin_signal: PTE4, label: Unused}
- {pin_num: '18', pin_signal: PTE3, label: Unused}
- {pin_num: '17', pin_signal: PTE14, label: Unused}
- {pin_num: '19', pin_signal: PTE12, label: Unused}
- {pin_num: '20', pin_signal: PTD17, label: Unused}
- {pin_num: '23', pin_signal: PTE9, label: Unused}
- {pin_num: '33', pin_signal: PTD5, label: Unused}
- {pin_num: '25', pin_signal: PTD13, label: Unused}
- {pin_num: '34', pin_signal: PTD12, label: Unused}
- {pin_num: '41', pin_signal: PTD9, label: Unused}
- {pin_num: '42', pin_signal: PTD8, label: Unused}
- {pin_num: '55', pin_signal: PTC9, label: Unused}
- {pin_num: '56', pin_signal: PTC8, label: Unused}
- {pin_num: '59', pin_signal: PTE7, label: Unused}
- {pin_num: '62', pin_signal: PTA17, label: Unused}
- {pin_num: '63', pin_signal: PTB17, label: Unused}
- {pin_num: '88', pin_signal: PTA14, label: Unused}
- {pin_num: '89', pin_signal: PTA13, label: Unused}
- {pin_num: '90', pin_signal: PTA12, label: Unused}
- {pin_num: '91', pin_signal: PTA11, label: Unused}
- {pin_num: '93', pin_signal: PTE1, label: Unused}
- {pin_num: '94', pin_signal: PTE0, label: Unused}
- {pin_num: '99', pin_signal: PTA9, label: Unused}
- {pin_num: '100', pin_signal: PTA8, label: Unused}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 11.4, Conversion between a pointer and integer type.
 * The cast is required to initialize a pointer with an unsigned long define, representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.6, Cast from unsigned int to pointer.
 * The cast is required to initialize a pointer with an unsigned long define, representing an address.
 *
 */

#include "pin_mux.h"

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0}
- pin_list:
  - {pin_num: '36', peripheral: FTM2, signal: 'ch, 0', pin_signal: PTD10, direction: INPUT}
  - {pin_num: '35', peripheral: FTM2, signal: 'ch, 1', pin_signal: PTD11, direction: INPUT}
  - {pin_num: '77', peripheral: FTM3, signal: 'ch, 0', pin_signal: PTB8, direction: OUTPUT}
  - {pin_num: '76', peripheral: FTM3, signal: 'ch, 1', pin_signal: PTB9, direction: OUTPUT}
  - {pin_num: '75', peripheral: FTM3, signal: 'ch, 2', pin_signal: PTB10, direction: OUTPUT}
  - {pin_num: '74', peripheral: FTM3, signal: 'ch, 3', pin_signal: PTB11, direction: OUTPUT}
  - {pin_num: '52', peripheral: FTM3, signal: 'ch, 4', pin_signal: PTC10, direction: OUTPUT}
  - {pin_num: '51', peripheral: FTM3, signal: 'ch, 5', pin_signal: PTC11, direction: OUTPUT}
  - {pin_num: '57', peripheral: ADC0, signal: 'se, 3', pin_signal: PTA7}
  - {pin_num: '54', peripheral: ADC0, signal: 'se, 4', pin_signal: PTB0}
  - {pin_num: '78', peripheral: FTM1, signal: 'ch, 1', pin_signal: PTA1, direction: INPUT}
  - {pin_num: '53', peripheral: ADC0, signal: 'se, 5', pin_signal: PTB1}
  - {pin_num: '40', peripheral: ADC0, signal: 'se, 8', pin_signal: PTC0}
  - {pin_num: '39', peripheral: ADC0, signal: 'se, 9', pin_signal: PTC1}
  - {pin_num: '30', peripheral: ADC0, signal: 'se, 10', pin_signal: PTC2}
  - {pin_num: '29', peripheral: ADC0, signal: 'se, 11', pin_signal: PTC3}
  - {pin_num: '46', peripheral: ADC0, signal: 'se, 12', pin_signal: PTC14}
  - {pin_num: '45', peripheral: ADC0, signal: 'se, 13', pin_signal: PTC15}
  - {pin_num: '44', peripheral: ADC0, signal: 'se, 14', pin_signal: PTC16}
  - {pin_num: '43', peripheral: ADC0, signal: 'se, 15', pin_signal: PTC17}
  - {pin_num: '70', peripheral: ADC1, signal: 'se, 3', pin_signal: PTD3}
  - {pin_num: '69', peripheral: ADC1, signal: 'se, 6', pin_signal: PTD4}
  - {pin_num: '68', peripheral: ADC1, signal: 'se, 7', pin_signal: PTB12}
  - {pin_num: '67', peripheral: ADC1, signal: 'se, 8', pin_signal: PTB13}
  - {pin_num: '66', peripheral: ADC1, signal: 'se, 9', pin_signal: PTB14}
  - {pin_num: '85', peripheral: ADC1, signal: 'se, 10', pin_signal: PTE2}
  - {pin_num: '84', peripheral: ADC1, signal: 'se, 11', pin_signal: PTE6}
  - {pin_num: '83', peripheral: ADC1, signal: 'se, 12', pin_signal: PTA15}
  - {pin_num: '82', peripheral: ADC1, signal: 'se, 13', pin_signal: PTA16}
  - {pin_num: '65', peripheral: ADC1, signal: 'se, 14', pin_signal: PTB15}
  - {pin_num: '64', peripheral: ADC1, signal: 'se, 15', pin_signal: PTB16}
  - {pin_num: '29', peripheral: CMP0, signal: 'in, 4', pin_signal: PTC3}
  - {pin_num: '30', peripheral: CMP0, signal: 'in, 5', pin_signal: PTC2}
  - {pin_num: '31', peripheral: CMP0, signal: 'in, 6', pin_signal: PTD7}
  - {pin_num: '32', peripheral: CMP0, signal: 'in, 7', pin_signal: PTD6}
  - {pin_num: '73', peripheral: PORTA, signal: 'port, 2', pin_signal: PTA2, direction: OUTPUT}
  - {pin_num: '72', peripheral: PORTA, signal: 'port, 3', pin_signal: PTA3, direction: OUTPUT}
  - {pin_num: '27', peripheral: PORTB, signal: 'port, 5', pin_signal: PTB5, direction: OUTPUT}
  - {pin_num: '50', peripheral: PORTC, signal: 'port, 12', pin_signal: PTC12, direction: INPUT}
  - {pin_num: '49', peripheral: PORTC, signal: 'port, 13', pin_signal: PTC13, direction: INPUT}
  - {pin_num: '4', peripheral: PORTD, signal: 'port, 0', pin_signal: PTD0, direction: OUTPUT}
  - {pin_num: '71', peripheral: PORTD, signal: 'port, 2', pin_signal: PTD2, direction: OUTPUT}
  - {pin_num: '24', peripheral: PORTD, signal: 'port, 14', pin_signal: PTD14, direction: OUTPUT}
  - {pin_num: '22', peripheral: PORTD, signal: 'port, 15', pin_signal: PTD15, direction: OUTPUT}
  - {pin_num: '21', peripheral: PORTD, signal: 'port, 16', pin_signal: PTD16, direction: OUTPUT}
  - {pin_num: '6', peripheral: PORTE, signal: 'port, 10', pin_signal: PTE10, direction: INPUT}
  - {pin_num: '48', peripheral: LPSPI0, signal: 'sck, sck', pin_signal: PTB2, direction: OUTPUT}
  - {pin_num: '47', peripheral: LPSPI0, signal: sin, pin_signal: PTB3, direction: INPUT}
  - {pin_num: '28', peripheral: LPSPI0, signal: sout, pin_signal: PTB4, direction: OUTPUT}
  - {pin_num: '81', peripheral: LPUART1, signal: rxd, pin_signal: PTC6}
  - {pin_num: '80', peripheral: LPUART1, signal: txd, pin_signal: PTC7, direction: OUTPUT}
  - {pin_num: '13', peripheral: PowerAndGround, signal: 'VREFL, 13', pin_signal: VREFL}
  - {pin_num: '16', peripheral: OSC, signal: xtal, pin_signal: PTB6}
  - {pin_num: '10', peripheral: PowerAndGround, signal: 'VDD, 10', pin_signal: VDD_10}
  - {pin_num: '38', peripheral: PowerAndGround, signal: 'VDD, 38', pin_signal: VDD_38}
  - {pin_num: '61', peripheral: PowerAndGround, signal: 'VDD, 61', pin_signal: VDD_61}
  - {pin_num: '87', peripheral: PowerAndGround, signal: 'VDD, 87', pin_signal: VDD_87}
  - {pin_num: '11', peripheral: PowerAndGround, signal: 'VDDA, 11', pin_signal: VDDA}
  - {pin_num: '14', peripheral: PowerAndGround, signal: 'VSS, 14', pin_signal: VSS_14}
  - {pin_num: '37', peripheral: PowerAndGround, signal: 'VSS, 37', pin_signal: VSS_37}
  - {pin_num: '60', peripheral: PowerAndGround, signal: 'VSS, 60', pin_signal: VSS_60}
  - {pin_num: '86', peripheral: PowerAndGround, signal: 'VSS, 86', pin_signal: VSS_86}
  - {pin_num: '96', peripheral: SWD, signal: clk, pin_signal: PTC4}
  - {pin_num: '98', peripheral: SWD, signal: dio, pin_signal: PTA4}
  - {pin_num: '3', peripheral: TRGMUX, signal: 'out, 2', pin_signal: PTD1}
  - {pin_num: '79', peripheral: TRGMUX, signal: 'out, 3', pin_signal: PTA0}
  - {pin_num: '2', peripheral: TRGMUX, signal: 'out, 6', pin_signal: PTE15}
  - {pin_num: '58', peripheral: ADC0, signal: 'se, 2', pin_signal: PTA6}
  - {pin_num: '12', peripheral: PowerAndGround, signal: 'VREFH, 12', pin_signal: VREFH}
  - {pin_num: '15', peripheral: OSC, signal: extal, pin_signal: PTB7}
  - {pin_num: '92', peripheral: JTAG, signal: tdo, pin_signal: PTA10}
  - {pin_num: '95', peripheral: JTAG, signal: tdi, pin_signal: PTC5}
  - {pin_num: '96', peripheral: JTAG, signal: tclk, pin_signal: PTC4}
  - {pin_num: '97', peripheral: Platform, signal: 'reset_b, 97', pin_signal: PTA5, direction: INPUT}
  - {pin_num: '98', peripheral: JTAG, signal: tms, pin_signal: PTA4}
  - {pin_num: '26', peripheral: CMP0, signal: 'in, 3', pin_signal: PTE8}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/*! @brief Array of pin configuration structures */
pin_settings_config_t g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0] =
{
    {
        .base          = PORTE,
        .pinPortIdx    = 15u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT7,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 1u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT7,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 0u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTD,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTE,
        .pinPortIdx    = 10u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTE,
        .direction     = GPIO_INPUT_DIRECTION,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 16u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTD,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 15u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTD,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 14u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTD,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 5u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTB,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 4u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT3,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 11u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 10u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 1u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ADC_INTERLEAVE,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 0u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ADC_INTERLEAVE,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 3u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT3,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 2u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT3,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 13u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTC,
        .direction     = GPIO_INPUT_DIRECTION,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 12u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTC,
        .direction     = GPIO_INPUT_DIRECTION,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 11u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 10u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 16u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ADC_INTERLEAVE,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 15u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ADC_INTERLEAVE,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTD,
        .pinPortIdx    = 2u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTD,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTA,
        .pinPortIdx    = 3u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTA,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTA,
        .pinPortIdx    = 2u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_AS_GPIO,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = PTA,
        .direction     = GPIO_OUTPUT_DIRECTION,
        .digitalFilter = false,
        .initValue     = 0u,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 11u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 10u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 9u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTB,
        .pinPortIdx    = 8u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTA,
        .pinPortIdx    = 1u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTA,
        .pinPortIdx    = 0u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT7,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 7u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
    {
        .base          = PORTC,
        .pinPortIdx    = 6u,
        .pullConfig    = PORT_INTERNAL_PULL_NOT_ENABLED,
        .passiveFilter = false,
        .driveSelect   = PORT_LOW_DRIVE_STRENGTH,
        .mux           = PORT_MUX_ALT2,
        .pinLock       = false,
        .intConfig     = PORT_DMA_INT_DISABLED,
        .clearIntFlag  = false,
        .gpioBase      = NULL,
        .digitalFilter = false,
    },
};

/* END pin_mux. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the Freescale S32K series of microcontrollers.
**
** ###################################################################
*/
