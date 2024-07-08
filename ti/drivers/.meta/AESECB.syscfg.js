/*
 * Copyright (c) 2018-2022, Texas Instruments Incorporated - http://www.ti.com
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
 *
 */

/*
 *  ======== AESECB.syscfg.js ========
 *  AES (Advanced Encryption Standard) Electronic Code Book
 */

"use strict";

/* get Common /ti/drivers utility functions */
let Common = system.getScript("/ti/drivers/Common.js");

/* get /ti/drivers family name from device object */
let family = Common.device2Family(system.deviceData, "AESECB");

let config = [];

/*
 *  ======== validate ========
 */
function validate(inst, validation)
{
    if (system.modules["/ti/utils/TrustZone"]) {
        if (inst.$module.$instances.length != 1) {
            validation.logError(`When using Secure/Non-secure features (TrustZone is enabled), the number of Crypto
                                driver instances are fixed in the TF-M image. One AESECB instance is supported.`, inst);
        }
    }
}

/*
 *  ======== base ========
 *  Define the base AESECB properties and methods
 */
let base = {
    displayName         : "AESECB",
    description         : "AES (Advanced Encryption Standard) Electronic"
        + " Code Book (ECB) Driver",
    alwaysShowLongDescription : true,
    longDescription     : `
The [__AESECB driver__][1] encrypts or decrypts one or multiple blocks
of plain-text or cipher-text by directly encrypting or decrypting
input blocks using AES.

* [Usage Synopsis][2]
* [Examples][3]
* [Configuration Options][4]
[1]: /drivers/doxygen/html/_a_e_s_e_c_b_8h.html#details "C API reference"
[2]: /drivers/doxygen/html/_a_e_s_e_c_b_8h.html#ti_drivers_AESECB_Synopsis "Basic C usage summary"
[3]: /drivers/doxygen/html/_a_e_s_e_c_b_8h.html#ti_drivers_AESECB_Examples "C usage examples"
[4]: /drivers/syscfg/html/ConfigDoc.html#AESECB_Configuration_Options "Configuration options reference"
`,
    defaultInstanceName : "CONFIG_AESECB_",
    config              : Common.addNameConfig(config, "/ti/drivers/AESECB", "CONFIG_AESECB_"),
    modules: Common.autoForceModules(["Board", "Power", "DMA"]),
    validate            : validate
};


/* get family-specific AESECB module */
let devAESECB = system.getScript("/ti/drivers/aesecb/AESECB" + family);
exports = devAESECB.extend(base);
