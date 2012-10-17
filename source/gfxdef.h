/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 * Program WebSite: http://methane.sourceforge.net/index.html              *
 *                                                                         *
 ***************************************************************************/

//------------------------------------------------------------------------------
// Graphic Definition File (Created by Genoffs V2.0)
// (gfxdef.h) gfxdata.cpp gfxoff.cpp
//------------------------------------------------------------------------------

#ifndef _GDF_H
#define _GDF_H 1

#include "global.h"

//------------------------------------------------------------------------------
// A horrible fix for the Norcroft RISCOS ARM C compiler
// which hates large structures
//------------------------------------------------------------------------------
#ifdef METHANE_RISCOS
#define RISCOS_FIX(name) }; unsigned char name[] = {
#else
#define RISCOS_FIX(name) ,
#endif

extern unsigned char MethaneGraphicData_Bank1[];
extern unsigned char MethaneGraphicData_Bank2[];
extern unsigned char MethaneGraphicData_Bank3[];
extern int MethaneGraphicData_Bank2_Sprite;
extern int MethaneGraphicData_Bank3_Sprite;

extern MCOORDS MainOffsets[];

#define SPR_START_NUMBER		1000

#define SPR_BLOX_DATA		1000
#define SPR_PUFF_LEFT1		1001
#define SPR_PUFF_LEFT2		1002
#define SPR_PUFF_LEFT3		1003
#define SPR_PUFF_LEFT4		1004
#define SPR_PUFF_LEFT5		1005
#define SPR_PUFF_LEFT6		1006
#define SPR_PUFF_LEFT7		1007
#define SPR_PUFF_LEFT8		1008
#define SPR_PUFF_RIGHT1		1009
#define SPR_PUFF_RIGHT2		1010
#define SPR_PUFF_RIGHT3		1011
#define SPR_PUFF_RIGHT4		1012
#define SPR_PUFF_RIGHT5		1013
#define SPR_PUFF_RIGHT6		1014
#define SPR_PUFF_RIGHT7		1015
#define SPR_PUFF_RIGHT8		1016
#define SPR_PUFF_STAND_R1	1017
#define SPR_PUFF_STAND_R2	1018
#define SPR_PUFF_HIT		1019
#define SPR_PUFF_STAND_L1	1020
#define SPR_PUFF_STAND_L2	1021
#define SPR_PUFF_OUCH		1022
#define SPR_PUFF_GUN_L1		1023
#define SPR_PUFF_GUN_L2		1024
#define SPR_PUFF_GUN_R2		1025
#define SPR_PUFF_GUN_R1		1026
#define SPR_PUFF_HANDLE_R	1027
#define SPR_PUFF_HANDLE_L	1028
#define SPR_GAS_CLOUD1		1029
#define SPR_GAS_CLOUD2		1030
#define SPR_GAS_CLOUD3		1031
#define SPR_GAS_CLOUD4		1032
#define SPR_GAS_FADE1		1033
#define SPR_GAS_FADE2		1034
#define SPR_GAS_FADE3		1035
#define SPR_GAS_FADE4		1036
#define SPR_GAS_FADE5		1037
#define SPR_GAS_LEFT4		1038
#define SPR_GAS_LEFT3		1039
#define SPR_GAS_LEFT2		1040
#define SPR_GAS_LEFT1		1041
#define SPR_GAS_RIGHT1		1042
#define SPR_GAS_RIGHT2		1043
#define SPR_GAS_RIGHT3		1044
#define SPR_GAS_RIGHT4		1045
#define SPR_BUG_LEFT1		1046
#define SPR_BUG_LEFT2		1047
#define SPR_BUG_LEFT3		1048
#define SPR_BUG_LEFT4		1049
#define SPR_BUG_LEFT5		1050
#define SPR_BUG_LEFT6		1051
#define SPR_BUG_RIGHT1		1052
#define SPR_BUG_RIGHT2		1053
#define SPR_BUG_RIGHT3		1054
#define SPR_BUG_RIGHT4		1055
#define SPR_BUG_RIGHT5		1056
#define SPR_BUG_RIGHT6		1057
#define SPR_BUG_ROLL1		1058
#define SPR_BUG_ROLL2		1059
#define SPR_BUG_ROLL3		1060
#define SPR_BUG_ROLL4		1061
#define SPR_BUG_ROLL5		1062
#define SPR_BUG_ROLL6		1063
#define SPR_BUG_ROLL7		1064
#define SPR_BUG_ROLL8		1065
#define SPR_BUG_HATCH1		1066
#define SPR_BUG_HATCH2		1067
#define SPR_BUG_SUCKL1		1068
#define SPR_BUG_SUCKL2		1069
#define SPR_BUG_SUCKL3		1070
#define SPR_BUG_SUCKL4		1071
#define SPR_BUG_SUCKL5		1072
#define SPR_BUG_SUCKL6		1073
#define SPR_BUG_SUCKR1		1074
#define SPR_BUG_SUCKR2		1075
#define SPR_BUG_SUCKR3		1076
#define SPR_BUG_SUCKR4		1077
#define SPR_BUG_SUCKR5		1078
#define SPR_BUG_SUCKR6		1079
#define SPR_BUG_INGUN		1080
#define SPR_GOOD_BOAT		1081
#define SPR_GOOD_BALL		1082
#define SPR_GOOD_TOP		1083
#define SPR_GOOD_BRICKS		1084
#define SPR_GOOD_TEDDY		1085
#define SPR_GOOD_JOYSTICK	1086
#define SPR_GOOD_DUCK		1087
#define SPR_GOOD_TANK		1088
#define SPR_GOOD_CAR_R1		1089
#define SPR_GOOD_CAR_R2		1090
#define SPR_GOOD_CAR_L1		1091
#define SPR_GOOD_CAR_L2		1092
#define SPR_GOOD_TRAIN_L1	1093
#define SPR_GOOD_TRAIN_L2	1094
#define SPR_GOOD_TRAIN_L3	1095
#define SPR_GOOD_TRAIN_L4	1096
#define SPR_GOOD_TRAIN_R1	1097
#define SPR_GOOD_TRAIN_R2	1098
#define SPR_GOOD_TRAIN_R3	1099
#define SPR_GOOD_TRAIN_R4	1100
#define SPR_GOOD_PHONE		1101
#define SPR_GOOD_PRESENT	1102
#define SPR_GOOD_UFO		1103
#define SPR_GOOD_SKATE		1104
#define SPR_GOOD_ROCKET		1105
#define SPR_GOOD_KITE		1106
#define SPR_FOOD_1		1107
#define SPR_FOOD_2		1108
#define SPR_FOOD_3		1109
#define SPR_FOOD_4		1110
#define SPR_FOOD_5		1111
#define SPR_FOOD_6		1112
#define SPR_FOOD_7		1113
#define SPR_FOOD_8		1114
#define SPR_FOOD_9		1115
#define SPR_FOOD_10		1116
#define SPR_FOOD_11		1117
#define SPR_FOOD_12		1118
#define SPR_FOOD_13		1119
#define SPR_FRUIT_1		1120
#define SPR_FRUIT_2		1121
#define SPR_FRUIT_3		1122
#define SPR_FRUIT_4		1123
#define SPR_FRUIT_5		1124
#define SPR_FRUIT_6		1125
#define SPR_FRUIT_7		1126
#define SPR_FRUIT_8		1127
#define SPR_FRUIT_9		1128
#define SPR_FRUIT_10		1129
#define SPR_EXP_1		1130
#define SPR_EXP_2		1131
#define SPR_EXP_3		1132
#define SPR_EXP_4		1133
#define SPR_EXP_5		1134
#define SPR_EXP_6		1135
#define SPR_EXP_7		1136
#define SPR_EXP_8		1137
#define SPR_EXP_9		1138
#define SPR_EXP_10		1139
#define SPR_EXP_11		1140
#define SPR_EXP_12		1141
#define SPR_EXP_13		1142
#define SPR_NUM_100		1143
#define SPR_NUM_200		1144
#define SPR_NUM_300		1145
#define SPR_NUM_400		1146
#define SPR_NUM_500		1147
#define SPR_NUM_600		1148
#define SPR_NUM_700		1149
#define SPR_NUM_800		1150
#define SPR_NUM_900		1151
#define SPR_NUM_1000		1152
#define SPR_NUM_2000		1153
#define SPR_NUM_3000		1154
#define SPR_NUM_4000		1155
#define SPR_NUM_5000		1156
#define SPR_NUM_6000		1157
#define SPR_NUM_7000		1158
#define SPR_NUM_8000		1159
#define SPR_NUM_9000		1160
#define SPR_NUM_10000		1161
#define SPR_NUM_100000		1162
#define SPR_WHIRLY_LEFT1	1163
#define SPR_WHIRLY_LEFT2	1164
#define SPR_WHIRLY_LEFT3	1165
#define SPR_WHIRLY_LEFT4	1166
#define SPR_WHIRLY_LEFT5	1167
#define SPR_WHIRLY_LEFT6	1168
#define SPR_WHIRLY_RIGHT1	1169
#define SPR_WHIRLY_RIGHT2	1170
#define SPR_WHIRLY_RIGHT3	1171
#define SPR_WHIRLY_RIGHT4	1172
#define SPR_WHIRLY_RIGHT5	1173
#define SPR_WHIRLY_RIGHT6	1174
#define SPR_WHIRLY_ROLL1	1175
#define SPR_WHIRLY_ROLL2	1176
#define SPR_WHIRLY_ROLL3	1177
#define SPR_WHIRLY_ROLL4	1178
#define SPR_WHIRLY_ROLL5	1179
#define SPR_WHIRLY_ROLL6	1180
#define SPR_WHIRLY_ROLL7	1181
#define SPR_WHIRLY_ROLL8	1182
#define SPR_WHIRLY_HATCH1	1183
#define SPR_WHIRLY_HATCH2	1184
#define SPR_WHIRLY_SUCKL1	1185
#define SPR_WHIRLY_SUCKL2	1186
#define SPR_WHIRLY_SUCKL3	1187
#define SPR_WHIRLY_SUCKL4	1188
#define SPR_WHIRLY_SUCKL5	1189
#define SPR_WHIRLY_SUCKL6	1190
#define SPR_WHIRLY_SUCKR1	1191
#define SPR_WHIRLY_SUCKR2	1192
#define SPR_WHIRLY_SUCKR3	1193
#define SPR_WHIRLY_SUCKR4	1194
#define SPR_WHIRLY_SUCKR5	1195
#define SPR_WHIRLY_SUCKR6	1196
#define SPR_DOOFUS_LEFT1	1197
#define SPR_DOOFUS_LEFT2	1198
#define SPR_DOOFUS_LEFT3	1199
#define SPR_DOOFUS_LEFT4	1200
#define SPR_DOOFUS_LEFT5	1201
#define SPR_DOOFUS_LEFT6	1202
#define SPR_DOOFUS_LEFT7	1203
#define SPR_DOOFUS_LEFT8	1204
#define SPR_DOOFUS_RIGHT1	1205
#define SPR_DOOFUS_RIGHT2	1206
#define SPR_DOOFUS_RIGHT3	1207
#define SPR_DOOFUS_RIGHT4	1208
#define SPR_DOOFUS_RIGHT5	1209
#define SPR_DOOFUS_RIGHT6	1210
#define SPR_DOOFUS_RIGHT7	1211
#define SPR_DOOFUS_RIGHT8	1212
#define SPR_DOOFUS_ROLL1	1213
#define SPR_DOOFUS_ROLL2	1214
#define SPR_DOOFUS_ROLL3	1215
#define SPR_DOOFUS_ROLL4	1216
#define SPR_DOOFUS_ROLL5	1217
#define SPR_DOOFUS_ROLL6	1218
#define SPR_DOOFUS_ROLL7	1219
#define SPR_DOOFUS_ROLL8	1220
#define SPR_DOOFUS_SUCKL1	1221
#define SPR_DOOFUS_SUCKL2	1222
#define SPR_DOOFUS_SUCKL3	1223
#define SPR_DOOFUS_SUCKL4	1224
#define SPR_DOOFUS_SUCKL5	1225
#define SPR_DOOFUS_SUCKL6	1226
#define SPR_DOOFUS_HATCH1	1227
#define SPR_DOOFUS_HATCH2	1228
#define SPR_DOOFUS_SUCKR1	1229
#define SPR_DOOFUS_SUCKR2	1230
#define SPR_DOOFUS_SUCKR3	1231
#define SPR_DOOFUS_SUCKR4	1232
#define SPR_DOOFUS_SUCKR5	1233
#define SPR_DOOFUS_SUCKR6	1234
#define SPR_JUMP_LJUMP1		1235
#define SPR_JUMP_LJUMP2		1236
#define SPR_JUMP_LJUMP3		1237
#define SPR_JUMP_LJUMP4		1238
#define SPR_JUMP_LJUMP5		1239
#define SPR_JUMP_LJUMP6		1240
#define SPR_JUMP_LROLL1		1241
#define SPR_JUMP_LROLL2		1242
#define SPR_JUMP_LROLL3		1243
#define SPR_JUMP_LROLL4		1244
#define SPR_JUMP_LROLL5		1245
#define SPR_JUMP_LROLL6		1246
#define SPR_JUMP_LROLL7		1247
#define SPR_JUMP_LROLL8		1248
#define SPR_JUMP_LSUCKL1	1249
#define SPR_JUMP_LSUCKL2	1250
#define SPR_JUMP_LSUCKL3	1251
#define SPR_JUMP_LSUCKL4	1252
#define SPR_JUMP_LSUCKL5	1253
#define SPR_JUMP_LSUCKL6	1254
#define SPR_JUMP_LSUCKR1	1255
#define SPR_JUMP_LSUCKR2	1256
#define SPR_JUMP_LSUCKR3	1257
#define SPR_JUMP_LSUCKR4	1258
#define SPR_JUMP_LSUCKR5	1259
#define SPR_JUMP_LSUCKR6	1260
#define SPR_JUMP_LHATCH1	1261
#define SPR_JUMP_LHATCH2	1262
#define SPR_JUMP_SJUMP1		1263
#define SPR_JUMP_SJUMP2		1264
#define SPR_JUMP_SJUMP3		1265
#define SPR_JUMP_SJUMP4		1266
#define SPR_JUMP_SJUMP5		1267
#define SPR_JUMP_SJUMP6		1268
#define SPR_JUMP_SROLL1		1269
#define SPR_JUMP_SROLL2		1270
#define SPR_JUMP_SROLL3		1271
#define SPR_JUMP_SROLL4		1272
#define SPR_JUMP_SROLL5		1273
#define SPR_JUMP_SROLL6		1274
#define SPR_JUMP_SROLL7		1275
#define SPR_JUMP_SROLL8		1276
#define SPR_JUMP_SHATCH1	1277
#define SPR_JUMP_SHATCH2	1278
#define SPR_JUMP_SSUCKL1	1279
#define SPR_JUMP_SSUCKL2	1280
#define SPR_JUMP_SSUCKL3	1281
#define SPR_JUMP_SSUCKL4	1282
#define SPR_JUMP_SSUCKR1	1283
#define SPR_JUMP_SSUCKR2	1284
#define SPR_JUMP_SSUCKR3	1285
#define SPR_JUMP_SSUCKR4	1286
#define SPR_MBUG_LEFT1		1287
#define SPR_MBUG_LEFT2		1288
#define SPR_MBUG_LEFT3		1289
#define SPR_MBUG_RIGHT1		1290
#define SPR_MBUG_RIGHT2		1291
#define SPR_MBUG_RIGHT3		1292
#define SPR_MBUG_HATCH1		1293
#define SPR_MBUG_HATCH2		1294
#define SPR_MBUG_ROLL1		1295
#define SPR_MBUG_ROLL2		1296
#define SPR_MBUG_ROLL3		1297
#define SPR_MBUG_ROLL4		1298
#define SPR_MBUG_ROLL5		1299
#define SPR_MBUG_ROLL6		1300
#define SPR_MBUG_ROLL7		1301
#define SPR_MBUG_ROLL8		1302
#define SPR_MBUG_SUCKL1		1303
#define SPR_MBUG_SUCKL2		1304
#define SPR_MBUG_SUCKL3		1305
#define SPR_MBUG_SUCKL4		1306
#define SPR_MBUG_SUCKL5		1307
#define SPR_MBUG_SUCKL6		1308
#define SPR_MBUG_SUCKR1		1309
#define SPR_MBUG_SUCKR2		1310
#define SPR_MBUG_SUCKR3		1311
#define SPR_MBUG_SUCKR4		1312
#define SPR_MBUG_SUCKR5		1313
#define SPR_MBUG_SUCKR6		1314
#define SPR_MBUG_BOMB1		1315
#define SPR_MBUG_BOMB2		1316
#define SPR_MBUG_BOMB3		1317
#define SPR_MBUG_BOMB4		1318
#define SPR_MBUG_BANG		1319
#define SPR_CLOWN_RIGHT1	1320
#define SPR_CLOWN_RIGHT2	1321
#define SPR_CLOWN_RIGHT3	1322
#define SPR_CLOWN_RIGHT4	1323
#define SPR_CLOWN_RIGHT5	1324
#define SPR_CLOWN_RIGHT6	1325
#define SPR_CLOWN_RIGHT7	1326
#define SPR_CLOWN_RIGHT8	1327
#define SPR_CLOWN_RIGHT9	1328
#define SPR_CLOWN_LEFT1		1329
#define SPR_CLOWN_LEFT2		1330
#define SPR_CLOWN_LEFT3		1331
#define SPR_CLOWN_LEFT4		1332
#define SPR_CLOWN_LEFT5		1333
#define SPR_CLOWN_LEFT6		1334
#define SPR_CLOWN_LEFT7		1335
#define SPR_CLOWN_LEFT8		1336
#define SPR_CLOWN_LEFT9		1337
#define SPR_CLOWN_ROLL1		1338
#define SPR_CLOWN_ROLL2		1339
#define SPR_CLOWN_ROLL3		1340
#define SPR_CLOWN_ROLL4		1341
#define SPR_CLOWN_ROLL5		1342
#define SPR_CLOWN_ROLL6		1343
#define SPR_CLOWN_ROLL7		1344
#define SPR_CLOWN_ROLL8		1345
#define SPR_CLOWN_SUCKL1	1346
#define SPR_CLOWN_SUCKL2	1347
#define SPR_CLOWN_SUCKL3	1348
#define SPR_CLOWN_SUCKL4	1349
#define SPR_CLOWN_SUCKL5	1350
#define SPR_CLOWN_SUCKL6	1351
#define SPR_CLOWN_SUCKR1	1352
#define SPR_CLOWN_SUCKR2	1353
#define SPR_CLOWN_SUCKR3	1354
#define SPR_CLOWN_SUCKR4	1355
#define SPR_CLOWN_SUCKR5	1356
#define SPR_CLOWN_SUCKR6	1357
#define SPR_CLOWN_HATCH1	1358
#define SPR_CLOWN_HATCH2	1359
#define SPR_CLOWN_BAT1		1360
#define SPR_CLOWN_BAT2		1361
#define SPR_CLOWN_BAT3		1362
#define SPR_CLOWN_BAT4		1363
#define SPR_CLOWN_BAT5		1364
#define SPR_CLOWN_BAT6		1365
#define SPR_CLOWN_BAT7		1366
#define SPR_CLOWN_BAT8		1367
#define SPR_DWARF_RIGHT1	1368
#define SPR_DWARF_RIGHT2	1369
#define SPR_DWARF_RIGHT3	1370
#define SPR_DWARF_RIGHT4	1371
#define SPR_DWARF_RIGHT5	1372
#define SPR_DWARF_RIGHT6	1373
#define SPR_DWARF_LEFT1		1374
#define SPR_DWARF_LEFT2		1375
#define SPR_DWARF_LEFT3		1376
#define SPR_DWARF_LEFT4		1377
#define SPR_DWARF_LEFT5		1378
#define SPR_DWARF_LEFT6		1379
#define SPR_DWARF_STOP_R	1380
#define SPR_DWARF_STOP_L	1381
#define SPR_DWARF_SUCKR1	1382
#define SPR_DWARF_SUCKR2	1383
#define SPR_DWARF_SUCKR3	1384
#define SPR_DWARF_SUCKR4	1385
#define SPR_DWARF_SUCKR5	1386
#define SPR_DWARF_SUCKR6	1387
#define SPR_DWARF_ROLL1		1388
#define SPR_DWARF_ROLL2		1389
#define SPR_DWARF_ROLL3		1390
#define SPR_DWARF_ROLL4		1391
#define SPR_DWARF_ROLL5		1392
#define SPR_DWARF_ROLL6		1393
#define SPR_DWARF_ROLL7		1394
#define SPR_DWARF_ROLL8		1395
#define SPR_DWARF_HATCH1	1396
#define SPR_DWARF_HATCH2	1397
#define SPR_DWARF_HAMMER1	1398
#define SPR_DWARF_HAMMER2	1399
#define SPR_DWARF_HAMMER3	1400
#define SPR_DWARF_HAMMER4	1401
#define SPR_DWARF_HAMMER5	1402
#define SPR_DWARF_HAMMER6	1403
#define SPR_DWARF_HAMMER7	1404
#define SPR_DWARF_HAMMER8	1405
#define SPR_DWARF_SUCKL6	1406
#define SPR_DWARF_SUCKL5	1407
#define SPR_DWARF_SUCKL4	1408
#define SPR_DWARF_SUCKL3	1409
#define SPR_DWARF_SUCKL2	1410
#define SPR_DWARF_SUCKL1	1411
#define SPR_DWARF_HAM_HAND	1412
#define SPR_DWARF_INGUN		1413
#define SPR_ZOOM_LEFT1		1414
#define SPR_ZOOM_LEFT2		1415
#define SPR_ZOOM_LEFT3		1416
#define SPR_ZOOM_LEFT4		1417
#define SPR_ZOOM_LEFT5		1418
#define SPR_ZOOM_LEFT6		1419
#define SPR_ZOOM_RIGHT1		1420
#define SPR_ZOOM_RIGHT2		1421
#define SPR_ZOOM_RIGHT3		1422
#define SPR_ZOOM_RIGHT4		1423
#define SPR_ZOOM_RIGHT5		1424
#define SPR_ZOOM_RIGHT6		1425
#define SPR_ZOOM_ROLL1		1426
#define SPR_ZOOM_ROLL2		1427
#define SPR_ZOOM_ROLL3		1428
#define SPR_ZOOM_ROLL4		1429
#define SPR_ZOOM_ROLL5		1430
#define SPR_ZOOM_ROLL6		1431
#define SPR_ZOOM_ROLL7		1432
#define SPR_ZOOM_ROLL8		1433
#define SPR_ZOOM_HATCH1		1434
#define SPR_ZOOM_HATCH2		1435
#define SPR_ZOOM_SUCKL1		1436
#define SPR_ZOOM_SUCKL2		1437
#define SPR_ZOOM_SUCKL3		1438
#define SPR_ZOOM_SUCKL4		1439
#define SPR_ZOOM_SUCKL5		1440
#define SPR_ZOOM_SUCKL6		1441
#define SPR_ZOOM_SUCKR1		1442
#define SPR_ZOOM_SUCKR2		1443
#define SPR_ZOOM_SUCKR3		1444
#define SPR_ZOOM_SUCKR4		1445
#define SPR_ZOOM_SUCKR5		1446
#define SPR_ZOOM_SUCKR6		1447
#define SPR_SPIKE_LEFT1		1448
#define SPR_SPIKE_LEFT2		1449
#define SPR_SPIKE_LEFT3		1450
#define SPR_SPIKE_LEFT4		1451
#define SPR_SPIKE_LEFT5		1452
#define SPR_SPIKE_RIGHT1	1453
#define SPR_SPIKE_RIGHT2	1454
#define SPR_SPIKE_RIGHT3	1455
#define SPR_SPIKE_RIGHT4	1456
#define SPR_SPIKE_RIGHT5	1457
#define SPR_SPIKE_ROLL1		1458
#define SPR_SPIKE_ROLL2		1459
#define SPR_SPIKE_ROLL3		1460
#define SPR_SPIKE_ROLL4		1461
#define SPR_SPIKE_ROLL5		1462
#define SPR_SPIKE_ROLL6		1463
#define SPR_SPIKE_ROLL7		1464
#define SPR_SPIKE_ROLL8		1465
#define SPR_SPIKE_HATCH1	1466
#define SPR_SPIKE_HATCH2	1467
#define SPR_SPIKE_SUCKL1	1468
#define SPR_SPIKE_SUCKL2	1469
#define SPR_SPIKE_SUCKL3	1470
#define SPR_SPIKE_SUCKL4	1471
#define SPR_SPIKE_SUCKL5	1472
#define SPR_SPIKE_SUCKL6	1473
#define SPR_SPIKE_SUCKR1	1474
#define SPR_SPIKE_SUCKR2	1475
#define SPR_SPIKE_SUCKR3	1476
#define SPR_SPIKE_SUCKR4	1477
#define SPR_SPIKE_SUCKR5	1478
#define SPR_SPIKE_SUCKR6	1479
#define SPR_SUCKER_MOVE1	1480
#define SPR_SUCKER_MOVE2	1481
#define SPR_SUCKER_MOVE3	1482
#define SPR_SUCKER_ROLL1	1483
#define SPR_SUCKER_ROLL2	1484
#define SPR_SUCKER_ROLL3	1485
#define SPR_SUCKER_HATCH1	1486
#define SPR_SUCKER_HATCH2	1487
#define SPR_SUCKER_SUCKL1	1488
#define SPR_SUCKER_SUCKL2	1489
#define SPR_SUCKER_SUCKL3	1490
#define SPR_SUCKER_SUCKL4	1491
#define SPR_SUCKER_SUCKL5	1492
#define SPR_SUCKER_SUCKL6	1493
#define SPR_SUCKER_SUCKR1	1494
#define SPR_SUCKER_SUCKR2	1495
#define SPR_SUCKER_SUCKR3	1496
#define SPR_SUCKER_SUCKR4	1497
#define SPR_SUCKER_SUCKR5	1498
#define SPR_SUCKER_SUCKR6	1499
#define SPR_FNT_R0		1500
#define SPR_FNT_R1		1501
#define SPR_FNT_R2		1502
#define SPR_FNT_R3		1503
#define SPR_FNT_R4		1504
#define SPR_FNT_R5		1505
#define SPR_FNT_R6		1506
#define SPR_FNT_R7		1507
#define SPR_FNT_R8		1508
#define SPR_FNT_R9		1509
#define SPR_FNT_RH		1510
#define SPR_FNT_G0		1511
#define SPR_FNT_G1		1512
#define SPR_FNT_G2		1513
#define SPR_FNT_G3		1514
#define SPR_FNT_G4		1515
#define SPR_FNT_G5		1516
#define SPR_FNT_G6		1517
#define SPR_FNT_G7		1518
#define SPR_FNT_G8		1519
#define SPR_FNT_G9		1520
#define SPR_FNT_GH		1521
#define SPR_FNT_Y0		1522
#define SPR_FNT_Y1		1523
#define SPR_FNT_Y2		1524
#define SPR_FNT_Y3		1525
#define SPR_FNT_Y4		1526
#define SPR_FNT_Y5		1527
#define SPR_FNT_Y6		1528
#define SPR_FNT_Y7		1529
#define SPR_FNT_Y8		1530
#define SPR_FNT_Y9		1531
#define SPR_CARD_BACK1		1532
#define SPR_CARD_BACK2		1533
#define SPR_CARD_BACK3		1534
#define SPR_CARD_BACK4		1535
#define SPR_CARD_BACK5		1536
#define SPR_CARD_SIDE		1537
#define SPR_CARD_SPADE1		1538
#define SPR_CARD_SPADE2		1539
#define SPR_CARD_SPADE3		1540
#define SPR_CARD_SPADE4		1541
#define SPR_CARD_SPADE5		1542
#define SPR_CARD_HEART1		1543
#define SPR_CARD_HEART2		1544
#define SPR_CARD_HEART3		1545
#define SPR_CARD_HEART4		1546
#define SPR_CARD_HEART5		1547
#define SPR_CARD_CLUB1		1548
#define SPR_CARD_CLUB2		1549
#define SPR_CARD_CLUB3		1550
#define SPR_CARD_CLUB4		1551
#define SPR_CARD_CLUB5		1552
#define SPR_CARD_DMOND1		1553
#define SPR_CARD_DMOND2		1554
#define SPR_CARD_DMOND3		1555
#define SPR_CARD_DMOND4		1556
#define SPR_CARD_DMOND5		1557
#define SPR_CARD_SSPADE		1558
#define SPR_CARD_SHEART		1559
#define SPR_CARD_SCLUB		1560
#define SPR_CARD_SDMOND		1561
#define SPR_P1UP		1562
#define SPR_P2UP		1563
#define SPR_DOOR_FULL		1564
#define SPR_DOOR_OUTLINE	1565
#define SPR_STARS_1		1566
#define SPR_STARS_2		1567
#define SPR_STARS_3		1568
#define SPR_STARS_4		1569
#define SPR_STARS_5		1570
#define SPR_STARS_6		1571
#define SPR_STARS_7		1572
#define SPR_STARS_8		1573
#define SPR_RFONT_0		1574
#define SPR_RFONT_1		1575
#define SPR_RFONT_2		1576
#define SPR_RFONT_3		1577
#define SPR_RFONT_4		1578
#define SPR_RFONT_5		1579
#define SPR_RFONT_6		1580
#define SPR_RFONT_7		1581
#define SPR_RFONT_8		1582
#define SPR_RFONT_9		1583
#define SPR_RFONT_QUES		1584
#define SPR_RFONT_A		1585
#define SPR_RFONT_B		1586
#define SPR_RFONT_C		1587
#define SPR_RFONT_D		1588
#define SPR_RFONT_E		1589
#define SPR_RFONT_F		1590
#define SPR_RFONT_G		1591
#define SPR_RFONT_H		1592
#define SPR_RFONT_I		1593
#define SPR_RFONT_J		1594
#define SPR_RFONT_K		1595
#define SPR_RFONT_L		1596
#define SPR_RFONT_M		1597
#define SPR_RFONT_N		1598
#define SPR_RFONT_O		1599
#define SPR_RFONT_P		1600
#define SPR_RFONT_Q		1601
#define SPR_RFONT_R		1602
#define SPR_RFONT_S		1603
#define SPR_RFONT_T		1604
#define SPR_RFONT_U		1605
#define SPR_RFONT_V		1606
#define SPR_RFONT_W		1607
#define SPR_RFONT_X		1608
#define SPR_RFONT_Y		1609
#define SPR_RFONT_Z		1610
#define SPR_RFONT_PLING		1611
#define SPR_RFONT_CURSOR	1612
#define SPR_GRAPPLE_HOOK	1613
#define SPR_GRAPPLE_LEFT	1614
#define SPR_GRAPPLE_RIGHT	1615
#define SPR_GRAPPLE_ROPE	1616
#define SPR_CB_LEFTPART		1617
#define SPR_CB_TOPPART		1618
#define SPR_CB_RIGHTPART	1619
#define SPR_CB_MOUTH1		1620
#define SPR_CB_MOUTH2		1621
#define SPR_CB_DAY1		1622
#define SPR_CB_DAY2		1623
#define SPR_CB_DAY3		1624
#define SPR_TUBE		1625
#define SPR_TOMATO_SPLAT1	1626
#define SPR_TOMATO_SPLAT2	1627
#define SPR_TOMATO_SPLAT3	1628
#define SPR_TOMATO_SPLAT4	1629
#define SPR_TOMATO_SPLAT5	1630
#define SPR_TOMATO_SPLAT6	1631
#define SPR_TOMATO_SPLAT7	1632
#define SPR_TOMATO_SPLAT8	1633
#define SPR_TOMATO_ROLL1	1634
#define SPR_TOMATO_ROLL2	1635
#define SPR_TOMATO_ROLL3	1636
#define SPR_TOMATO_ROLL4	1637
#define SPR_TOMATO_ROLL5	1638
#define SPR_TOMATO_ROLL6	1639
#define SPR_TOMATO_ROLL7	1640
#define SPR_TOMATO_ROLL8	1641
#define SPR_TOMATO_SUCKL1	1642
#define SPR_TOMATO_SUCKL2	1643
#define SPR_TOMATO_SUCKL3	1644
#define SPR_TOMATO_SUCKL4	1645
#define SPR_TOMATO_SUCKL5	1646
#define SPR_TOMATO_SUCKL6	1647
#define SPR_TOMATO_SUCKR1	1648
#define SPR_TOMATO_SUCKR2	1649
#define SPR_TOMATO_SUCKR3	1650
#define SPR_TOMATO_SUCKR4	1651
#define SPR_TOMATO_SUCKR5	1652
#define SPR_TOMATO_SUCKR6	1653
#define SPR_COMP_01		1654
#define SPR_COMP_02		1655
#define SPR_COMP_03		1656
#define SPR_COMP_04		1657
#define SPR_COMP_05		1658
#define SPR_COMP_06		1659
#define SPR_COMP_07		1660
#define SPR_COMP_08		1661
#define SPR_COMP_09		1662
#define SPR_COMP_10		1663
#define SPR_COMP_11		1664
#define SPR_COMP_12		1665
#define SPR_COMP_13		1666
#define SPR_COMP_14		1667
#define SPR_COMP_15		1668
#define SPR_COMP_16		1669
#define SPR_COMP_17		1670
#define SPR_COMP_18		1671
#define SPR_COMP_19		1672
#define SPR_COMP_20		1673
#define SPR_CRAB_LCLAW1		1674
#define SPR_CRAB_MPART		1675
#define SPR_CRAB_RCLAW1		1676
#define SPR_CRAB_LCLAW2		1677
#define SPR_CRAB_RCLAW2		1678
#define SPR_CRAB_PIPE		1679
#define SPR_CRAB_SEG		1680
#define SPR_CLOCK_LEFT		1681
#define SPR_CLOCK_MIDDLE	1682
#define SPR_CLOCK_RIGHT		1683
#define SPR_CLOCK_B1		1684
#define SPR_CLOCK_B2		1685
#define SPR_CLOCK_B3		1686
#define SPR_CLOCK_B4		1687
#define SPR_CLOCK_B5		1688
#define SPR_CLOCK_B6		1689
#define SPR_CLOCK_S01		1690
#define SPR_CLOCK_S02		1691
#define SPR_CLOCK_S03		1692
#define SPR_CLOCK_S04		1693
#define SPR_CLOCK_S05		1694
#define SPR_CLOCK_S06		1695
#define SPR_CLOCK_S07		1696
#define SPR_CLOCK_S08		1697
#define SPR_CLOCK_S09		1698
#define SPR_CLOCK_S10		1699
#define SPR_CLOCK_S11		1700
#define SPR_CLOCK_S12		1701
#define SPR_CLOCK_S13		1702
#define SPR_CLOCK_S14		1703
#define SPR_CLOCK_S15		1704
#define SPR_CLOCK_S16		1705
#define SPR_BOWLING_ROLL1	1706
#define SPR_BOWLING_ROLL2	1707
#define SPR_BOWLING_ROLL3	1708
#define SPR_BOWLING_ROLL4	1709
#define SPR_BOWLING_ROLL5	1710
#define SPR_BOWLING_ROLL6	1711
#define SPR_BOWLING_ROLL7	1712
#define SPR_BOWLING_ROLL8	1713
#define SPR_BOWLING_SUCKL1	1714
#define SPR_BOWLING_SUCKL2	1715
#define SPR_BOWLING_SUCKL3	1716
#define SPR_BOWLING_SUCKL4	1717
#define SPR_BOWLING_SUCKL5	1718
#define SPR_BOWLING_SUCKL6	1719
#define SPR_BOWLING_SUCKR6	1720
#define SPR_BOWLING_SUCKR5	1721
#define SPR_BOWLING_SUCKR4	1722
#define SPR_BOWLING_SUCKR3	1723
#define SPR_BOWLING_SUCKR2	1724
#define SPR_BOWLING_SUCKR1	1725
#define SPR_BOWLING_SKITTLE	1726
#define SPR_BLOCK_1		1727
#define SPR_BLOCK_2		1728
#define SPR_BLOCK_3		1729
#define SPR_BLOCK_SUCKL1	1730
#define SPR_BLOCK_SUCKL2	1731
#define SPR_BLOCK_SUCKL3	1732
#define SPR_BLOCK_SUCKL4	1733
#define SPR_BLOCK_SUCKL5	1734
#define SPR_BLOCK_SUCKL6	1735
#define SPR_BLOCK_SUCKR1	1736
#define SPR_BLOCK_SUCKR2	1737
#define SPR_BLOCK_SUCKR3	1738
#define SPR_BLOCK_SUCKR4	1739
#define SPR_BLOCK_SUCKR5	1740
#define SPR_BLOCK_SUCKR6	1741
#define SPR_SPRING_1		1742
#define SPR_SPRING_2		1743
#define SPR_SPRING_3		1744
#define SPR_SPRING_SUCKL1	1745
#define SPR_SPRING_SUCKL2	1746
#define SPR_SPRING_SUCKL3	1747
#define SPR_SPRING_SUCKL4	1748
#define SPR_SPRING_SUCKL5	1749
#define SPR_SPRING_SUCKL6	1750
#define SPR_SPRING_SUCKR1	1751
#define SPR_SPRING_SUCKR2	1752
#define SPR_SPRING_SUCKR3	1753
#define SPR_SPRING_SUCKR4	1754
#define SPR_SPRING_SUCKR5	1755
#define SPR_SPRING_SUCKR6	1756
#define SPR_DAY_1		1757
#define SPR_DAY_2		1758
#define SPR_DAY_3		1759
#define SPR_DAY_4		1760
#define SPR_POWER_YELLOWSTAR	1761
#define SPR_POWER_SAUSAGE	1762
#define SPR_POWER_GREENSTAR	1763
#define SPR_POWER_PURPLESTAR	1764
#define SPR_POWER_TURBO1	1765
#define SPR_POWER_TURBO2	1766
#define SPR_POWER_OIL		1767
#define SPR_POWER_TAP		1768
#define SPR_POWER_REDSTAR	1769
#define SPR_POWER_FEATHER	1770
#define SPR_POWER_WINGS		1771
#define SPR_POWER_COOKIE	1772
#define SPR_POWER_CHICKEN	1773
#define SPR_POWER_CHICKENEGG	1774
#define SPR_POWER_SPIN1		1775
#define SPR_POWER_SPIN2		1776
#define SPR_POWER_SPIN3		1777
#define SPR_POWER_SPIN4		1778
#define SPR_POWER_CANDLE1	1779
#define SPR_POWER_CANDLE2	1780
#define SPR_POWER_CANDLE3	1781
#define SPR_POWER_CANDLE4	1782
#define SPR_POWER_WHITEPOTION	1783
#define SPR_POWER_MOON		1784
#define SPR_POWER_MARBLE	1785
#define SPR_POWER_XYLOPHONE	1786
#define SPR_FLOWERS_SEED	1787
#define SPR_FLOWERS_1		1788
#define SPR_FLOWERS_2		1789
#define SPR_FLOWERS_3		1790
#define SPR_FLOWERS_4		1791
#define SPR_FLOWERS_5		1792
#define SPR_FLOWERS_6		1793
#define SPR_FLOWERS_A1		1794
#define SPR_FLOWERS_A2		1795
#define SPR_FLOWERS_A3		1796
#define SPR_FLOWERS_B1		1797
#define SPR_FLOWERS_B2		1798
#define SPR_FLOWERS_B3		1799
#define SPR_FLOWERS_C1		1800
#define SPR_FLOWERS_C2		1801
#define SPR_FLOWERS_C3		1802
#define SPR_FLOWERS_D1		1803
#define SPR_FLOWERS_D2		1804
#define SPR_FLOWERS_D3		1805
#define SPR_SAUSAGE_1		1806
#define SPR_SAUSAGE_2		1807
#define SPR_SAUSAGE_3		1808
#define SPR_SAUSAGE_4		1809
#define SPR_SAUSAGE_5		1810
#define SPR_SAUSAGE_6		1811
#define SPR_SAUSAGE_7		1812
#define SPR_SAUSAGE_8		1813
#define SPR_WATER_1		1814
#define SPR_WATER_2		1815
#define SPR_WATER_3		1816
#define SPR_WATER_LARGE		1817
#define SPR_OIL_1		1818
#define SPR_OIL_2		1819
#define SPR_OIL_3		1820
#define SPR_OIL_LARGE		1821
#define SPR_FIREL_1		1822
#define SPR_FIREL_2		1823
#define SPR_FIREL_3		1824
#define SPR_FIREL_4		1825
#define SPR_FIRER_1		1826
#define SPR_FIRER_2		1827
#define SPR_FIRER_3		1828
#define SPR_FIRER_4		1829
#define SPR_FIRE_F1		1830
#define SPR_FIRE_F2		1831
#define SPR_FIRE_F3		1832
#define SPR_FIRE_F4		1833
#define SPR_FIRE_A1		1834
#define SPR_FIRE_A2		1835
#define SPR_FIRE_A3		1836
#define SPR_FIRE_A4		1837
#define SPR_MARBLE_1		1838
#define SPR_MARBLE_2		1839
#define SPR_MARBLE_3		1840
#define SPR_MARBLE_4		1841
#define SPR_MASK_R1		1842
#define SPR_MASK_R2		1843
#define SPR_MASK_R3		1844
#define SPR_MASK_R4		1845
#define SPR_MASK_L1		1846
#define SPR_MASK_L2		1847
#define SPR_MASK_L3		1848
#define SPR_MASK_L4		1849
#define SPR_NOTES_G1		1850
#define SPR_NOTES_G2		1851
#define SPR_NOTES_G3		1852
#define SPR_NOTES_G4		1853
#define SPR_NOTES_G5		1854
#define SPR_NOTES_G6		1855
#define SPR_NOTES_P1		1856
#define SPR_NOTES_P2		1857
#define SPR_NOTES_P3		1858
#define SPR_NOTES_P4		1859
#define SPR_NOTES_P5		1860
#define SPR_NOTES_P6		1861
#define SPR_NOTES_Y1		1862
#define SPR_NOTES_Y2		1863
#define SPR_NOTES_Y3		1864
#define SPR_NOTES_Y4		1865
#define SPR_NOTES_Y5		1866
#define SPR_NOTES_Y6		1867
#define SPR_NOTES_B1		1868
#define SPR_NOTES_B2		1869
#define SPR_NOTES_B3		1870
#define SPR_NOTES_B4		1871
#define SPR_NOTES_B5		1872
#define SPR_NOTES_B6		1873
#define SPR_NOTES_R1		1874
#define SPR_NOTES_R2		1875
#define SPR_NOTES_R3		1876
#define SPR_NOTES_R4		1877
#define SPR_NOTES_R5		1878
#define SPR_NOTES_R6		1879
#define SPR_NOTES_R		1880
#define SPR_NOTES_Y		1881
#define SPR_NOTES_G		1882
#define SPR_NOTES_P		1883
#define SPR_NOTES_B		1884
#define SPR_NOTES_MAN1		1885
#define SPR_NOTES_MAN2		1886
#define SPR_TREAS_CHEST1L	1887
#define SPR_TREAS_CHEST1R	1888
#define SPR_TREAS_CHEST2L	1889
#define SPR_TREAS_CHEST2R	1890
#define SPR_TREAS_CHEST3L	1891
#define SPR_TREAS_CHEST3R	1892
#define SPR_TREAS_CHEST4L	1893
#define SPR_TREAS_CHEST4R	1894
#define SPR_TREAS_CHEESE	1895
#define SPR_TREAS_GOLD1		1896
#define SPR_TREAS_GOLD2		1897
#define SPR_TREAS_GOLD3		1898
#define SPR_TREAS_GOLD4		1899
#define SPR_TREAS_GOLD5		1900
#define SPR_TREAS_MONEY1	1901
#define SPR_TREAS_MONEY2	1902
#define SPR_TREAS_MONEY3	1903
#define SPR_TREAS_MONEY4	1904
#define SPR_TREAS_MONEY5	1905
#define SPR_TREAS_MONEY6	1906
#define SPR_TREAS_GEMSY1	1907
#define SPR_TREAS_GEMSY2	1908
#define SPR_TREAS_GEMSY3	1909
#define SPR_TREAS_GEMSG1	1910
#define SPR_TREAS_GEMSG2	1911
#define SPR_TREAS_GEMSG3	1912
#define SPR_TREAS_GEMSB1	1913
#define SPR_TREAS_GEMSB2	1914
#define SPR_TREAS_GEMSB3	1915
#define SPR_TREAS_GEMSP1	1916
#define SPR_TREAS_GEMSP2	1917
#define SPR_TREAS_GEMSP3	1918
#define SPR_TREAS_GEMSR1	1919
#define SPR_TREAS_GEMSR2	1920
#define SPR_TREAS_GEMSR3	1921
#define SPR_TREAS_BIGCHEESE1	1922
#define SPR_TREAS_BIGCHEESE2	1923
#define SPR_TREAS_CHEESEB1	1924
#define SPR_TREAS_CHEESEB2	1925
#define SPR_TREAS_CHEESEB3	1926
#define SPR_KEY_1		1927
#define SPR_KEY_2		1928
#define SPR_KEY_3		1929
#define SPR_KEY_4		1930
#define SPR_GEN_1		1931
#define SPR_GEN_2		1932
#define SPR_GEN_3		1933
#define SPR_GEN_4		1934
#define SPR_EGG_1		1935
#define SPR_EGG_2		1936
#define SPR_EGG_3		1937
#define SPR_EGG_4		1938
#define SPR_EGG_5		1939
#define SPR_EGG_6		1940
#define SPR_EGG_7		1941
#define SPR_EGG_8		1942
#define SPR_EGG_9		1943
#define SPR_LBOSS_L1		1944
#define SPR_LBOSS_L2		1945
#define SPR_LBOSS_L3		1946
#define SPR_LBOSS_L4		1947
#define SPR_LBOSS_L5		1948
#define SPR_LBOSS_L6		1949
#define SPR_LBOSS_L7		1950
#define SPR_LBOSS_L8		1951
#define SPR_LBOSS_DSMALL	1952
#define SPR_LBOSS_DLEFT		1953
#define SPR_LBOSS_DRIGHT	1954
#define SPR_LBOSS_R1		1955
#define SPR_LBOSS_R2		1956
#define SPR_LBOSS_R3		1957
#define SPR_LBOSS_R4		1958
#define SPR_LBOSS_R5		1959
#define SPR_LBOSS_R6		1960
#define SPR_LBOSS_R7		1961
#define SPR_LBOSS_R8		1962
#define SPR_LBOSS_ROLL1		1963
#define SPR_LBOSS_ROLL2		1964
#define SPR_LBOSS_ROLL3		1965
#define SPR_LBOSS_ROLL4		1966
#define SPR_LBOSS_ROLL5		1967
#define SPR_LBOSS_ROLL6		1968
#define SPR_LBOSS_ROLL7		1969
#define SPR_LBOSS_ROLL8		1970
#define SPR_LBOSS_SUCKL1	1971
#define SPR_LBOSS_SUCKL2	1972
#define SPR_LBOSS_SUCKL3	1973
#define SPR_LBOSS_SUCKL4	1974
#define SPR_LBOSS_SUCKL5	1975
#define SPR_LBOSS_SUCKL6	1976
#define SPR_LBOSS_SUCKR1	1977
#define SPR_LBOSS_SUCKR2	1978
#define SPR_LBOSS_SUCKR3	1979
#define SPR_LBOSS_SUCKR4	1980
#define SPR_LBOSS_SUCKR5	1981
#define SPR_LBOSS_SUCKR6	1982
#define SPR_LBOSS_HATCH1	1983
#define SPR_LBOSS_HATCH2	1984
#define SPR_LBOSS_FLEFT		1985
#define SPR_LBOSS_FMIDDLE	1986
#define SPR_LBOSS_FRIGHT	1987
#define SPR_LBOSS_B1		1988
#define SPR_LBOSS_B2		1989
#define SPR_LBOSS_B3		1990
#define SPR_LBOSS_B4		1991
#define SPR_LBOSS_B5		1992
#define SPR_LBOSS_B6		1993
#define SPR_LBOSS_B7		1994
#define SPR_LBOSS_B8		1995
#define SPR_LBOSS_B9		1996
#define SPR_LBOSS_B10		1997
#define SPR_LBOSS_BOOM		1998
#define SPR_EXPAND_A1		1999
#define SPR_EXPAND_B1		2000
#define SPR_EXPAND_B2		2001
#define SPR_EXPAND_C1		2002
#define SPR_EXPAND_C2		2003
#define SPR_EXPAND_D1		2004
#define SPR_EXPAND_D2		2005
#define SPR_EXPAND_D3		2006
#define SPR_EXPAND_E1		2007
#define SPR_EXPAND_E2		2008
#define SPR_EXPAND_E3		2009
#define SPR_ENDBLOX_DATA  	2010
#define SPR_ENDSPR_1		2011
#define SPR_ENDSPR_2		2012
#define SPR_ENDSPR_3		2013
#define SPR_ENDSPR_4		2014
#define SPR_ENDSPR_5		2015
#define SPR_ENDSPR_6		2016
#define SPR_ENDSPR_7		2017
#define SPR_ENDSPR_8		2018
#define SPR_ENDSPR_9		2019
#define SPR_ENDSPR_10		2020
#define SPR_ENDSPR_11		2021
#define SPR_ENDSPR_12		2022
#define SPR_ENDSPR_13		2023
#define SPR_ENDSPR_14		2024
#define SPR_ENDSPR_15		2025
#define SPR_ENDSPR_16		2026
#define SPR_ENDSPR_17		2027
#define SPR_ENDSPR_18		2028
#define SPR_ENDSPR_19		2029
#define SPR_ENDSPR_20		2030
#define SPR_ENDSPR_21		2031
#define SPR_ENDSPR_22		2032
#define SPR_ENDSPR_23		2033
#define SPR_ENDSPR_24		2034
#define SPR_ENDSPR_25		2035
#define SPR_ENDSPR_26		2036
#define SPR_ENDSPR_27		2037
#define SPR_ENDSPR_28		2038
#define SPR_ENDSPR_29		2039
#define SPR_ENDSPR_30		2040
#define SPR_BALLOON_1		2041
#define SPR_BALLOON_2		2042
#define SPR_BALLOON_3		2043
#define SPR_BALLOON_4		2044
#define SPR_BALLOON_5		2045
#define SPR_TITLE_DATA		2046
#define SPR_BLOW_LEFT1		2047
#define SPR_BLOW_LEFT2		2048
#define SPR_BLOW_LEFT3		2049
#define SPR_BLOW_LEFT4		2050
#define SPR_BLOW_LEFT5		2051
#define SPR_BLOW_LEFT6		2052
#define SPR_BLOW_LEFT7		2053
#define SPR_BLOW_LEFT8		2054
#define SPR_BLOW_RIGHT1		2055
#define SPR_BLOW_RIGHT2		2056
#define SPR_BLOW_RIGHT3		2057
#define SPR_BLOW_RIGHT4		2058
#define SPR_BLOW_RIGHT5		2059
#define SPR_BLOW_RIGHT6		2060
#define SPR_BLOW_RIGHT7		2061
#define SPR_BLOW_RIGHT8		2062
#define SPR_BLOW_STAND_R1 	2063
#define SPR_BLOW_STAND_R2 	2064
#define SPR_BLOW_HIT		2065
#define SPR_BLOW_STAND_L1 	2066
#define SPR_BLOW_STAND_L2 	2067
#define SPR_BLOW_OUCH		2068
#define SPR_BLOW_GUN_L1		2069
#define SPR_BLOW_GUN_L2		2070
#define SPR_BLOW_GUN_R2		2071
#define SPR_BLOW_GUN_R1		2072
#define SPR_BLOW_HANDLE_R	2073
#define SPR_BLOW_HANDLE_L	2074
#define SPR_GRAPPLE2_HOOK	2075
#define SPR_GRAPPLE2_LEFT	2076
#define SPR_GRAPPLE2_RIGHT	2077
#define SPR_GRAPPLE2_ROPE	2078
#define SPR_POWER_HARDHAT	2079
#define SPR_POWER_TAG		2080
#define SPR_POWER_PINKFROG	2081
#define SPR_SCRFONT_A		2082
#define SPR_SCRFONT_B		2083
#define SPR_SCRFONT_C		2084
#define SPR_SCRFONT_D		2085
#define SPR_SCRFONT_E		2086
#define SPR_SCRFONT_F		2087
#define SPR_SCRFONT_G		2088
#define SPR_SCRFONT_H		2089
#define SPR_SCRFONT_I		2090
#define SPR_SCRFONT_J		2091
#define SPR_SCRFONT_K		2092
#define SPR_SCRFONT_L		2093
#define SPR_SCRFONT_M		2094
#define SPR_SCRFONT_N		2095
#define SPR_SCRFONT_O		2096
#define SPR_SCRFONT_P		2097
#define SPR_SCRFONT_Q		2098
#define SPR_SCRFONT_R		2099
#define SPR_SCRFONT_S		2100
#define SPR_SCRFONT_T		2101
#define SPR_SCRFONT_U		2102
#define SPR_SCRFONT_V		2103
#define SPR_SCRFONT_W		2104
#define SPR_SCRFONT_X		2105
#define SPR_SCRFONT_Y		2106
#define SPR_SCRFONT_Z		2107
#define SPR_SCRFONT_0		2108
#define SPR_SCRFONT_1		2109
#define SPR_SCRFONT_2		2110
#define SPR_SCRFONT_3		2111
#define SPR_SCRFONT_4		2112
#define SPR_SCRFONT_5		2113
#define SPR_SCRFONT_6		2114
#define SPR_SCRFONT_7		2115
#define SPR_SCRFONT_8		2116
#define SPR_SCRFONT_9		2117
#define SPR_SCRFONT_DOT		2118
#define SPR_SCRFONT_SLASH	2119
#define SPR_SCRFONT_COLON	2120

#define SPR_END_NUMBER		2120	// Equal to the previous sprite
#define SPR_SIZE	(1+SPR_END_NUMBER - SPR_START_NUMBER)

#endif
