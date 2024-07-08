/*
 * Copyright (c) 2024, Texas Instruments Incorporated
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

#ifndef VCE_FW_IMAGE_SEQ_VCE_H
#define VCE_FW_IMAGE_SEQ_VCE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define VCELPF3_FW_SIZE 900

static const uint32_t lrf_fw_image_seq_vce[VCELPF3_FW_SIZE] = {
    0x20506017, 0xE41020A1, 0x10011005, 0x35003100, 0x10012010, 0x35002000, 0x00010000, 0x00010003, 0x02000003,
    0xFF000080, 0x03CE0100, 0x731007FF, 0x1203720F, 0xB0F01214, 0xB1007100, 0x7205A0F0, 0x16328042, 0x14211101,
    0x60486C01, 0x60506049, 0x6083606C, 0x637B6096, 0x60486391, 0x60C460C8, 0x60F560CC, 0x613D6119, 0x63936158,
    0x604861A4, 0x63976189, 0x63956048, 0x63996187, 0x1220639B, 0x601B9050, 0x90511211, 0xB021B026, 0x6017B0D0,
    0xB0016042, 0x91E18061, 0x64526042, 0x62FC7301, 0x60426452, 0x92F39213, 0x80719283, 0x405A2201, 0x92F0C090,
    0x67AA67A7, 0x92318061, 0x94419311, 0x679D92A4, 0x724067AD, 0x943278E2, 0xB0F367B4, 0x7100B1F0, 0x7000A0F3,
    0x92F39213, 0x80719283, 0x40742201, 0x92F0C090, 0x67AA67A7, 0x92318061, 0x92A19311, 0x67AD679D, 0x67BF7240,
    0xB1F0B0F3, 0xA0F37100, 0x92136042, 0x928392F3, 0x67AA67A7, 0x92318061, 0x92A29311, 0x67AD679D, 0x943178C1,
    0xB0F367BA, 0x7100B1F0, 0x6042A0F3, 0x9281C011, 0x92F19211, 0x7222C011, 0x92919301, 0x67AA67A7, 0x101B67AD,
    0x82DC679D, 0x924167B0, 0x101592B1, 0x923167B2, 0x10169321, 0x931A80BA, 0x67B41A1A, 0x943178E1, 0x720F9446,
    0xC007B0F3, 0x927B9257, 0x14CB1617, 0x933010A0, 0xB10392C0, 0x7100B1F0, 0x1C7568BB, 0x604244B6, 0x9281C011,
    0x6098C031, 0x9281C011, 0x6098C021, 0x92849214, 0x930392F4, 0x92939223, 0x93339253, 0x67A792C3, 0x67AD67AA,
    0x923167B2, 0x67B09311, 0x93219241, 0x101592B1, 0x679D1A15, 0x67BA1012, 0x943178C1, 0x1206B0F3, 0x82771050,
    0xB1F0B103, 0x16167100, 0x93369256, 0x92771427, 0xA0F368EA, 0x92146042, 0x92539284, 0x72297222, 0x67AA67A7,
    0x101767AD, 0x923167B2, 0x67B092A1, 0x92B19241, 0x1A151015, 0x7234679D, 0xB0F367BF, 0x10501206, 0xB10382D8,
    0x1616B1F0, 0x92771487, 0x92567100, 0xB1F0B103, 0xA0F3690F, 0x92146042, 0x92539284, 0x722992C3, 0x67A77222,
    0x67AD67AA, 0x923167B2, 0x67B092A1, 0x92B19241, 0x1A151015, 0x7234679D, 0x67BA1012, 0x943178C1, 0xC006B0F3,
    0x82771050, 0xB1F0B103, 0x16167100, 0x92C69256, 0xA0F36934, 0xB0256042, 0xC0017242, 0x679D9421, 0x67C9658B,
    0x67AD9283, 0x80671016, 0x92A49234, 0x10701A17, 0x101667AD, 0x9208B0F4, 0xB1049276, 0x7100B1F0, 0x16161618,
    0x6042694F, 0x7242B025, 0x9421C011, 0x658B679D, 0x93F1C041, 0x67AD9283, 0x80671016, 0x92A79237, 0x67D592F3,
    0xB0F4B104, 0x7100B1F0, 0x93F1C051, 0x92758095, 0xB10467DA, 0x7100B1F0, 0x92349276, 0x92A49314, 0x10701A17,
    0x93F1C001, 0x92E567CF, 0x92769206, 0xB1F0B104, 0x16167100, 0x697D1615, 0x73016042, 0x7301611A, 0x722060F2,
    0x9211C081, 0x92717961, 0x9201B1F0, 0x9211C071, 0x9281C071, 0xB1039273, 0xB1F0B0F3, 0xA0F37100, 0x67A79213,
    0x80611018, 0x78F19231, 0x70009401, 0x795867E9, 0x791167DF, 0x67E41082, 0x79211612, 0x161267E4, 0x67E4C001,
    0x92721612, 0x9201C011, 0x9211C081, 0x1622B1F0, 0x72209272, 0x1A12B1F0, 0x72217931, 0x806A67E4, 0x1A1910A9,
    0x80A210A0, 0x7944C003, 0x67E41041, 0xC0011612, 0x10A069C7, 0x16131041, 0x45C71C93, 0x723E67E4, 0x820B67A7,
    0xC021820C, 0x92F19211, 0x93619281, 0x9221C011, 0x92919301, 0xC0119371, 0x93419261, 0x93B192D1, 0x939A9231,
    0x7243724C, 0x7244B430, 0xC0068074, 0x7242C017, 0x72417240, 0xC011723F, 0x93219241, 0x722C92B1, 0x106DA1E1,
    0x107E14BD, 0x920D14BE, 0x10829257, 0x92721682, 0x93D17881, 0xB1F0B0F4, 0x9202B104, 0x1A527225, 0x781192E2,
    0x710093C1, 0xB1F0723D, 0x920DA0F4, 0x92EE9256, 0x16629337, 0x723C9272, 0x93D17871, 0x7225B1F0, 0x92027233,
    0x92E21A12, 0x92721622, 0x7841723D, 0xB1F093C1, 0x16129202, 0x723C9272, 0x93D17881, 0xB1F0B0F4, 0x9202B104,
    0x92E21AA2, 0x93C17811, 0x16B27100, 0x723D9272, 0xA0F4B1F0, 0x78419202, 0xC05193C1, 0xB1F093F1, 0x1A7292E2,
    0x723F9202, 0x1672B1F0, 0x16129202, 0x78819272, 0x723C93D1, 0x9421C011, 0xB1F0B0F4, 0x9202B104, 0x78411612,
    0x710093C1, 0x723D9272, 0x93F1C041, 0x1612B1F0, 0xC0519272, 0xB1F093F1, 0x1A129202, 0x162292E2, 0x723C9272,
    0x93E178B1, 0xB1F0B0F4, 0x920DB104, 0x78819257, 0x724293D1, 0x723E7100, 0x92721612, 0xB1F0B0F4, 0x9202B104,
    0x78417225, 0x710093C1, 0xC051723D, 0xB1F093F1, 0x1AC292E2, 0x723F9202, 0x8272B1F0, 0x16129202, 0xB4209272,
    0x7881723C, 0xB0F493D1, 0xB104B1F0, 0x16129202, 0x72229272, 0x723D7100, 0xB220B1F0, 0x92E21A42, 0x92721652,
    0x7811723D, 0xB1F093C1, 0x92729202, 0x1A621AA2, 0xB1F092E2, 0x920216F2, 0x92721622, 0x92E21A62, 0x920DB1F0,
    0x16829256, 0x723C9272, 0x920EB1F0, 0x16129257, 0xB1F09272, 0x9211C071, 0x92021AA2, 0xB1F07227, 0x9271C031,
    0xC011B1F0, 0x16729271, 0xB1F09202, 0x9271C021, 0x92021A12, 0xB1E1B1F0, 0x9211C021, 0x92E167A7, 0x93519271,
    0x932A924A, 0x925692BA, 0x92C69337, 0x783193A7, 0x787193C1, 0xB40093D1, 0x7243B410, 0xB0F3720F, 0xB1F07310,
    0x920180A1, 0x927192E1, 0x71009351, 0x9211C011, 0x928192F1, 0x73109361, 0x7100B1F0, 0xA1E1A0F3, 0x9241C011,
    0xC0217225, 0x92F19211, 0x93619281, 0x16221082, 0x80819202, 0x92711461, 0x723C92C7, 0xB1F0723D, 0x92021662,
    0x9272722C, 0x92E21A72, 0x72407233, 0x93C17811, 0xC041B1F0, 0x784193F1, 0xB1F093C1, 0x92E216F2, 0x92721662,
    0x93C17811, 0x92E2B1F0, 0x92021612, 0x80817233, 0x92711461, 0x723C92C6, 0x93D17871, 0x1612B1F0, 0x80819202,
    0x92711471, 0xB43092C7, 0x1616B1F0, 0x43331C67, 0xC00661ED, 0x1C7A1617, 0x673D45ED, 0x44422201, 0x45EB1A14,
    0xC0316042, 0xB0269431, 0x78617344, 0x785193D1, 0xC06193C1, 0x108593F1, 0x92751665, 0x7221722C, 0xB0E3B0F3,
    0x1A101090, 0x10B2C011, 0x14121093, 0x14039202, 0x71009443, 0xB1F09231, 0x1611B103, 0x71006B53, 0x9441C021,
    0x9231C011, 0xC0419205, 0xB1F093F1, 0x93F1C051, 0x723CB1F0, 0x9431C011, 0x93D17871, 0x92E51615, 0xB103B1F0,
    0x84517100, 0x9210C020, 0xB4307243, 0x720F7244, 0x67E97000, 0x9264679D, 0x807167A7, 0x80619241, 0xC0A19231,
    0x67AD9211, 0x8090C001, 0x438B2200, 0x9281C091, 0xB0F3B103, 0x7100B1F0, 0x73016042, 0x7301600D, 0x73016033,
    0x730161E9, 0x73016225, 0x73016273, 0xC01162BB, 0x220081E0, 0xC02143A2, 0x93419261, 0x93B192D1, 0x80817000,
    0x70009201, 0x92E18091, 0x80A17000, 0x70009271, 0x70008061, 0x70008071, 0x93C17811, 0x93D17861, 0x7000723E,
    0x7871723C, 0x723E93D1, 0x78117000, 0x723D93C1, 0x7000723E, 0x7881723C, 0x723E93D1, 0x78117000, 0x788193C1,
    0x723E93D1, 0x78417000, 0x788193C1, 0x723E93D1, 0x78217000, 0x723D93C1, 0x7000723E, 0x93C17841, 0x723E723D,
    0x78A17000, 0xB49093E1, 0x70007228, 0xB1F19272, 0xB4B094A1, 0x723C7000, 0x723E723D, 0x67DF7000, 0x62F37301,
    0x730167E4, 0x679D62F6, 0x62F97301, 0x81509160, 0x47F72200, 0x7000B140, 0x00000000, 0x00000000, 0x60177201,
    0x20503100, 0x0000E410, 0x00003500, 0x35000000, 0x01001001, 0x807603CE, 0x80888097, 0x80AB806A, 0x9069C019,
    0x9071C001, 0xB0F366FA, 0x1619B026, 0x93199239, 0x1A189449, 0x161B9208, 0xB1F0927B, 0xB1037100, 0x44181CA9,
    0x1617B026, 0x161B92E7, 0xB1F0927B, 0xB1037100, 0x1C961619, 0x72014426, 0x721E6042, 0x80718065, 0x16151815,
    0x14111019, 0x14DDDFFD, 0x181D161D, 0x9211C001, 0x92F1C091, 0x9281C021, 0x92A18071, 0x923592B1, 0x9291C011,
    0x9261C011, 0x92D19341, 0x7821723E, 0x783193D1, 0xC03193C1, 0x94459431, 0x80867240, 0x80989206, 0x10679278,
    0x1090C002, 0xB0F31A10, 0x606492E7, 0x710092E7, 0xB1F092C2, 0x1612B103, 0x68621617, 0x109BC012, 0x10DE1A1B,
    0x106A149E, 0x145F106F, 0x10D71086, 0xC00C1618, 0xC0017100, 0xC0919281, 0x723D92F1, 0x93C17831, 0x923B7226,
    0x92AB931B, 0x92EA920A, 0xB1F0927D, 0x161AB103, 0x92EF920F, 0x161F927E, 0xB1F07100, 0x920EB103, 0x927D92ED,
    0x9431C011, 0xB2607100, 0x7861723C, 0xC00193D1, 0xB1F092F1, 0x10B0B103, 0x71001A10, 0xB2307223, 0x9431C001,
    0x14C61021, 0x920614C8, 0x14181416, 0x92E79278, 0xB1F01617, 0x68A71611, 0x8096142C, 0x16121426, 0x14288098,
    0x1A1B10D7, 0x71004479, 0x1C4180A1, 0x809844F0, 0xB104B0F4, 0xC091B103, 0x65DB9211, 0xC00E1090, 0x68C6140E,
    0x14E21082, 0xC01A102D, 0x18AC109C, 0x189F10EF, 0x1081C00B, 0x14C114F1, 0x927D9201, 0x161DB1F0, 0x189F161B,
    0x1CBA14BF, 0x161A44D1, 0x16111091, 0x44CC1CA1, 0x9211C001, 0x92789208, 0x923E92E2, 0x92AE931E, 0x65D4C001,
    0xB104B0F4, 0x65E5B103, 0x60427201, 0x806578C2, 0x80878076, 0xC0018098, 0x92819211, 0x92F1C091, 0x92E79207,
    0x92649278, 0x92D39344, 0x1060103A, 0x145A1A10, 0x923A6905, 0x944A931A, 0xC03192A4, 0x65139431, 0xB104B0F4,
    0x720165E5, 0x78316042, 0x782193C1, 0x788193D1, 0x700093E1, 0xB02778C8, 0x807A8069, 0x723C808B, 0x723E723D,
    0x78B166F1, 0x66F41082, 0x92B99249, 0xC0019264, 0xC00192F1, 0x92919221, 0x10BDC006, 0xB104B0F4, 0x186E10AE,
    0x9211C091, 0x92F1C001, 0x10D19281, 0x92011461, 0x108292E1, 0x92721622, 0x92D49344, 0x18651095, 0x93159235,
    0x65C792A5, 0xC00165E5, 0x92029211, 0x92721492, 0x94759235, 0x92D392A4, 0x65CDC011, 0x848165E5, 0x41811E01,
    0x16129202, 0x10819272, 0x92E11611, 0x93149234, 0x65D4C011, 0x845165E5, 0x45C11E01, 0x9211C011, 0x920D9256,
    0x92721612, 0x92AE923E, 0x65DB92D4, 0x848165E5, 0x92511461, 0x9281C011, 0x927D92B9, 0x65E592C6, 0x9211C001,
    0x84819202, 0x92C11461, 0x108265E5, 0x16229202, 0x92E21492, 0x92721612, 0x9281C001, 0x92A49234, 0x65E565DF,
    0x9211C091, 0x146110D1, 0x92E29201, 0x92721612, 0x65E565C7, 0x9211C011, 0x920D9281, 0x92E2927D, 0x931E923E,
    0x925692AE, 0x934392C6, 0x65E592D4, 0x1C76C007, 0x10D141BE, 0x92E11471, 0x9281C001, 0x93439256, 0x92721612,
    0x65E565C7, 0x92C79257, 0x934492E2, 0x9281C011, 0xC011927D, 0x65E565D4, 0x1C791617, 0x161645A7, 0x1C69149D,
    0x72014532, 0x723C6042, 0x723E723D, 0x93C17831, 0x94617000, 0x723D723C, 0x78A1723E, 0x700093E1, 0x723C9431,
    0x723E723D, 0x93D17861, 0x723C7000, 0x723E723D, 0x723C7000, 0x723E723D, 0x93E17891, 0xB1F07000, 0xB1047100,
    0xB0277000, 0x92F39213, 0x80719283, 0x80669461, 0x78C78085, 0x934366F7, 0x61F61018, 0xB0F3B027, 0x920566E1,
    0x92349277, 0xB1F09314, 0xB1037100, 0x92369275, 0x94769316, 0x92A492B4, 0x723D723C, 0x93E178A1, 0x7100B1F0,
    0x8482B103, 0x10511080, 0x14211821, 0x92716A11, 0x66E19207, 0x93149234, 0xB1F0B0F3, 0xA0F37100, 0x1485B103,
    0x45F61A16, 0x60427201, 0x7201B1E2, 0xB1E16042, 0x806AA1E0, 0x8085923A, 0x80719205, 0x46222201, 0x2211A1E2,
    0xC0514633, 0xC0616234, 0x92F19211, 0x93619281, 0x391610A6, 0x93169236, 0x938692A6, 0x92759205, 0x9261C011,
    0x92D19341, 0x784193B1, 0x786193C1, 0xB40093D1, 0x7243B410, 0xC018C017, 0x1059B0F4, 0x92E91489, 0x62599359,
    0x14891059, 0x935992E9, 0x92577100, 0x92C79337, 0xB1F093A7, 0x3118B104, 0x1C8A1617, 0x71004654, 0x7240A1E1,
    0x723C7241, 0x7243723D, 0x72337225, 0x723A722C, 0x722E7235, 0x72017236, 0x806A6042, 0x808C807B, 0x80AE809D,
    0xC07180AF, 0x920F9211, 0xB1F07227, 0x920F161F, 0x9271C011, 0x161FB1F0, 0xC011920F, 0xB1F09271, 0x920F161F,
    0x9271C011, 0xC011B1F0, 0x92F19211, 0x93619281, 0x9221C001, 0x92919301, 0xC0019371, 0x93319251, 0x93A192C1,
    0x9261C011, 0x92D19341, 0x920B93B1, 0x927D92EC, 0x923A935E, 0x92AA931A, 0xB1E1938A, 0x93C17841, 0x93D17861,
    0xB410B400, 0x9431C001, 0xB0F4720F, 0xB1F07310, 0xA0F47100, 0x7201A1E1, 0x806A6042, 0x808C807B, 0x80AE809D,
    0x921110E1, 0x10D19281, 0x92919221, 0x92BA924A, 0x92AA923A, 0x927C920B, 0x9261C011, 0x723C92D1, 0x723E723D,
    0x1A1010A0, 0x9250C002, 0x720F92C2, 0x7310B0F3, 0x7100B1F0, 0x1612A0F3, 0x72016AD5, 0x723C6042, 0x723E723D,
    0x66E17000, 0x7000B1E1, 0x92E29201, 0x93519272, 0xB1039233, 0x7100B1F0, 0x72017000, 0x700063ED, 0x63F07201,
    0x72017000, 0x700063F3, 0x604D7201, 0x91607000, 0x22008150, 0xB14046FE, 0x00007000, 0x00000000, 0x00000000,
};

#ifdef __cplusplus
}
#endif

#endif /* VCE_FW_IMAGE_SEQ_VCE_H */
