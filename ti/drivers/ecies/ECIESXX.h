/*
 * Copyright (c) 2023, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       ECIESXX.h
 *
 *  @brief      Elliptic Curve Integrated Encryption Scheme (ECIES) driver
 *              implementation
 *
 *  This file should only be included in the board file to fill the
 *  ECIES_config struct.
 *
 *  # Limitations #
 *  - Callback return behavior is not supported.
 *  - For devices which utilize SW-backed ECDH and SHA2 implementations:
 *    - Blocking return behavior does not yield and operates exactly the same as
 *      polling mode.
 */

#ifndef ti_drivers_ecies_ECIESXX__include
#define ti_drivers_ecies_ECIESXX__include

#include <stdbool.h>

#include <ti/drivers/ECIES.h>
#include <ti/drivers/AESGCM.h>
#include <ti/drivers/ANSIX936KDF.h>
#include <ti/drivers/ansix936kdf/ANSIX936KDFXX.h>
#include <ti/drivers/ECDH.h>
#include <ti/drivers/RNG.h>

#include <ti/devices/DeviceFamily.h>

#if ((DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2) || \
     (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4))
    #if (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2)
        #include <ti/drivers/aesgcm/AESGCMCC26XX.h>
    #elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4)
        #include <ti/drivers/aesgcm/AESGCMCC26X4.h>
    #endif
    #include <ti/drivers/ecdh/ECDHCC26X2.h>
    #include <ti/drivers/rng/RNGCC26XX.h>
#elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC23X0)
    #include <ti/drivers/aesgcm/AESGCMLPF3.h>
    #include <ti/drivers/ecdh/ECDHLPF3SW.h>
    #include <ti/drivers/rng/RNGLPF3RF.h>
#else
    #error "ECIESXX device family not supported"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*!
 *  @brief  Hardware-specific configuration attributes
 *
 *  ECIESXX hardware attributes are used in the board file by the
 *  #ECIES_Config struct.
 */
typedef struct
{
    ANSIX936KDFXX_HWAttrs kdfHwAttrs;
#if ((DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2) || \
     (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4))
    #if (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2)
    AESGCMCC26XX_HWAttrs aesHwAttrs;
    #elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4)
    AESGCMCC26X4_HWAttrs aesHwAttrs;
    #endif
    ECDHCC26X2_HWAttrs ecdhHwAttrs;
    RNGCC26XX_HWAttrs rngHwAttrs;
#elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC23X0)
    AESGCMLPF3_HWAttrs aesHwAttrs;
    ECDHLPF3SW_HWAttrs ecdhHwAttrs;
    RNGLPF3RF_HWAttrs rngHwAttrs;
#endif
} ECIESXX_HWAttrs;

/*!
 *  @brief  ECIESXX Object
 *
 *  The application must not access any member variables of this structure!
 */
typedef struct
{
    AESGCM_Config aesConfig;
    AESGCM_Handle aesHandle;

    ANSIX936KDF_Config kdfConfig;
    ANSIX936KDF_Handle kdfHandle;

    ECDH_Config ecdhConfig;
    ECDH_Handle ecdhHandle;

    RNG_Config rngConfig;
    RNG_Handle rngHandle;

    ANSIX936KDFXX_Object kdfObject;

#if ((DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2) || \
     (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4))
    #if (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X2_CC26X2)
    AESGCMCC26XX_Object aesObject;
    #elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC13X4_CC26X3_CC26X4)
    AESGCMCC26X4_Object aesObject;
    #endif
    ECDHCC26X2_Object ecdhObject;
    RNGCC26XX_Object rngObject;
#elif (DeviceFamily_PARENT == DeviceFamily_PARENT_CC23X0)
    AESGCMLPF3_Object aesObject;
    ECDHLPF3SW_Object ecdhObject;
    RNGLPF3RF_Object rngObject;
#endif

    bool isOpen;
} ECIESXX_Object;

#ifdef __cplusplus
}
#endif

#endif /* ti_drivers_ecies_ECIESXX__include */
