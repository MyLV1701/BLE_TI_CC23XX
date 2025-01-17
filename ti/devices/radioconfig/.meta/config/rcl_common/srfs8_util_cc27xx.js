// NB! This file is autogenerated, do not edit!

// Ensure that object is not created twice
const InstanceCache = {};

// Exported functions
exports = {
    get: get,
    create: create
};

/*!
 *  ======== get ========
 *  Get the Javascript utility module. Create if it doesn't exist.
 *
 *  @param phyGroup - ble, prop, ieee_154
 *  @param phyName - PHY instance ID
 *  @param imports - Support functions from PHY instance
 */
function get(phyGroup, phyName, imports) {
    if (!(phyName in InstanceCache)) {
        InstanceCache[phyName] = create(phyGroup, imports);
    }
    // Update PHY functions in case PHY handler object has been cloned
    InstanceCache[phyName].setContext(imports);

    return InstanceCache[phyName];
}

/*!
 *  ======== create ========
 *  Create the Javascript utility module.
 *
 *  @param phyGroup - ble, prop, ieee_154
 */
function create(phyGroup) {
    // Module imports and exports
    const PhyGroup = phyGroup;    let getPhyProperty;

    function setContext(imports) {
        getPhyProperty = imports.getPhyProperty;
    }

    function getPpFrequency() {
        if (PhyGroup === "ble") {
            return getPpFrequencyBle();
        }
        else if (PhyGroup === "prop") {
            return getPpFrequencyProp();
        }
        return getPpFrequency154();
    }

    function convBleChannelToFreq(channel, customFreq) {
        if (channel == 40) {
            return customFreq;
        } else if (channel == 37) {
            return 2402;
        } else if (channel == 38) {
            return 2426;
        } else if (channel == 39) {
            return 2480;
        } else if ((channel >= 0) && (channel <= 10)) {
            return 2402 + 2 + (2 * channel);
        } else if ((channel >= 11) && (channel <= 36)) {
            return 2402 + 2 + 2 + (2 * channel);
        } else {
            return NaN;
        }
    }

    function convPaTableSettingToBinary(txPower, value, isHighPa) {
        var tempCoeff = (value >> 16) & 0xFF;
        var settingData = [];
        settingData[0] = Math.ceil(txPower * 2) & 0xFF;
        settingData[1] = tempCoeff;
        settingData[2] = (value >> 0) & 0xFF;
        settingData[3] = (value >> 8) & 0xFF;
        return settingData;
    }

    function convPaTableSettingToString(txPower, value, isHighPa) {
        var txPowerInt         = Math.ceil(txPower * 2) >> 1;
        var txPowerFract       = Math.ceil(txPower * 2) & 1;
        var tempCoeff          = (value >> 16) & 0xFF;
        var ibBoost            = (value >> 0) & 0x03;
        var ib                 = (value >> 2) & 0x3F;
        var gain               = (value >> 8) & 0x07;
        var mode               = (value >> 11) & 0x03;
        var noIfampRfLdoBypass = (value >> 15) & 0x01;
        return "{ .power = { .fraction = " + txPowerFract + ", .dBm = " + txPowerInt + " }, .tempCoeff = " + tempCoeff + ", .value = { .ibBoost = " + ibBoost + ", .ib = " + ib + ", .gain = " + gain + ", .mode = " + mode + ", .reserved = 0, .noIfampRfLdoBypass = " + noIfampRfLdoBypass + " } }"
    }

    function getPpFrequencyBle() {
        return convBleChannelToFreq(getPhyProperty("bleChannel"), getPhyProperty("frequency"));
    }

    function updCfRfFrequency() {
        return Math.floor(getPpFrequency() * 1e6);
    }

    // Exported functions
    return {
        setContext: setContext,
        getPpFrequency: getPpFrequency,
        convBleChannelToFreq: convBleChannelToFreq,
        convPaTableSettingToBinary: convPaTableSettingToBinary,
        convPaTableSettingToString: convPaTableSettingToString,
        getPpFrequencyBle: getPpFrequencyBle,
        updCfRfFrequency: updCfRfFrequency
    }
}
