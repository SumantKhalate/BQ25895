/**
 *  @brief     An STM32 HAL library written for the BQ25895 charge controller IC in C.
 *  @author    Sumant Khalate www.github.com/SumantKhalate/BQ25895
 *  @date      May 2023
 *  @copyright GPL-3.0 license.
 */

#ifndef BQ25895_REG
#define BQ25895_REG

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

/*------------------------------------ CONTROL REGISTERS ------------------------------------*/
/*---------- Register 0x00 ----------*/
#define BQ25895_REG_00              0x00

#define BQ25895_ENHIZ_MASK          0x80
#define BQ25895_ENHIZ_BIT           7

#define BQ25895_ENILIM_MASK         0x40
#define BQ25895_ENILIM_BIT          6

#define BQ25895_IINLIM_MASK         0x3F
#define BQ25895_IINLIM_BIT          0
#define BQ25895_IINLIM_BASE         100
#define BQ25895_IINLIM_LSB          50

/*---------- Register 0x01 ----------*/
#define BQ25895_REG_01              0x01

#define BQ25895_BHOT_MASK           0xC0
#define BQ25895_BHOT_BIT            6

#define BQ25895_BCOLD_MASK          0x20
#define BQ25895_BCOLD_BIT           5

#define BQ25895_VINDPMOS_MASK       0x1F
#define BQ25895_VINDPMOS_BIT        0
#define BQ25895_VINDPMOS_BASE       0
#define BQ25895_VINDPMOS_LSB        100

/*---------- Register 0x02 ----------*/
#define BQ25895_REG_02              0x02

#define BQ25895_CONV_START_MASK     0x80
#define BQ25895_CONV_START_BIT      7

#define BQ25895_CONV_RATE_MASK      0x40
#define BQ25895_CONV_RATE_BIT       6

#define BQ25895_BOOST_FREQ_MASK     0x20
#define BQ25895_BOOST_FREQ_BIT      5

#define BQ25895_ICO_EN_MASK         0x10
#define BQ25895_ICO_EN_BIT          4

#define BQ25895_HVDCP_EN_MASK       0x08
#define BQ25895_HVDCP_EN_BIT        3

#define BQ25895_MAXC_EN_MASK        0x04
#define BQ25895_MAXC_EN_BIT         2

#define BQ25895_FORCE_DPDM_MASK     0x02
#define BQ25895_FORCE_DPDM_BIT      1

#define BQ25895_AUTO_DPDM_EN_MASK   0x01
#define BQ25895_AUTO_DPDM_EN_BIT    0

/*---------- Register 0x03 ----------*/
#define BQ25895_REG_03              0x03

#define BQ25895_BAT_LOADEN_MASK     0x80
#define BQ25895_BAT_LOADEN_BIT       7

#define BQ25895_WDT_RESET_MASK      0x40
#define BQ25895_WDT_RESET_BIT       6

#define BQ25895_OTG_CONFIG_MASK     0x20
#define BQ25895_OTG_CONFIG_BIT      5

#define BQ25895_CHG_CONFIG_MASK     0x10
#define BQ25895_CHG_CONFIG_BIT      4

#define BQ25895_SYS_MINV_MASK       0x0E
#define BQ25895_SYS_MINV_BIT        1
#define BQ25895_SYS_MINV_BASE       3000
#define BQ25895_SYS_MINV_LSB        100

/*---------- Register 0x04 ----------*/
#define BQ25895_REG_04              0x04

#define BQ25895_EN_PUMPX_MASK       0x80
#define BQ25895_EN_PUMPX_BIT        7

#define BQ25895_ICHG_MASK           0x7F
#define BQ25895_ICHG_BIT            0
#define BQ25895_ICHG_BASE           0
#define BQ25895_ICHG_LSB            64

/*---------- Register 0x05 ----------*/
#define BQ25895_REG_05              0x05

#define BQ25895_IPRECHG_MASK        0xF0
#define BQ25895_IPRECHG_BIT         4
#define BQ25895_IPRECHG_BASE        64
#define BQ25895_IPRECHG_LSB         64

#define BQ25895_ITERM_MASK          0x0F
#define BQ25895_ITERM_BIT           0
#define BQ25895_ITERM_BASE          64
#define BQ25895_ITERM_LSB           64

/*---------- Register 0x06 ----------*/
#define BQ25895_REG_06              0x06

