/*
 * BQ25895.h
 *
 *  Created on: May 4, 2023
 *      Author: SESA674736
 */

#ifndef BQ25895_H
#define BQ25895_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#include "BQ25895_reg.h"

/*---------------------------------------- HAL FUNCTION TIMEOUT TIME ----------------------------*/
#define BQ25895_TIMEOUT			HAL_MAX_DELAY

/*---------------------------------------- DEVICE ADDRESS ---------------------------------------*/
#define BQ25895_I2C_ADDR		(0x6A << 1)


/*------------------------------------ FUNCTION DEFINATIONS -------------------------------------*/
extern I2C_HandleTypeDef *i2cHandle;


HAL_StatusTypeDef BQ25895_SetHIZmode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetHIZmode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetInputCurrentLimitMode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetInputCurrentLimitMode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetInputCurrentLimit(uint16_t *current_ma);
HAL_StatusTypeDef BQ25895_GetInputCurrentLimit(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_SetBoostHotTempTH(BQ25895_BHOT *state);
HAL_StatusTypeDef BQ25895_GetBoostHotTempTH(BQ25895_BHOT *state);

HAL_StatusTypeDef BQ25895_SetBoostColdTempTH(BQ25895_BCOLD *state);
HAL_StatusTypeDef BQ25895_GetBoostColdTempTH(BQ25895_BCOLD *state);

HAL_StatusTypeDef BQ25895_SetInputVoltageLimitOffset(uint16_t *offset);
HAL_StatusTypeDef BQ25895_GetInputVoltageLimitOffset(uint16_t *offset);

HAL_StatusTypeDef BQ25895_StartADCconversion(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetADCconversionStatus(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetADCconversionMode(BQ25895_CONV_RATE *state);
HAL_StatusTypeDef BQ25895_GetADCconversionMode(BQ25895_CONV_RATE *state);

HAL_StatusTypeDef BQ25895_SetBoostFreq(BQ25895_BOOST_FREQ *state);
HAL_StatusTypeDef BQ25895_GetBoostFreq(BQ25895_BOOST_FREQ *state);

HAL_StatusTypeDef BQ25895_SetInputCurrntOptimizer(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetInputCurrntOptimizer(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetHighVoltageDCP(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetHighVoltageDCP(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetMaxCharge(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetMaxCharge(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetForceDPDM(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetForceDPDM(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetAutoDPDM(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetAutoDPDM(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetBatLoad(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetBatLoad(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_ResetWatchdog(void);

HAL_StatusTypeDef BQ25895_SetOTGmode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetOTGmode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetChgMode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetChgMode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetSysMinVoltage(uint16_t *voltage_mv);
HAL_StatusTypeDef BQ25895_GetSysMinVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_SetCurrentPulseMode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetCurrentPulseMode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetFastChargeCurrent(uint16_t *current_ma);
HAL_StatusTypeDef BQ25895_GetFastChargeCurrent(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_SetPreChargeCurrent(uint16_t *current_ma);
HAL_StatusTypeDef BQ25895_GetPreChargeCurrent(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_SetTermChargeCurrent(uint16_t *current_ma);
HAL_StatusTypeDef BQ25895_GetTermChargeCurrent(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_SetChargeVoltage(uint16_t *voltage_mv);
HAL_StatusTypeDef BQ25895_GetChargeVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_SetPreFastChargeTH(BQ25895_BATLOWV *state);
HAL_StatusTypeDef BQ25895_GetPreFastChargeTH(BQ25895_BATLOWV *state);

HAL_StatusTypeDef BQ25895_SetRechargeThOffset(BQ25895_VRECHG *state);
HAL_StatusTypeDef BQ25895_GetRechargeThOffset(BQ25895_VRECHG *state);

HAL_StatusTypeDef BQ25895_SetChargingTermination(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetChargingTermination(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetSTATPinMode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetSTATPinMode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetWatchdogTimer(BQ25895_WATCHDOG *state);
HAL_StatusTypeDef BQ25895_GetWatchdogTimer(BQ25895_WATCHDOG *state);

HAL_StatusTypeDef BQ25895_SetSafetyTimer(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetSafetyTimer(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetFastChargeTimer(BQ25895_CHG_TIMER *state);
HAL_StatusTypeDef BQ25895_GetFastChargeTimer(BQ25895_CHG_TIMER *state);

HAL_StatusTypeDef BQ25895_SetIRCompResistance(uint8_t *ohms_mohm);
HAL_StatusTypeDef BQ25895_GetIRCompResistance(uint8_t *ohms_mohm);

HAL_StatusTypeDef BQ25895_SetIRCompVoltage(uint8_t *voltage_mv);
HAL_StatusTypeDef BQ25895_GetIRCompVoltage(uint8_t *voltage_mv);

HAL_StatusTypeDef BQ25895_SetThermalRegulationTH(BQ25895_TREG *threshold);
HAL_StatusTypeDef BQ25895_GetThermalRegulationTH(BQ25895_TREG *threshold);

HAL_StatusTypeDef BQ25895_ForceICO(void);

HAL_StatusTypeDef BQ25895_SetDPM2xSafetyTimer(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetDPM2xSafetyTimer(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetShipMode(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetShipMode(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetShipModeDelay(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetShipModeDelay(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetSystemResetFunction(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetSystemResetFunction(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetCurrentPulseVoltageUp(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetCurrentPulseVoltageUp(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetCurrentPulseVoltageDown(BQ25895_STATE *state);
HAL_StatusTypeDef BQ25895_GetCurrentPulseVoltageDown(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_SetBoostModeVoltage(uint16_t *voltage_mv);
HAL_StatusTypeDef BQ25895_GetBoostModeVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_GetVBUSStatus(BQ25895_VBUS_STAT *state);

HAL_StatusTypeDef BQ25895_GetChargingStatus(BQ25895_CHRG_STAT *state);

HAL_StatusTypeDef BQ25895_GetPowerGoodStatus(BQ25895_PG_STAT *state);

HAL_StatusTypeDef BQ25895_GetUSBInputStatus(BQ25895_SDP_STAT *state);

HAL_StatusTypeDef BQ25895_GetVSYSRegulationStatus(BQ25895_VSYS_STAT *state);

HAL_StatusTypeDef BQ25895_GetWatchdogFaultStatus(BQ25895_FAULT_STATE *state);

HAL_StatusTypeDef BQ25895_GetBoostFaultStatus(BQ25895_FAULT_STATE *state);

HAL_StatusTypeDef BQ25895_GetChargeFaultStatus(BQ25895_CHRG_FAULT *state);

HAL_StatusTypeDef BQ25895_GetBatteryFaultStatus(BQ25895_FAULT_STATE *state);

HAL_StatusTypeDef BQ25895_GetNTCFaultStatus(BQ25895_NTC_FAULT *state);

HAL_StatusTypeDef BQ25895_SetForceVINDPM(BQ25895_FORCE_VINDPM *state);
HAL_StatusTypeDef BQ25895_GetForceVINDPM(BQ25895_FORCE_VINDPM *state);

HAL_StatusTypeDef BQ25895_SetAbsoluteVINPDMTh(uint16_t *voltage_mv);
HAL_StatusTypeDef BQ25895_GetAbsoluteVINPDMTh(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_GetThermalRegulationStatus(BQ25895_THERM_STAT *state);

HAL_StatusTypeDef BQ25895_GetBatteryVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_GetSystemVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_GetTSVoltage(uint16_t *percent);

HAL_StatusTypeDef BQ25895_GetVBUSGoodStatus(BQ25895_VBUS_GD *state);

HAL_StatusTypeDef BQ25895_GetVBUSVoltage(uint16_t *voltage_mv);

HAL_StatusTypeDef BQ25895_GetChargeCurrent(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_GetVINDPMStatus(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_GetIINDPMStatus(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_GetICO_IIDPMCurrent(uint16_t *current_ma);

HAL_StatusTypeDef BQ25895_ResetChip(void);

HAL_StatusTypeDef BQ25895_GetICOStatus(BQ25895_STATE *state);

HAL_StatusTypeDef BQ25895_GetDevice(DEVICE *device);

HAL_StatusTypeDef BQ25895_GetTSProfile(DEVICE *device);

HAL_StatusTypeDef BQ25895_GetDevRev(uint8_t *rev);


HAL_StatusTypeDef BQ25895_Init(I2C_HandleTypeDef *i2cHandle);

HAL_StatusTypeDef BQ25895_UpdateBits(uint8_t reg, uint8_t mask, uint8_t *data);

HAL_StatusTypeDef BQ25895_WriteRegister(uint8_t reg, uint8_t *data);
HAL_StatusTypeDef BQ25895_ReadRegister(uint8_t reg, uint8_t *data);

#ifdef __cplusplus
			}
#endif

#endif /* BQ25895_INCLUDE_BQ25895_H_ */