#define BQ25895_VREG_MASK           0xFC
#define BQ25895_VREG_BIT            2
#define BQ25895_VREG_BASE           3840
#define BQ25895_VREG_LSB            16

#define BQ25895_BATLOWV_MASK        0x02
#define BQ25895_BATLOWV_BIT	        1

#define BQ25895_VRECHG_MASK         0x01
#define BQ25895_VRECHG_BIT          0

/*---------- Register 0x07 ----------*/
#define BQ25895_REG_07              0x07

#define BQ25895_EN_TERM_MASK        0x80
#define BQ25895_EN_TERM_BIT         7

#define BQ25895_STAT_DIS_MASK       0x04
#define BQ25895_STAT_DIS_BIT        6

#define BQ25895_WATCHDOG_MASK       0x30
#define BQ25895_WATCHDOG_BIT        4

#define BQ25895_EN_TIMER_MASK       0x08
#define BQ25895_EN_TIMER_BIT        3

#define BQ25895_CHG_TIMER_MASK      0x06
#define BQ25895_CHG_TIMER_BIT       1

/*---------- Register 0x08 ----------*/
#define BQ25895_REG_08              0x08

#define BQ25895_BAT_COMP_MASK       0xE0
#define BQ25895_BAT_COMP_BIT        5
#define BQ25895_BAT_COMP_BASE       0
#define BQ25895_BAT_COMP_LSB        20

#define BQ25895_VCLAMP_MASK         0x1C
#define BQ25895_VCLAMP_BIT          2
#define BQ25895_VCLAMP_BASE         0
#define BQ25895_VCLAMP_LSB          32

#define BQ25895_TREG_MASK           0x03
#define BQ25895_TREG_BIT            0

/*---------- Register 0x09 ----------*/
#define BQ25895_REG_09              0x09

#define BQ25895_FORCE_ICO_MASK      0x80
#define BQ25895_FORCE_ICO_BIT       7

#define BQ25895_TMR2X_EN_MASK       0x40
#define BQ25895_TMR2X_EN_BIT        6

#define BQ25895_BATFET_DIS_MASK     0x20
#define BQ25895_BATFET_DIS_BIT      5

#define BQ25895_BATFET_DLY_MASK     0x08
#define BQ25895_BATFET_DLY_BIT      3

#define BQ25895_BATFET_RST_EN_MASK  0x04
#define BQ25895_BATFET_RST_EN_BIT   2

#define BQ25895_PUMPX_UP_MASK       0x02
#define BQ25895_PUMPX_UP_BIT        1

#define BQ25895_PUMPX_DN_MASK       0x01
#define BQ25895_PUMPX_DN_BIT        0

/*---------- Register 0x0A ----------*/
#define BQ25895_REG_0A              0x0A

#define BQ25895_BOOSTV_MASK         0xF0
#define BQ25895_BOOSTV_BIT          4
#define BQ25895_BOOSTV_BASE         4550
#define BQ25895_BOOSTV_LSB          64

/*---------- Register 0x0B ----------*/
#define BQ25895_REG_0B              0x0B

#define BQ25895_VBUS_STAT_MASK      0xE0
#define BQ25895_VBUS_STAT_BIT       5

#define BQ25895_CHRG_STAT_MASK      0x18
#define BQ25895_CHRG_STAT_BIT       3

#define BQ25895_PG_STAT_MASK        0x04
#define BQ25895_PG_STAT_BIT         2

#define BQ25895_SDP_STAT_MASK       0x02
#define BQ25895_SDP_STAT_BIT        1

#define BQ25895_VSYS_STAT_MASK      0x01
#define BQ25895_VSYS_STAT_BIT       0

/*---------- Register 0x0C ----------*/
#define BQ25895_REG_0C              0x0C

#define BQ25895_WATCHDOG_FAULT_MASK 0x80
#define BQ25895_WATCHDOG_FAULT_BIT  7

#define BQ25895_BOOST_FAULT_MASK    0x40
#define BQ25895_BOOST_FAULT_BIT     6

#define BQ25895_CHRG_FAULT_MASK     0x30
#define BQ25895_CHRG_FAULT_BIT      4

#define BQ25895_FAULT_BAT_MASK      0x08
#define BQ25895_FAULT_BAT_BIT       3

#define BQ25895_FAULT_NTC_MASK      0x07
#define BQ25895_FAULT_NTC_BIT     0

/*---------- Register 0x0D ----------*/
#define BQ25895_REG_0D              0x0D

#define BQ25895_FORCE_VINDPM_MASK   0x80
#define BQ25895_FORCE_VINDPM_BIT    7

#define BQ25895_VINDPM_MASK         0x7F
#define BQ25895_VINDPM_BIT          0
#define BQ25895_VINDPM_BASE         2600
#define BQ25895_VINDPM_LSB          100

/*---------- Register 0x0E ----------*/
#define BQ25895_REG_0E              0x0E

#define BQ25895_THERM_STAT_MASK     0x80
#define BQ25895_THERM_STAT_BIT      7

#define BQ25895_BATV_MASK           0x7F
#define BQ25895_BATV_BIT            0
#define BQ25895_BATV_BASE           2304
#define BQ25895_BATV_LSB            20

/*---------- Register 0x0F ----------*/
#define BQ25895_REG_0F              0x0F

#define BQ25895_SYSV_MASK           0x7F
#define BQ25895_SYSV_BIT            0
#define BQ25895_SYSV_BASE           2304
#define BQ25895_SYSV_LSB            20

/*---------- Register 0x10 ----------*/
#define BQ25895_REG_10              0x10

#define BQ25895_TSPCT_MASK          0x7F
#define BQ25895_TSPCT_BIT           0
#define BQ25895_TSPCT_BASE          2100
#define BQ25895_TSPCT_LSB           46

/*---------- Register 0x11 ----------*/
#define BQ25895_REG_11              0x11

#define BQ25895_VBUS_GD_MASK        0x80
#define BQ25895_VBUS_GD_BIT         7

#define BQ25895_VBUSV_MASK          0x7F
#define BQ25895_VBUSV_BIT           0
#define BQ25895_VBUSV_BASE          2600
#define BQ25895_VBUSV_LSB           100

/*---------- Register 0x12 ----------*/
#define BQ25895_REG_12              0x12
#define BQ25895_ICHGR_MASK          0x7F
#define BQ25895_ICHGR_BIT           0
#define BQ25895_ICHGR_BASE          0
#define BQ25895_ICHGR_LSB           50

/*---------- Register 0x13 ----------*/
#define BQ25895_REG_13              0x13

#define BQ25895_VDPM_STAT_MASK      0x80
#define BQ25895_VDPM_STAT_BIT       7

#define BQ25895_IDPM_STAT_MASK      0x40
#define BQ25895_IDPM_STAT_BIT       6

#define BQ25895_IDPM_LIM_MASK       0x3F
#define BQ25895_IDPM_LIM_BIT        0
#define BQ25895_IDPM_LIM_BASE       100
#define BQ25895_IDPM_LIM_LSB        50

/*---------- Register 0x14 ----------*/
#define BQ25895_REG_14              0x14

#define BQ25895_RESET_MASK          0x80
#define BQ25895_RESET_BIT           7

#define BQ25895_ICO_OPTIMIZED_MASK  0x40
#define BQ25895_ICO_OPTIMIZED_BIT   6

#define BQ25895_PN_MASK             0x38
#define BQ25895_PN_BIT              3

#define BQ25895_TS_PROFILE_MASK     0x04
#define BQ25895_TS_PROFILE_BIT      2

#define BQ25895_DEV_REV_MASK        0x03
#define BQ25895_DEV_REV_BIT       0

/*------------------------------------ CONTROL REGISTERS BITFIELDS------------------------------------*/

/*------------------------------------ ENUM DEFINATIONS -----------------------------------------*/
typedef enum BQ25895_STATE {
    BQ25895_DISABLED,
    BQ25895_ENABLED
} BQ25895_STATE;

typedef enum BQ25895_RESET_STATE {
    BQ25895_RESET_NORMAL,
    BQ25895_RESET
} BQ25895_RESET_STATE;

typedef enum BQ25895_FAULT_STATE {
    BQ25895_FAULT_NORMAL,
    BQ25895_FAULT
} BQ25895_FAULT_STATE;

typedef enum BQ25895_BHOT {
    BQ25895_BHOT_34_75_PERCENT,
    BQ25895_BHOT_37_75_PERCENT,
    BQ25895_BHOT_31_25_PERCENT,
    BQ25895_BHOT_DISABLE
} BQ25895_BHOT;

typedef enum BQ25895_BCOLD {
    BQ25895_BCOLD_77_PERCENT,
    BQ25895_BCOLD_80_PERCENT
} BQ25895_BCOLD;

typedef enum BQ25895_CONV_RATE {
    BQ25895_ADC_ONE_SHOT,
    BQ25895_ADC_CONTINUOUS
} BQ25895_CONV_RATE;

typedef enum BQ25895_BOOST_FREQ {
    BQ25895_BOOST_FREQ_1500K,
    BQ25895_BOOST_FREQ_500K
} BQ25895_BOOST_FREQ;

typedef enum BQ25895_BATLOWV {
    BQ25895_BATLOWV_2800MV,
    BQ25895_BATLOWV_3000MV
} BQ25895_BATLOWV;

typedef enum BQ25895_VRECHG {
    BQ25895_VRECHG_100MV,
    BQ25895_VRECHG_200MV
} BQ25895_VRECHG;

typedef enum BQ25895_WATCHDOG {
    BQ25895_WATCHDOG_DISABLE,
    BQ25895_WATCHDOG_40S,
    BQ25895_WATCHDOG_80S,
    BQ25895_WATCHDOG_160S
} BQ25895_WATCHDOG;

typedef enum BQ25895_CHG_TIMER {
    BQ25895_CHG_TIMER_5HOURS,
    BQ25895_CHG_TIMER_8HOURS,
    BQ25895_CHG_TIMER_12HOURS,
    BQ25895_CHG_TIMER_20HOURS
} BQ25895_CHG_TIMER;

typedef enum BQ25895_TREG {
    BQ25895_TREG_60C,
    BQ25895_TREG_80C,
    BQ25895_TREG_100C,
    BQ25895_TREG_120C
} BQ25895_TREG;

typedef enum BQ25895_VBUS_STAT {
    BQ25895_NO_INPUT,
    BQ25895_USB_SDP,
    BQ25895_USB_CDP,
    BQ25895_USB_DCP,
    BQ25895_MAX_CHARGE_DCP,
    BQ25895_UNKNOWN,
    BQ25895_NON_STANDARD,
    BQ25895_OTG
} BQ25895_VBUS_STAT;

typedef enum BQ25895_CHRG_STAT {
    BQ25895_NOT_CHARGING,
    BQ25895_PRE_CHARGE,
    BQ25895_FAST_CHARGE,
    BQ25895_CHARGE_TERMINATION
} BQ25895_CHRG_STAT;

typedef enum BQ25895_PG_STAT {
    BQ25895_NO_POWER_GOOD,
    BQ25895_POWER_GOOD
} BQ25895_PG_STAT;

typedef enum BQ25895_SDP_STAT {
    BQ25895_USB100,
    BQ25895_USB500
} BQ25895_SDP_STAT;

typedef enum BQ25895_VSYS_STAT {
    BQ25895_NO_REGULATION,
    BQ25895_IN_REGULATION
} BQ25895_VSYS_STAT;

typedef enum BQ25895_CHRG_FAULT {
    BQ25895_CHG_NORMAL,
    BQ25895_INPUT_FAULT,
    BQ25895_THERMAL_SHUTDOWN,
    BQ25895_SAFETY_TIMER
} BQ25895_CHRG_FAULT;

typedef enum BQ25895_NTC_FAULT {
    BQ25895_NTC_NORMAL,
    BQ25895_BUCK_TS_COLD = 1,
    BQ25895_BUCK_TS_HOT = 2,
    BQ25895_BOOST_TS_COLD = 5,
    BQ25895_BOOST_TS_HOT = 6
} BQ25895_NTC_FAULT;

typedef enum BQ25895_FORCE_VINDPM {
    BQ25895_RELATIVE_VINDPM,
    BQ25895_ABSOLUTE_VINDPM
} BQ25895_FORCE_VINDPM;

typedef enum BQ25895_THERM_STAT {
    BQ25895_NO_THERMAL_REGULATION,
    BQ25895_IN_THERMAL_REGULATION
} BQ25895_THERM_STAT;

typedef enum BQ25895_VBUS_GD {
    BQ25895_NO_VBUS,
    BQ25895_VBUS_PRESENT
} BQ25895_VBUS_GD;

typedef enum DEVICE {
    DEVICE_BQ25895 = 3
} DEVICE;

#ifdef __cplusplus
}
#endif

#endif /* BQ25895_REG */
