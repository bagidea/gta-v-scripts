#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
var uLocal_12 = 0;
var uLocal_13 = 0;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
vector3 vLocal_22 = {0f, 0f, 0f};
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (player::has_force_cleanup_occurred(34)) {
		if (player::get_cause_of_most_recent_force_cleanup() == 2) {
			if (Global_69964 != -1) {
				Global_69965 = Global_69964;
				Global_2621440 = Global_69964;
				func_977(Global_69964);
			}
			func_974();
		}
		func_972();
	}
	iLocal_57 = 0;
	Global_69971.f_1 = 0;
	Global_69971.f_2 = 1;
	while (true) {
		if (Global_69971.f_2) {
			iVar0 = 0;
			while (Global_69971.f_2 && iVar0 < 32) {
				if (gameplay::is_bit_set(Global_101700.f_8044.f_2[iVar0 /*3*/], 1)) {
					Global_69971.f_2 = 0;
				}
				else {
					iVar0++;
				}
				system::wait(250);
			}
		}
		else {
			if (!Global_101700.f_8044.f_1) {
				if (Global_101700.f_8044) {
					if (!Global_69971) {
						if (!gameplay::is_auto_save_in_progress()) {
							func_1();
						}
					}
				}
			}
			if (!streaming::is_player_switch_in_progress()) {
				if (Global_2590760 == -1) {
					iVar1 = 0;
					while (iVar1 < 63) {
						if (Global_100787[iVar1 /*10*/].f_4) {
							Global_2590760 = iVar1;
						}
						iVar1++;
					}
				}
				else if (!Global_100787[Global_2590760 /*10*/].f_4) {
					Global_2590760 = -1;
				}
			}
			system::wait(0);
		}
	}
}

// Position - 0x190
void func_1() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	func_941();
	iVar1 = 0;
	if (Global_69971.f_9 != -1) {
		iVar2 = 1;
		iLocal_56 = 0;
		iLocal_55 = Global_69971.f_9;
	}
	else if (Global_69971.f_7) {
		iLocal_55 = 0;
		iLocal_56 = 0;
		iVar2 = 32;
		Global_69971.f_7 = 0;
	}
	else {
		iVar2 = 2;
	}
	while (iVar1 < iVar2) {
		if (!gameplay::is_bit_set(Global_101700.f_8044.f_2[iLocal_55 /*3*/], 2)) {
			if (gameplay::is_bit_set(Global_101700.f_8044.f_2[iLocal_55 /*3*/], 1)) {
				iVar0 = iLocal_55;
				func_2(iVar0, 0);
				if (Global_69971.f_6) {
					func_2(iVar0, 1);
					Global_69971.f_6 = 0;
				}
				iVar1++;
			}
		}
		else {
			iLocal_56++;
			if (iLocal_56 == 32) {
				Global_101700.f_8044.f_1 = 1;
				Global_69971.f_1 = 0;
				return;
			}
		}
		iLocal_55++;
		if (iLocal_55 == 32) {
			if (!iLocal_57) {
				Global_69971.f_1 = 0;
			}
			iLocal_56++;
			iLocal_57 = 0;
			iLocal_56 = 0;
			iLocal_55 = 0;
		}
	}
}

// Position - 0x287
void func_2(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
	iVar1 = iVar0;
	iVar2 = Global_69971.f_12526[iParam0 /*2*/];
	iVar3 = Global_69971.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar2) {
		return;
	}
	if (iVar0 > iVar3) {
		return;
	}
	if (!gameplay::is_bit_set(Global_101700.f_8044.f_2[iParam0 /*3*/], 1)) {
		return;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_2[iParam0 /*3*/], 2)) {
		iLocal_56++;
		return;
	}
	func_3(iParam0, iVar0);
	iVar0 = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
	if (Global_69971.f_6825[iVar0 /*3*/] == 531432813) {
		func_3(iParam0, iVar0);
	}
	if (iParam1) {
		while (iVar1 != Global_101700.f_8044.f_2[iParam0 /*3*/].f_1) {
			iVar1 = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
			func_3(iParam0, Global_101700.f_8044.f_2[iParam0 /*3*/].f_1);
		}
	}
}

// Position - 0x381
void func_3(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = Global_69971.f_6825[iParam1 /*3*/];
	iVar2 = Global_69971.f_6825[iParam1 /*3*/].f_2;
	switch (iVar1) {
	case 485486536: iVar0 = -2; break;

	case 1677774865: iVar0 = func_940(iVar2); break;

	case -1750917831: iVar0 = -2; break;

	case 2058194871: iVar0 = func_939(iVar2); break;

	case 1909997983:
		gameplay::set_bit(&Global_101700.f_8044.f_2[iParam0 /*3*/], 2);
		iVar0 = -1;
		break;

	case -1878191811: iVar0 = func_938(iVar2); break;

	case -217347738: iVar0 = func_937(iVar2); break;

	case 531432813: iVar0 = -2; break;

	case 1144707570: iVar0 = func_936(iVar2); break;

	case 1984622930: iVar0 = func_935(iVar2); break;

	case -661286798: iVar0 = func_934(iVar2); break;

	case -1532130030: iVar0 = func_933(iVar2); break;

	case 1174602905: iVar0 = func_932(iVar2); break;

	case 1111033820: iVar0 = func_931(iVar2); break;

	case 1986927063: iVar0 = func_930(iVar2); break;

	case -1982716178: iVar0 = func_929(iVar2); break;

	case -964850613: iVar0 = func_928(iVar2); break;

	case -1913176419: iVar0 = func_927(iVar2); break;

	case 1210875743: iVar0 = func_926(iParam0, iVar2); break;

	case 427205337: iVar0 = func_925(iParam0, iVar2); break;

	case 712880499: iVar0 = func_924(iParam0, iVar2); break;

	case -1664179412: iVar0 = func_920(iParam0, iVar2); break;

	case 770100737: iVar0 = func_919(iVar2); break;

	case 939785963: iVar0 = func_916(iVar2); break;

	case -284134628: iVar0 = func_915(iVar2); break;

	case -2146402779: iVar0 = func_914(iVar2); break;

	case 2110689209: iVar0 = func_909(iVar2); break;

	case -2093459088: iVar0 = func_898(iParam0, iVar2); break;

	case -868169264: iVar0 = func_895(iVar2, iParam0); break;

	case 566451265: iVar0 = func_894(iVar2); break;

	case -115271859: iVar0 = func_893(iVar2); break;

	case 2021594245: iVar0 = func_892(iVar2); break;

	case -806419157: iVar0 = func_891(iVar2); break;

	case -1110793538: iVar0 = func_885(iVar2); break;

	case 2088328892: iVar0 = func_877(iVar2); break;

	case -1535636242: iVar0 = func_876(iVar2); break;

	default:
		if (!func_5(iVar1, iVar2, iParam0, &iVar0)) {
			iVar0 = -2;
		}
		break;
	}
	if (!gameplay::is_bit_set(Global_101700.f_8044.f_2[iParam0 /*3*/], 2)) {
		if (iVar0 != -1) {
			Global_69971.f_1 = 1;
			iLocal_57 = 1;
		}
		func_4(iParam0, iVar0);
	}
}

// Position - 0x669
void func_4(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0) {
	case -1:
	case 32: return;

	default:
	}
	if (!gameplay::is_bit_set(Global_101700.f_8044.f_2[iParam0 /*3*/], 1)) {
		return;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_2[iParam0 /*3*/], 2)) {
		return;
	}
	if (iParam1 == -1) {
		return;
	}
	if (iParam1 == -2) {
		Global_101700.f_8044.f_2[iParam0 /*3*/].f_1++;
		return;
	}
	iVar0 = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
	iVar1 = Global_69971.f_12526[iParam0 /*2*/];
	iVar2 = Global_69971.f_12526[iParam0 /*2*/].f_1;
	if (iVar0 < iVar1) {
		return;
	}
	if (iVar0 > iVar2) {
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2) {
		if (Global_69971.f_6825[iVar3 /*3*/] == 531432813) {
			iVar4 = Global_69971.f_6825[iVar3 /*3*/].f_2;
			iVar5 = Global_69971.f_109[iVar4 /*4*/];
			if (iVar5 == iParam1) {
				Global_101700.f_8044.f_2[iParam0 /*3*/].f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

// Position - 0x78D
int func_5(int iParam0, int iParam1, int iParam2, int *iParam3) {
	switch (iParam0) {
	case 744218195: *iParam3 = func_872(iParam1); break;

	case 749713072: *iParam3 = func_871(iParam1); break;

	case 139009950: *iParam3 = func_862(iParam1); break;

	case 1389104680: *iParam3 = func_861(iParam1); break;

	case 1641341968: *iParam3 = func_858(iParam1); break;

	case -1575504933: *iParam3 = func_857(iParam1); break;

	case 1370985682: *iParam3 = func_855(iParam1); break;

	case -1034402456: *iParam3 = func_853(iParam1); break;

	case 246500489: *iParam3 = func_851(iParam1); break;

	case 1289835772: *iParam3 = func_849(iParam1); break;

	case -1453576086: *iParam3 = func_847(iParam1); break;

	case 842516771: *iParam3 = func_845(iParam1); break;

	case -546916353: *iParam3 = func_837(iParam1); break;

	case 322211806: *iParam3 = func_834(iParam1); break;

	case -656046692: *iParam3 = func_823(iParam1); break;

	case -885022960: *iParam3 = func_822(iParam1); break;

	case 798013335: *iParam3 = func_812(iParam1); break;

	case -1030591046: *iParam3 = func_810(iParam1); break;

	case 569565703: *iParam3 = func_801(iParam1); break;

	case -635831521: *iParam3 = func_794(iParam1); break;

	case -1785731347: *iParam3 = func_793(iParam1); break;

	case -1421664484: *iParam3 = func_792(iParam1); break;

	case -644339536: *iParam3 = func_791(iParam1); break;

	case -159886710: *iParam3 = func_789(); break;

	case 1822409727: *iParam3 = func_788(iParam1); break;

	case -436729813: *iParam3 = func_787(iParam1); break;

	case 213552929: *iParam3 = func_786(iParam1); break;

	case 215526917: *iParam3 = func_785(iParam1); break;

	case -1597354430: *iParam3 = func_783(iParam1); break;

	case -49496173: *iParam3 = func_731(iParam1); break;

	case -1334818538: *iParam3 = func_710(iParam1); break;

	case -69665631: *iParam3 = func_706(iParam1); break;

	case -251919538: *iParam3 = func_698(iParam1); break;

	case -319289499: *iParam3 = func_697(iParam1); break;

	case 424223666: *iParam3 = func_696(iParam1); break;

	case 952363713: *iParam3 = func_695(iParam1); break;

	case 1572323470: *iParam3 = func_694(iParam1); break;

	case 828625388: *iParam3 = func_691(iParam1); break;

	case 1542529269: *iParam3 = func_690(iParam1); break;

	case -1283556585: *iParam3 = func_664(iParam1); break;

	case 553813353: *iParam3 = func_655(iParam1); break;

	case 889972124: *iParam3 = func_247(iParam2, iParam1); break;

	case -2093560018: *iParam3 = func_245(iParam1); break;

	case -26112892: *iParam3 = func_227(iParam1); break;

	case 2014563601:
		Global_69971.f_6 = 1;
		*iParam3 = -2;
		break;

	case -1309218325: *iParam3 = func_184(iParam1); break;

	case -1730578455: *iParam3 = func_112(iParam1); break;

	case 1845155857: *iParam3 = func_29(iParam1); break;

	case 1883604486: *iParam3 = func_20(iParam1); break;

	case 2048332261: *iParam3 = func_8(iParam1, iParam2); break;

	case 918415331: *iParam3 = func_6(iParam2); break;

	default: return 0;
	}
	return 1;
}

// Position - 0xB40
int func_6(int iParam0) {
	func_7(iParam0);
	return -2;
}

// Position - 0xB51
void func_7(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 != -1) {
		iVar0 = 0;
		while (iVar0 < Global_101700.f_8975.f_20) {
			if (Global_101700.f_8975[iVar0] == iParam0) {
				if (Global_101700.f_8975.f_20 > 1) {
					iVar1 = iVar0;
					while (iVar1 <= Global_101700.f_8975.f_20 - 2) {
						Global_101700.f_8975[iVar1] = Global_101700.f_8975[iVar1 + 1];
						Global_101700.f_8975.f_4[iVar1] = Global_101700.f_8975.f_4[iVar1 + 1];
						Global_101700.f_8975.f_8[iVar1] = Global_101700.f_8975.f_8[iVar1 + 1];
						Global_101700.f_8975.f_16[iVar1] = Global_101700.f_8975.f_16[iVar1 + 1];
						Global_101700.f_8975.f_12[iVar1] = Global_101700.f_8975.f_12[iVar1 + 1];
						iVar1++;
					}
				}
				if (Global_101700.f_8975.f_20 > 0) {
					Global_101700.f_8975[Global_101700.f_8975.f_20 - 1] = -1;
					Global_101700.f_8975.f_4[Global_101700.f_8975.f_20 - 1] = -1;
					Global_101700.f_8975.f_8[Global_101700.f_8975.f_20 - 1] = 0;
					Global_101700.f_8975.f_16[Global_101700.f_8975.f_20 - 1] = 0;
					Global_101700.f_8975.f_12[Global_101700.f_8975.f_20 - 1] = -1;
					Global_101700.f_8975.f_20--;
				}
				iVar0--;
			}
			iVar0++;
		}
	}
}

// Position - 0xCD6
int func_8(int iParam0, int iParam1) {
	var uVar0;
	int iVar1;

	if (iParam0 == -1) {
		return -2;
	}
	uVar0 = Global_69971.f_3590[iParam0 /*2*/];
	iVar1 = 0;
	if (Global_69971.f_3590[iParam0 /*2*/].f_1 == 1) {
		iVar1 = 1;
	}
	func_9(iParam1, uVar0, iVar1);
	return -2;
}

// Position - 0xD1B
void func_9(int iParam0, var uParam1, int iParam2) {
	int iVar0;

	if (Global_101700.f_8975.f_20 < 3) {
		if (iParam0 != -1) {
			iVar0 = 0;
			while (iVar0 < Global_101700.f_8975.f_20) {
				if (Global_101700.f_8975[iVar0] == iParam0) {
					Global_101700.f_8975.f_4[iVar0] = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
					Global_101700.f_8975.f_8[iVar0] = func_10(Global_101700.f_8044.f_2[iParam0 /*3*/].f_1);
					Global_101700.f_8975.f_12[iVar0] = uParam1;
					Global_101700.f_8975.f_16[iVar0] = iParam2;
					return;
				}
				iVar0++;
			}
			Global_101700.f_8975[Global_101700.f_8975.f_20] = iParam0;
			Global_101700.f_8975.f_4[Global_101700.f_8975.f_20] = Global_101700.f_8044.f_2[iParam0 /*3*/].f_1;
			Global_101700.f_8975.f_8[Global_101700.f_8975.f_20] = func_10(Global_101700.f_8044.f_2[iParam0 /*3*/].f_1);
			Global_101700.f_8975.f_12[Global_101700.f_8975.f_20] = uParam1;
			Global_101700.f_8975.f_16[Global_101700.f_8975.f_20] = iParam2;
			Global_101700.f_8975.f_20++;
		}
	}
}

// Position - 0xE61
var func_10(int iParam0) {
	struct<8> Var0;

	StringCopy(&Var0, "NULL", 64);
	if (iParam0 != -1) {
		switch (Global_69971.f_6825[iParam0 /*3*/].f_1) {
		case 12: func_19(iParam0, &Var0); break;

		case 0: func_18(iParam0, &Var0); break;

		case 1: func_17(iParam0, &Var0); break;

		case 2: func_16(iParam0, &Var0); break;

		case 3: func_15(iParam0, &Var0); break;

		case 4: func_14(iParam0, &Var0); break;

		case 7: func_13(iParam0, &Var0); break;

		case 8: func_11(iParam0, &Var0); break;
		}
	}
	return gameplay::get_hash_key(&Var0);
}

// Position - 0xF15
void func_11(int iParam0, char *sParam1) {
	char cVar0[64];

	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	IntToString(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/], 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_1, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_2, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_3, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_4, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_5, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_6, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_7, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_8, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_9, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_10, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_11, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_12, 64);
	StringIntConCat(&cVar0, Global_69971.f_6684[Global_69971.f_6825[iParam0 /*3*/].f_2 /*14*/].f_13, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
}

// Position - 0x10E4
int func_12(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32) {
		if (iParam0 >= Global_69971.f_12526[iVar0 /*2*/] && iParam0 <= Global_69971.f_12526[iVar0 /*2*/].f_1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x112B
void func_13(int iParam0, char *sParam1) {
	char cVar0[64];

	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	IntToString(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/], 64);
	StringIntConCat(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_1, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_2, 64);
	StringIntConCat(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_3, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_4, 64);
	StringIntConCat(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_5, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_6, 64);
	StringIntConCat(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_7, 64);
	StringIntConCat(&cVar0, Global_69971.f_4824[Global_69971.f_6825[iParam0 /*3*/].f_2 /*11*/].f_8, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
}

// Position - 0x126E
void func_14(int iParam0, char *sParam1) {
	char cVar0[64];

	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	MemCopy(&cVar0, {Global_69971.f_4160[Global_69971.f_6825[iParam0 /*3*/].f_2 /*12*/]}, 16);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_4160[Global_69971.f_6825[iParam0 /*3*/].f_2 /*12*/].f_8, 64);
	StringIntConCat(&cVar0, Global_69971.f_4160[Global_69971.f_6825[iParam0 /*3*/].f_2 /*12*/].f_9, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_4160[Global_69971.f_6825[iParam0 /*3*/].f_2 /*12*/].f_10, 64);
	StringIntConCat(&cVar0, Global_69971.f_4160[Global_69971.f_6825[iParam0 /*3*/].f_2 /*12*/].f_11, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
}

// Position - 0x133C
void func_15(int iParam0, char *sParam1) {
	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	StringConCat(sParam1, &Global_69971.f_4151[Global_69971.f_6825[iParam0 /*3*/].f_2 /*8*/], 64);
}

// Position - 0x1377
void func_16(int iParam0, char *sParam1) {
	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	StringIntConCat(sParam1, Global_69971.f_3590[Global_69971.f_6825[iParam0 /*3*/].f_2 /*2*/], 64);
	StringIntConCat(sParam1, Global_69971.f_3590[Global_69971.f_6825[iParam0 /*3*/].f_2 /*2*/].f_1, 64);
}

// Position - 0x13CE
void func_17(int iParam0, char *sParam1) {
	char cVar0[64];

	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	IntToString(&cVar0, Global_69971.f_109[Global_69971.f_6825[iParam0 /*3*/].f_2 /*4*/], 64);
	StringIntConCat(&cVar0, Global_69971.f_109[Global_69971.f_6825[iParam0 /*3*/].f_2 /*4*/].f_1, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
	IntToString(&cVar0, Global_69971.f_109[Global_69971.f_6825[iParam0 /*3*/].f_2 /*4*/].f_2, 64);
	StringIntConCat(&cVar0, Global_69971.f_109[Global_69971.f_6825[iParam0 /*3*/].f_2 /*4*/].f_3, 64);
	StringIntConCat(sParam1, gameplay::get_hash_key(&cVar0), 64);
}

// Position - 0x146D
void func_18(int iParam0, char *sParam1) {
	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
	StringIntConCat(sParam1, Global_69971.f_6825[iParam0 /*3*/].f_2, 64);
}

// Position - 0x149F
void func_19(int iParam0, char *sParam1) {
	IntToString(sParam1, Global_69971.f_6825[iParam0 /*3*/], 64);
	StringIntConCat(sParam1, func_12(iParam0), 64);
}

// Position - 0x14C0
int func_20(int iParam0) {
	int iVar0;

	if (Global_69962) {
		return -1;
	}
	iVar0 = iParam0;
	if (func_24(iVar0)) {
		return -2;
	}
	Global_101700.f_2095.f_4092 = iVar0;
	func_21(iVar0, 1);
	return -2;
}

// Position - 0x14FD
int func_21(int iParam0, int iParam1) {
	if (!func_23() && func_22(iParam0)) {
		if (!func_24(iParam0) || network::network_is_game_in_progress()) {
			Global_89302.f_45 = iParam0;
			Global_89302.f_46 = 0;
			Global_89302.f_44 = 1;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (iParam1) {
					player::set_player_invincible(player::player_id(), 1);
				}
				gameplay::clear_area_of_projectiles(entity::get_entity_coords(player::player_ped_id(), 1), 5f, 0);
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0x1570
bool func_22(int iParam0) { return iParam0 < 3; }

// Position - 0x157C
bool func_23() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return false;
}

// Position - 0x1598
bool func_24(int iParam0) {
	func_25();
	return iParam0 == Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x15B4
void func_25() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_28(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_27(player::player_ped_id());
			if (func_22(iVar0) && (!func_26(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_22(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0x16B1
bool func_26(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x16BF
int func_27(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_28(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x16FC
int func_28(int iParam0) {
	if (func_22(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1726
int func_29(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1) {
		return -2;
	}
	iVar0 = Global_69971.f_109[iParam0 /*4*/];
	if (!func_22(iVar0)) {
		return -2;
	}
	iVar1 = Global_69971.f_109[iParam0 /*4*/].f_1;
	iVar2 = Global_69971.f_109[iParam0 /*4*/].f_2;
	func_111(func_28(iVar0), iVar2, iVar1, 1);
	func_30(func_28(iVar0), iVar2, iVar1, 1, 1);
	return -2;
}

// Position - 0x1796
int func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_69523[1 /*14*/] = {func_43(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_42(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 1,
					0);
			if (iParam1 == 12) {
				iVar0 = 1;
				if (iParam0 == joaat("player_zero")) {
					if (iParam2 == 31) {
						iVar0 = 0;
					}
				}
				if (iVar0 == 1) {
					uVar3 = {func_38(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14) {
						if (uVar3[iVar1] != -99 && iVar1 != 12 && iVar1 != 14) {
							if (iVar1 != 13) {
								func_30(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_111(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else {
								uVar20 = {func_31(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8) {
									func_30(iParam0, 14, uVar20[iVar2], 1, 1);
									func_111(iParam0, 14, uVar20[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else {
			func_42(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 0,
					1);
		}
		if (iParam4 == 1 && iParam3 == 1) {
			switch (iParam0) {
			case joaat("player_zero"): break;

			case joaat("player_one"):
				switch (iParam1) {
				case 3:
					if (iParam2 >= 176 && iParam2 <= 191) {
						iVar30 = 227 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 3, iVar30, 1, 0);
					}
					else if (iParam2 >= 227 && iParam2 <= 242) {
						iVar30 = 176 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 3, iVar30, 1, 0);
					}
					break;

				case 11:
					if (iParam2 >= 9 && iParam2 <= 24) {
						iVar30 = 25 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 11, iVar30, 1, 0);
					}
					else if (iParam2 >= 25 && iParam2 <= 40) {
						iVar30 = 9 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 11, iVar30, 1, 0);
					}
					break;

				case 8:
					if (iParam2 >= 27 && iParam2 <= 42) {
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 43 && iParam2 <= 58) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 59 && iParam2 <= 74) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 8, iVar30, 1, 0);
					}
					break;

				case 14:
					if (iParam2 >= 64 && iParam2 <= 79) {
						iVar30 = 41 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 14, iVar30, 1, 0);
					}
					break;
				}
				break;

			case joaat("player_two"):
				switch (iParam1) {
				case 4:
					if (iParam2 >= 81 && iParam2 <= 90) {
						iVar30 = 94 + Global_69523[1 /*14*/].f_4;
						func_30(iParam0, 4, iVar30, 1, 0);
					}
					break;

				case 12:
					if (iParam2 == 2) {
						func_30(iParam0, 14, 17, 1, 0);
					}
					break;
				}
				break;
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0x1B7D
struct<10> func_31(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_37(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_37(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_37(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_37(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_37(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_37(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_37(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_37(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_37(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_37(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_37(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_32(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_37(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_37(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_37(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_37(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_37(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_37(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_37(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_37(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_37(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_37(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_32(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_37(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_37(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_37(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_37(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_37(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_37(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_37(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_37(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_37(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_37(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_32(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_37(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_37(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_37(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_37(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_37(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_37(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_37(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_37(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_37(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_37(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_37(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_37(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_37(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_37(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_37(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_37(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_37(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_37(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_37(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_37(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_37(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_37(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_37(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_37(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_37(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_37(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_32(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_37(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_37(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_37(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_37(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_37(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_37(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_37(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_37(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_37(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_37(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_37(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_37(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_37(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_37(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_37(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_37(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_37(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_37(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_37(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_37(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_37(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_37(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_37(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_37(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_37(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_32(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x24AC
void func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_33(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x25D6
int func_33(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_36(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_35(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_34(iParam0, func_35(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x26B6
int func_34(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x2A5D
int func_35(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x2B0D
int func_36(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x2B6E
void func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x2BB6
struct<17> func_38(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_41(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_41(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_41(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_41(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_41(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_41(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_41(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_41(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_41(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_41(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_41(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_41(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_41(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_41(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_41(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_41(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_41(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_41(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_41(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_41(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_41(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_41(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_41(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_41(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_41(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_41(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_41(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_41(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_41(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_41(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_41(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_41(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_41(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_41(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_41(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_41(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_41(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_41(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_41(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_41(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_41(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_41(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_41(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_41(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_41(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_41(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_41(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_41(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_41(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_41(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_41(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_41(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_41(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_41(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_39(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_41(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_41(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_41(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_41(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_41(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_41(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_41(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_41(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_41(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_41(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_41(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_41(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_41(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_41(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_41(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_41(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_41(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_41(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_41(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_41(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_41(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_41(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_41(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_41(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_41(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_41(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_41(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_41(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_41(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_41(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_41(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_41(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_41(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_41(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_41(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_41(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_41(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_41(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_41(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_41(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_41(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_41(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_41(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_41(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_41(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_41(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_41(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_39(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_41(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_41(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_41(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_41(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_41(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_41(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_41(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_41(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_41(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_41(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_41(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_41(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_41(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_41(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_41(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_41(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_41(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_41(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_41(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_41(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_41(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_41(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_41(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_41(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_41(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_41(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_41(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_41(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_41(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_41(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_41(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_41(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_41(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_41(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_41(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_41(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_41(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_41(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_41(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_41(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_41(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_41(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_41(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_41(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_41(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_41(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_41(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_41(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_39(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_41(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_41(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_41(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_41(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_41(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_41(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_41(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_41(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_41(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_41(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_41(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_41(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_41(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_41(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_41(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_41(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_41(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_41(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_41(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_41(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_41(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_41(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_41(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_41(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_41(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_41(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_39(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_41(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_41(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_41(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_41(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_41(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_41(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_41(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_41(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_41(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_41(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_41(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_41(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_41(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_41(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_41(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_41(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_41(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_41(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_41(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_41(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_41(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_41(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_41(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_41(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_41(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_41(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_41(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_41(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_39(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x4A01
void func_39(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_40(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_40(vVar16.z)] = func_33(iParam1, vVar16.x, func_40(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_40(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0x4BEB
int func_40(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x4C9B
void func_41(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0x4D0C
bool func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x5C2A
struct<14> func_43(int iParam0, int iParam1, int iParam2) {
	func_110();
	if (iParam0 == joaat("player_zero")) {
		func_92(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_73(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_44(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x5C7C
void func_44(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_72(iParam1); break;

	case 2: func_71(iParam1); break;

	case 3: func_68(iParam1); break;

	case 4: func_67(iParam1); break;

	case 6: func_66(iParam1); break;

	case 5: func_65(iParam1); break;

	case 8: func_64(iParam1); break;

	case 9: func_63(iParam1); break;

	case 10: func_62(iParam1); break;

	case 1: func_61(iParam1); break;

	case 7: func_60(iParam1); break;

	case 11: func_59(iParam1); break;

	case 12: func_58(iParam1); break;

	case 13: func_57(iParam1); break;

	case 14: func_45(iParam1); break;
	}
}

// Position - 0x5D6C
void func_45(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_56(iVar10, iParam0, 155); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x6F58
void func_46(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_55(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_26(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_53(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_53(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_53(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_53(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_53(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_53(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_42(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_42(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_42(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_26(14)) {
				return;
			}
			iVar0 = func_49(func_52(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_49(func_48(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_47(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_49(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0x72E7
bool func_47(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0x76EC
int func_48(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0x7AE7
int func_49(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x7B19
int func_50(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_51();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x7B4D
int func_51() { return Global_1312735; }

// Position - 0x7B59
int func_52(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0x7F54
int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_54(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_49(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x7F96
bool func_54(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x91B1
int func_55(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0x9285
void func_56(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_46(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_46(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_46(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_35(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_46(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x94FE
void func_57(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 9); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9640
void func_58(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 48); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9B4B
void func_59(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 1); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9BBD
void func_60(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 1); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9C2E
void func_61(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 6); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9D14
void func_62(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_56(iVar10, iParam0, 33); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA034
void func_63(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_56(iVar10, iParam0, 17); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA232
void func_64(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 18); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA441
void func_65(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 7); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA542
void func_66(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_56(iVar10, iParam0, 84); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xAEC6
void func_67(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_56(iVar10, iParam0, 104); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBA02
void func_68(int iParam0) {
	if (iParam0 < 136) {
		func_70(iParam0);
	}
	else {
		func_69(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_56(3, iParam0, 242);
	}
}

// Position - 0xBA36
void func_69(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC63A
void func_70(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD52C
void func_71(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 9); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD658
void func_72(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_56(iVar10, iParam0, 7); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD747
void func_73(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_91(iParam1); break;

	case 2: func_90(iParam1); break;

	case 3: func_86(iParam1); break;

	case 4: func_85(iParam1); break;

	case 6: func_84(iParam1); break;

	case 5: func_83(iParam1); break;

	case 8: func_82(iParam1); break;

	case 9: func_81(iParam1); break;

	case 10: func_80(iParam1); break;

	case 1: func_79(iParam1); break;

	case 7: func_78(iParam1); break;

	case 11: func_77(iParam1); break;

	case 12: func_76(iParam1); break;

	case 13: func_75(iParam1); break;

	case 14: func_74(iParam1); break;
	}
}

// Position - 0xD837
void func_74(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_56(iVar10, iParam0, 175); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xECDF
void func_75(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 9); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEE1B
void func_76(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 47); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF323
void func_77(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_56(iVar10, iParam0, 63); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF986
void func_78(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 1); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF9F7
void func_79(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 5); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFAC6
void func_80(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 53); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFF8B
void func_81(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 12); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10115
void func_82(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 77); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x108F4
void func_83(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 7); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x109F5
void func_84(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_56(iVar10, iParam0, 134); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1190F
void func_85(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_56(iVar10, iParam0, 117); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x125AB
void func_86(int iParam0) {
	if (iParam0 < 107) {
		func_89(iParam0);
	}
	else if (iParam0 < 227) {
		func_88(iParam0);
	}
	else {
		func_87(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_56(3, iParam0, 318);
	}
}

// Position - 0x125F0
void func_87(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13093
void func_88(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13E80
void func_89(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14C0E
void func_90(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 21); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14E84
void func_91(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_56(iVar10, iParam0, 10); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14FB5
void func_92(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_109(iParam1); break;

	case 2: func_108(iParam1); break;

	case 3: func_105(iParam1); break;

	case 4: func_104(iParam1); break;

	case 6: func_103(iParam1); break;

	case 5: func_102(iParam1); break;

	case 8: func_101(iParam1); break;

	case 9: func_100(iParam1); break;

	case 10: func_99(iParam1); break;

	case 1: func_98(iParam1); break;

	case 7: func_97(iParam1); break;

	case 11: func_96(iParam1); break;

	case 12: func_95(iParam1); break;

	case 13: func_94(iParam1); break;

	case 14: func_93(iParam1); break;
	}
}

// Position - 0x150A5
void func_93(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_56(iVar10, iParam0, 113); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15DD6
void func_94(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 10); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15F39
void func_95(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 53); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x164A3
void func_96(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 45); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x169C8
void func_97(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 1); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16A39
void func_98(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 5); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16B08
void func_99(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_56(iVar10, iParam0, 48); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16F8F
void func_100(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 20); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x171DB
void func_101(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 24); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17484
void func_102(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_56(iVar10, iParam0, 14); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x17630
void func_103(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_56(iVar10, iParam0, 99); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18169
void func_104(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 113); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x18D82
void func_105(int iParam0) {
	if (iParam0 < 60) {
		func_107(iParam0);
	}
	else {
		func_106(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_56(3, iParam0, 181);
	}
}

// Position - 0x18DB6
void func_106(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x19B3C
void func_107(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A1B4
void func_108(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_56(iVar10, iParam0, 6); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A298
void func_109(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_56(iVar10, iParam0, 7); return;
	}
	func_46(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1A387
void func_110() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x1A3FE
int func_111(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_43(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_42(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 1,
					0);
		}
		else {
			func_42(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 0,
					1);
		}
		return 1;
	}
	return 0;
}

// Position - 0x1A499
int func_112(int iParam0) {
	int iVar0;
	int iVar1;
	struct<60> Var2;

	if (iParam0 == -1) {
		return -2;
	}
	iVar0 = Global_69971.f_109[iParam0 /*4*/];
	iVar1 = Global_69971.f_109[iParam0 /*4*/].f_1;
	if (Global_69971.f_109[iParam0 /*4*/].f_2 == 1) {
		Var2.f_9 = 49;
		Var2.f_59 = 2;
		func_113(iVar0, iVar1, &Var2, -1);
	}
	return -2;
}

// Position - 0x1A4F5
void func_113(int iParam0, int iParam1, var *uParam2, int iParam3) {
	int iVar0;
	struct<78> Var1;

	if (iParam3 != -1) {
		func_178(293, 0, 0);
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2) {
		return;
	}
	gameplay::set_bit(&Global_101700.f_24141[iParam0], iVar0);
	if (iParam1 == 0) {
		Global_101700.f_24141.f_313[iParam0] = Global_68511;
	}
	else if (iParam1 == 1) {
		Global_101700.f_24141.f_626[iParam0] = Global_68511;
	}
	else {
		iParam1 = 2;
		Global_101700.f_24141.f_939[iParam0] = Global_68511;
	}
	func_175(iParam0);
	Var1.f_9 = 49;
	Var1.f_59 = 2;
	Var1.f_78 = -1;
	Var1.f_95 = -1;
	Var1.f_96 = 1;
	Var1.f_98 = 132;
	Var1.f_99 = -1;
	Var1 = {*uParam2};
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 128:
	case 89:
	case 103:
	case 122:
	case 123:
	case 124:
	case 132:
	case 133:
	case 134:
	case 135:
	case 125:
	case 138:
	case 139:
	case 105:
	case 155:
	case 106:
	case 108:
	case 127:
	case 93:
	case 99:
	case 143:
	case 145:
	case 100:
	case 147:
	case 101:
	case 149:
	case 146:
	case 144:
	case 167:
	case 168:
	case 169:
	case 170:
	case 161:
	case 202:
	case 204:
	case 205:
	case 203:
	case 206:
	case 207:
	case 208:
	case 209:
	case 148:
	case 97:
	case 98:
	case 112:
	case 115:
	case 165:
	case 166:
	case 210:
	case 211:
	case 212:
	case 213:
	case 214:
	case 216:
	case 218:
	case 219:
	case 220:
	case 221:
	case 222:
	case 223:
	case 225:
		stats::_0x11FF1C80276097ED(joaat("sp0_crouched"), 10, 0);
		switch (iParam1) {
		case 0: func_115(iParam1, func_174(21), iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, func_174(22), iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, func_174(23), iParam3, iParam0, &Var1); break;
		}
		break;

	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 199:
	case 113:
	case 162:
	case 163:
	case 215:
	case 257:
	case 253:
		switch (iParam1) {
		case 0: func_115(iParam1, 12, iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, 13, iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, 14, iParam3, iParam0, &Var1); break;
		}
		break;

	case 20: stats::_0x11FF1C80276097ED(joaat("sp0_crouched"), 30, 0);

	case 15:
	case 16:
	case 19:
	case 164:
	case 217:
	case 254:
		switch (iParam1) {
		case 0: func_115(iParam1, 18, iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, 19, iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, 20, iParam3, iParam0, &Var1); break;
		}
		break;

	case 17: stats::_0x11FF1C80276097ED(joaat("sp0_crouched"), 20, 0);

	case 18:
	case 22:
	case 21:
	case 200:
		switch (iParam1) {
		case 0: func_115(iParam1, 12, iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, 13, iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, 14, iParam3, iParam0, &Var1); break;
		}
		break;

	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 201:
	case 102:
	case 173:
	case 224:
	case 245:
	case 258:
		switch (iParam1) {
		case 0: func_115(iParam1, 15, iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, 16, iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, 17, iParam3, iParam0, &Var1); break;
		}
		break;

	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
		switch (iParam1) {
		case 0: func_115(iParam1, func_174(21), iParam3, iParam0, &Var1); break;

		case 1: func_115(iParam1, func_174(22), iParam3, iParam0, &Var1); break;

		case 2: func_115(iParam1, func_174(23), iParam3, iParam0, &Var1); break;
		}
		break;

	default:
		switch (func_114(iParam0)) {
		case 0:
			switch (iParam1) {
			case 0: func_115(iParam1, func_174(21), iParam3, iParam0, &Var1); break;

			case 1: func_115(iParam1, func_174(22), iParam3, iParam0, &Var1); break;

			case 2: func_115(iParam1, func_174(23), iParam3, iParam0, &Var1); break;
			}
			break;

		case 1:
			switch (iParam1) {
			case 0: func_115(iParam1, 12, iParam3, iParam0, &Var1); break;

			case 1: func_115(iParam1, 13, iParam3, iParam0, &Var1); break;

			case 2: func_115(iParam1, 14, iParam3, iParam0, &Var1); break;
			}
			break;

		case 2:
			switch (iParam1) {
			case 0: func_115(iParam1, 15, iParam3, iParam0, &Var1); break;

			case 1: func_115(iParam1, 16, iParam3, iParam0, &Var1); break;

			case 2: func_115(iParam1, 17, iParam3, iParam0, &Var1); break;
			}
			break;

		case 3:
			switch (iParam1) {
			case 0: func_115(iParam1, 18, iParam3, iParam0, &Var1); break;

			case 1: func_115(iParam1, 19, iParam3, iParam0, &Var1); break;

			case 2: func_115(iParam1, 20, iParam3, iParam0, &Var1); break;
			}
			break;
		}
		break;
	}
}

// Position - 0x1ACBE
int func_114(int iParam0) {
	switch (iParam0) {
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 17:
	case 22:
	case 21:
	case 113:
	case 162:
	case 163:
	case 177:
	case 188:
	case 199:
	case 200:
	case 215:
	case 257:
	case 253: return 1;

	case 20:
	case 19:
	case 15:
	case 16:
	case 164:
	case 185:
	case 187:
	case 217:
	case 243:
	case 244:
	case 254: return 3;

	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 102:
	case 173:
	case 201:
	case 224:
	case 258: return 2;

	default:
	}
	return 0;
}

// Position - 0x1ADE8
void func_115(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4) {
	bool bVar0;
	int iVar1;
	int iVar2;
	int *iVar3;

	if (func_22(iParam0)) {
		Global_101700.f_31389.f_1982[iParam0 /*939*/][iParam3] = iParam2;
		Global_101700.f_31389.f_1982[iParam0 /*939*/].f_313[iParam3] = iParam1;
		if (iParam2 == -1) {
			bVar0 = true;
			if (func_173(iParam1)) {
				if (func_169(&Global_68531.f_555[0 /*21*/], iParam1) && Global_68531.f_555[0 /*21*/].f_4 != 0) {
					bVar0 = false;
				}
			}
			if (bVar0) {
				func_168(uParam4);
				func_139(iParam3, uParam4, 0, iParam0, -1);
				gameplay::set_bit(&uParam4->f_77, 14);
				func_133(iParam1, uParam4, 0f, 0f, 0f, -1f, 145);
			}
		}
		else {
			iVar1 = gameplay::get_random_int_in_range(0, 60);
			iVar2 = gameplay::get_random_int_in_range(0, 60);
			iVar3 = func_132();
			if (iParam1 == 21 || iParam1 == 22 || iParam1 == 23 || iParam1 == 26 || iParam1 == 29 || iParam1 == 32 ||
				iParam1 == 27 || iParam1 == 30 || iParam1 == 33 || iParam1 == 28 || iParam1 == 31 || iParam1 == 34) {
				func_168(uParam4);
				func_139(iParam3, uParam4, 0, iParam0, -1);
				gameplay::set_bit(&uParam4->f_77, 14);
				func_133(iParam1, uParam4, 0f, 0f, 0f, -1f, 145);
				gameplay::clear_bit(&Global_101700.f_24141[iParam3], iParam0);
			}
			else {
				func_116(&iVar3, iVar1, iVar2, 5, 0, 0, 0);
			}
			Global_101700.f_31389.f_1982[iParam0 /*939*/].f_626[iParam3] = iVar3;
		}
	}
}

// Position - 0x1AF93
void func_116(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_130(*iParam0);
	iVar1 = func_129(*iParam0);
	iVar2 = func_128(*iParam0);
	iVar3 = func_127(*iParam0);
	iVar4 = func_126(*iParam0);
	iVar5 = func_125(*iParam0);
	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0) {
		return;
	}
	if (iParam1 < 0) {
		return;
	}
	if (iParam2 < 0) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam4 < 0) {
		return;
	}
	if (iParam5 < 0) {
		return;
	}
	if (iParam6 < 0) {
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60) {
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60) {
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24) {
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_124(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_124(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_117(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x1B115
void func_117(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_123(iParam0, iParam1);
	func_122(iParam0, iParam2);
	func_121(iParam0, iParam3);
	func_120(iParam0, iParam5);
	func_119(iParam0, iParam4);
	func_118(iParam0, iParam6);
}

// Position - 0x1B14D
void func_118(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x1B1D3
void func_119(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_129(*uParam0);
	iVar1 = func_130(*uParam0);
	if (iParam1 < 1 || iParam1 > func_124(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x1B224
void func_120(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x1B257
void func_121(int iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*iParam0 -= (*iParam0 & 15872);
	*iParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x1B291
void func_122(int iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 1032192);
	*iParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x1B2CC
void func_123(int iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 66060288);
	*iParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x1B308
int func_124(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x1B3AA
int func_125(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x1B3BD
int func_126(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x1B3D0
int func_127(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x1B3E3
int func_128(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x1B3F5
int func_129(int iParam0) { return iParam0 & 15; }

// Position - 0x1B402
var func_130(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_131(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x1B427
int func_131(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x1B43E
int func_132() {
	int *iVar0;

	func_123(&iVar0, time::get_clock_seconds());
	func_122(&iVar0, time::get_clock_minutes());
	func_121(&iVar0, time::get_clock_hours());
	func_119(&iVar0, time::get_clock_day_of_month());
	func_120(&iVar0, time::get_clock_month());
	func_118(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x1B484
void func_133(int iParam0, var *uParam1, vector3 vParam2, float fParam5, int iParam6) {
	if (func_169(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_138(iParam0);
			func_137(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = fParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_134(iParam0, 1);
		}
	}
}

// Position - 0x1B583
void func_134(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_136(iParam0, 0)) {
			func_135(iParam0, 1, 0);
			func_135(iParam0, 2, 0);
			func_135(iParam0, 3, 0);
			func_135(iParam0, 4, 0);
			func_135(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_135(iParam0, 0, 0);
	}
}

// Position - 0x1B5E0
void func_135(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x1B61B
int func_136(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x1B63E
void func_137(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0x1B70A
void func_138(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_169(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_134(iParam0, 0);
		}
	}
}

// Position - 0x1B784
void func_139(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int *iVar2;
	int *iVar3;
	int *iVar4;
	int *iVar5;
	int *iVar6;
	int *iVar7;
	int *iVar8;
	int *iVar9;
	int *iVar10;
	int *iVar11;
	int *iVar12;
	int iVar13;
	char *sVar14;
	int iVar18;
	int *iVar19;
	int *iVar20;
	int iVar21;
	char *sVar22;
	int iVar26;
	int *iVar27;
	int *iVar28;

	uParam1->f_66 = func_167(iParam0, iParam4);
	if (uParam1->f_66 == 0) {
		if (iParam2) {
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger")) {
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_166(iParam0, &uParam1->f_77);
	uParam1->f_9[16] = 0;
	if (iParam0 == 181 || iParam0 == 178 || iParam0 == 179) {
		uParam1->f_9[16] = 4;
	}
	else if (func_165(iParam0)) {
		if (Global_68512) {
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218) {
		uParam1->f_9[23] = 7;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_98 = 0;
	if (iParam0 == 251) {
		uParam1->f_98 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263) {
		if (Global_68512) {
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (iParam0 == 320 || iParam0 == 321 || iParam0 == 322) {
		uParam1->f_9[0] = 1;
	}
	if (iParam2) {
		iVar0 = Global_68511;
	}
	else if (iParam3 == 0) {
		iVar0 = Global_101700.f_24141.f_313[iParam0];
	}
	else if (iParam3 == 1) {
		iVar0 = Global_101700.f_24141.f_626[iParam0];
	}
	else if (iParam3 == 2) {
		iVar0 = Global_101700.f_24141.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200) {
		switch (iVar0) {
		case 1:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 2:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 3:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 4:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 5:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 6:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 7:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 8:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 9:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 10:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 11:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 12:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 13:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 14:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 15:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 16:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 17:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 18:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 19:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 20:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 21:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 22:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 23:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 24:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		case 25:
			func_146(func_147(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_145(func_147(iParam0, iVar0));
			break;

		default: break;
		}
	}
	else if (iParam0 == 219) {
		switch (iVar0) {
		case 1:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 1;
			break;

		case 2:
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 2;
			break;

		case 3:
			uParam1->f_5 = 135;
			uParam1->f_6 = 135;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 3;
			break;

		case 4:
			uParam1->f_5 = 59;
			uParam1->f_6 = 59;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 8;
			break;

		case 5:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 4;
			break;

		case 6:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 5;
			break;

		case 7:
			uParam1->f_5 = 42;
			uParam1->f_6 = 42;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 7;
			break;

		case 8:
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 6;
			break;

		default: break;
		}
	}
	else {
		switch (iVar0) {
		case 1:
			if (func_144(iParam0)) {
				if (iParam0 != 164) {
					if (func_143(iParam0, iVar0, &iVar1)) {
						uParam1->f_9[48] = iVar1;
					}
					else if (func_142(iParam0, iVar0, &iVar2, &iVar3, &iVar1)) {
						uParam1->f_5 = iVar2;
						uParam1->f_6 = iVar3;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
							uParam1->f_98 = 134;
						}
						else {
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = iVar1;
					}
					else {
						uParam1->f_67 = 0;
					}
				}
				else {
					uParam1->f_67 = func_145(func_147(iParam0, iVar0));
				}
			}
			else if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 143;
					uParam1->f_6 = 34;
					uParam1->f_7 = 31;
					uParam1->f_96 = 99;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 40;
					uParam1->f_6 = 40;
					uParam1->f_96 = 93;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 27;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 27;
				uParam1->f_6 = 36;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 27;
				uParam1->f_6 = 36;
				uParam1->f_67 = -1;
			}
			break;

		case 2:
			if (func_144(iParam0)) {
				if (iParam0 != 164) {
					if (func_143(iParam0, iVar0, &iVar4)) {
						uParam1->f_9[48] = iVar4;
					}
					else if (func_142(iParam0, iVar0, &iVar5, &iVar6, &iVar4)) {
						uParam1->f_5 = iVar5;
						uParam1->f_6 = iVar6;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
							uParam1->f_98 = 134;
						}
						else {
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = iVar4;
					}
					else {
						uParam1->f_67 = 1;
					}
				}
				else {
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_7 = 4;
					uParam1->f_8 = 156;
					uParam1->f_67 = func_145(func_147(iParam0, iVar0));
				}
			}
			else if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 8;
					uParam1->f_6 = 8;
					uParam1->f_7 = 5;
					uParam1->f_96 = 106;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 14;
					uParam1->f_6 = 14;
					uParam1->f_96 = 108;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 135;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_67 = -1;
			}
			break;

		case 3:
			if (func_144(iParam0)) {
				if (func_143(iParam0, iVar0, &iVar7)) {
					uParam1->f_9[48] = iVar7;
				}
				else if (func_142(iParam0, iVar0, &iVar8, &iVar9, &iVar7)) {
					uParam1->f_5 = iVar8;
					uParam1->f_6 = iVar9;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_96 = 1;
					if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
						uParam1->f_98 = 134;
					}
					else {
						uParam1->f_98 = 0;
					}
					uParam1->f_9[48] = iVar7;
				}
				else {
					uParam1->f_67 = 2;
				}
			}
			else if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 100;
					uParam1->f_6 = 100;
					uParam1->f_7 = 100;
					uParam1->f_96 = 22;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_96 = 22;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 88;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 88;
				uParam1->f_6 = 88;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 88;
				uParam1->f_6 = 88;
				uParam1->f_67 = -1;
			}
			break;

		case 4:
			if (func_144(iParam0)) {
				if (func_143(iParam0, iVar0, &iVar10)) {
					uParam1->f_9[48] = iVar10;
				}
				else if (func_142(iParam0, iVar0, &iVar11, &iVar12, &iVar10)) {
					uParam1->f_5 = iVar11;
					uParam1->f_6 = iVar12;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_96 = 1;
					if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
						uParam1->f_98 = 134;
					}
					else {
						uParam1->f_98 = 0;
					}
					uParam1->f_9[48] = iVar10;
				}
				else {
					uParam1->f_67 = 3;
				}
			}
			else if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 99;
					uParam1->f_6 = 99;
					uParam1->f_7 = 106;
					uParam1->f_96 = 101;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 99;
					uParam1->f_6 = 99;
					uParam1->f_96 = 48;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 38;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 38;
				uParam1->f_6 = 27;
				while (func_140(iVar13, &sVar14, &iVar18, &iVar19, &iVar20)) {
					if (gameplay::are_strings_equal(&sVar14, "ORANGE") && iVar18 == 1) {
						uParam1->f_5 = iVar19;
						uParam1->f_6 = iVar20;
						iVar13 = -99;
					}
					iVar13++;
				}
				uParam1->f_67 = -1;
			}
			break;

		case 5:
			if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 49;
					uParam1->f_6 = 49;
					uParam1->f_7 = 52;
					uParam1->f_96 = 98;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_96 = 99;
					uParam1->f_67 = -1;
				}
			}
			else if (iParam0 == 178 || iParam0 == 179 || iParam0 == 192) {
				uParam1->f_5 = 152;
				uParam1->f_6 = 152;
				uParam1->f_7 = 18;
				uParam1->f_8 = 152;
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 128;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 128;
				uParam1->f_6 = 55;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 128;
				uParam1->f_6 = 0;
				while (func_140(iVar21, &sVar22, &iVar26, &iVar27, &iVar28)) {
					if (gameplay::are_strings_equal(&sVar22, "LIME_GREEN") && iVar26 == 1) {
						uParam1->f_5 = iVar27;
						uParam1->f_6 = iVar28;
						iVar21 = -99;
					}
					iVar21++;
				}
				uParam1->f_67 = -1;
			}
			break;

		case 6:
			if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 141;
					uParam1->f_6 = 141;
					uParam1->f_7 = 73;
					uParam1->f_96 = 5;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 84;
					uParam1->f_6 = 84;
					uParam1->f_96 = 24;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 64;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 64;
				uParam1->f_6 = 63;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 64;
				uParam1->f_6 = 68;
				uParam1->f_67 = -1;
			}
			break;

		case 7:
			if (uParam1->f_66 == joaat("kuruma2")) {
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 13;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
			}
			else if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_7 = 10;
					uParam1->f_96 = 1;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_96 = 0;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 0;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 0;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 0;
				uParam1->f_6 = 10;
				uParam1->f_67 = -1;
			}
			break;

		case 8:
			if (func_165(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 112;
					uParam1->f_6 = 112;
					uParam1->f_7 = 0;
					uParam1->f_96 = 7;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 131;
					uParam1->f_6 = 131;
					uParam1->f_96 = 78;
					uParam1->f_67 = -1;
				}
			}
			else if (func_141(iParam0)) {
				uParam1->f_5 = 111;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 111;
				uParam1->f_6 = 0;
				uParam1->f_67 = -1;
			}
			break;

		default: break;
		}
	}
	if (iVar0 == 0) {
		switch (iParam0) {
		case 32:
			uParam1->f_5 = 111;
			uParam1->f_6 = 65;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 13:
			uParam1->f_5 = 46;
			uParam1->f_6 = 24;
			uParam1->f_7 = 46;
			uParam1->f_8 = 24;
			uParam1->f_67 = -1;
			break;

		case 33:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 34:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 35:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 36:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 37:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 38:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 206:
			uParam1->f_5 = 2;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 29;
			uParam1->f_67 = -1;
			break;

		case 207:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 126;
			uParam1->f_67 = -1;
			break;

		case 208:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 29;
			uParam1->f_67 = -1;
			break;

		case 209:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 139;
			uParam1->f_67 = -1;
			break;

		case 210:
			uParam1->f_5 = 28;
			uParam1->f_6 = 0;
			uParam1->f_7 = 14;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 213:
			uParam1->f_5 = 38;
			uParam1->f_6 = 38;
			uParam1->f_7 = 42;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 212:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 27;
			uParam1->f_67 = -1;
			break;

		case 17:
			uParam1->f_5 = 30;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 215:
			uParam1->f_5 = 159;
			uParam1->f_6 = 0;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 217:
			uParam1->f_5 = 159;
			uParam1->f_6 = 0;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 205:
			uParam1->f_5 = 12;
			uParam1->f_6 = 12;
			uParam1->f_7 = 0;
			uParam1->f_8 = 12;
			uParam1->f_67 = -1;
			break;

		case 227:
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_67 = -1;
			break;

		case 226:
			uParam1->f_5 = 36;
			uParam1->f_6 = 36;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 230:
			uParam1->f_5 = 41;
			uParam1->f_6 = 41;
			uParam1->f_7 = 156;
			uParam1->f_8 = 0;
			uParam1->f_67 = -1;
			break;

		default: break;
		}
	}
	if (iParam0 == 161) {
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231) {
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290) {
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291) {
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304) {
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 305) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308) {
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 309) {
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 310) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (uParam1->f_67 >= 0) {
	}
	else if (iParam0 == 195) {
		uParam1->f_67 = 1;
	}
}

// Position - 0x1CDB7
bool func_140(int iParam0, char *sParam1, int *iParam2, int *iParam3, int *iParam4) {
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0) {
	case 0:
		StringCopy(sParam1, "BR BLACK_STEEL", 16);
		*iParam2 = 3;
		*iParam3 = 118;
		*iParam4 = 3;
		break;

	case 1:
		StringCopy(sParam1, "BLACK_GRAPHITE", 16);
		*iParam2 = 0;
		*iParam3 = 147;
		*iParam4 = 4;
		break;

	case 2:
		StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 96;
		*iParam4 = 0;
		break;

	case 3:
		StringCopy(sParam1, "PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 71;
		*iParam4 = 145;
		break;

	case 4:
		StringCopy(sParam1, "HOT PINK", 16);
		*iParam2 = 0;
		*iParam3 = 135;
		*iParam4 = 135;
		break;

	case 5:
		StringCopy(sParam1, "FORMULA_RED", 16);
		*iParam2 = 0;
		*iParam3 = 29;
		*iParam4 = 28;
		break;

	case 6:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 64;
		*iParam4 = 68;
		break;

	case 7:
		StringCopy(sParam1, "ULTRA_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 70;
		*iParam4 = 0;
		break;

	case 8:
		StringCopy(sParam1, "RACING_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 50;
		*iParam4 = 0;
		break;

	case 9:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 2;
		*iParam3 = 55;
		*iParam4 = 0;
		break;

	case 10:
		StringCopy(sParam1, "RACE_YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 89;
		*iParam4 = 0;
		break;

	case 11:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 38;
		*iParam4 = 0;
		break;

	case 12:
		StringCopy(sParam1, "GOLD", 16);
		*iParam2 = 0;
		*iParam3 = 37;
		*iParam4 = 106;
		break;

	case 13:
		StringCopy(sParam1, "SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 4;
		*iParam4 = 111;
		break;

	case 14:
		StringCopy(sParam1, "CHROME", 16);
		*iParam2 = 4;
		*iParam3 = 120;
		*iParam4 = 0;
		break;

	case 15:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 1;
		*iParam3 = 111;
		*iParam4 = 0;
		break;

	case 16:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 0;
		*iParam3 = 0;
		*iParam4 = 10;
		break;

	case 17:
		StringCopy(sParam1, "GRAPHITE", 16);
		*iParam2 = 0;
		*iParam3 = 1;
		*iParam4 = 5;
		break;

	case 18:
		StringCopy(sParam1, "ANTHR_BLACK", 16);
		*iParam2 = 0;
		*iParam3 = 11;
		*iParam4 = 2;
		break;

	case 19:
		StringCopy(sParam1, "BLACK_STEEL", 16);
		*iParam2 = 0;
		*iParam3 = 2;
		*iParam4 = 5;
		break;

	case 20:
		StringCopy(sParam1, "DARK_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 3;
		*iParam4 = 6;
		break;

	case 21:
		StringCopy(sParam1, "BLUE_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 5;
		*iParam4 = 111;
		break;

	case 22:
		StringCopy(sParam1, "ROLLED_STEEL", 16);
		*iParam2 = 0;
		*iParam3 = 6;
		*iParam4 = 4;
		break;

	case 23:
		StringCopy(sParam1, "SHADOW_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 7;
		*iParam4 = 5;
		break;

	case 24:
		StringCopy(sParam1, "STONE_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 8;
		*iParam4 = 5;
		break;

	case 25:
		StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 9;
		*iParam4 = 7;
		break;

	case 26:
		StringCopy(sParam1, "CAST_IRON_SIL", 16);
		*iParam2 = 0;
		*iParam3 = 10;
		*iParam4 = 7;
		break;

	case 27:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 0;
		*iParam3 = 27;
		*iParam4 = 36;
		break;

	case 28:
		StringCopy(sParam1, "TORINO_RED", 16);
		*iParam2 = 0;
		*iParam3 = 28;
		*iParam4 = 28;
		break;

	case 29:
		StringCopy(sParam1, "LAVA_RED", 16);
		*iParam2 = 0;
		*iParam3 = 150;
		*iParam4 = 42;
		break;

	case 30:
		StringCopy(sParam1, "BLAZE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 30;
		*iParam4 = 36;
		break;

	case 31:
		StringCopy(sParam1, "GRACE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 31;
		*iParam4 = 27;
		break;

	case 32:
		StringCopy(sParam1, "GARNET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 32;
		*iParam4 = 25;
		break;

	case 33:
		StringCopy(sParam1, "SUNSET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 33;
		*iParam4 = 47;
		break;

	case 34:
		StringCopy(sParam1, "CABERNET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 34;
		*iParam4 = 47;
		break;

	case 35:
		StringCopy(sParam1, "WINE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 143;
		*iParam4 = 31;
		break;

	case 36:
		StringCopy(sParam1, "CANDY_RED", 16);
		*iParam2 = 0;
		*iParam3 = 35;
		*iParam4 = 25;
		break;

	case 37:
		StringCopy(sParam1, "PINK", 16);
		*iParam2 = 0;
		*iParam3 = 137;
		*iParam4 = 3;
		break;

	case 38:
		StringCopy(sParam1, "SALMON_PINK", 16);
		*iParam2 = 0;
		*iParam3 = 136;
		*iParam4 = 5;
		break;

	case 39:
		StringCopy(sParam1, "SUNRISE_ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 36;
		*iParam4 = 26;
		break;

	case 40:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 38;
		*iParam4 = 37;
		break;

	case 41:
		StringCopy(sParam1, "BRIGHT_ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 138;
		*iParam4 = 89;
		break;

	case 42:
		StringCopy(sParam1, "BRONZE", 16);
		*iParam2 = 0;
		*iParam3 = 90;
		*iParam4 = 102;
		break;

	case 43:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 88;
		*iParam4 = 88;
		break;

	case 44:
		StringCopy(sParam1, "RACE_YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 89;
		*iParam4 = 88;
		break;

	case 45:
		StringCopy(sParam1, "FLUR_YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 91;
		*iParam4 = 91;
		break;

	case 46:
		StringCopy(sParam1, "DARK_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 49;
		*iParam4 = 52;
		break;

	case 47:
		StringCopy(sParam1, "RACING_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 50;
		*iParam4 = 53;
		break;

	case 48:
		StringCopy(sParam1, "SEA_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 51;
		*iParam4 = 66;
		break;

	case 49:
		StringCopy(sParam1, "OLIVE_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 52;
		*iParam4 = 59;
		break;

	case 50:
		StringCopy(sParam1, "BRIGHT_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 53;
		*iParam4 = 59;
		break;

	case 51:
		StringCopy(sParam1, "PETROL_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 54;
		*iParam4 = 60;
		break;

	case 52:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 92;
		*iParam4 = 92;
		break;

	case 53:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 141;
		*iParam4 = 73;
		break;

	case 54:
		StringCopy(sParam1, "GALAXY_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 61;
		*iParam4 = 63;
		break;

	case 55:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 62;
		*iParam4 = 68;
		break;

	case 56:
		StringCopy(sParam1, "SAXON_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 63;
		*iParam4 = 87;
		break;

	case 57:
		StringCopy(sParam1, "MARINER_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 65;
		*iParam4 = 87;
		break;

	case 58:
		StringCopy(sParam1, "HARBOR_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 66;
		*iParam4 = 60;
		break;

	case 59:
		StringCopy(sParam1, "DIAMOND_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 67;
		*iParam4 = 67;
		break;

	case 60:
		StringCopy(sParam1, "SURF_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 68;
		*iParam4 = 68;
		break;

	case 61:
		StringCopy(sParam1, "NAUTICAL_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 69;
		*iParam4 = 74;
		break;

	case 62:
		StringCopy(sParam1, "RACING_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 73;
		*iParam4 = 73;
		break;

	case 63:
		StringCopy(sParam1, "ULTRA_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 70;
		*iParam4 = 70;
		break;

	case 64:
		StringCopy(sParam1, "LIGHT_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 74;
		*iParam4 = 74;
		break;

	case 65:
		StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 96;
		*iParam4 = 95;
		break;

	case 66:
		StringCopy(sParam1, "BISON_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 101;
		*iParam4 = 95;
		break;

	case 67:
		StringCopy(sParam1, "CREEK_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 95;
		*iParam4 = 97;
		break;

	case 68:
		StringCopy(sParam1, "UMBER_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 94;
		*iParam4 = 104;
		break;

	case 69:
		StringCopy(sParam1, "MAPLE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 97;
		*iParam4 = 98;
		break;

	case 70:
		StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 103;
		*iParam4 = 104;
		break;

	case 71:
		StringCopy(sParam1, "SIENNA_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 104;
		*iParam4 = 104;
		break;

	case 72:
		StringCopy(sParam1, "SADDLE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 98;
		*iParam4 = 95;
		break;

	case 73:
		StringCopy(sParam1, "MOSS_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 100;
		*iParam4 = 100;
		break;

	case 74:
		StringCopy(sParam1, "WOODBEECH_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 102;
		*iParam4 = 105;
		break;

	case 75:
		StringCopy(sParam1, "STRAW_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 99;
		*iParam4 = 106;
		break;

	case 76:
		StringCopy(sParam1, "SANDY_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 105;
		*iParam4 = 105;
		break;

	case 77:
		StringCopy(sParam1, "BLEECHED_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 106;
		*iParam4 = 106;
		break;

	case 78:
		StringCopy(sParam1, "SPIN_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 72;
		*iParam4 = 64;
		break;

	case 79:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 146;
		*iParam4 = 145;
		break;

	case 80:
		StringCopy(sParam1, "BRIGHT_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 145;
		*iParam4 = 74;
		break;

	case 81:
		StringCopy(sParam1, "CREAM", 16);
		*iParam2 = 0;
		*iParam3 = 107;
		*iParam4 = 107;
		break;

	case 82:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 0;
		*iParam3 = 111;
		*iParam4 = 0;
		break;

	case 83:
		StringCopy(sParam1, "FROST_WHITE", 16);
		*iParam2 = 0;
		*iParam3 = 112;
		*iParam4 = 0;
		break;

	case 84:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 1;
		*iParam3 = 0;
		*iParam4 = 0;
		break;

	case 85:
		StringCopy(sParam1, "BLACK_GRAPHITE", 16);
		*iParam2 = 1;
		*iParam3 = 147;
		*iParam4 = 0;
		break;

	case 86:
		StringCopy(sParam1, "GRAPHITE", 16);
		*iParam2 = 1;
		*iParam3 = 1;
		*iParam4 = 0;
		break;

	case 87:
		StringCopy(sParam1, "ANTHR_BLACK", 16);
		*iParam2 = 1;
		*iParam3 = 11;
		*iParam4 = 0;
		break;

	case 88:
		StringCopy(sParam1, "BLACK_STEEL", 16);
		*iParam2 = 1;
		*iParam3 = 2;
		*iParam4 = 0;
		break;

	case 89:
		StringCopy(sParam1, "DARK_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 3;
		*iParam4 = 2;
		break;

	case 90:
		StringCopy(sParam1, "SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 4;
		*iParam4 = 4;
		break;

	case 91:
		StringCopy(sParam1, "BLUE_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 5;
		*iParam4 = 5;
		break;

	case 92:
		StringCopy(sParam1, "ROLLED_STEEL", 16);
		*iParam2 = 1;
		*iParam3 = 6;
		*iParam4 = 0;
		break;

	case 93:
		StringCopy(sParam1, "SHADOW_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 7;
		*iParam4 = 0;
		break;

	case 94:
		StringCopy(sParam1, "STONE_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 8;
		*iParam4 = 0;
		break;

	case 95:
		StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 9;
		*iParam4 = 0;
		break;

	case 96:
		StringCopy(sParam1, "CAST_IRON_SIL", 16);
		*iParam2 = 1;
		*iParam3 = 10;
		*iParam4 = 0;
		break;

	case 97:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 1;
		*iParam3 = 27;
		*iParam4 = 0;
		break;

	case 98:
		StringCopy(sParam1, "TORINO_RED", 16);
		*iParam2 = 1;
		*iParam3 = 28;
		*iParam4 = 0;
		break;

	case 99:
		StringCopy(sParam1, "FORMULA_RED", 16);
		*iParam2 = 1;
		*iParam3 = 29;
		*iParam4 = 0;
		break;

	case 100:
		StringCopy(sParam1, "LAVA_RED", 16);
		*iParam2 = 1;
		*iParam3 = 150;
		*iParam4 = 0;
		break;

	case 101:
		StringCopy(sParam1, "BLAZE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 30;
		*iParam4 = 0;
		break;

	case 102:
		StringCopy(sParam1, "GRACE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 31;
		*iParam4 = 0;
		break;

	case 103:
		StringCopy(sParam1, "GARNET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 32;
		*iParam4 = 0;
		break;

	case 104:
		StringCopy(sParam1, "SUNSET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 33;
		*iParam4 = 0;
		break;

	case 105:
		StringCopy(sParam1, "CABERNET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 34;
		*iParam4 = 0;
		break;

	case 106:
		StringCopy(sParam1, "WINE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 143;
		*iParam4 = 0;
		break;

	case 107:
		StringCopy(sParam1, "CANDY_RED", 16);
		*iParam2 = 1;
		*iParam3 = 35;
		*iParam4 = 0;
		break;

	case 108:
		StringCopy(sParam1, "HOT PINK", 16);
		*iParam2 = 1;
		*iParam3 = 135;
		*iParam4 = 0;
		break;

	case 109:
		StringCopy(sParam1, "PINK", 16);
		*iParam2 = 1;
		*iParam3 = 137;
		*iParam4 = 0;
		break;

	case 110:
		StringCopy(sParam1, "SALMON_PINK", 16);
		*iParam2 = 1;
		*iParam3 = 136;
		*iParam4 = 0;
		break;

	case 111:
		StringCopy(sParam1, "SUNRISE_ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 36;
		*iParam4 = 0;
		break;

	case 112:
		StringCopy(sParam1, "BRIGHT_ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 138;
		*iParam4 = 0;
		break;

	case 113:
		StringCopy(sParam1, "GOLD", 16);
		*iParam2 = 1;
		*iParam3 = 99;
		*iParam4 = 99;
		break;

	case 114:
		StringCopy(sParam1, "BRONZE", 16);
		*iParam2 = 1;
		*iParam3 = 90;
		*iParam4 = 102;
		break;

	case 115:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 88;
		*iParam4 = 0;
		break;

	case 116:
		StringCopy(sParam1, "FLUR_YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 91;
		*iParam4 = 0;
		break;

	case 117:
		StringCopy(sParam1, "DARK_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 49;
		*iParam4 = 0;
		break;

	case 118:
		StringCopy(sParam1, "SEA_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 51;
		*iParam4 = 0;
		break;

	case 119:
		StringCopy(sParam1, "OLIVE_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 52;
		*iParam4 = 0;
		break;

	case 120:
		StringCopy(sParam1, "BRIGHT_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 53;
		*iParam4 = 0;
		break;

	case 121:
		StringCopy(sParam1, "PETROL_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 54;
		*iParam4 = 0;
		break;

	case 122:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 92;
		*iParam4 = 0;
		break;

	case 123:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 141;
		*iParam4 = 0;
		break;

	case 124:
		StringCopy(sParam1, "GALAXY_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 61;
		*iParam4 = 0;
		break;

	case 125:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 62;
		*iParam4 = 0;
		break;

	case 126:
		StringCopy(sParam1, "SAXON_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 63;
		*iParam4 = 0;
		break;

	case 127:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 64;
		*iParam4 = 0;
		break;

	case 128:
		StringCopy(sParam1, "MARINER_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 65;
		*iParam4 = 0;
		break;

	case 129:
		StringCopy(sParam1, "HARBOR_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 66;
		*iParam4 = 0;
		break;

	case 130:
		StringCopy(sParam1, "DIAMOND_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 67;
		*iParam4 = 0;
		break;

	case 131:
		StringCopy(sParam1, "SURF_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 68;
		*iParam4 = 0;
		break;

	case 132:
		StringCopy(sParam1, "NAUTICAL_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 69;
		*iParam4 = 0;
		break;

	case 133:
		StringCopy(sParam1, "RACING_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 73;
		*iParam4 = 0;
		break;

	case 134:
		StringCopy(sParam1, "LIGHT_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 74;
		*iParam4 = 0;
		break;

	case 135:
		StringCopy(sParam1, "BISON_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 101;
		*iParam4 = 0;
		break;

	case 136:
		StringCopy(sParam1, "CREEK_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 95;
		*iParam4 = 0;
		break;

	case 137:
		StringCopy(sParam1, "UMBER_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 94;
		*iParam4 = 0;
		break;

	case 138:
		StringCopy(sParam1, "MAPLE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 97;
		*iParam4 = 0;
		break;

	case 139:
		StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 103;
		*iParam4 = 0;
		break;

	case 140:
		StringCopy(sParam1, "SIENNA_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 104;
		*iParam4 = 0;
		break;

	case 141:
		StringCopy(sParam1, "SADDLE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 98;
		*iParam4 = 0;
		break;

	case 142:
		StringCopy(sParam1, "MOSS_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 100;
		*iParam4 = 0;
		break;

	case 143:
		StringCopy(sParam1, "WOODBEECH_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 102;
		*iParam4 = 0;
		break;

	case 144:
		StringCopy(sParam1, "STRAW_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 99;
		*iParam4 = 0;
		break;

	case 145:
		StringCopy(sParam1, "SANDY_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 105;
		*iParam4 = 0;
		break;

	case 146:
		StringCopy(sParam1, "BLEECHED_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 106;
		*iParam4 = 0;
		break;

	case 147:
		StringCopy(sParam1, "PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 71;
		*iParam4 = 0;
		break;

	case 148:
		StringCopy(sParam1, "SPIN_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 72;
		*iParam4 = 0;
		break;

	case 149:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 142;
		*iParam4 = 0;
		break;

	case 150:
		StringCopy(sParam1, "BRIGHT_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 145;
		*iParam4 = 0;
		break;

	case 151:
		StringCopy(sParam1, "CREAM", 16);
		*iParam2 = 1;
		*iParam3 = 107;
		*iParam4 = 0;
		break;

	case 152:
		StringCopy(sParam1, "FROST_WHITE", 16);
		*iParam2 = 1;
		*iParam3 = 112;
		*iParam4 = 0;
		break;

	case 153:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 2;
		*iParam3 = 12;
		*iParam4 = 0;
		break;

	case 154:
		StringCopy(sParam1, "GREY", 16);
		*iParam2 = 2;
		*iParam3 = 13;
		*iParam4 = 0;
		break;

	case 155:
		StringCopy(sParam1, "LIGHT_GREY", 16);
		*iParam2 = 2;
		*iParam3 = 14;
		*iParam4 = 0;
		break;

	case 156:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 2;
		*iParam3 = 131;
		*iParam4 = 0;
		break;

	case 157:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 83;
		*iParam4 = 0;
		break;

	case 158:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 82;
		*iParam4 = 0;
		break;

	case 159:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 84;
		*iParam4 = 0;
		break;

	case 160:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 2;
		*iParam3 = 149;
		*iParam4 = 0;
		break;

	case 161:
		StringCopy(sParam1, "Purple", 16);
		*iParam2 = 2;
		*iParam3 = 148;
		*iParam4 = 0;
		break;

	case 162:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 2;
		*iParam3 = 39;
		*iParam4 = 0;
		break;

	case 163:
		StringCopy(sParam1, "DARK_RED", 16);
		*iParam2 = 2;
		*iParam3 = 40;
		*iParam4 = 0;
		break;

	case 164:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 2;
		*iParam3 = 41;
		*iParam4 = 0;
		break;

	case 165:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 2;
		*iParam3 = 42;
		*iParam4 = 0;
		break;

	case 166:
		StringCopy(sParam1, "GREEN", 16);
		*iParam2 = 2;
		*iParam3 = 128;
		*iParam4 = 0;
		break;

	case 167:
		StringCopy(sParam1, "MATTE_FOR", 16);
		*iParam2 = 2;
		*iParam3 = 151;
		*iParam4 = 0;
		break;

	case 168:
		StringCopy(sParam1, "MATTE_FOIL", 16);
		*iParam2 = 2;
		*iParam3 = 155;
		*iParam4 = 0;
		break;

	case 169:
		StringCopy(sParam1, "MATTE_OD", 16);
		*iParam2 = 2;
		*iParam3 = 152;
		*iParam4 = 0;
		break;

	case 170:
		StringCopy(sParam1, "MATTE_DIRT", 16);
		*iParam2 = 2;
		*iParam3 = 153;
		*iParam4 = 0;
		break;

	case 171:
		StringCopy(sParam1, "MATTE_DESERT", 16);
		*iParam2 = 2;
		*iParam3 = 154;
		*iParam4 = 0;
		break;

	case 172:
		StringCopy(sParam1, "BR_STEEL", 16);
		*iParam2 = 3;
		*iParam3 = 117;
		*iParam4 = 18;
		break;

	case 173:
		StringCopy(sParam1, "BR_ALUMINIUM", 16);
		*iParam2 = 3;
		*iParam3 = 119;
		*iParam4 = 5;
		break;

	case 174:
		StringCopy(sParam1, "GOLD_P", 16);
		*iParam2 = 3;
		*iParam3 = 158;
		*iParam4 = 160;
		break;

	case 175:
		StringCopy(sParam1, "GOLD_S", 16);
		*iParam2 = 3;
		*iParam3 = 159;
		*iParam4 = 160;
		break;
	}
	return *iParam2 != -1;
}

// Position - 0x1E2A9
bool func_141(int iParam0) {
	if (iParam0 == 286 || iParam0 == 289 || iParam0 == 290 || iParam0 == 301 || iParam0 == 287 || iParam0 == 288) {
		return true;
	}
	return false;
}

// Position - 0x1E2FB
bool func_142(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	if (iParam0 == 275) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 270) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 274) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 64;
			*iParam3 = 68;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 278) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 267) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 280) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 268) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 276) {
		switch (iParam1) {
		case 1:
			func_146(func_147(iParam0, iParam1), iParam2, iParam3);
			*iParam4 = 1;
			return true;

		case 2:
			func_146(func_147(iParam0, iParam1), iParam2, iParam3);
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 281) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 277) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 271) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 272) {
		switch (iParam1) {
		case 1:
			*iParam2 = 38;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 88;
			*iParam3 = 88;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 269) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 279) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 64;
			*iParam3 = 68;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	return false;
}

// Position - 0x1E729
bool func_143(int iParam0, int iParam1, int *iParam2) {
	if (iParam0 == 231) {
		switch (iParam1) {
		case 1: *iParam2 = 4; return true;

		case 2: *iParam2 = 1; return true;

		case 3: *iParam2 = 2; return true;

		case 4: *iParam2 = 3; return true;
		}
		*iParam2 = -1;
		return false;
	}
	else if (iParam0 == 232) {
		switch (iParam1) {
		case 1: *iParam2 = 2; return true;

		case 2: *iParam2 = 1; return true;
		}
		*iParam2 = -1;
		return false;
	}
	else if (iParam0 == 276) {
		switch (iParam1) {
		case 1: *iParam2 = 1; return true;

		case 2: *iParam2 = 2; return true;
		}
		*iParam2 = -1;
		return false;
	}
	*iParam2 = -1;
	return false;
}

// Position - 0x1E807
bool func_144(int iParam0) {
	if (iParam0 == 94 || iParam0 == 68 || iParam0 == 101 || iParam0 == 164 || iParam0 == 200 || iParam0 == 219 ||
		iParam0 == 231 || iParam0 == 232 || iParam0 == 275 || iParam0 == 270 || iParam0 == 274 || iParam0 == 278 ||
		iParam0 == 267 || iParam0 == 280 || iParam0 == 268 || iParam0 == 276 || iParam0 == 281 || iParam0 == 277 ||
		iParam0 == 271 || iParam0 == 272 || iParam0 == 269 || iParam0 == 279) {
		return true;
	}
	return false;
}

// Position - 0x1E911
int func_145(int iParam0) {
	switch (iParam0) {
	case 39: return 0;

	case 40: return 1;

	case 43: return 0;

	case 44: return 1;

	case 45: return 2;

	case 46: return 3;

	case 47: return 4;

	case 48: return 5;

	case 49: return 6;

	case 50: return 7;

	case 51: return 8;

	case 52: return 9;

	case 53: return 10;

	case 54: return 11;

	case 55: return 12;

	case 56: return 13;

	case 57: return 14;

	case 58: return 15;

	case 59: return 16;

	case 60: return 17;

	case 61: return 18;

	case 62: return 19;

	case 63: return 20;

	case 64: return 21;

	case 65: return 22;

	case 66: return 23;

	case 67: return 24;

	case 82: return 0;

	case 83: return 1;

	case 90: return 0;

	case 91: return 1;

	default:
	}
	return -1;
}

// Position - 0x1EA68
int func_146(int iParam0, int *iParam1, int *iParam2) {
	*iParam1 = -1;
	*iParam2 = -1;
	switch (iParam0) {
	case 39:
		*iParam1 = 0;
		*iParam2 = 11;
		return 1;

	case 43:
		*iParam1 = 28;
		*iParam2 = 64;
		return 1;

	case 44:
		*iParam1 = 64;
		*iParam2 = 111;
		return 1;

	case 45:
		*iParam1 = 53;
		*iParam2 = 89;
		return 1;

	case 46:
		*iParam1 = 28;
		*iParam2 = 89;
		return 1;

	case 47:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 48:
		*iParam1 = 64;
		*iParam2 = 28;
		return 1;

	case 49:
		*iParam1 = 1;
		*iParam2 = 89;
		return 1;

	case 50:
		*iParam1 = 111;
		*iParam2 = 28;
		return 1;

	case 51:
		*iParam1 = 70;
		*iParam2 = 111;
		return 1;

	case 52:
		*iParam1 = 64;
		*iParam2 = 111;
		return 1;

	case 53:
		*iParam1 = 53;
		*iParam2 = 111;
		return 1;

	case 54:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 55:
		*iParam1 = 1;
		*iParam2 = 53;
		return 1;

	case 56:
		*iParam1 = 88;
		*iParam2 = 64;
		return 1;

	case 57:
		*iParam1 = 28;
		*iParam2 = 64;
		return 1;

	case 58:
		*iParam1 = 70;
		*iParam2 = 88;
		return 1;

	case 59:
		*iParam1 = 1;
		*iParam2 = 88;
		return 1;

	case 60:
		*iParam1 = 53;
		*iParam2 = 28;
		return 1;

	case 61:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 62:
		*iParam1 = 64;
		*iParam2 = 28;
		return 1;

	case 63:
		*iParam1 = 70;
		*iParam2 = 111;
		return 1;

	case 64:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 65:
		*iParam1 = 53;
		*iParam2 = 38;
		return 1;

	case 66:
		*iParam1 = 53;
		*iParam2 = 28;
		return 1;

	case 67:
		*iParam1 = 111;
		*iParam2 = 28;
		return 1;

	case 90:
		*iParam1 = 27;
		*iParam2 = 27;
		return 1;

	case 91:
		*iParam1 = 111;
		*iParam2 = 0;
		return 1;
	}
	return 0;
}

// Position - 0x1ECAE
int func_147(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return -1;
	}
	switch (iParam0) {
	case 17: return 0;

	case 9: return 1;

	case 10: return 2;

	case 11: return 3;

	case 12: return 4;

	case 13: return 5;

	case 14: return 6;

	case 15: return 7;

	case 16: return 8;

	case 19: return 9;

	case 22: return 10;

	case 23: return 11;

	case 24: return 12;

	case 25: return 13;

	case 27: return 14;

	case 28: return 15;

	case 29: return 16;

	case 30: return 17;

	case 31: return 18;

	case 20: return 19;

	case 32: return 20;

	case 21: return 21;

	case 78: return 22;

	case 79: return 23;

	case 80: return 24;

	case 18: return 25;

	case 81: return 26;

	case 82: return 27;

	case 83: return 28;

	case 84: return 29;

	case 85: return 30;

	case 86: return 31;

	case 87: return 32;

	case 88: return 33;

	case 102: return 34;

	case 113: return 35;

	case 160: return 36;

	case 163: return 37;

	case 162: return 38;

	case 164:
		if (func_148(iParam0, 11, iParam1)) {
			return 40;
		}
		return 39;

	case 199: return 41;

	case 201: return 42;

	case 200:
		switch (iParam1) {
		case 1: return 43;

		case 2: return 44;

		case 3: return 45;

		case 4: return 46;

		case 5: return 47;

		case 6: return 48;

		case 7: return 49;

		case 8: return 50;

		case 9: return 51;

		case 10: return 52;

		case 11: return 53;

		case 12: return 54;

		case 13: return 55;

		case 14: return 56;

		case 15: return 57;

		case 16: return 58;

		case 17: return 59;

		case 18: return 60;

		case 19: return 61;

		case 20: return 62;

		case 21: return 63;

		case 22: return 64;

		case 23: return 65;

		case 24: return 66;

		case 25: return 67;

		default:
		}
		return 43;

	case 171: return 68;

	case 187: return 69;

	case 177: return 70;

	case 183: return 71;

	case 185: return 72;

	case 184: return 73;

	case 188: return 74;

	case 173: return 75;

	case 178: return 76;

	case 186: return 77;

	case 215: return 78;

	case 217: return 79;

	case 224: return 80;

	case 237: return 81;

	case 243: return 82;

	case 244: return 83;

	case 245: return 84;

	case 253: return 85;

	case 254: return 86;

	case 256: return 87;

	case 257: return 88;

	case 258: return 89;

	case 276:
		if (func_148(iParam0, 16, iParam1)) {
			return 91;
		}
		return 90;

	default:
	}
	return -1;
}

// Position - 0x1F0D4
bool func_148(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_167(iParam0, -1);
	if (iParam0 == 164) {
		if (iParam2 == 2) {
			return true;
		}
		return false;
	}
	if (iParam0 == 276) {
		if (iParam2 == 2) {
			return true;
		}
		return false;
	}
	if (iParam0 == 95) {
		if (network::_0x67A5589628E0CFF6()) {
			return true;
		}
		return false;
	}
	else if (iParam0 == 96 || iParam0 == 97 || iParam0 == 98) {
		if (func_164() && func_163()) {
			return true;
		}
		return false;
	}
	if (iParam0 == 206 && network::network_is_game_in_progress() ||
		iParam0 == 207 && network::network_is_game_in_progress() ||
		iParam0 == 208 && network::network_is_game_in_progress() ||
		iParam0 == 209 && network::network_is_game_in_progress()) {
		if (func_164()) {
			return true;
		}
		return false;
	}
	if (iParam0 == 170 || iParam0 == 120 || iParam0 == 119 || iParam0 == 117 || iParam0 == 166) {
		return true;
	}
	if (iParam0 == 221 || iParam0 == 135 || iParam0 == 210) {
		if (iParam1 == 26) {
			return true;
		}
		return false;
	}
	if (func_165(iParam0)) {
		if (Global_68512) {
			return true;
		}
		return false;
	}
	iVar1 = func_162(iVar0);
	if (iVar1 != -1) {
		if (func_160(func_161(iVar0))) {
			return true;
		}
		return false;
	}
	if (func_159(iParam0)) {
		if (func_164()) {
			if (iParam0 == 205 && Global_262145.f_17808 || iParam0 != 205 && Global_262145.f_17807) {
				return true;
			}
			return false;
		}
		return false;
	}
	if (func_158(iParam0)) {
		if (func_149(iParam0)) {
			return false;
		}
		return true;
	}
	return false;
}

// Position - 0x1F2BD
bool func_149(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 187: iVar0 = 16; break;

	case 177: iVar0 = 12; break;

	case 185: iVar0 = 14; break;

	case 174: iVar0 = 9; break;

	case 171: iVar0 = 20; break;

	case 172: iVar0 = 7; break;

	case 173: iVar0 = 8; break;

	case 175: iVar0 = 10; break;

	case 176: iVar0 = 11; break;

	case 178: iVar0 = 5; break;

	case 179: iVar0 = 6; break;

	case 183: iVar0 = 21; break;

	case 180: iVar0 = 18; break;

	case 181: iVar0 = 22; break;

	case 182: iVar0 = 19; break;

	case 184: iVar0 = 13; break;

	case 186: iVar0 = 15; break;

	case 188: iVar0 = 17; break;
	}
	return func_150(iVar0);
}

// Position - 0x1F3BC
int func_150(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_157()) {
		return 0;
	}
	iVar0 = func_152(iParam0);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_151(iVar1));
}

// Position - 0x1F3E7
int func_151(int iParam0) { return iParam0 % 32; }

// Position - 0x1F3F4
int func_152(var uParam0) {
	int iVar0;

	iVar0 = func_49(func_153(uParam0), -1, 0);
	return iVar0;
}

// Position - 0x1F40C
int func_153(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_156(iVar0);
	if (func_155() == 0 || func_154() == 0 || func_155() == 999 && func_154() == 999) {
		switch (iVar1) {
		case 0: return 733;

		case 1: return 734;
		}
	}
	return 6022;
}

// Position - 0x1F478
int func_154() { return Global_25191; }

// Position - 0x1F483
int func_155() { return Global_25190; }

// Position - 0x1F48E
int func_156(int iParam0) { return iParam0 / 32; }

// Position - 0x1F49B
bool func_157() { return Global_1315212; }

// Position - 0x1F4A7
bool func_158(int iParam0) {
	if (iParam0 == 171 || iParam0 == 172 || iParam0 == 173 || iParam0 == 175 || iParam0 == 177 || iParam0 == 178 ||
		iParam0 == 179 || iParam0 == 180 || iParam0 == 181 || iParam0 == 182 || iParam0 == 183 || iParam0 == 184 ||
		iParam0 == 185 || iParam0 == 186 || iParam0 == 187 || iParam0 == 188) {
		return true;
	}
	return false;
}

// Position - 0x1F561
bool func_159(int iParam0) {
	if (iParam0 == 199 || iParam0 == 200 || iParam0 == 201 || iParam0 == 202 || iParam0 == 203 || iParam0 == 204 ||
		iParam0 == 205) {
		return true;
	}
	return false;
}

// Position - 0x1F5B8
bool func_160(int iParam0) { return gameplay::is_bit_set(func_49(5298, -1, 0), iParam0); }

// Position - 0x1F5CF
int func_161(int iParam0) {
	switch (iParam0) {
	case joaat("dune4"): return 0;

	case joaat("dune5"): return 0;

	case joaat("wastelander"): return 1;

	case joaat("blazer5"): return 2;

	case joaat("phantom2"): return 3;

	case joaat("voltic2"): return 4;

	case joaat("technical2"): return 5;

	case joaat("boxville5"): return 6;

	case joaat("ruiner2"): return 7;

	default:
	}
	return 0;
}

// Position - 0x1F639
int func_162(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0) {
	case joaat("technical2"): return 0;

	case joaat("boxville5"): return 1;

	case joaat("wastelander"): return 2;

	case joaat("phantom2"): return 3;

	case joaat("voltic2"): return 4;

	case joaat("dune4"): return 5;

	case joaat("dune5"): return 5;

	case joaat("ruiner2"): return 6;

	case joaat("blazer5"): return 7;
	}
	return -1;
}

// Position - 0x1F6C2
int func_163() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (gameplay::is_bit_set(Global_25, 5)) {
		if (gameplay::is_bit_set(Global_25, 1) || gameplay::is_bit_set(Global_25, 3)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 5)) {
			if (gameplay::is_bit_set(iVar0, 1) || gameplay::is_bit_set(iVar0, 3)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	if (stats::stat_slot_is_loaded(0)) {
		if (Global_139180.f_3) {
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stats::stat_get_int(iVar2, &iVar1, -1)) {
				if (gameplay::is_bit_set(iVar1, 5)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 1) || gameplay::is_bit_set(iVar3, 3)) {
			return 1;
		}
	}
	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x91B87C55093DE351()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				gameplay::set_bit(&iVar4, 1);
				gameplay::set_bit(&iVar4, 3);
				gameplay::set_bit(&iVar4, 5);
				gameplay::set_bit(&Global_25, 1);
				gameplay::set_bit(&Global_25, 3);
				gameplay::set_bit(&Global_25, 5);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar4 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar4, 1);
					gameplay::set_bit(&iVar4, 3);
					stats::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x1F816
bool func_164() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1F8D1
bool func_165(int iParam0) {
	if (iParam0 == 233 || iParam0 == 234 || iParam0 == 235 || iParam0 == 236 || iParam0 == 240 || iParam0 == 241 ||
		iParam0 == 263) {
		return true;
	}
	return false;
}

// Position - 0x1F929
void func_166(int iParam0, int *iParam1) {
	switch (iParam0) {
	case 64: gameplay::set_bit(iParam1, 4); break;

	case 67: gameplay::set_bit(iParam1, 4); break;

	case 72: gameplay::set_bit(iParam1, 1); break;

	case 117: gameplay::clear_bit(iParam1, 1); break;

	case 49:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 118:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		break;

	case 1: gameplay::set_bit(iParam1, 1); break;

	case 119: gameplay::clear_bit(iParam1, 1); break;

	case 77:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 120:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 130: gameplay::set_bit(iParam1, 0); break;

	case 132: gameplay::set_bit(iParam1, 0); break;

	case 135:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 137: gameplay::set_bit(iParam1, 0); break;

	case 141:
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 6);
		break;

	case 147:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		gameplay::set_bit(iParam1, 5);
		gameplay::set_bit(iParam1, 6);
		gameplay::set_bit(iParam1, 7);
		gameplay::set_bit(iParam1, 8);
		break;

	case 203:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 100:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 170:
		gameplay::clear_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 160: gameplay::set_bit(iParam1, 15); break;

	case 161: gameplay::set_bit(iParam1, 15); break;

	case 192:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 221:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 222: gameplay::set_bit(iParam1, 1); break;

	case 172: gameplay::set_bit(iParam1, 1); break;

	case 165:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 166:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		break;

	case 139: gameplay::set_bit(iParam1, 0); break;

	case 104: gameplay::set_bit(iParam1, 1); break;

	case 109:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 227:
	case 252:
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		gameplay::clear_bit(iParam1, 4);
		break;

	case 97:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 52: gameplay::set_bit(iParam1, 1); break;

	case 108: gameplay::set_bit(iParam1, 1); break;

	case 237: gameplay::set_bit(iParam1, 9); break;

	case 238:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 233:
	case 234:
	case 235:
	case 236:
	case 240:
	case 241:
	case 263:
		if (Global_68512) {
			gameplay::set_bit(iParam1, 9);
		}
		break;

	case 271:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		break;

	case 272:
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		break;

	case 273: gameplay::set_bit(iParam1, 0); break;

	case 281: gameplay::set_bit(iParam1, 0); break;

	case 267: gameplay::set_bit(iParam1, 0); break;

	case 268: gameplay::set_bit(iParam1, 0); break;

	case 292: gameplay::set_bit(iParam1, 9); break;

	case 309: gameplay::set_bit(iParam1, 9); break;

	default: return;
	}
}

// Position - 0x1FD5E
int func_167(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return joaat("ztype");

	case 1: return joaat("stinger");

	case 2: return joaat("jb700");

	case 3: return joaat("cheetah");

	case 4: return joaat("entityxf");

	case 5: return joaat("adder");

	case 6: return joaat("monroe");

	case 7: return joaat("cogcabrio");

	case 10: return joaat("shamal");

	case 11: return joaat("stunt");

	case 12: return joaat("cuban800");

	case 13: return joaat("duster");

	case 14: return joaat("luxor");

	case 15: return joaat("frogger");

	case 16: return joaat("maverick");

	case 17: return joaat("rhino");

	case 18: return joaat("titan");

	case 19: return joaat("cargobob");

	case 20: return joaat("buzzard");

	case 21: return joaat("crusader");

	case 22: return joaat("barracks");

	case 24: return joaat("marquis");

	case 25: return joaat("jetmax");

	case 27: return joaat("squalo");

	case 29: return joaat("tropic");

	case 30: return joaat("seashark");

	case 31: return joaat("submersible");

	case 32: return joaat("suntrap");

	case 258: return joaat("tug");

	case 33: return joaat("bmx");

	case 34: return joaat("scorcher");

	case 35: return joaat("tribike");

	case 36: return joaat("tribike2");

	case 37: return joaat("tribike3");

	case 38: return joaat("cruiser");

	case 39: return joaat("schwarzer");

	case 40: return joaat("zion");

	case 41: return joaat("gauntlet");

	case 42: return joaat("vigero");

	case 43: return joaat("issi2");

	case 44: return joaat("infernus");

	case 45: return joaat("surano");

	case 46: return joaat("vacca");

	case 47: return joaat("ninef");

	case 48: return joaat("comet2");

	case 49: return joaat("banshee");

	case 50: return joaat("feltzer2");

	case 51: return joaat("bfinjection");

	case 52: return joaat("sandking");

	case 53: return joaat("fugitive");

	case 54: return joaat("dilettante");

	case 55: return joaat("superd");

	case 56: return joaat("exemplar");

	case 57: return joaat("baller2");

	case 58: return joaat("cavalcade");

	case 59: return joaat("rocoto");

	case 60: return joaat("felon");

	case 61: return joaat("oracle2");

	case 62: return joaat("bati");

	case 63: return joaat("akuma");

	case 64: return joaat("ruffian");

	case 65: return joaat("vader");

	case 66: return joaat("blazer");

	case 67: return joaat("pcj");

	case 68: return joaat("sanchez");

	case 69: return joaat("faggio2");

	case 70: return joaat("bullet");

	case 71: return joaat("carbonizzare");

	case 72: return joaat("coquette");

	case 73: return joaat("ninef2");

	case 74: return joaat("rapidgt");

	case 75: return joaat("rapidgt2");

	case 76: return joaat("stingergt");

	case 77: return joaat("voltic");

	case 78: return joaat("annihilator");

	case 79: return joaat("mammatus");

	case 80: return joaat("velum");

	case 81: return joaat("dump");

	case 82: return joaat("airbus");

	case 83: return joaat("bus");

	case 84: return joaat("coach");

	case 85: return joaat("journey");

	case 86: return joaat("mule");

	case 87: return joaat("rentalbus");

	case 88: return joaat("stretch");

	case 89: return joaat("bison");

	case 90: return joaat("double");

	case 91: return joaat("felon2");

	case 92: return joaat("hexer");

	case 93: return joaat("zion2");

	case 94: return joaat("bati2");

	case 95: return joaat("elegy2");

	case 96: return joaat("khamelion");

	case 97: return joaat("hotknife");

	case 98: return joaat("carbonrs");

	default:
	}
	switch (iParam0) {
	case 99: return joaat("bifta");

	case 100: return joaat("kalahari");

	case 101: return joaat("paradise");

	case 102: return joaat("speeder");

	case 103: return joaat("bodhi2");

	case 104: return joaat("dune");

	case 105: return joaat("rebel");

	case 106: return joaat("sadler");

	case 107: return joaat("sanchez2");

	case 108: return joaat("sandking2");

	case 109: return joaat("btype");

	case 111: return joaat("jester");

	case 114: return joaat("massacro");

	case 112: return joaat("turismor");

	case 115: return joaat("zentorno");

	case 116: return joaat("huntley");

	case 110: return joaat("alpha");

	case 113: return joaat("vestra");

	case 117: return joaat("coquette");

	case 118: return joaat("banshee");

	case 119: return joaat("stinger");

	case 120: return joaat("voltic");

	case 121: return joaat("thrust");

	case 128: return joaat("asea");

	case 129: return joaat("asterope");

	case 130: return joaat("bobcatxl");

	case 131: return joaat("cavalcade2");

	case 132: return joaat("granger");

	case 133: return joaat("ingot");

	case 134: return joaat("intruder");

	case 135: return joaat("minivan");

	case 136: return joaat("premier");

	case 137: return joaat("radi");

	case 138: return joaat("rancherxl");

	case 139: return joaat("ratloader");

	case 140: return joaat("stanier");

	case 141: return joaat("stratum");

	case 142: return joaat("washington");

	case 122: return joaat("dominator");

	case 123: return joaat("f620");

	case 124: return joaat("fusilade");

	case 125: return joaat("penumbra");

	case 126: return joaat("sentinel");

	case 127: return joaat("sentinel2");

	default:
	}
	switch (iParam0) {
	case 143: return joaat("blade");

	case 144: return joaat("warrener");

	case 145: return joaat("glendale");

	case 146: return joaat("rhapsody");

	case 147: return joaat("panto");

	case 148: return joaat("dubsta3");

	case 149: return joaat("pigalle");

	case 150: return joaat("picador");

	case 151: return joaat("regina");

	case 152: return joaat("surfer");

	case 153: return joaat("youga");

	case 154: return joaat("blazer3");

	case 155: return joaat("rebel2");

	case 156: return joaat("primo");

	case 157: return joaat("buffalo");

	case 158: return joaat("buffalo2");

	case 159: return joaat("tailgater");

	case 160: return joaat("monster");

	case 161: return joaat("sovereign");

	case 162: return joaat("miljet");

	case 163: return joaat("besra");

	case 164: return joaat("swift");

	case 165: return joaat("coquette2");

	case 166: return joaat("coquette2");

	case 167: return joaat("innovation");

	case 168: return joaat("hakuchou");

	case 169: return joaat("furoregt");

	case 170: return joaat("kalahari");

	case 187: return joaat("valkyrie");

	case 177: return joaat("hydra");

	case 185: return joaat("savage");

	case 174: return joaat("enduro");

	case 171: return joaat("boxville4");

	case 172: return joaat("casco");

	case 173: return joaat("dinghy3");

	case 175: return joaat("gburrito2");

	case 176: return joaat("guardian");

	case 178: return joaat("insurgent");

	case 179: return joaat("insurgent2");

	case 183: return joaat("mule3");

	case 180: return joaat("kuruma");

	case 181: return joaat("kuruma2");

	case 182: return joaat("lectro");

	case 184: return joaat("pbus");

	case 186: return joaat("technical");

	case 188: return joaat("velum2");

	case 189: return joaat("gresley");

	case 190: return joaat("jackal");

	case 191: return joaat("landstalker");

	case 192: return joaat("mesa3");

	case 193: return joaat("nemesis");

	case 194: return joaat("oracle");

	case 195: return joaat("rumpo");

	case 196: return joaat("schafter2");

	case 197: return joaat("seminole");

	case 198: return joaat("surge");

	case 199: return joaat("dodo");

	case 200: return joaat("marshall");

	case 201: return joaat("submersible2");

	case 202: return joaat("blista2");

	case 203: return joaat("stalion");

	case 204: return joaat("dukes");

	case 205: return joaat("dukes2");

	case 206: return joaat("stalion2");

	case 207: return joaat("dominator2");

	case 208: return joaat("gauntlet2");

	case 209: return joaat("buffalo3");

	case 210: return joaat("slamvan");

	case 211: return joaat("ratloader2");

	case 212: return joaat("jester2");

	case 213: return joaat("massacro2");

	case 214: return joaat("feltzer3");

	case 215: return joaat("luxor2");

	case 216: return joaat("osiris");

	case 217: return joaat("swift2");

	case 218: return joaat("virgo");

	case 219: return joaat("windsor");

	case 220: return joaat("brawler");

	case 221: return joaat("chino");

	case 222: return joaat("coquette3");

	case 223: return joaat("t20");

	case 224: return joaat("toro");

	case 225: return joaat("vindicator");

	case 229: return joaat("primo");

	case 228: return joaat("moonbeam");

	case 227: return joaat("faction");

	case 226: return joaat("buccaneer");

	case 230: return joaat("voodoo2");

	case 263:
		if (iParam1 == 0) {
			return joaat("xls");
		}
		else if (iParam1 == 1) {
			return joaat("xls2");
		}
		else {
			return joaat("xls");
		}
		break;

	case 264: return joaat("seven70");

	case 259: return joaat("windsor2");

	case 260: return joaat("prototipo");

	case 261: return joaat("fmj");

	case 262: return joaat("bestiagts");

	case 265: return joaat("pfister811");

	case 266: return joaat("reaper");

	case 231: return joaat("btype2");

	case 232: return joaat("lurcher");

	case 233:
		if (iParam1 == 0) {
			return joaat("baller3");
		}
		else if (iParam1 == 1) {
			return joaat("baller5");
		}
		else {
			return joaat("baller3");
		}
		break;

	case 234:
		if (iParam1 == 0) {
			return joaat("baller4");
		}
		else if (iParam1 == 1) {
			return joaat("baller6");
		}
		else {
			return joaat("baller4");
		}
		break;

	case 235:
		if (iParam1 == 0) {
			return joaat("cog55");
		}
		else if (iParam1 == 1) {
			return joaat("cog552");
		}
		else {
			return joaat("cog55");
		}
		break;

	case 236:
		if (iParam1 == 0) {
			return joaat("cognoscenti");
		}
		else if (iParam1 == 1) {
			return joaat("cognoscenti2");
		}
		else {
			return joaat("cognoscenti");
		}
		break;

	case 237: return joaat("limo2");

	case 238: return joaat("mamba");

	case 239: return joaat("nightshade");

	case 240:
		if (iParam1 == 0) {
			return joaat("schafter3");
		}
		else if (iParam1 == 1) {
			return joaat("schafter5");
		}
		else {
			return joaat("schafter3");
		}
		break;

	case 241:
		if (iParam1 == 0) {
			return joaat("schafter4");
		}
		else if (iParam1 == 1) {
			return joaat("schafter6");
		}
		else {
			return joaat("schafter4");
		}
		break;

	case 242: return joaat("verlierer2");

	case 243: return joaat("supervolito");

	case 244: return joaat("supervolito2");

	case 245: return Global_68114;

	case 251: return joaat("virgo3");

	case 250: return joaat("tornado");

	case 249: return joaat("sabregt");

	case 252: return joaat("faction");

	case 246: return joaat("tampa");

	case 247: return joaat("sultan");

	case 49: return joaat("banshee");

	case 248: return joaat("btype3");

	case 253: return joaat("volatus");

	case 254: return joaat("cargobob2");

	case 255: return joaat("rumpo3");

	case 256: return joaat("brickade");

	case 257: return joaat("nimbus");

	case 267: return joaat("le7b");

	case 268: return joaat("omnis");

	case 269: return joaat("tropos");

	case 270: return joaat("brioso");

	case 271: return joaat("trophytruck");

	case 272: return joaat("trophytruck2");

	case 273: return joaat("contender");

	case 274: return joaat("cliffhanger");

	case 275: return joaat("bf400");

	case 279: return joaat("tyrus");

	case 280: return joaat("lynx");

	case 281: return joaat("sheava");

	case 276: return joaat("rallytruck");

	case 277: return joaat("tampa2");

	case 278: return joaat("gargoyle");

	case 282: return joaat("bagger");

	case 283: return joaat("esskey");

	case 284: return joaat("nightblade");

	case 285: return joaat("defiler");

	case 286: return joaat("avarus");

	case 287: return joaat("zombiea");

	case 288: return joaat("zombieb");

	case 289: return joaat("chimera");

	case 290: return joaat("daemon2");

	case 291: return joaat("ratbike");

	case 292: return joaat("shotaro");

	case 293: return joaat("raptor");

	case 294: return joaat("hakuchou2");

	case 296: return joaat("blazer4");

	case 297: return joaat("sanctus");

	case 295: return joaat("vortex");

	case 298: return joaat("manchez");

	case 299: return joaat("tornado6");

	case 300: return joaat("youga2");

	case 301: return joaat("wolfsbane");

	case 302: return joaat("faggio3");

	case 303: return joaat("faggio");

	case 304: return joaat("dune5");

	case 305: return joaat("phantom2");

	case 306: return joaat("technical2");

	case 307: return joaat("blazer5");

	case 308: return joaat("boxville5");

	case 309: return joaat("wastelander");

	case 310: return joaat("ruiner2");

	case 311: return joaat("voltic2");

	case 312: return joaat("penetrator");

	case 313: return joaat("tempesta");

	case 314: return joaat("italigtb");

	case 315: return joaat("nero");

	case 316: return joaat("diablous");

	case 317: return joaat("fcr");

	case 318: return joaat("specter");

	case 319: return joaat("gp1");

	case 320: return joaat("infernus2");

	case 321: return joaat("ruston");

	case 322: return joaat("turismo2");
	}
	return 0;
}

// Position - 0x20FF1
void func_168(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x210A2
bool func_169(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_171(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_171(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_171(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_171(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_171(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_171(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_171(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_171(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_171(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_164()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_164()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_170(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_170(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_170(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x2279A
bool func_170(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x227E1
int func_171(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_22(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_172(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x22823
void func_172(int iParam0, int *iParam1, int iParam2) {
	int iVar0;

	iParam1->f_88 = 1;
	iParam1->f_84 = 255;
	iParam1->f_85 = 255;
	iParam1->f_86 = 255;
	iParam1->f_97 = 1;
	iParam1->f_3 = 1000;
	iParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*iParam1 = iVar0;
			iParam1->f_2 = 3f;
			iParam1->f_4 = 0;
			iParam1->f_9 = 1;
			iParam1->f_11[0] = 1;
			StringCopy(&iParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*iParam1 = iVar0;
			iParam1->f_2 = 14.9f;
			iParam1->f_5 = 43;
			iParam1->f_6 = 43;
			iParam1->f_7 = 0;
			iParam1->f_8 = 156;
			iParam1->f_9 = 0;
			StringCopy(&iParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*iParam1 = iVar0;
			iParam1->f_2 = 14f;
			iParam1->f_5 = 32;
			iParam1->f_6 = 0;
			iParam1->f_7 = 0;
			iParam1->f_8 = 156;
			StringCopy(&iParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				iParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*iParam1 = iVar0;
			iParam1->f_2 = 6f;
			iParam1->f_5 = 53;
			iParam1->f_6 = 0;
			iParam1->f_7 = 59;
			iParam1->f_8 = 156;
			StringCopy(&iParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*iParam1 = iVar0;
			iParam1->f_2 = 0f;
			iParam1->f_5 = 111;
			iParam1->f_6 = 111;
			iParam1->f_7 = 0;
			iParam1->f_8 = 156;
			iParam1->f_10 = 1;
			StringCopy(&iParam1->f_27, "FC1988", 16);
			iParam1->f_11[0] = 1;
			iParam1->f_11[1] = 1;
			iParam1->f_11[2] = 1;
			iParam1->f_11[3] = 1;
			iParam1->f_11[4] = 1;
			iParam1->f_11[5] = 1;
			iParam1->f_11[6] = 1;
			iParam1->f_11[7] = 1;
			iParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x22A7F
bool func_173(int iParam0) { return func_136(iParam0, 0); }

// Position - 0x22A8E
int func_174(int iParam0) {
	func_169(&Global_68531.f_555[0 /*21*/], iParam0);
	switch (iParam0) {
	case 21:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_173(26)) {
			return 26;
		}
		if (!func_173(29)) {
			return 29;
		}
		if (!func_173(32)) {
			return 32;
		}
		break;

	case 22:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_173(27)) {
			return 27;
		}
		if (!func_173(30)) {
			return 30;
		}
		if (!func_173(33)) {
			return 33;
		}
		break;

	case 23:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_173(28)) {
			return 28;
		}
		if (!func_173(31)) {
			return 31;
		}
		if (!func_173(34)) {
			return 34;
		}
		break;
	}
	return -1;
}

// Position - 0x22B90
void func_175(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = func_167(iParam0, -1);
	iVar1 = func_177(iVar0);
	switch (iVar1) {
	case 0: func_176(19, 1); return;

	case 7: func_176(17, 1); return;

	case 1: func_176(15, 1); return;

	case 2: func_176(13, 1); return;

	case 3: func_176(18, 1); return;

	case 4: func_176(12, 1); return;

	case 5: func_176(14, 1); return;

	case 6: func_176(16, 1); return;

	default:
	}
}

// Position - 0x22C30
void func_176(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x22C8D
int func_177(int iParam0) {
	switch (iParam0) {
	case joaat("benson"):
	case joaat("bobcatxl"):
	case joaat("bullet"):
	case joaat("dominator"):
	case joaat("minivan"):
	case joaat("peyote"):
	case joaat("radi"):
	case joaat("sadler"):
	case joaat("sadler2"):
	case joaat("sandking"):
	case joaat("sandking2"):
	case joaat("speedo"):
	case joaat("speedo2"):
	case joaat("stanier"): return 3;

	case joaat("boxville"):
	case joaat("camper"):
	case joaat("pony"):
	case joaat("pony2"):
	case joaat("stockade"):
	case joaat("stockade3"):
	case joaat("tiptruck"): return 2;

	case joaat("fusilade"): return 6;

	case joaat("mule"):
	case joaat("mule2"):
	case joaat("penumbra"):
	case joaat("sanchez"):
	case joaat("sanchez2"): return 1;

	case joaat("bfinjection"):
	case joaat("dune"):
	case joaat("surfer"):
	case joaat("surfer2"): return 4;

	case joaat("barracks2"):
	case joaat("biff"):
	case joaat("bulldozer"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("forklift"):
	case joaat("mixer"):
	case joaat("mixer2"): return 0;

	case joaat("oracle"):
	case joaat("oracle2"):
	case joaat("sentinel"):
	case joaat("sentinel2"):
	case joaat("zion"):
	case joaat("zion2"): return 7;
	}
	return 8;
}

// Position - 0x22DDD
void func_178(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_183(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_179();
	}
}

// Position - 0x22EC5
void func_179() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_182(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_155() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_180();
				}
			}
		}
	}
}

// Position - 0x23386
int func_180() {
	if (func_181(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x233D1
bool func_181(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x233FC
int func_182(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x2344D
int func_183(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_51();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x237E1
int func_184(int iParam0) {
	int iVar0;
	var uVar1;
	var uVar2;
	int *iVar3;

	if (iParam0 == -1) {
		return -2;
	}
	iVar0 = Global_69971.f_109[iParam0 /*4*/];
	uVar1 = Global_69971.f_109[iParam0 /*4*/].f_1;
	uVar2 = Global_69971.f_109[iParam0 /*4*/].f_2;
	func_185(iVar0, &iVar3);
	Call_Loc(iVar3);
	if (StackVal) {
		return uVar1;
	}
	return uVar2;
}

// Position - 0x23832
void func_185(int iParam0, int *iParam1) {
	switch (iParam0) {
	case 0: *iParam1 = 148629 /*func_226*/; break;

	case 1: *iParam1 = 148426 /*func_224*/; break;

	case 2: *iParam1 = 148377 /*func_223*/; break;

	case 3: *iParam1 = 148343 /*func_222*/; break;

	case 4: *iParam1 = 148195 /*func_220*/; break;

	case 5: *iParam1 = 148172 /*func_219*/; break;

	case 6: *iParam1 = 148148 /*func_218*/; break;

	case 7: *iParam1 = 147910 /*func_217*/; break;

	case 8: *iParam1 = 147802 /*func_216*/; break;

	case 9: *iParam1 = 147778 /*func_215*/; break;

	case 10: *iParam1 = 147755 /*func_214*/; break;

	case 11: *iParam1 = 147731 /*func_213*/; break;

	case 12: *iParam1 = 147589 /*func_211*/; break;

	case 13: *iParam1 = 147566 /*func_210*/; break;

	case 14: *iParam1 = 147542 /*func_209*/; break;

	case 16: *iParam1 = 147510 /*func_208*/; break;

	case 17: *iParam1 = 147488 /*func_207*/; break;

	case 18: *iParam1 = 147322 /*func_205*/; break;

	case 19: *iParam1 = 147264 /*func_203*/; break;

	case 20: *iParam1 = 147240 /*func_202*/; break;

	case 21: *iParam1 = 147182 /*func_201*/; break;

	case 22: *iParam1 = 147122 /*func_200*/; break;

	case 23: *iParam1 = 146175 /*func_192*/; break;

	case 24: *iParam1 = 146148 /*func_191*/; break;

	case 25: *iParam1 = 146121 /*func_190*/; break;

	case 26: *iParam1 = 146094 /*func_189*/; break;

	case 27: *iParam1 = 146045 /*func_188*/; break;

	case 28: *iParam1 = 145996 /*func_187*/; break;

	case 29: *iParam1 = 145947 /*func_186*/; break;

	default: *iParam1 = 148629 /*func_226*/; break;
	}
}

// Position - 0x23A1B
int func_186() {
	int iVar0;

	iVar0 = 5 - 3;
	if (iVar0 >= 0 && iVar0 < 3) {
		if (entity::does_entity_exist(Global_87658[iVar0])) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x23A4C
int func_187() {
	int iVar0;

	iVar0 = 4 - 3;
	if (iVar0 >= 0 && iVar0 < 3) {
		if (entity::does_entity_exist(Global_87658[iVar0])) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x23A7D
int func_188() {
	int iVar0;

	iVar0 = 3 - 3;
	if (iVar0 >= 0 && iVar0 < 3) {
		if (entity::does_entity_exist(Global_87658[iVar0])) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x23AAE
int func_189() {
	if (entity::does_entity_exist(Global_89302[2])) {
		return 0;
	}
	return 1;
}

// Position - 0x23AC9
int func_190() {
	if (entity::does_entity_exist(Global_89302[1])) {
		return 0;
	}
	return 1;
}

// Position - 0x23AE4
int func_191() {
	if (entity::does_entity_exist(Global_89302[0])) {
		return 0;
	}
	return 1;
}

// Position - 0x23AFF
int func_192() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (script::is_thread_active(Global_101700.f_17062.f_395)) {
		return 0;
	}
	iVar0 = 4 - 3;
	if (iVar0 < 3) {
		if (entity::does_entity_exist(Global_87658[iVar0])) {
			return 0;
		}
	}
	iVar1 = 14;
	iVar2 = 5;
	iVar3 = time::get_clock_hours();
	if (iVar1 < iVar2) {
		if (iVar3 < iVar1 || iVar3 >= iVar2) {
			return 0;
		}
	}
	else if (iVar3 < iVar1 && iVar3 >= iVar2) {
		return 0;
	}
	iVar4 = func_197(func_198(func_199()), 4);
	if (iVar4 >= 9) {
		return 0;
	}
	else {
		if (Global_87680[iVar4 /*2*/] != 0) {
			return 0;
		}
		if (Global_101700.f_17062.f_175[iVar4 /*19*/].f_2 != 0) {
			return 0;
		}
		if (func_196(&Global_101700.f_17062.f_175[iVar4 /*19*/].f_5) &&
			func_193(&Global_101700.f_17062.f_175[iVar4 /*19*/].f_5) < 5f * 60f) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x23BFD
float func_193(var *uParam0) {
	if (func_196(uParam0)) {
		if (func_195(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_194(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x23C3C
float func_194(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0x23C94
bool func_195(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x23CA4
bool func_196(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x23CB4
int func_197(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 != 0 && iParam0 != 1 && iParam0 != 2) {
		if (iParam1 == 0 || iParam1 == 1 || iParam1 == 2) {
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 10;

		case 1: return 0;

		case 2: return 2;

		case 3: return 10;

		case 4: return 5;

		case 5: return 8;

		default: return 10;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 10;

		case 2: return 1;

		case 3: return 3;

		case 4: return 6;

		case 5: return 10;

		default: return 10;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 2;

		case 1: return 1;

		case 2: return 10;

		case 3: return 4;

		case 4: return 7;

		case 5: return 10;

		default: return 10;
		}
		break;
	}
	return 10;
}

// Position - 0x23E3E
int func_198(int iParam0) {
	if (iParam0 == 145) {
		return 7;
	}
	if (iParam0 < 150) {
		return Global_101700.f_27009[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144) {
		return 7;
	}
	if (iParam0 == 150) {
		return 6;
	}
	if (iParam0 == 151) {
		return 6;
	}
	return 6;
}

// Position - 0x23E99
int func_199() {
	func_25();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x23EB2
int func_200() {
	int iVar0;

	if (script::is_thread_active(Global_101700.f_17062.f_395)) {
		return 0;
	}
	iVar0 = 3 - 3;
	if (iVar0 < 3) {
		if (entity::does_entity_exist(Global_87658[iVar0])) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x23EEE
int func_201() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (Global_101700.f_6647[iVar0 /*15*/] == 2033185762) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x23F28
var func_202() { return gameplay::is_bit_set(Global_101700.f_17533[26 /*6*/], 3); }

// Position - 0x23F40
bool func_203() { return func_204(15); }

// Position - 0x23F4E
bool func_204(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x23F7A
int func_205() {
	float fVar0;

	if (Global_86826 == -1) {
		Global_86826 = gameplay::get_game_timer();
	}
	if (gameplay::get_game_timer() - Global_86826 > 240000) {
		Global_86826 = -1;
		return 1;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		fVar0 = system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), func_206(212, 0));
		if (fVar0 > 22500f) {
			Global_86826 = -1;
			return 1;
		}
	}
	return 0;
}

// Position - 0x23FE2
Vector3 func_206(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0f, 0f, 0f;
	}
	return Global_25501[iVar0 /*23*/][iParam1 /*3*/];
}

// Position - 0x24020
var func_207() { return Global_101700.f_8044.f_330[71 /*6*/]; }

// Position - 0x24036
int func_208() {
	if (Global_101700.f_8044.f_99.f_205[8] == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x24056
bool func_209() { return !Global_101700.f_8044.f_99.f_58[77]; }

// Position - 0x2406E
var func_210() { return Global_101700.f_8044.f_99.f_58[77]; }

// Position - 0x24085
int func_211() {
	if (func_204(88)) {
		return 1;
	}
	else if (func_212(88)) {
		return 1;
	}
	return 0;
}

// Position - 0x240AB
bool func_212(int iParam0) {
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	if (Global_85809[iParam0 /*2*/]) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82576) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x24113
bool func_213() { return !Global_101700.f_8044.f_99.f_58[12]; }

// Position - 0x2412B
var func_214() { return Global_101700.f_8044.f_99.f_58[12]; }

// Position - 0x24142
bool func_215() { return !Global_101700.f_8044.f_99.f_58[34]; }

// Position - 0x2415A
int func_216() {
	if (!func_204(40)) {
		return 0;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(func_206(181, 0), entity::get_entity_coords(player::player_ped_id(), 1)) > 40000f) {
			return 1;
		}
	}
	if (Global_86826 == -1) {
		Global_86826 = gameplay::get_game_timer();
	}
	if (gameplay::get_game_timer() - Global_86826 > 30000) {
		Global_86826 = -1;
		return 1;
	}
	return 0;
}

// Position - 0x241C6
int func_217() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 10) {
		iVar1 = 0;
		while (iVar1 < Global_87853[iVar0 /*19*/]) {
			iVar2 = 0;
			switch (iVar0) {
			case 1:
			case 2: iVar2 = func_204(90); break;

			case 3: iVar2 = func_204(74); break;

			case 4: iVar2 = func_204(75); break;

			case 5: iVar2 = func_204(93); break;

			case 6: iVar2 = func_204(69); break;

			case 7: iVar2 = func_204(70); break;

			case 8: iVar2 = func_204(84); break;

			case 9: iVar2 = func_204(85); break;
			}
			if (iVar2 && Global_101700.f_1.f_12[iVar0 /*6*/][iVar1] == 12) {
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x242B4
bool func_218() { return !Global_101700.f_8044.f_99.f_58[45]; }

// Position - 0x242CC
var func_219() { return Global_101700.f_8044.f_99.f_58[45]; }

// Position - 0x242E3
int func_220() {
	if (func_221(0)) {
		return 0;
	}
	return 1;
}

// Position - 0x242F8
bool func_221(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= 150) {
		return false;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 != 7) {
		iVar1 = 0;
		while (iVar1 < 9) {
			if (Global_101700.f_17062.f_175[iVar1 /*19*/] == iVar0 ||
				Global_101700.f_17062.f_175[iVar1 /*19*/].f_1 == iVar0) {
				iVar2 = Global_87680[iVar1 /*2*/];
				if (iVar2 == 3 || iVar2 == 4) {
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

// Position - 0x24377
int func_222() {
	if (func_221(0)) {
		return 0;
	}
	if (func_212(49)) {
		return 0;
	}
	return 1;
}

// Position - 0x24399
int func_223() {
	int iVar0;

	if (func_221(0)) {
		return 0;
	}
	iVar0 = time::get_clock_hours();
	if (iVar0 < 6 || iVar0 > 14) {
		return 0;
	}
	return 1;
}

// Position - 0x243CA
int func_224() {
	if (Global_86826 == -1) {
		Global_86826 = gameplay::get_game_timer();
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (!func_225(player::player_ped_id(), 11, 0)) {
			Global_86826 = -1;
			return 1;
		}
		if (gameplay::get_game_timer() - Global_86826 > 240000) {
			if (!func_225(player::player_ped_id(), 10, 0)) {
				Global_86826 = -1;
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2442F
int func_225(int iParam0, int iParam1, float fParam2) {
	struct<5> Var0;
	float fVar5;

	if (!entity::is_entity_dead(iParam0, 0)) {
		Var0 = {Global_35782[iParam1 /*5*/]};
		fVar5 = Var0.f_3;
		if (fParam2 > 0f) {
			fVar5 = fParam2;
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1), Var0, 1) < fVar5) {
			return 1;
		}
		else if (Var0.f_4 != -1) {
			return func_225(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

// Position - 0x24495
int func_226() { return 1; }

// Position - 0x2449E
int func_227(int iParam0) {
	var uVar0;

	if (iParam0 == 0) {
		func_244(7, 0, 0);
	}
	else if (iParam0 == 1) {
		if (func_199() == 1 && !ped::is_ped_injured(player::player_ped_id())) {
			Global_101700.f_2095.f_4091 = func_229(player::player_ped_id());
		}
		else {
			uVar0 = {func_38(joaat("player_one"), 0)};
			Global_101700.f_2095.f_4091 = func_228(uVar0[3], uVar0[4]);
		}
		func_244(7, 0, 1);
	}
	return -2;
}

// Position - 0x2451C
int func_228(int iParam0, int iParam1) { return iParam0 + iParam1 * 100; }

// Position - 0x2452B
int func_229(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = func_230(iParam0, 3, -1);
	iVar1 = func_230(iParam0, 4, -1);
	return iVar0 + iVar1 * 100;
}

// Position - 0x2454E
int func_230(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_237(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_237(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_233(iParam0, iParam2);
			}
		}
		else {
			return func_231(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x245EF
int func_231(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_35(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_232(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x2464F
int func_232(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_35(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x246D3
int func_233(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_236(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_234(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x24719
int func_234(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_236(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_33(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_33(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_235(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_236(iParam3);
}

// Position - 0x24815
int func_235(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x24953
int func_236(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x249D9
bool func_237(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_43(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_38(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_237(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_31(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_237(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_43(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_237(iParam0, 14, iVar4)) {
											if (!func_238(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_231(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_43(iVar0, iVar2, iVar1)};
						if (!func_238(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_31(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_237(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_35(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_35(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x24C31
bool func_238(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_31(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_243(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_242(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_241(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_239(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_242(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_241(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
						}
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_239(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_242(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_241(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_239(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x25235
bool func_239(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x254B2
int func_240(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_36(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_34(iParam0, func_35(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_35(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x2560E
bool func_241(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_240(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_240(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x25A0F
bool func_242(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x25D02
bool func_243(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x25D9B
void func_244(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == 11 || iParam0 == -1) {
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32) {
		return;
	}
	iVar0 = gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	if (iVar0 == iParam2) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	}
}

// Position - 0x25E20
int func_245(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		iVar0 = 0;
	}
	else if (iParam0 == 1) {
		iVar0 = 1;
	}
	func_246(iVar0);
	return -2;
}

// Position - 0x25E49
void func_246(int iParam0) {
	vehicle::set_vehicle_model_is_suppressed(joaat("faggio2"), iParam0);
	vehicle::set_vehicle_model_is_suppressed(joaat("hexer"), iParam0);
	vehicle::set_vehicle_model_is_suppressed(joaat("policeb"), iParam0);
	vehicle::set_vehicle_model_is_suppressed(joaat("sanchez"), iParam0);
	vehicle::set_vehicle_model_is_suppressed(joaat("vader"), iParam0);
}

// Position - 0x25E88
int func_247(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (iParam1 == -1) {
		return -2;
	}
	iVar0 = func_654(iParam1);
	iVar1 = Global_69971.f_109[iParam1 /*4*/];
	iVar2 = Global_82612[iVar1 /*34*/].f_6;
	if (func_653()) {
		return -1;
	}
	else if (Global_91491.f_1 == iParam1) {
		if (Global_91491 == 11) {
			func_977(iVar1);
			func_632(iParam1, iVar0, 1);
			return Global_69971.f_109[iParam1 /*4*/].f_2;
		}
	}
	if (iVar0 == -1) {
		if (!Global_69947) {
			iVar3 = 0;
			while (iVar3 < 3) {
				if (gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_11, iVar3)) {
					if (func_631() == iVar3) {
						return -1;
					}
					iVar4 = func_630(iVar3);
					if (!ped::is_ped_injured(Global_89302[iVar4])) {
						return -1;
					}
				}
				iVar3++;
			}
		}
		iVar0 = func_629(iParam1);
		if (iVar0 == -1) {
			return -1;
		}
	}
	iVar5 = Global_82576[iVar0 /*5*/].f_2;
	if (!gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 3)) {
		if (iVar5 == -1) {
			if (Global_85809[iVar1 /*2*/]) {
				return -1;
			}
			if (func_627(iVar1)) {
				return -1;
			}
			func_625(&iVar5, iVar1, iParam0, 0, Global_82612[iVar1 /*34*/].f_11);
			if (iVar5 == -1) {
				return -1;
			}
			func_617(iVar1);
			Global_82576[iVar0 /*5*/].f_2 = iVar5;
		}
	}
	if (!gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
		if (!gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 1)) {
			if (!gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 3)) {
				if (!func_616(iVar5)) {
					if (Global_101700.f_8044.f_330[iVar1 /*6*/]) {
						gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 2);
						gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
					}
					return -1;
				}
			}
			if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 4)) {
				script::request_script_with_name_hash(joaat("mission_stat_watcher"));
			}
			script::request_script_with_name_hash(iVar2);
			gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 1);
			if (player::is_player_playing(player::player_id())) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iVar6 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (entity::get_entity_health(iVar6) < 1) {
							entity::set_entity_health(iVar6, 1);
						}
						if (vehicle::get_vehicle_engine_health(iVar6) < 1f) {
							vehicle::set_vehicle_engine_health(iVar6, 1f);
						}
						if (vehicle::get_vehicle_petrol_tank_health(iVar6) < 1f) {
							vehicle::set_vehicle_petrol_tank_health(iVar6, 1f);
						}
						func_614(iVar6, 2.5f, 2, 0.5f, 1, 1, 0);
					}
				}
			}
			return -1;
		}
		if (iVar1 != 28) {
			if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 4)) {
				if (!Global_55822) {
					if (!gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 7)) {
						if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) >
							0) {
							func_612();
							return -1;
						}
						else if (script::has_script_with_name_hash_loaded(joaat("mission_stat_watcher"))) {
							system::start_new_script_with_name_hash(joaat("mission_stat_watcher"), 1828);
							script::set_script_with_name_hash_as_no_longer_needed(joaat("mission_stat_watcher"));
							gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 7);
						}
						else {
							return -1;
						}
					}
				}
			}
		}
		script::request_script_with_name_hash(iVar2);
		if (!script::has_script_with_name_hash_loaded(iVar2)) {
			return -1;
		}
		Global_82576[iVar0 /*5*/].f_4 = system::start_new_script_with_name_hash(iVar2, 20500);
		script::set_script_with_name_hash_as_no_longer_needed(iVar2);
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 2);
		if (!func_611(iVar1)) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 64);
				}
			}
		}
		func_379(iParam1, iVar0, iVar1, iParam0, 1);
		return -1;
	}
	iVar7 = gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5);
	if (script::is_thread_active(Global_82576[iVar0 /*5*/].f_4)) {
		if (iVar7) {
			if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1) && Global_91527 == 0) {
			}
			else {
				return -1;
			}
		}
		else {
			return -1;
		}
	}
	bVar8 = gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4);
	if (bVar8 && iVar7) {
		iVar7 = 0;
	}
	if (!(bVar8 || iVar7)) {
		iVar7 = 1;
	}
	if (bVar8) {
		return func_294(iParam1, iVar0, iVar1, 1, 0);
	}
	return func_248(iParam1, iVar0, iVar1, 1);
}

// Position - 0x262A1
int func_248(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 1) && Global_91527 == 0) {
		func_287(0);
		func_286(0);
		func_285(0);
		func_284(1, 1);
		func_283();
		Global_91281[0 /*65*/] = {Global_101700.f_2095.f_539[0 /*65*/]};
		Global_91281[1 /*65*/] = {Global_101700.f_2095.f_539[1 /*65*/]};
		Global_91281[2 /*65*/] = {Global_101700.f_2095.f_539[2 /*65*/]};
		Global_82576[iParam1 /*5*/].f_1 = 0;
		func_251(iParam0);
		return -1;
	}
	func_977(iParam2);
	Global_91527 = 0;
	func_632(iParam0, iParam1, iParam3);
	func_249(0, iParam2);
	return Global_69971.f_109[iParam0 /*4*/].f_2;
}

// Position - 0x2636B
void func_249(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam1 != -1) {
		if (func_250(Global_82612[iParam1 /*34*/].f_11, 0)) {
			iVar0 = joaat("sp0_missions_failed");
			if (iParam0) {
				iVar0 = joaat("sp0_missions_passed");
			}
			stats::stat_get_int(iVar0, &iVar1, -1);
			iVar1++;
			stats::stat_set_int(iVar0, iVar1, 1);
		}
		if (func_250(Global_82612[iParam1 /*34*/].f_11, 1)) {
			iVar2 = joaat("sp1_missions_failed");
			if (iParam0) {
				iVar2 = joaat("sp1_missions_passed");
			}
			stats::stat_get_int(iVar2, &iVar3, -1);
			iVar3++;
			stats::stat_set_int(iVar2, iVar3, 1);
		}
		if (func_250(Global_82612[iParam1 /*34*/].f_11, 2)) {
			iVar4 = joaat("sp2_missions_failed");
			if (iParam0) {
				iVar4 = joaat("sp2_missions_passed");
			}
			stats::stat_get_int(iVar4, &iVar5, -1);
			iVar5++;
			stats::stat_set_int(iVar4, iVar5, 1);
		}
	}
}

// Position - 0x26436
bool func_250(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
	case 1:
	case 2: return gameplay::is_bit_set(iParam0, iParam1);

	default:
	}
	return false;
}

// Position - 0x26463
void func_251(int iParam0) {
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	char *sVar9;

	if (Global_91491 != 12) {
		iVar6 = Global_69971.f_109[iParam0 /*4*/];
		Var0 = {Global_82612[iVar6 /*34*/]};
		if (gameplay::is_bit_set(Global_82612[iVar6 /*34*/].f_15, 1)) {
			return;
		}
		if (gameplay::are_strings_equal(&Var0, "me_amanda1") || gameplay::are_strings_equal(&Var0, "me_jimmy1") ||
			gameplay::are_strings_equal(&Var0, "me_tracey1")) {
			iVar7 = 4;
		}
		else if (gameplay::are_strings_equal(&Var0, "carsteal4") || gameplay::are_strings_equal(&Var0, "fbi3")) {
			iVar7 = 3;
		}
		else if (!gameplay::is_bit_set(Global_82612[iVar6 /*34*/].f_15, 2)) {
			if (gameplay::is_bit_set(Global_82612[iVar6 /*34*/].f_15, 17)) {
				iVar7 = 1;
			}
			else {
				iVar7 = 0;
			}
		}
		else {
			iVar7 = 2;
		}
		iVar8 = func_281(iVar6);
		sVar9 = {Global_82612[iVar6 /*34*/].f_8};
		if (iVar6 == 90) {
			switch (Global_101700.f_8044.f_99.f_205[7]) {
			case 1: StringConCat(&sVar9, "A", 8); break;

			case 2: StringConCat(&sVar9, "B", 8); break;
			}
		}
		stats::playstats_mission_checkpoint(&sVar9, iVar8, Global_91528, 0);
		func_280(&sVar9, iVar8, Global_91528, 1, 0);
		if (func_252(&Var0, iVar7, iVar6)) {
			Global_91491.f_1 = iParam0;
		}
	}
}

// Position - 0x265B5
bool func_252(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<32> Var1;
	int iVar33;

	func_277();
	func_276();
	Global_91491 = 0;
	StringCopy(&Global_91491.f_3, sParam0, 32);
	Global_91491.f_11 = iParam1;
	gameplay::_disable_automatic_respawn(1);
	gameplay::set_fade_out_after_arrest(0);
	gameplay::set_fade_out_after_death(0);
	func_273(1);
	func_270(1);
	func_267(0);
	func_266(1);
	gameplay::clear_bit(&Global_91491.f_20, 9);
	gameplay::clear_bit(&Global_91491.f_20, 6);
	gameplay::clear_bit(&Global_91491.f_20, 20);
	gameplay::clear_bit(&Global_91491.f_20, 21);
	gameplay::clear_bit(&Global_91491.f_20, 5);
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::is_entity_upsidedown(iVar0)) {
					gameplay::set_bit(&Global_91491.f_20, 5);
				}
			}
		}
	}
	ui::clear_help(1);
	ui::clear_prints();
	func_265(0);
	func_264(1);
	Global_91491.f_2 = Global_91528;
	if (func_263()) {
		if (func_262()) {
			if (Global_91528 >= func_259()) {
				if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 16)) {
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2) {
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6) {
			func_254(iParam2, &Var1);
			if (Var1.f_31 == 1) {
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2) {
					Global_86000 = 1;
				}
			}
		}
		else {
			iVar33 = func_253(script::get_this_script_name());
			if (iVar33 > -1) {
				if (Global_101700.f_23945.f_4[iVar33] >= 2) {
					Global_86000 = 1;
				}
			}
		}
	}
	return true;
}

// Position - 0x26747
int func_253(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x2679D
void func_254(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_255(uParam1, "Abigail1", func_257(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 1:
		func_255(uParam1, "Abigail2", func_257(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 2:
		func_255(uParam1, "Barry1", func_257(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 3:
		func_255(uParam1, "Barry2", func_257(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 4:
		func_255(uParam1, "Barry3", func_257(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 5:
		func_255(uParam1, "Barry3A", func_257(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 6:
		func_255(uParam1, "Barry3C", func_257(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 7:
		func_255(uParam1, "Barry4", func_257(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_256(iParam0), 0, 0);
		break;

	case 8:
		func_255(uParam1, "Dreyfuss1", func_257(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 9:
		func_255(uParam1, "Epsilon1", func_257(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 10:
		func_255(uParam1, "Epsilon2", func_257(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 11:
		func_255(uParam1, "Epsilon3", func_257(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 12:
		func_255(uParam1, "Epsilon4", func_257(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 13:
		func_255(uParam1, "Epsilon5", func_257(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 14:
		func_255(uParam1, "Epsilon6", func_257(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 15:
		func_255(uParam1, "Epsilon7", func_257(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 16:
		func_255(uParam1, "Epsilon8", func_257(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 17:
		func_255(uParam1, "Extreme1", func_257(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 18:
		func_255(uParam1, "Extreme2", func_257(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 19:
		func_255(uParam1, "Extreme3", func_257(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 20:
		func_255(uParam1, "Extreme4", func_257(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 21:
		func_255(uParam1, "Fanatic1", func_257(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_256(iParam0), 1, 0);
		break;

	case 22:
		func_255(uParam1, "Fanatic2", func_257(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_256(iParam0), 1, 0);
		break;

	case 23:
		func_255(uParam1, "Fanatic3", func_257(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_256(iParam0), 0, 1);
		break;

	case 24:
		func_255(uParam1, "Hao1", func_257(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_256(iParam0), 0, 1);
		break;

	case 25:
		func_255(uParam1, "Hunting1", func_257(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 26:
		func_255(uParam1, "Hunting2", func_257(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 27:
		func_255(uParam1, "Josh1", func_257(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 28:
		func_255(uParam1, "Josh2", func_257(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 29:
		func_255(uParam1, "Josh3", func_257(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 30:
		func_255(uParam1, "Josh4", func_257(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 31:
		func_255(uParam1, "Maude1", func_257(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 32:
		func_255(uParam1, "Minute1", func_257(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 33:
		func_255(uParam1, "Minute2", func_257(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 34:
		func_255(uParam1, "Minute3", func_257(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 35:
		func_255(uParam1, "MrsPhilips1", func_257(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 36:
		func_255(uParam1, "MrsPhilips2", func_257(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_256(iParam0), 0, 0);
		break;

	case 37:
		func_255(uParam1, "Nigel1", func_257(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 38:
		func_255(uParam1, "Nigel1A", func_257(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 39:
		func_255(uParam1, "Nigel1B", func_257(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_256(iParam0), 1, 1);
		break;

	case 40:
		func_255(uParam1, "Nigel1C", func_257(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_256(iParam0), 1, 1);
		break;

	case 41:
		func_255(uParam1, "Nigel1D", func_257(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_256(iParam0), 1, 1);
		break;

	case 42:
		func_255(uParam1, "Nigel2", func_257(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 43:
		func_255(uParam1, "Nigel3", func_257(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_256(iParam0), 1, 1);
		break;

	case 44:
		func_255(uParam1, "Omega1", func_257(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 45:
		func_255(uParam1, "Omega2", func_257(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 46:
		func_255(uParam1, "Paparazzo1", func_257(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 47:
		func_255(uParam1, "Paparazzo2", func_257(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 48:
		func_255(uParam1, "Paparazzo3", func_257(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 49:
		func_255(uParam1, "Paparazzo3A", func_257(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 50:
		func_255(uParam1, "Paparazzo3B", func_257(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 51:
		func_255(uParam1, "Paparazzo4", func_257(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 52:
		func_255(uParam1, "Rampage1", func_257(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 54:
		func_255(uParam1, "Rampage3", func_257(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 55:
		func_255(uParam1, "Rampage4", func_257(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 56:
		func_255(uParam1, "Rampage5", func_257(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_256(iParam0), 0, 0);
		break;

	case 53:
		func_255(uParam1, "Rampage2", func_257(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_256(iParam0), 1, 0);
		break;

	case 57:
		func_255(uParam1, "TheLastOne", func_257(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 58:
		func_255(uParam1, "Tonya1", func_257(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 59:
		func_255(uParam1, "Tonya2", func_257(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	case 60:
		func_255(uParam1, "Tonya3", func_257(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_256(iParam0), 0, 1);
		break;

	case 61:
		func_255(uParam1, "Tonya4", func_257(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_256(iParam0), 0, 1);
		break;

	case 62:
		func_255(uParam1, "Tonya5", func_257(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_256(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x279E4
void func_255(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			  int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			  int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			  int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x27A75
int func_256(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x27DBB
struct<2> func_257(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_258(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x27DF3
struct<2>
func_258(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x28242
int func_259()
{
	int iVar0;
	int iVar1;

	iVar0 = func_260(&Global_91491.f_3, 0);
	iVar1 = 0;
	if (iVar0 == 53) {
		iVar1 = 1;
	}
	return iVar1;
}

// Position - 0x28266
int func_260(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_261(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x28290
int func_261(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x282C6
bool func_262() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 3 ||
		Global_91491.f_11 == 4) {
		return true;
	}
	return false;
}

// Position - 0x28316
bool func_263() {
	if (Global_91491.f_11 == 0 || Global_91491.f_11 == 1 || Global_91491.f_11 == 2 || Global_91491.f_11 == 6 ||
		Global_91491.f_11 == 3) {
		return true;
	}
	if (Global_91491.f_11 == 5) {
		if (func_253(&Global_91491.f_3) > -1) {
			return true;
		}
	}
	return false;
}

// Position - 0x28382
void func_264(int iParam0) {
	if (iParam0 == 1) {
		Global_36330 = 1;
	}
	else {
		Global_36330 = 0;
	}
}

// Position - 0x2839B
void func_265(int iParam0) {
	ui::display_hud(iParam0);
	ui::display_radar(iParam0);
}

// Position - 0x283AF
void func_266(int iParam0) {
	if (iParam0 == 1) {
		ui::_0xFDB423997FA30340();
		gameplay::set_bit(&Global_91491.f_20, 3);
	}
	else if (gameplay::is_bit_set(Global_91491.f_20, 3)) {
		ui::_0xE1CD1E48E025E661();
		gameplay::clear_bit(&Global_91491.f_20, 3);
	}
}

// Position - 0x283EC
void func_267(int iParam0) {
	if (iParam0 == 1) {
		if (gameplay::is_bit_set(Global_91491.f_20, 4)) {
			func_269();
			gameplay::clear_bit(&Global_91491.f_20, 4);
		}
	}
	else {
		func_268();
		gameplay::set_bit(&Global_91491.f_20, 4);
	}
}

// Position - 0x28429
void func_268() { Global_17151.f_5 = 1; }

// Position - 0x28437
void func_269() { Global_17151.f_5 = 0; }

// Position - 0x28445
void func_270(int iParam0) {
	if (iParam0) {
		func_272();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_271(0)) {
			func_273(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x284A8
bool func_271(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0x28502
void func_272() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x2852B
void func_273(int iParam0) {
	if (Global_14604) {
		func_275(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_274()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x2859B
int func_274() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x285C2
void func_275(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_271(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x28636
void func_276() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0x28648
void func_277() {
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	gameplay::clear_bit(&Global_91491.f_20, 25);
	Global_91525 = 0;
	func_264(0);
	func_279();
	func_278();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

// Position - 0x28697
void func_278() {
	gameplay::clear_bit(&Global_91491.f_20, 22);
	gameplay::clear_bit(&Global_91491.f_20, 8);
}

// Position - 0x286B7
void func_279() {
	if (Global_91491.f_16 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_16);
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_91491.f_17);
		Global_91491.f_17 = 0;
	}
}

// Position - 0x286F5
void func_280(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x2873A
int func_281(int iParam0) {
	switch (iParam0) {
	case 69:
	case 70: return func_282(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_282(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_282(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_282(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_282(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x287F6
int func_282(int iParam0) {
	switch (iParam0) {
	case 1:
	case 3:
	case 5:
	case 6:
	case 8: return 0;

	case 2:
	case 4:
	case 7:
	case 9: return 1;
	}
	return -1;
}

// Position - 0x2884A
void func_283() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 198) {
		Global_34343[iVar0] = 1;
		iVar0++;
	}
}

// Position - 0x2886D
void func_284(int iParam0, int iParam1) {
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

// Position - 0x28881
void func_285(int iParam0) { Global_17151.f_16 = iParam0; }

// Position - 0x28890
void func_286(int iParam0) { Global_17149 = iParam0; }

// Position - 0x2889D
void func_287(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 46) {
		func_288(iVar0, iParam0);
		iVar0++;
	}
}

// Position - 0x288C0
void func_288(int iParam0, bool bParam1) {
	if (bParam1) {
		if (!func_293(iParam0, 2, 1)) {
			func_292(iParam0, 2, 1);
		}
	}
	else if (func_293(iParam0, 2, 1)) {
		func_289(iParam0, 2, 1);
	}
}

// Position - 0x288F7
void func_289(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_155() == 0) {
			iVar0 = func_49(func_291(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_290(func_291(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x28960
void func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x28990
int func_291(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x28C57
void func_292(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_155() == 0) {
			iVar0 = func_49(func_291(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_290(func_291(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x28CC0
bool func_293(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_155() == 0) {
			return gameplay::is_bit_set(func_49(func_291(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x28D20
var func_294(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	char *sVar1;
	struct<2> Var3;
	int iVar5;
	int iVar6;

	func_371(iParam2);
	if (!iParam4) {
		iVar0 = func_281(iParam2);
		sVar1 = {Global_82612[iParam2 /*34*/].f_8};
		if (iParam2 == 90) {
			switch (Global_101700.f_8044.f_99.f_205[7]) {
			case 1: StringConCat(&sVar1, "A", 8); break;

			case 2: StringConCat(&sVar1, "B", 8); break;
			}
		}
		stats::playstats_mission_checkpoint(&sVar1, iVar0, Global_91528, 0);
		func_280(&sVar1, iVar0, Global_91528, 0, 0);
		Global_69966 = iParam2;
		Global_69967 = gameplay::get_game_timer();
		if (iParam2 == 28) {
			func_370(&Global_55837, Global_82612[iParam2 /*34*/].f_12);
		}
		else {
			Var3 = {func_369(iParam2)};
			func_370(&Var3, Global_82612[iParam2 /*34*/].f_12);
		}
		func_977(iParam2);
		func_360(iParam2, 0);
		if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 4)) {
			func_359(0, 0);
			Global_17151.f_17 = 1;
			Global_17151.f_18 = gameplay::get_game_timer();
		}
		if (!func_181(0)) {
			if (gameplay::is_orbis_version()) {
				if (iParam2 == 53) {
					func_358();
				}
				else if (iParam2 == 44) {
					func_357();
				}
				else if (iParam2 == 42) {
					func_356();
				}
				else {
					func_354(func_199());
				}
			}
		}
	}
	func_249(1, iParam2);
	func_632(iParam0, iParam1, iParam3);
	func_348(iParam2, 1);
	if (player::is_player_playing(player::player_id())) {
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		player::set_all_random_peds_flee_this_frame(player::player_id());
		player::start_firing_amnesty(5000);
	}
	Global_86002 = 0;
	func_346(&Global_101700.f_2095.f_539, iParam2);
	func_332(&Global_101700.f_2095.f_539, iParam2);
	if (player::is_player_playing(player::player_id())) {
		iVar5 = func_199();
		if (func_22(iVar5)) {
			func_325(player::player_ped_id(), &Global_90960[iVar5 /*98*/], &Global_91263[iVar5 /*3*/],
					 &Global_91273[iVar5], &Global_91255[iVar5], &Global_2595543[iVar5]);
		}
	}
	func_323(iParam2);
	func_300();
	iVar6 = func_299(iParam2);
	if (iVar6 != 0) {
		if (!audio::get_number_of_passenger_voice_variations(iVar6)) {
			audio::unlock_mission_news_story(iVar6);
		}
	}
	if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 0) && !Global_55822) {
		func_180();
	}
	if (!func_181(0)) {
		if (iParam2 == 90) {
			func_296(0);
		}
		else if (iParam2 == 84 || iParam2 == 85) {
			func_296(4);
		}
	}
	Global_69971.f_7 = 1;
	Global_69971.f_6 = 1;
	func_295(iParam2, 0);
	return Global_69971.f_109[iParam0 /*4*/].f_1;
}

// Position - 0x28FAB
void func_295(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x28FE9
void func_296(int iParam0) {
	int iVar0;
	int iVar1;

	if (network::network_is_signed_in()) {
		if (network::_0x43865688AE10F0D7()) {
			switch (iParam0) {
			case 0:
				if (!gameplay::is_bit_set(Global_101700.f_19077.f_290, 6)) {
					iVar1 = Global_101700.f_8044.f_99.f_205[func_298(0)];
					iVar0 = Global_101700.f_1.f_126[0 /*23*/].f_2[0];
					iVar0 += Global_101700.f_1.f_126[0 /*23*/].f_2[1];
					switch (iVar1) {
					case 1: network::_0x098AB65B9ED9A9EC("JH2A", iVar0, 0); break;

					case 2: network::_0x098AB65B9ED9A9EC("JH2B", iVar0, 0); break;
					}
					func_297("FB_J_HEIST");
					gameplay::set_bit(&Global_101700.f_19077.f_290, 6);
				}
				break;

			case 4:
				if (!gameplay::is_bit_set(Global_101700.f_19077.f_290, 7)) {
					iVar1 = Global_101700.f_8044.f_99.f_205[func_298(4)];
					iVar0 = Global_101700.f_1.f_126[4 /*23*/].f_2[0];
					iVar0 += Global_101700.f_1.f_126[4 /*23*/].f_2[1];
					iVar0 += Global_101700.f_1.f_126[4 /*23*/].f_2[2];
					switch (iVar1) {
					case 8: network::_0x098AB65B9ED9A9EC("FH2A", iVar0, 0); break;

					case 9: network::_0x098AB65B9ED9A9EC("FH2B", iVar0, 0); break;
					}
					func_297("FB_BS_HEIST");
					gameplay::set_bit(&Global_101700.f_19077.f_290, 7);
				}
				break;
			}
		}
	}
}

// Position - 0x29159
void func_297(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		ui::_set_notification_text_entry("FB_TITLE");
		ui::add_text_component_substring_text_label(sParam0);
		ui::_set_notification_message("CHAR_FACEBOOK", "CHAR_FACEBOOK", 1, 0, "", 0);
	}
}

// Position - 0x2918D
int func_298(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: iVar0 = 7; break;

	case 1: iVar0 = 8; break;

	case 2: iVar0 = 9; break;

	case 3: iVar0 = 10; break;

	case 4: iVar0 = 11; break;
	}
	return iVar0;
}

// Position - 0x291DE
int func_299(int iParam0) {
	switch (iParam0) {
	case 53: return 1;

	case 1: return 2;

	case 2: return 3;

	case 17: return 4;

	case 19: return 5;

	case 43: return 6;

	case 44: return 7;

	case 90:
		if (Global_101700.f_8044.f_99.f_205[7] == 1) {
			return 8;
		}
		else {
			return 9;
		}
		break;

	case 63: return 10;

	case 12: return 11;

	case 13: return 12;

	case 64: return 13;

	case 20: return 14;

	case 30: return 15;

	case 31: return 16;

	case 41:
		if (!Global_101700.f_8044.f_99.f_58[43]) {
			return 17;
		}
		else {
			return 18;
		}
		break;

	case 38: return 19;

	case 74: return 21;

	case 75: return 20;

	case 9:
		if (Global_101700.f_8044.f_99.f_58[76]) {
			return 23;
		}
		else {
			return 22;
		}
		break;

	case 59: return 24;

	case 45: return 25;

	case 10: return 26;

	case 14: return 27;

	case 93: return 28;

	case 16: return 29;

	case 39: return 30;

	case 46: return 31;

	case 60: return 32;

	case 22: return 33;

	case 69: return 34;

	case 70: return 35;

	case 48: return 36;

	case 61: return 37;

	case 49: return 38;

	case 84: return 39;

	case 85: return 40;

	case 27: return 41;

	case 3: return 56;

	case 4: return 57;

	case 5: return 58;

	case 6: return 59;

	case 7: return 60;

	case 58:
		if (Global_101700.f_8044.f_99.f_58[80]) {
			return 63;
		}
		break;
	}
	return 0;
}

// Position - 0x294B0
void func_300() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 8) {
		iVar1 = Global_89193[iVar0];
		if (entity::does_entity_exist(iVar1) && !ped::is_ped_injured(iVar1)) {
			iVar3 = func_27(iVar1);
			iVar2 = -99;
			switch (iVar3) {
			case 0: iVar2 = 112; break;

			case 1: iVar2 = 158; break;

			case 2: iVar2 = 154; break;
			}
			if (iVar2 != -99) {
				if (func_237(iVar1, 14, iVar2)) {
					func_301(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2) {
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x29571
int func_301(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_43(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (!func_237(iParam0, iParam1, iParam2)) {
		return 0;
	}
	if (iParam1 == 12) {
		uVar2 = {func_38(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14) {
			if (uVar2[iVar1] != -99) {
				func_301(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13) {
		uVar21 = {func_31(iVar0, iParam2)};
		iVar19 = 0;
		while (iVar19 <= 8) {
			if (!func_301(iParam0, 14, uVar21[iVar19])) {
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14) {
		ped::clear_ped_prop(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else {
		uVar31 = {func_38(iVar0, 0)};
		Global_69523[1 /*14*/] = {func_43(iVar0, iParam1, uVar31[iParam1])};
		if (ped::get_number_of_ped_drawable_variations(iParam0, func_35(iParam1)) > 0 &&
			ped::get_number_of_ped_texture_variations(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3) > 0) {
			ped::set_ped_component_variation(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_322(iParam0, iVar0, &iVar48, 0)) {
		func_304(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_302(iParam0, iVar0, &iVar48)) {
		func_304(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

// Position - 0x2972E
bool func_302(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	iVar0 = func_303(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99) {
		if (!func_237(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_63)) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x297BA
int func_303(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	default: break;
	}
	return 145;
}

// Position - 0x297F5
int func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var *uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;

	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = entity::get_entity_model(iParam0);
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_43(iVar10, iParam1, iParam2)};
		if (!func_321(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_319(iParam1);
	}
	if (iParam1 == 12) {
		if (iParam7 == 1) {
			if (iVar10 == joaat("player_one")) {
				iVar5 = func_231(iParam0, 8);
				if (iVar5 != 9) {
					iVar5 = -99;
				}
			}
			iVar6 = func_231(iParam0, 9);
			if (iVar10 == joaat("player_zero")) {
				if (iVar6 >= 9 && iVar6 <= 14) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one")) {
				if (iVar6 >= 5 && iVar6 <= 10) {
				}
				else {
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two")) {
				if (iVar6 >= 9 && iVar6 <= 14 || iVar6 >= 15 && iVar6 <= 16) {
				}
				else {
					iVar6 = -99;
				}
			}
			iVar7 = func_233(iParam0, 1);
			if (!func_242(iVar10, 14, iVar7, -1)) {
				iVar7 = -99;
			}
			iVar8 = func_233(iParam0, 0);
			if (!func_241(iVar10, 14, iVar8, -1) && !func_239(iVar10, 14, iVar8, -1)) {
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one")) {
				iVar9 = func_233(iParam0, 2);
			}
		}
		ped::clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1) {
			uVar11 = {Global_69566};
		}
		else {
			uVar11 = {func_38(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar11[iVar0] != -99) {
				Global_69523[1 /*14*/] = {func_43(iVar10, iVar0, uVar11[iVar0])};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
					if (iVar0 == 13) {
						uVar28 = 9;
						if (iParam5 == 1) {
							uVar28 = {Global_69583};
						}
						else {
							uVar28 = {func_31(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8) {
							Global_69523[1 /*14*/] = {func_43(iVar10, 14, uVar28[iVar1])};
							func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
									 Global_69523[1 /*14*/].f_4);
							func_319(14);
							if (Global_69522 == 1) {
								iVar2 = 0;
								while (iVar2 < 15) {
									iVar3 = func_309(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99) {
										func_304(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12) {
						if (iVar10 == joaat("player_one") && iVar0 == 2 && uVar11[iVar0] == 20) {
							func_308(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1) {
							ped::set_ped_component_variation(iParam0, func_35(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4,
															 ped::get_ped_palette_variation(iParam0, func_35(iVar0)));
						}
						else {
							ped::set_ped_component_variation(iParam0, func_35(iVar0), Global_69523[1 /*14*/].f_3,
															 Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_319(iVar0);
						if (Global_69522 == 1) {
							iVar2 = 0;
							while (iVar2 < 15) {
								iVar3 = func_309(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99) {
									func_304(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_43(iVar10, iVar0, func_230(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					if (iVar0 == 2) {
						if (iVar10 == joaat("player_one")) {
							if (func_322(iParam0, iVar10, &iVar4, 1)) {
								func_304(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else {
						uVar38 = {func_38(iVar10, 0)};
						func_304(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1) {
			Var55 = {func_43(iVar10, 8, iVar5)};
			if (iVar5 != -99) {
				if (func_238(iVar10, iParam2, 8, iVar5, &uVar11, &Var55)) {
					func_304(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_43(iVar10, 9, iVar6)};
			if (iVar6 != -99) {
				if (func_238(iVar10, iParam2, 9, iVar6, &uVar11, &Var55)) {
					func_304(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_43(iVar10, 14, iVar7)};
			if (iVar7 != -99) {
				if (func_238(iVar10, iParam2, 14, iVar7, &uVar11, &Var55)) {
					func_304(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_43(iVar10, 14, iVar8)};
			if (iVar8 != -99) {
				if (func_238(iVar10, iParam2, 14, iVar8, &uVar11, &Var55)) {
					func_304(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = {func_43(iVar10, 14, iVar9)};
			if (iVar9 != -99) {
				if (func_238(iVar10, iParam2, 14, iVar9, &uVar11, &Var55)) {
					func_304(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13) {
		uVar69 = {func_31(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_43(iVar10, 14, uVar69[iVar1])};
			func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_319(14);
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_309(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99) {
						func_304(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_319(iParam1);
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_309(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_304(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else {
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_35(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1) {
			iVar2 = 0;
			while (iVar2 < 15) {
				iVar3 = func_309(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99) {
					func_304(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0) {
			func_305(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1) {
		if (func_322(iParam0, iVar10, &iVar4, 0)) {
			func_304(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_302(iParam0, iVar10, &iVar4)) {
			func_304(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x2A001
void func_305(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 == joaat("player_zero")) {
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one")) {
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two")) {
		iVar0 = 4;
	}
	if (func_307(iParam0, 12, iVar0)) {
		if (func_306(iParam0, iParam1, iParam2)) {
			iVar1 = func_303(iParam0);
			if (iParam1 == 3) {
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4) {
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

// Position - 0x2A08B
bool func_306(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 4) {
			if (iParam2 >= 47 && iParam2 <= 54) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 77 && iParam2 <= 84) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 4) {
			if (iParam2 >= 14 && iParam2 <= 21) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 41 && iParam2 <= 56) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 4) {
			if (iParam2 >= 18 && iParam2 <= 29) {
				return true;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 >= 54 && iParam2 <= 69) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2A169
bool func_307(int iParam0, int iParam1, int iParam2) {
	Global_69523[1 /*14*/] = {func_43(iParam0, iParam1, iParam2)};
	return gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2);
}

// Position - 0x2A193
bool func_308(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7 || iParam2 == 23) {
				*iParam3 = 1;
			}
			break;

		case 9:
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14) {
				*iParam3 = 1;
			}
			break;

		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 1;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 40 && iParam2 <= 41 || iParam2 == 46) {
				*iParam3 = 1;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 2:
			if (iParam2 == 20) {
				*iParam3 = 20;
			}
			break;

		case 8:
			if (iParam2 == 4) {
				*iParam3 = 19;
			}
			break;

		case 9:
			if (iParam2 >= 5 && iParam2 <= 10) {
				*iParam3 = 19;
			}
			break;

		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 19;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 19;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 7) {
				*iParam3 = 2;
			}
			break;

		case 9:
			if (iParam2 >= 9 && iParam2 <= 14 || iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 2;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 2;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 56 && iParam2 <= 57 || iParam2 == 62) {
				*iParam3 = 2;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_303(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

// Position - 0x2A49A
var func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = -99;
	if (iParam4 == 0) {
		switch (iParam2) {
		case 2:
			iVar1 = func_231(iParam0, 1);
			iVar0 = func_316(iParam1, iParam3, iVar1);
			break;

		case 1:
			iVar2 = func_231(iParam0, 2);
			iVar0 = func_316(iParam1, iVar2, iParam3);
			break;
		}
	}
	else if (iParam4 == 2) {
		func_308(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1) {
		func_315(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6) {
		if (iParam2 == 4) {
			if (func_314(iParam1, iParam3, &iVar0)) {
			}
		}
	}
	else {
		switch (iParam1) {
		case joaat("player_zero"):
			switch (iParam4) {
			case 3:
				switch (iParam2) {
				case 10:
					switch (iParam3) {
					case 36: iVar0 = 17; break;

					case 37: iVar0 = 17; break;

					case 38: iVar0 = 18; break;

					case 39: iVar0 = 18; break;

					case 40: iVar0 = 19; break;

					case 41: iVar0 = 19; break;

					case 42: iVar0 = 20; break;

					case 43: iVar0 = 20; break;
					}
					break;

				case 11:
					if (iParam3 >= 2 && iParam3 <= 7) {
						if (!func_313(iParam0, 3, 44, 59)) {
							iVar0 = 44;
						}
					}
					else if (iParam3 >= 8 && iParam3 <= 17 || iParam3 >= 18 && iParam3 <= 27 ||
							 iParam3 >= 28 && iParam3 <= 43) {
						if (!func_313(iParam0, 3, 135, 150)) {
							iVar0 = func_312(iParam1, 3, 135, 150);
						}
					}
					break;
				}
				break;

			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 63: iVar0 = 4; break;

					case 61: iVar0 = 3; break;

					case 16: iVar0 = 1; break;

					case 114: iVar0 = 15; break;

					case 115: iVar0 = 17; break;

					case 116: iVar0 = 16; break;

					case 117: iVar0 = 18; break;

					case 118: iVar0 = 20; break;

					case 119: iVar0 = 19; break;

					case 125: iVar0 = 21; break;

					case 120: iVar0 = 22; break;

					case 124: iVar0 = 23; break;

					case 126: iVar0 = 24; break;

					case 121: iVar0 = 25; break;

					case 127: iVar0 = 26; break;

					case 128: iVar0 = 27; break;

					case 85: iVar0 = 6; break;

					case 77: iVar0 = 7; break;

					case 78: iVar0 = 8; break;

					case 79: iVar0 = 9; break;

					case 80: iVar0 = 10; break;

					case 81: iVar0 = 11; break;

					case 82: iVar0 = 12; break;

					case 83: iVar0 = 13; break;

					case 84: iVar0 = 14; break;

					case 21: iVar0 = 31; break;

					case 22: iVar0 = 30; break;

					case 23: iVar0 = 29; break;

					case 24: iVar0 = 28; break;

					case 25: iVar0 = 33; break;

					case 26: iVar0 = 35; break;

					case 27: iVar0 = 34; break;

					case 28: iVar0 = 32; break;

					default:
						if (iParam3 >= 17 && iParam3 <= 20) {
						}
						else {
							iVar0 = 0;
						}
						break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 44 && iParam3 <= 59 || iParam3 >= 135 && iParam3 <= 150) {
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 10) {
					if (iParam3 >= 36 && iParam3 <= 43) {
						iVar0 = 0;
					}
				}
				break;
			}
			break;

		case joaat("player_one"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 17: iVar0 = 2; break;

					case 90: iVar0 = 1; break;

					case 268: iVar0 = 3; break;

					case 269: iVar0 = 5; break;

					case 270: iVar0 = 4; break;

					case 271: iVar0 = 6; break;

					case 272: iVar0 = 8; break;

					case 273: iVar0 = 7; break;

					case 279: iVar0 = 9; break;

					case 274: iVar0 = 10; break;

					case 278: iVar0 = 11; break;

					case 280: iVar0 = 12; break;

					case 275: iVar0 = 13; break;

					case 281: iVar0 = 14; break;

					case 282: iVar0 = 15; break;

					case 107: iVar0 = 16; break;

					case 108: iVar0 = 17; break;

					case 109: iVar0 = 18; break;

					case 110: iVar0 = 19; break;

					case 111: iVar0 = 20; break;

					case 112: iVar0 = 21; break;

					case 113: iVar0 = 22; break;

					case 114: iVar0 = 23; break;

					case 115: iVar0 = 24; break;

					case 116: iVar0 = 25; break;

					case 117: iVar0 = 52; break;

					case 118: iVar0 = 27; break;

					case 119: iVar0 = 28; break;

					case 120: iVar0 = 29; break;

					case 121: iVar0 = 30; break;

					case 122: iVar0 = 31; break;

					case 296: iVar0 = 32; break;

					case 297: iVar0 = 33; break;

					case 298: iVar0 = 34; break;

					case 299: iVar0 = 35; break;

					case 300: iVar0 = 36; break;

					case 301: iVar0 = 37; break;

					case 302: iVar0 = 38; break;

					case 309: iVar0 = 39; break;

					case 310: iVar0 = 40; break;

					case 311: iVar0 = 41; break;

					case 312: iVar0 = 42; break;

					case 313: iVar0 = 43; break;

					case 314: iVar0 = 44; break;

					case 315: iVar0 = 45; break;

					case 316: iVar0 = 46; break;

					case 317: iVar0 = 51; break;

					default: iVar0 = 0; break;
					}
					break;

				case 11:
					if (iParam3 != 0) {
						iVar0 = 0;
					}
					break;
				}
				break;

			case 3:
				switch (iParam2) {
				case 11:
					if (iParam3 >= 47 && iParam3 <= 62) {
						if (!func_313(iParam0, 3, 209, 222)) {
							iVar0 = func_312(iParam1, 3, 209, 222);
						}
					}
					else if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8) {
						if (!func_313(iParam0, 3, 243, 258)) {
							if (iParam3 == 1 || iParam3 == 5) {
								iVar0 = func_312(iParam1, 3, 243, 246);
							}
							else if (iParam3 == 2 || iParam3 == 6) {
								iVar0 = func_312(iParam1, 3, 247, 250);
							}
							else if (iParam3 == 3 || iParam3 == 7) {
								iVar0 = func_312(iParam1, 3, 251, 254);
							}
							else if (iParam3 == 4 || iParam3 == 8) {
								iVar0 = func_312(iParam1, 3, 255, 258);
							}
						}
					}
					else if (iParam3 == 41 || iParam3 == 42) {
						if (!func_313(iParam0, 3, 176, 191) && !func_313(iParam0, 3, 227, 242)) {
							iVar0 = func_312(iParam1, 3, 176, 191);
						}
					}
					break;
				}
				break;

			case 8:
				if (iParam2 == 11 || iParam2 == 3) {
					if (iParam2 == 11) {
						iVar5 = iParam3;
						iVar4 = func_231(iParam0, 3);
					}
					else if (iParam2 == 3) {
						iVar4 = iParam3;
						iVar5 = func_231(iParam0, 11);
						iVar5 = func_311(iParam1, iVar4, iVar5, 0);
					}
					iVar3 = func_231(iParam0, 8);
					if (iVar5 >= 5 && iVar5 <= 8 || iVar5 >= 25 && iVar5 <= 40 || iVar5 >= 42 && iVar5 <= 43) {
						if (!func_310(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6)) {
							if (iVar6 != -99) {
								iVar0 = iVar6;
							}
						}
					}
					else if (iVar3 >= 27 && iVar3 <= 42 || iVar3 >= 43 && iVar3 <= 58 || iVar3 >= 59 && iVar3 <= 74) {
						iVar0 = 26;
					}
				}
				break;

			case 11:
				if (iParam2 == 3) {
					if (iParam3 >= 209 && iParam3 <= 222) {
					}
					else if (iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 227 && iParam3 <= 242 ||
							 iParam3 >= 243 && iParam3 <= 258) {
						iVar7 = func_231(iParam0, 8);
						iVar8 = func_231(iParam0, 11);
						if (iVar7 >= 27 && iVar7 <= 42 || iVar7 >= 43 && iVar7 <= 58 || iVar7 >= 59 && iVar7 <= 74) {
							iVar0 = func_311(iParam1, iParam3, iVar8, 0);
						}
						else {
							iVar0 = func_311(iParam1, iParam3, iVar8, 1);
						}
					}
					else if (iParam3 >= 41 && iParam3 <= 56) {
						iVar0 = 45;
					}
					else if (iParam3 >= 223 && iParam3 <= 226) {
						iVar0 = 44;
					}
					else {
						iVar0 = 0;
					}
				}
				else if (iParam2 == 8) {
					if (iParam3 >= 27 && iParam3 <= 42 || iParam3 >= 43 && iParam3 <= 58 ||
						iParam3 >= 59 && iParam3 <= 74) {
						iVar9 = func_231(iParam0, 11);
						iVar0 = func_311(iParam1, -99, iVar9, 0);
					}
				}
				break;
			}
			break;

		case joaat("player_two"):
			switch (iParam4) {
			case 10:
				switch (iParam2) {
				case 3:
					switch (iParam3) {
					case 50: iVar0 = 3; break;

					case 81: iVar0 = 5; break;

					case 82: iVar0 = 6; break;

					case 83: iVar0 = 7; break;

					case 84: iVar0 = 10; break;

					case 85: iVar0 = 9; break;

					case 86: iVar0 = 8; break;

					case 92: iVar0 = 22; break;

					case 87: iVar0 = 23; break;

					case 91: iVar0 = 24; break;

					case 93: iVar0 = 25; break;

					case 88: iVar0 = 26; break;

					case 94: iVar0 = 27; break;

					case 120: iVar0 = 11; break;

					case 121: iVar0 = 13; break;

					case 122: iVar0 = 14; break;

					case 124: iVar0 = 12; break;

					case 126: iVar0 = 18; break;

					case 128: iVar0 = 17; break;

					case 130: iVar0 = 19; break;

					case 131: iVar0 = 16; break;

					case 134: iVar0 = 15; break;

					case 135: iVar0 = 20; break;

					default: iVar0 = 0; break;
					}
					break;
				}
				break;
			}
			break;
		}
	}
	return iVar0;
}

// Position - 0x2B04D
int func_310(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;

	switch (iParam0) {
	case joaat("player_zero"): break;

	case joaat("player_one"):
		*iParam4 = 0;
		if (iParam1 >= 27 && iParam1 <= 42) {
			if (iParam2 != -99) {
				if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
				}
				else {
					if (iParam2 >= 42 && iParam2 <= 43) {
						if (iParam3 >= 176 && iParam3 <= 191) {
							iVar0 = iParam1 - 27;
							*iParam4 = 59 + iVar0;
						}
						else if (iParam3 >= 227 && iParam3 <= 242) {
							iVar0 = iParam1 - 27;
							*iParam4 = 43 + iVar0;
						}
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242 || iParam3 >= 176 && iParam3 <= 191 ||
					iParam3 >= 243 && iParam3 <= 258) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 58) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 43;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 227 && iParam3 <= 242) {
				}
				else {
					if (iParam3 >= 176 && iParam3 <= 191) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 43;
							*iParam4 = 59 + iVar0;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 59 && iParam1 <= 74) {
			if (iParam2 != -99) {
				if (iParam2 >= 42 && iParam2 <= 43) {
				}
				else {
					if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 >= 176 && iParam3 <= 191) {
				}
				else {
					if (iParam3 >= 227 && iParam3 <= 242) {
						if (iParam2 >= 42 && iParam2 <= 43) {
							iVar0 = iParam1 - 59;
							*iParam4 = 43 + iVar0;
						}
					}
					else if (iParam2 >= 5 && iParam2 <= 8 || iParam2 >= 25 && iParam2 <= 40) {
						iVar0 = iParam1 - 59;
						*iParam4 = 27 + iVar0;
					}
					return 0;
				}
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 12) {
			if (iParam3 != 241) {
				return 0;
			}
		}
		break;
	}
	return 1;
}

// Position - 0x2B331
int func_311(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam1 >= 243 && iParam1 <= 246) {
		if (iParam3 == 1) {
			return 1;
		}
		else {
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250) {
		if (iParam3 == 1) {
			return 2;
		}
		else {
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254) {
		if (iParam3 == 1) {
			return 3;
		}
		else {
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258) {
		if (iParam3 == 1) {
			return 4;
		}
		else {
			return 8;
		}
	}
	else if (iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 227 && iParam1 <= 242) {
		if (iParam2 >= 9 && iParam2 <= 24) {
			if (iParam3 == 1) {
				return iParam2;
			}
			else {
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40) {
			if (iParam3 == 1) {
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else {
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42) {
			if (iParam3 == 1) {
				return 41;
			}
			else {
				return 42;
			}
		}
		else {
			if (iParam3 == 1) {
				iParam2 = func_312(iParam0, 11, 9, 24);
			}
			else {
				iParam2 = func_312(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99) {
				if (iParam3 == 1) {
					return 41;
				}
				else {
					return 42;
				}
			}
			else {
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24) {
		if (iParam3 == 1) {
			return iParam2;
		}
		else {
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40) {
		if (iParam3 == 1) {
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else {
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42) {
		if (iParam3 == 1) {
			return 41;
		}
		else {
			return 42;
		}
	}
	return -99;
}

// Position - 0x2B5F8
int func_312(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1) {
		iVar1 = iVar0;
		if (func_307(iParam0, iParam1, iVar1)) {
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

// Position - 0x2B62F
int func_313(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_231(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3) {
		return 1;
	}
	return 0;
}

// Position - 0x2B658
bool func_314(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 16 || iParam1 == 17 || iParam1 == 21 || iParam1 == 22 || iParam1 == 32 ||
			iParam1 >= 34 && iParam1 <= 39 || iParam1 >= 41 && iParam1 <= 45 || iParam1 == 46 ||
			iParam1 >= 47 && iParam1 <= 54 || iParam1 >= 55 && iParam1 <= 70 || iParam1 >= 72 && iParam1 <= 79 ||
			iParam1 == 80 || iParam1 >= 81 && iParam1 <= 83 || iParam1 >= 84 && iParam1 <= 87 || iParam1 == 88 ||
			iParam1 >= 89 && iParam1 <= 91 || iParam1 == 95 || iParam1 >= 96 && iParam1 <= 111 || iParam1 == 112) {
			*iParam2 = 6;
			return true;
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 12 || iParam1 >= 14 && iParam1 <= 21 || iParam1 == 32 || iParam1 == 52 ||
			iParam1 >= 69 && iParam1 <= 70 || iParam1 == 71 || iParam1 >= 72 && iParam1 <= 77) {
			*iParam2 = 17;
			return true;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 4 || iParam1 == 5 || iParam1 == 6 || iParam1 == 7 || iParam1 == 14 ||
			iParam1 >= 18 && iParam1 <= 29 || iParam1 == 31 || iParam1 == 32 || iParam1 == 33 || iParam1 == 34 ||
			iParam1 >= 35 && iParam1 <= 42 || iParam1 >= 43 && iParam1 <= 53 || iParam1 >= 54 && iParam1 <= 61 ||
			iParam1 >= 71 && iParam1 <= 80 || iParam1 >= 81 && iParam1 <= 90 || iParam1 >= 94 && iParam1 <= 103) {
			*iParam2 = 8;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2B922
bool func_315(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;

	*iParam3 = -99;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 44 && iParam2 <= 47) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 31 && iParam2 <= 32 || iParam2 >= 33 && iParam2 <= 34 || iParam2 >= 35 && iParam2 <= 36 ||
				iParam2 == 37 || iParam2 >= 38 && iParam2 <= 39 || iParam2 >= 40 && iParam2 <= 41 ||
				iParam2 >= 42 && iParam2 <= 44) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 10:
			if (iParam2 >= 47 && iParam2 <= 50) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 26 && iParam2 <= 27 || iParam2 >= 28 && iParam2 <= 29 || iParam2 >= 30 && iParam2 <= 31 ||
				iParam2 == 32 || iParam2 >= 35 && iParam2 <= 36) {
				*iParam3 = 0;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 9:
			if (iParam2 >= 15 && iParam2 <= 16) {
				*iParam3 = 0;
			}
			break;

		case 10:
			if (iParam2 >= 29 && iParam2 <= 32) {
				*iParam3 = 0;
			}
			break;

		case 14:
			if (iParam2 >= 47 && iParam2 <= 48 || iParam2 >= 49 && iParam2 <= 50 || iParam2 >= 51 && iParam2 <= 52 ||
				iParam2 == 53 || iParam2 >= 54 && iParam2 <= 55 || iParam2 >= 56 && iParam2 <= 57 ||
				iParam2 >= 58 && iParam2 <= 60) {
				*iParam3 = 0;
			}
			break;
		}
		break;
	}
	if (*iParam3 != -99) {
		iVar0 = func_303(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

// Position - 0x2BBAC
int func_316(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 1) {
			if (iParam2 == 0) {
				return 1;
			}
			else if (iParam2 == 4) {
				return 5;
			}
			else {
				return 3;
			}
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else if (iParam2 == 4) {
			return 4;
		}
		else {
			return 2;
		}
		break;

	case joaat("player_one"):
		if (iParam1 >= 0 && iParam1 <= 15) {
			if (iParam2 == 0) {
				return 0;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 >= 16 && iParam1 <= 17) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 5;
			}
		}
		else if (iParam1 == 18) {
			if (iParam2 == 0) {
				return 6;
			}
			else {
				return 7;
			}
		}
		else if (iParam1 == 19) {
			if (iParam2 == 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else if (iParam2 == 0) {
			return 1;
		}
		else {
			return 4;
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 2) {
			if (iParam2 == 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
		else if (iParam1 == 3) {
			if (iParam2 == 0) {
				return 4;
			}
			else {
				return 6;
			}
		}
		else if (iParam1 == 8) {
			return 5;
		}
		else if (iParam2 == 0) {
			return 0;
		}
		else {
			return 1;
		}
		break;
	}
	return -99;
}

// Position - 0x2BD03
void func_317(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_234(iParam0, iParam2, iParam3, iParam1);
			if (func_318(entity::get_entity_model(iParam0), 14, iVar0,
						 dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x2BD9B
bool func_318(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_240(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_240(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2BE69
void func_319(int iParam0) {
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		func_42(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1) && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam0 == 12) {
			func_320(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13) {
		}
		else if (iParam0 == 14) {
			func_320(Global_2621444, 2, 1, 1, -1);
		}
		else {
			func_320(Global_2621444, 2, 1, 1, -1);
		}
	}
}

// Position - 0x2BF21
void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_54(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_49(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_290(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x2BF6B
int func_321(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x2BFBC
bool func_322(int iParam0, int iParam1, int *iParam2, int iParam3) {
	int iVar0;

	iVar0 = func_303(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99) {
		if (!func_237(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61,
					  Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) ||
			iParam3 == 1) {
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

// Position - 0x2C053
void func_323(int iParam0) {
	switch (iParam0) {
	case 1:
		func_324(6, 140);
		func_324(7, 140);
		break;

	case 19: func_324(4, 140); break;

	case 43:
		func_324(6, 140);
		func_324(7, 140);
		break;

	case 63: func_324(10, 140); break;
	}
}

// Position - 0x2C0B0
void func_324(int iParam0, int iParam1) { Global_86830[iParam0] = iParam1; }

// Position - 0x2C0C2
void func_325(int iParam0, var *uParam1, var *uParam2, float *fParam3, int *iParam4, int *iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = 0;
	iVar1 = 0;
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
				iVar1 = ped::get_vehicle_ped_is_in(iParam0, 0);
				*iParam4 = 2;
			}
			else {
				iVar2 = func_27(iParam0);
				if (!entity::is_entity_dead(Global_91259[iVar2], 0)) {
					if (vehicle::is_vehicle_seat_free(Global_91259[iVar2], -1, 0)) {
						vVar3 = {entity::get_entity_coords(iParam0, 1)};
						vVar6 = {entity::get_entity_coords(Global_91259[iVar2], 1)};
						if (entity::get_entity_model(Global_91259[iVar2]) == joaat("luxor2")) {
							if (system::vdist(vVar3, vVar6) < 10f) {
								*iParam4 = 2;
								iVar1 = Global_91259[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	func_326(iParam0, iVar1, uParam1, uParam2, fParam3, iParam4, iParam5, iVar0);
}

// Position - 0x2C195
void func_326(int iParam0, int iParam1, var *uParam2, var *uParam3, float *fParam4, int *iParam5, int *iParam6,
			  int iParam7) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;

	uParam2->f_97 = 0;
	iVar0 = 145;
	if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
		iVar0 = func_27(iParam0);
		if (iVar0 > 3) {
			if (network::network_is_game_in_progress()) {
			}
			return;
		}
		if (decorator::decor_exist_on(iParam1, "GetawayVehicleValid")) {
			if (decorator::decor_get_bool(iParam1, "GetawayVehicleValid")) {
				if (Global_101700.f_8044.f_99.f_58[45] || Global_101700.f_8044.f_99.f_58[12] ||
					Global_101700.f_8044.f_99.f_58[34]) {
					*iParam5 = 0;
					Global_91259[iVar0] = 0;
					return;
				}
			}
		}
		if (ped::is_ped_in_vehicle(iParam0, iParam1, 0) || iParam7) {
			*iParam5 = 2;
			Global_91259[iVar0] = iParam1;
		}
		else if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			iParam1 = ped::get_vehicle_ped_is_in(iParam0, 0);
			*iParam5 = 2;
			Global_91259[iVar0] = iParam1;
		}
		else {
			iVar1 = 0;
			while (iVar1 < 68) {
				if (iParam1 == Global_68531.f_139[iVar1]) {
					*iParam5 = 0;
					Global_91259[iVar0] = 0;
					return;
				}
				iVar1++;
			}
			if (!entity::is_entity_dead(Global_91259[iVar0], 0)) {
				if (!func_330(Global_91259[iVar0], iVar0, 0) ||
					ped::is_ped_in_vehicle(iParam0, Global_91259[iVar0], 0)) {
					vVar2 = {entity::get_entity_coords(iParam0, 1)};
					vVar5 = {entity::get_entity_coords(Global_91259[iVar0], 1)};
					if (func_329(iParam0, Global_91259[iVar0], 0)) {
						if (system::vdist2(vVar2, vVar5) < 22500f) {
							*uParam3 = {vVar5};
							*fParam4 = entity::get_entity_heading(Global_91259[iVar0]);
							*iParam5 = 1;
							Global_91259[iVar0] = iParam1;
							if (system::vdist2(vVar2, vVar5) < 1.5f * 1.5f) {
							}
						}
					}
				}
				else {
					*iParam5 = 0;
					Global_91259[iVar0] = 0;
				}
			}
		}
	}
	if (entity::does_entity_exist(iParam1)) {
		*uParam2 = entity::get_entity_model(iParam1);
		if (vehicle::get_vehicle_trailer_vehicle(iParam1, &iVar9)) {
			uParam2->f_1 = entity::get_entity_model(iVar9);
		}
		uParam2->f_2 = vehicle::get_vehicle_dirt_level(iParam1);
		uParam2->f_3 = entity::get_entity_health(iParam1);
		uParam2->f_4 = vehicle::get_vehicle_colour_combination(iParam1);
		if (uParam2->f_4 > -1) {
			uParam2->f_9 = 1;
			uParam2->f_5 = -1;
			uParam2->f_6 = -1;
		}
		else {
			uParam2->f_9 = 0;
			vehicle::get_vehicle_colours(iParam1, &uParam2->f_5, &uParam2->f_6);
		}
		if (!vehicle::is_this_model_a_boat(*uParam2)) {
			uParam2->f_10 = 1;
			vehicle::get_vehicle_extra_colours(iParam1, &uParam2->f_7, &uParam2->f_8);
		}
		else {
			uParam2->f_10 = 0;
			uParam2->f_7 = -1;
			uParam2->f_8 = -1;
		}
		StringCopy(&uParam2->f_27, vehicle::get_vehicle_number_plate_text(iParam1), 16);
		uParam2->f_26 = vehicle::get_vehicle_number_plate_text_index(iParam1);
		uParam2->f_88 = vehicle::get_vehicle_tyres_can_burst(iParam1);
		vehicle::get_vehicle_tyre_smoke_color(iParam1, &uParam2->f_84, &uParam2->f_85, &uParam2->f_86);
		uParam2->f_87 = vehicle::get_vehicle_window_tint(iParam1);
		vehicle::_get_vehicle_neon_lights_colour(iParam1, &uParam2->f_93, &uParam2->f_94, &uParam2->f_95);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam1, 2)) {
			gameplay::set_bit(&uParam2->f_92, 28);
		}
		else {
			gameplay::clear_bit(&uParam2->f_92, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam1, 3)) {
			gameplay::set_bit(&uParam2->f_92, 29);
		}
		else {
			gameplay::clear_bit(&uParam2->f_92, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam1, 0)) {
			gameplay::set_bit(&uParam2->f_92, 30);
		}
		else {
			gameplay::clear_bit(&uParam2->f_92, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam1, 1)) {
			gameplay::set_bit(&uParam2->f_92, 31);
		}
		else {
			gameplay::clear_bit(&uParam2->f_92, 31);
		}
		uParam2->f_89 = vehicle::get_vehicle_livery(iParam1);
		uParam2->f_90 = vehicle::get_vehicle_wheel_type(iParam1);
		iVar8 = 0;
		while (iVar8 < 12) {
			uParam2->f_11[iVar8] = vehicle::is_vehicle_extra_turned_on(iParam1, iVar8 + 1);
			iVar8++;
		}
		if (vehicle::is_vehicle_a_convertible(iParam1, 0)) {
			iVar10 = vehicle::get_convertible_roof_state(iParam1);
			if (iVar10 == 0 || iVar10 == 5) {
				uParam2->f_24 = 1;
			}
			else {
				uParam2->f_24 = 0;
			}
		}
		else {
			uParam2->f_24 = 0;
		}
		if (iParam0 == player::player_ped_id()) {
			uParam2->f_25 = audio::get_player_radio_station_index();
		}
		func_328(&iParam1, &uParam2->f_31, &uParam2->f_81);
		uParam2->f_96 = vehicle::get_vehicle_enveff_scale(iParam1);
		uParam2->f_97 = func_327(iParam1);
		*iParam6 = -1;
		switch (iVar0) {
		case 0:
			if (Global_101700.f_31389.f_69[0 /*78*/].f_66 == entity::get_entity_model(iParam1)) {
				*iParam6 = 12;
			}
			break;

		case 1:
			if (Global_101700.f_31389.f_69[1 /*78*/].f_66 == entity::get_entity_model(iParam1)) {
				*iParam6 = 13;
			}
			break;

		case 2:
			if (Global_101700.f_31389.f_69[2 /*78*/].f_66 == entity::get_entity_model(iParam1)) {
				*iParam6 = 14;
			}
			break;
		}
	}
	else {
		*iParam5 = 0;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0f;
		*uParam2 = 0;
		uParam2->f_1 = 0;
		uParam2->f_2 = 0f;
		uParam2->f_3 = 0;
		uParam2->f_4 = 0;
		uParam2->f_5 = 0;
		uParam2->f_6 = 0;
		uParam2->f_7 = 0;
		uParam2->f_8 = 0;
		uParam2->f_9 = 0;
		uParam2->f_10 = 0;
		iVar8 = 0;
		while (iVar8 < uParam2->f_11) {
			uParam2->f_11[iVar8] = 0;
			iVar8++;
		}
		uParam2->f_24 = 0;
		uParam2->f_25 = 0;
		*iParam5 = 0;
		*iParam6 = -1;
		uParam2->f_96 = 0f;
	}
}

// Position - 0x2C69C
int func_327(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

// Position - 0x2C718
int func_328(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x2C7F2
bool func_329(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (ped::is_ped_in_vehicle(iParam0, iParam1, iParam2)) {
		iVar0 = entity::get_entity_model(iParam1);
		if (vehicle::is_this_model_a_boat(iVar0) || iVar0 == joaat("submersible") || iVar0 == joaat("submersible2")) {
			if (entity::is_entity_in_water(iParam1)) {
				return false;
			}
			return true;
		}
		if (vehicle::is_this_model_a_plane(iVar0) || vehicle::is_this_model_a_heli(iVar0) || iVar0 == joaat("blimp")) {
			if (entity::is_entity_in_air(iParam1)) {
				return false;
			}
			return true;
		}
		return true;
	}
	return false;
}

// Position - 0x2C87E
bool func_330(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_331(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2C8EF
bool func_331(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2C9C8
void func_332(var *uParam0, int iParam1) {
	switch (iParam1) {
	case 17: func_333(uParam0, 0, 12); break;

	case 19: func_333(uParam0, 1, 13); break;

	case 29: func_333(uParam0, 1, 14); break;

	case 30:
		func_333(uParam0, 2, 15);
		func_333(uParam0, 1, 29);
		break;

	case 32:
		func_333(uParam0, 1, 16);
		func_333(uParam0, 0, 17);
		break;

	case 39:
		func_333(uParam0, 0, 21);
		func_333(uParam0, 1, 20);
		break;

	case 31: func_333(uParam0, 0, 18); break;

	case 20: func_333(uParam0, 2, 22); break;

	case 66: func_333(uParam0, 1, 23); break;

	case 68: func_333(uParam0, 1, 24); break;

	case 70: func_333(uParam0, 1, 67); break;

	case 8:
		func_333(uParam0, 1, 25);
		func_333(uParam0, 2, 26);
		break;

	case 67: func_333(uParam0, 1, 27); break;

	case 9: func_333(uParam0, 2, 28); break;

	case 38:
		func_333(uParam0, 2, 30);
		func_333(uParam0, 1, 19);
		break;

	case 83: func_333(uParam0, 2, 33); break;

	case 45: func_333(uParam0, 1, 35); break;

	case 64:
		func_333(uParam0, 0, 36);
		func_333(uParam0, 1, 37);
		break;

	case 91: func_333(uParam0, 0, 41); break;

	case 42:
		func_333(uParam0, 0, 58);
		Global_90960[0 /*98*/] = 0;
		func_333(uParam0, 2, 59);
		Global_90960[2 /*98*/] = 0;
		break;

	case 41:
		func_333(uParam0, 1, 42);
		func_333(uParam0, 2, 42);
		break;

	case 15:
		func_333(uParam0, 0, 46);
		func_333(uParam0, 1, 47);
		break;

	case 16: func_333(uParam0, 0, 48); break;

	case 48:
		func_333(uParam0, 1, 50);
		func_333(uParam0, 2, 51);
		break;

	case 74:
		func_333(uParam0, 0, 52);
		func_333(uParam0, 1, 66);
		break;

	case 76:
		func_333(uParam0, 1, 53);
		func_333(uParam0, 2, 54);
		func_333(uParam0, 0, 62);
		break;

	case 75:
		func_333(uParam0, 0, 61);
		func_333(uParam0, 1, 31);
		break;

	case 69: func_333(uParam0, 1, 63); break;

	case 84:
		func_333(uParam0, 0, 68);
		func_333(uParam0, 2, 69);
		break;

	case 85:
		func_333(uParam0, 0, 64);
		func_333(uParam0, 2, 65);
		break;

	case 93:
		func_333(uParam0, 1, 38);
		func_333(uParam0, 2, 39);
		break;

	case 11: func_333(uParam0, 2, 55); break;

	case 77:
		func_333(uParam0, 1, 56);
		func_333(uParam0, 2, 57);
		break;

	default: break;
	}
}

// Position - 0x2CD11
int func_333(var *uParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<98> Var1;
	var *uVar99;
	float *fVar102;
	var *uVar103;
	float *fVar106;

	if (!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9)) {
		iVar0 = Global_101700.f_17492[iParam1];
		if (iVar0 == 11) {
			return 0;
		}
		if (iVar0 == 8 || iVar0 == 9 || iVar0 == 10) {
			return 0;
		}
	}
	Global_101700.f_17492[iParam1] = iParam2;
	uParam0->f_1524[iParam1] = func_132();
	if (!func_345(iParam2, &uParam0->f_1528[iParam1 /*3*/], &uParam0->f_1538[iParam1])) {
		return 0;
	}
	if (!func_170(uParam0->f_1528[iParam1 /*3*/], 0f, 0f, 0f, 0)) {
		if (!func_170(Global_89995[iParam2 /*3*/], 0f, 0f, 0f, 0)) {
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_334(iParam1, iParam2, &Var1, &uVar99, &fVar102, &uVar103, &fVar106)) {
				Global_90960[iParam1 /*98*/] = {Var1};
			}
		}
	}
	uParam0->f_1542[iParam1] = 0;
	uParam0->f_1546[iParam1 /*3*/] = {0f, 0f, 0f};
	uParam0->f_1556[iParam1] = 0;
	return 1;
}

// Position - 0x2CE31
bool func_334(int iParam0, int iParam1, int *iParam2, var *uParam3, float *fParam4, var *uParam5, float *fParam6) {
	iParam2->f_3 = 1000;
	iParam2->f_1 = 0;
	iParam2->f_84 = 255;
	iParam2->f_85 = 255;
	iParam2->f_86 = 255;
	switch (iParam1) {
	case 5:
		*iParam2 = {Global_90960[iParam0 /*98*/]};
		if (Global_91255[iParam0] != 2) {
			if (object::is_point_in_angled_area(Global_91263[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f,
												-827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1)) {
				if (Global_91255[iParam0] == 1) {
					*uParam3 = {Global_91263[iParam0 /*3*/] - Global_101700.f_2095.f_539.f_1528[iParam0 /*3*/]};
					*fParam4 = Global_91273[iParam0] - Global_101700.f_2095.f_539.f_1538[iParam0];
					if (system::vmag2(*uParam3) > 5f * 5f) {
						*uParam3 = {0f, 0f, 0f};
						*fParam4 = 0f;
						return false;
					}
				}
			}
			*uParam3 = {Global_91263[iParam0 /*3*/] - Global_101700.f_2095.f_539.f_1528[iParam0 /*3*/]};
			*fParam4 = Global_91273[iParam0] - Global_101700.f_2095.f_539.f_1538[iParam0];
			if (system::vmag2(*uParam3) < 0.5f * 0.5f) {
				*uParam3 = {*uParam3 * FtoV(1.5f)};
			}
		}
		else {
			*uParam3 = {0f, 0f, 0f};
			*fParam4 = 0f;
		}
		return true;

	case 6:
		*iParam2 = {Global_90960[iParam0 /*98*/]};
		if (Global_91255[iParam0] != 2) {
			*uParam3 = {Global_91263[iParam0 /*3*/] - Global_101700.f_2095.f_539.f_1528[iParam0 /*3*/]};
			*fParam4 = Global_91273[iParam0] - Global_101700.f_2095.f_539.f_1538[iParam0];
			if (system::vmag2(*uParam3) < 0.5f * 0.5f) {
				*uParam3 = {*uParam3 * FtoV(1.5f)};
			}
		}
		else {
			*uParam3 = {0f, 0f, 0f};
			*fParam4 = 0f;
		}
		return true;

	case 7:
		*iParam2 = {Global_90960[iParam0 /*98*/]};
		if (Global_91255[iParam0] != 2) {
			*uParam3 = {Global_91263[iParam0 /*3*/] - Global_101700.f_2095.f_539.f_1528[iParam0 /*3*/]};
			*fParam4 = Global_91273[iParam0] - Global_101700.f_2095.f_539.f_1538[iParam0];
			if (system::vmag2(*uParam3) < 0.5f * 0.5f) {
				*uParam3 = {*uParam3 * FtoV(1.5f)};
			}
		}
		else {
			*uParam3 = {0f, 0f, 0f};
			*fParam4 = 0f;
		}
		return true;

	case 11:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {37.43f, -23.81f, 0f};
		*fParam4 = 127f;
		return true;

	case 8:
		iParam2->f_97 = 0;
		*iParam2 = joaat("mesa");
		*uParam3 = {Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f)};
		*fParam4 = 1.27f - 194.1887f;
		return true;

	case 9: return func_334(iParam0, 8, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 10: return func_334(iParam0, 8, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 13:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 5f, 0f};
		*fParam6 = 5f;
		return true;

	case 14:
		func_335(iParam0, iParam2, 2);
		iParam2->f_91 = 1;
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 25f;
		return true;

	case 15:
		iParam2->f_97 = 0;
		*iParam2 = joaat("frogger");
		iParam2->f_5 = 34;
		iParam2->f_6 = 34;
		iParam2->f_7 = 0;
		iParam2->f_8 = 0;
		iParam2->f_9 = 0;
		iParam2->f_11[0] = 1;
		iParam2->f_11[1] = 1;
		iParam2->f_11[2] = 1;
		iParam2->f_11[3] = 1;
		iParam2->f_11[4] = 1;
		iParam2->f_11[5] = 1;
		iParam2->f_11[6] = 1;
		iParam2->f_11[7] = 1;
		iParam2->f_11[8] = 1;
		*uParam5 = {0f, 50f, 0f};
		*fParam6 = 15f;
		return true;

	case 55:
		iParam2->f_97 = 0;
		*iParam2 = joaat("mesa");
		*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
		*fParam4 = 246.1684f - 90f;
		return true;

	case 56:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 20f;
		return true;

	case 57:
		iParam2->f_97 = 0;
		*iParam2 = joaat("penumbra");
		*uParam3 = {Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f)};
		*fParam4 = 141.28f - 90.0339f;
		return true;

	case 12:
		iParam2->f_97 = 0;
		*iParam2 = joaat("taxi");
		iParam2->f_2 = 0f;
		iParam2->f_4 = 0;
		iParam2->f_9 = 1;
		*uParam5 = {0f, 5f, 0f};
		*fParam6 = 5f;
		return true;

	case 16:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 15f, 0f};
		*fParam6 = 5f;
		return true;

	case 17:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 15f;
		return true;

	case 18:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 25f;
		return true;

	case 19:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 15f, 0f};
		*fParam6 = 10f;
		return true;

	case 20:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 25f;
		return true;

	case 23: return func_334(iParam0, 208, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 24:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 25f;
		return true;

	case 67:
		func_335(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {21.6401f, 38.5601f, 1.9708f};
		*fParam4 = -84f;
		return true;

	case 58:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 59:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 60:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 22:
		iParam2->f_97 = 0;
		*iParam2 = joaat("phantom");
		*uParam5 = {0f, 50f, 0f};
		*fParam6 = 20f;
		return true;

	case 74:
		func_335(iParam0, iParam2, 1);
		iParam2->f_91 = 2;
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 10f;
		return true;

	case 38:
		func_335(iParam0, iParam2, 2);
		iParam2->f_91 = 2;
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 15f;
		return true;

	case 41:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-2.72f, 0.45f, 1f};
		*fParam4 = -137f;
		return true;

	case 25:
		iParam2->f_97 = 0;
		*iParam2 = joaat("blista");
		*uParam3 = {Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f)};
		*fParam4 = 0.72f - 156.8827f;
		return true;

	case 27:
		iParam2->f_97 = 0;
		*iParam2 = joaat("seminole");
		*uParam3 = {Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f)};
		*fParam4 = 2.23f - 7.2736f;
		return true;

	case 26:
		iParam2->f_97 = 0;
		*iParam2 = joaat("peyote");
		*uParam3 = {Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f)};
		*fParam4 = -1f - 97.2736f;
		return true;

	case 40:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {16.5182f, -8.5576f, -2.3291f};
		*fParam4 = 174.24f;
		return true;

	case 28:
		iParam2->f_97 = 0;
		*iParam2 = joaat("polmav");
		iParam2->f_11[0] = 1;
		iParam2->f_11[1] = 1;
		iParam2->f_11[2] = 1;
		iParam2->f_11[3] = 1;
		iParam2->f_11[4] = 1;
		iParam2->f_11[5] = 1;
		iParam2->f_11[6] = 1;
		iParam2->f_11[7] = 1;
		iParam2->f_11[8] = 1;
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 25f;
		return true;

	case 234:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {16.5182f, -8.5576f, -2.3291f};
		*fParam4 = 174.24f;
		return true;

	case 75:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {2.5f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 76:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {2.5f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 42:
		iParam2->f_97 = 0;
		*iParam2 = joaat("mesa");
		*uParam3 = {Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f)};
		*fParam4 = 246.1684f - 90f;
		return true;

	case 43:
		iParam2->f_97 = 0;
		*iParam2 = joaat("mesa");
		*uParam3 = {Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f)};
		*fParam4 = 247.4806f - 355.326f;
		return true;

	case 44:
		iParam2->f_97 = 0;
		*iParam2 = joaat("sadler");
		*uParam3 = {Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f)};
		*fParam4 = 253.776f - 334.1068f;
		return true;

	case 45:
		iParam2->f_97 = 0;
		*iParam2 = joaat("mixer");
		*uParam3 = {Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f)};
		*fParam4 = 2.62f - 299.0519f;
		return true;

	case 47:
		iParam2->f_97 = 0;
		*iParam2 = joaat("cavalcade");
		iParam2->f_5 = 0;
		iParam2->f_6 = 0;
		iParam2->f_7 = 0;
		iParam2->f_8 = 0;
		iParam2->f_9 = 0;
		StringCopy(&iParam2->f_27, "22LJK483", 16);
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0f;
		*uParam5 = {0f, 10f, 0f};
		*fParam6 = 15f;
		return true;

	case 49:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {-1.5f, 35f, 3f};
		*fParam6 = 15f;
		return true;

	case 48:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {3.8721f, -5.9568f, 0f};
		*fParam4 = 164.2466f - 180f;
		return true;

	case 50:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 10f, 0f};
		*fParam6 = 15f;
		return true;

	case 51:
		iParam2->f_97 = 0;
		*iParam2 = joaat("stretch");
		*uParam3 = {Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f)};
		*fParam4 = 310.4708f - 220.9554f;
		return true;

	case 52:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 12.5f;
		return true;

	case 66:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 12.5f;
		return true;

	case 61:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 25f;
		return true;

	case 62:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 25f;
		return true;

	case 63:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-2.9117f, -15.0499f, -0.3468f};
		*fParam4 = -139.9751f;
		return true;

	case 64:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 69:
		iParam2->f_97 = 0;
		*iParam2 = joaat("prairie");
		*uParam3 = {Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f)};
		*fParam4 = 64.1848f - 180f;
		return true;

	case 65:
	case 54:
		iParam2->f_97 = 0;
		*iParam2 = joaat("frogger2");
		iParam2->f_5 = 40;
		iParam2->f_6 = 0;
		iParam2->f_7 = 0;
		iParam2->f_8 = 0;
		iParam2->f_9 = 0;
		iParam2->f_11[0] = 1;
		iParam2->f_11[1] = 1;
		iParam2->f_11[2] = 1;
		iParam2->f_11[3] = 1;
		iParam2->f_11[4] = 1;
		iParam2->f_11[5] = 1;
		iParam2->f_11[6] = 1;
		iParam2->f_11[7] = 1;
		iParam2->f_11[8] = 1;
		iParam2->f_89 = 1;
		if (iParam1 == 54) {
			*uParam3 = {5.5414f, -6.6035f, 1.0473f};
			*fParam4 = -83.2547f;
		}
		if (iParam1 == 65) {
			*uParam3 = {5.7209f, -12.3958f, 1.0746f};
			*fParam4 = -152.2593f;
		}
		return true;

	case 112:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
		*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
		return true;

	case 113:
		if (func_334(iParam0, 112, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
			*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
			return true;
		}
		break;

	case 118:
		iParam2->f_97 = 0;
		*iParam2 = joaat("scorcher");
		iParam2->f_2 = 0f;
		iParam2->f_4 = 0;
		iParam2->f_9 = 1;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0f;
		*uParam5 = {1f, 12.5f, 0f};
		*fParam6 = 5f;
		return true;

	case 119:
		if (func_334(iParam0, 118, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {5f, 20f, 0f};
			*fParam6 = 5f;
			return true;
		}
		break;

	case 120:
		if (func_334(iParam0, 118, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 30f, 0f};
			*fParam6 = 8f;
			return true;
		}
		break;

	case 173:
		iParam2->f_97 = 0;
		*iParam2 = joaat("cruiser");
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0.1f;
		*uParam5 = {0.1f, 0.1f, 0.1f};
		*fParam6 = 0.1f;
		return true;

	case 114:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {-1.9002f, 1.205f, -0.3537f};
		*fParam4 = -180f;
		return true;

	case 105:
		func_335(iParam0, iParam2, 1);
		*uParam5 = {0f, 0.1f, 0f};
		*fParam6 = 0.5f;
		return true;

	case 106: return func_334(iParam0, 105, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 107: return func_334(iParam0, 105, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 98:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0.1f;
		*uParam5 = {0.1f, 0.1f, 0.1f};
		*fParam6 = 0.1f;
		return true;

	case 99:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0f;
		*uParam5 = {0f, 0f, 0f};
		*fParam6 = 0f;
		return true;

	case 100: return func_334(iParam0, 99, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 101: return func_334(iParam0, 99, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 102: return func_334(iParam0, 99, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 123:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {3.2267f, 1.0966f, -0.354f};
		*fParam4 = -31.73f;
		return true;

	case 125:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-13.7322f, 1.8783f, 1.0593f};
		*fParam4 = 55.3652f;
		return true;

	case 133:
		iParam2->f_97 = 0;
		*iParam2 = joaat("tropic");
		iParam2->f_2 = 0f;
		iParam2->f_4 = 0;
		iParam2->f_9 = 1;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0f;
		iParam2->f_11[0] = 0;
		iParam2->f_11[1] = 0;
		iParam2->f_11[2] = 1;
		iParam2->f_11[3] = 0;
		iParam2->f_11[4] = 0;
		iParam2->f_11[5] = 1;
		iParam2->f_11[6] = 1;
		iParam2->f_11[7] = 1;
		iParam2->f_11[8] = 1;
		*uParam5 = {0f, 20f, 0f};
		*fParam6 = 15f;
		return true;

	case 89:
	case 90:
	case 127:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam5 = {0f, 0f, 0f};
		*fParam6 = 0.1f;
		return true;

	case 91:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {15.4538f, -8.711f, 5.79f};
		*fParam4 = 2.4942f;
		return true;

	case 93:
		if (func_334(iParam0, 91, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-8.1f, -9.01f, 0.4439f};
			*fParam4 = 94.03f;
			return true;
		}
		break;

	case 121:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {18.8468f, 40.7721f, 0f};
		*fParam4 = -116.3936f;
		return true;

	case 115:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f)};
		*fParam4 = 177.259f - 180f - 69f;
		return true;

	case 116:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {1.7826f, 12.2098f, -0.6964f};
		*fParam4 = -96.0001f;
		return true;

	case 117:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {11.8705f, -1.4684f, -1.6487f};
		*fParam4 = -125.8331f;
		return true;

	case 94:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-13.1578f, 16.3962f, 0.6396f};
		*fParam4 = -177f;
		return true;

	case 96:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-21.0518f, 0.5037f, 0.4091f};
		*fParam4 = -83.1262f;
		return true;

	case 108:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {10.8971f, 2.0809f, -0.7983f};
		*fParam4 = -150.9417f;
		return true;

	case 109:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {79.9901f, -52.83f, -0.3533f};
		*fParam4 = 44.7231f;
		return true;

	case 135:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
		*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
		return true;

	case 136:
		if (func_334(iParam0, 135, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
			*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
			return true;
		}
		break;

	case 137:
		if (func_334(iParam0, 135, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
			*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
			return true;
		}
		break;

	case 138:
		if (func_334(iParam0, 135, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {gameplay::get_random_float_in_range(-5f, 5f), gameplay::get_random_float_in_range(-5f, 5f), 0f};
			*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
			return true;
		}
		break;

	case 139:
		if (func_334(iParam0, 135, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {2.4845f, 2.3286f, -0.383f};
			*fParam4 = -31.4884f;
			return true;
		}
		break;

	case 140:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 15f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 141:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 40f, 0f};
			*fParam6 = 12.5f;
			return true;
		}
		break;

	case 142:
		func_335(iParam0, iParam2, 0);
		*uParam5 = {0f, 25f, 0f};
		*fParam6 = 10f;
		return true;

	case 143:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 144:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 145:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 146:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 147:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 15f, 0f};
			*fParam6 = 7.5f;
			return true;
		}
		break;

	case 148:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 149:
		if (func_334(iParam0, 142, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam5 = {0f, 25f, 0f};
			*fParam6 = 10f;
			return true;
		}
		break;

	case 151:
		if (func_334(iParam0, 94, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-13.2213f, 16.331f, 0f};
			*fParam4 = 6f;
			return true;
		}
		break;

	case 162:
		if (func_334(iParam0, 115, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {10.3876f, -10.3585f, -1.2183f};
			*fParam4 = 8.6726f;
			return true;
		}
		break;

	case 158:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {1.0793f, 15.631f, 1.1744f};
		*fParam4 = 2.52f;
		return true;

	case 166: return func_334(iParam0, 98, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 170:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {0f, 0f, 0f};
		*fParam4 = 0.1f;
		*uParam5 = {0.1f, 0.1f, 0.1f};
		*fParam6 = 0.1f;
		return true;

	case 171: return func_334(iParam0, 98, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 172: return func_334(iParam0, 98, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 208:
		func_335(iParam0, iParam2, 1);
		*uParam5 = {0f, 0.1f, 0f};
		*fParam6 = 0.5f;
		return true;

	case 209: return func_334(iParam0, 208, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 210: return func_334(iParam0, 208, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 211:
		func_172(iParam0, iParam2, 2);
		iParam2->f_91 = 2;
		*uParam3 = {-2.19f, -1.23f, 0f};
		*fParam4 = 90f;
		return true;

	case 212:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		iParam2->f_2 = 0f;
		*uParam3 = {-1.3547f, 2.1615f, -0.3723f};
		*fParam4 = 177.8041f;
		return true;

	case 213:
		if (func_334(iParam0, 211, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-4.2075f, 1.0943f, 0f};
			*fParam4 = 15.82f;
			return true;
		}
		break;

	case 214:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		iParam2->f_2 = 0f;
		*uParam3 = {2.291f, 1.0879f, 0.0635f};
		*fParam4 = 177.798f;
		return true;

	case 215:
		iParam2->f_97 = 0;
		*iParam2 = joaat("taxi");
		iParam2->f_2 = 0f;
		iParam2->f_4 = 0;
		iParam2->f_9 = 1;
		*uParam3 = {-0.9714f, 1.6112f, -0.2773f};
		*fParam4 = -7.0583f;
		*uParam5 = {Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f)};
		*fParam6 = 10f;
		return true;

	case 196:
		iParam2->f_97 = 0;
		*iParam2 = joaat("taxi");
		iParam2->f_2 = 0f;
		iParam2->f_4 = 0;
		iParam2->f_9 = 1;
		*uParam3 = {Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f)};
		*fParam4 = 89.0026f - -1.5f;
		*uParam5 = {Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f)};
		*fParam6 = 10f;
		return true;

	case 221:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f)};
		*fParam4 = 357.1407f - 84.96f;
		return true;

	case 216:
		if (func_334(iParam0, 211, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-2.1752f, -2.3781f, 0f};
			*fParam4 = -68.4f;
			return true;
		}
		break;

	case 217:
		if (func_334(iParam0, 211, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-3.9761f, 0.2542f, 0f};
			*fParam4 = -70.5273f;
			return true;
		}
		break;

	case 232:
	case 233:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f)};
		*fParam4 = 162.098f - 109.0206f;
		return true;

	case 192:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f)};
		*fParam4 = 302.182f - 105.981f;
		return true;

	case 193:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f)};
		*fParam4 = 302.182f - 172.9187f;
		return true;

	case 194:
		if (func_334(iParam0, 193, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {12.74f, 3.26f, 0f};
			*fParam4 = 95.217f;
			return true;
		}
		break;

	case 195:
		if (func_334(iParam0, 193, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-1.34f, 7.684f, 0f};
			*fParam4 = 173.52f;
			return true;
		}
		break;

	case 200:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.4055f, -1607.568f, 44.4802f) - Vector(28.2858f - 0.5f + 1.5f, -1607.286f, 2.8895f)};
		*fParam4 = 318.2674f - (310.879f - 180f);
		return true;

	case 201:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f)};
		*fParam4 = 322.6286f - 130.879f;
		return true;

	case 202:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {91.3579f, 18.1788f, -0.1911f};
		*fParam4 = -90.3475f;
		return true;

	case 222:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {12.5073f, -3.4625f, -0.3702f};
		*fParam4 = 14.3405f;
		return true;

	case 223:
		if (func_334(iParam0, 222, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {21.87f, -10.5f, 0f};
			*fParam4 = -104.76f;
			return true;
		}
		break;

	case 224: return func_334(iParam0, 222, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 226:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f)};
		*fParam4 = 270.1767f - 160f - 180f;
		return true;

	case 227:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-19.8544f, -10.4863f, -0.0334f};
		*fParam4 = -120.12f;
		return true;

	case 228:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {21.5897f, -6.8544f, 0.6015f};
		*fParam4 = -141f;
		return true;

	case 229:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-7.6041f, 0.1369f, 0.5812f};
		*fParam4 = -145.769f;
		return true;

	case 230:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-1.6f, 7.6802f, 0.6947f};
		*fParam4 = -50.99f;
		return true;

	case 238:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {22.322f, -6.2034f, 0f};
		*fParam4 = 73.071f;
		return true;

	case 250:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam3 = {-1.2901f, -5.5798f, -0.0357f};
		*fParam4 = 160.56f;
		return true;

	case 251:
		if (func_334(iParam0, 250, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-4.0739f, 7.7692f, -0.2984f};
			*fParam4 = -48.9552f;
			return true;
		}
		break;

	case 252:
		if (func_334(iParam0, 250, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {-5.778f, -4.2397f, 0.9091f};
			*fParam4 = -12.9418f;
			return true;
		}
		break;

	case 253:
		if (func_334(iParam0, 250, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			*uParam3 = {0.6968f, 1.1033f, 0.912f};
			*fParam4 = 90f;
			return true;
		}
		break;

	case 281:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam5 = {0f, 8f, 0.6f};
		*fParam6 = 15f;
		return true;

	case 282:
		if (func_334(iParam0, 281, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			return true;
		}
		break;

	case 283:
		if (func_334(iParam0, 281, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			return true;
		}
		break;

	case 284:
		if (func_334(iParam0, 281, iParam2, uParam3, fParam4, uParam5, fParam6)) {
			iParam2->f_97 = 0;
			*iParam2 = joaat("faggio2");
			iParam2->f_91 = 0;
			return true;
		}
		break;

	case 275:
		func_172(iParam0, iParam2, 1);
		iParam2->f_91 = 1;
		*uParam5 = {0f, 8f, 0.6f};
		*fParam6 = 15f;
		return true;

	case 276: return func_334(iParam0, 275, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 277: return func_334(iParam0, 275, iParam2, uParam3, fParam4, uParam5, fParam6);

	case 280:
		if (!Global_3) {
			iParam2->f_97 = 0;
			*iParam2 = joaat("tropic");
			iParam2->f_11[0] = 0;
			iParam2->f_11[1] = 0;
			iParam2->f_11[2] = 1;
			iParam2->f_11[3] = 0;
			iParam2->f_11[4] = 0;
			iParam2->f_11[5] = 1;
			iParam2->f_11[6] = 1;
			iParam2->f_11[7] = 1;
			iParam2->f_11[8] = 1;
		}
		else {
			iParam2->f_97 = 0;
			*iParam2 = joaat("dinghy");
		}
		*uParam3 = {Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f)};
		uParam3->f_2 += 0.5f;
		*fParam4 = 340.0835f - 4.44f;
		*uParam3 = {Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f)};
		*fParam4 = 23.6441f + 90f;
		*uParam3 = {-4.0164f, 19.9594f, 0f};
		*fParam4 = 113.6465f;
		*uParam3 = {*uParam3 * FtoV(1.1f)};
		return true;

	case 247:
		iParam2->f_97 = 0;
		*iParam2 = joaat("sanchez");
		*uParam3 = {9.8707f, 13.0084f, 0f};
		*fParam4 = -114f - 43f + 133f;
		return true;

	case 288:
		iParam2->f_97 = 0;
		*iParam2 = joaat("speedo");
		*uParam3 = {-7.7078f, 23.9099f, 1.7307f};
		*fParam4 = 24.3187f;
		return true;

	case 309:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-4.5662f, -3.2485f, 0.9455f - 1.7f};
		*fParam4 = -138.6056f;
		return true;

	case 305:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f)};
		*fParam4 = 315.9865f - 122.5269f;
		return true;

	case 310:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {10.5999f, 3.3997f, 1.0212f};
		*fParam4 = -50.3062f;
		return true;

	case 255:
		iParam2->f_97 = 0;
		*iParam2 = joaat("romero");
		*uParam3 = {-13.2279f, -7.5348f, 0f};
		*fParam4 = 4.32f;
		return true;

	case 265:
		iParam2->f_97 = 0;
		*iParam2 = joaat("bmx");
		*uParam3 = {11.9596f, 0.345f, -1.0016f};
		*fParam4 = -42.4225f;
		return true;

	case 285:
		iParam2->f_97 = 0;
		*iParam2 = joaat("gburrito");
		*uParam3 = {3.424f, 7.6462f, 0.8227f};
		*fParam4 = -150f;
		return true;

	case 256:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f)};
		*fParam4 = 14.0848f - 120f;
		return true;

	case 257:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f)};
		*fParam4 = 144.9416f - 171.253f;
		return true;

	case 258:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f)};
		*fParam4 = 130.9896f - 10.247f;
		return true;

	case 314:
		iParam2->f_97 = 0;
		*iParam2 = joaat("cuban800");
		*uParam5 = {0f, 150f, 20f};
		*fParam6 = 30f;
		return true;
	}
	switch (iParam1) {
	case 110:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(32.5629f, -387.5143f, -147.166f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 341.4322f - 133f;
		return true;

	case 111:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(24.4283f, -689.1462f, -1306.782f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 214.6826f - 33f;
		return true;

	case 153:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 115.2022f - -176.25f;
		return true;

	case 154:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(79.3324f, 254.0631f, -708.9244f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 115.2022f - -147.192f;
		return true;

	case 165:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(35.0054f, -441.1681f, -1100.878f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 297.5568f - -144.622f;
		return true;

	case 159:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(36.3852f, -199.5354f, -825.3141f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 29.4869f - -62.5f;
		return true;

	case 160:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(36.2086f, -144.1027f, -730.8218f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 28.532f - 119f;
		return true;

	case 167:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(31.7307f, -523.2257f, -1144.174f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 299.2956f - -22.32f;
		return true;

	case 152:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(60.9436f, 314.6989f, -1421.8f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 335.4134f - 72f;
		return true;

	case 157:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(79.469f, 255.3143f, -706.187f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 117.3069f - 37.27f;
		return true;

	case 225:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.7165f, -1677.734f, 185.4888f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 54.2538f - -83.8f;
		return true;

	case 218:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.3218f, -1405.159f, -17.556f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 91.3098f - -70.4124f;
		return true;

	case 219:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(30.2611f, -1492.151f, -219.3172f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 139.2572f - -12f;
		return true;

	case 220:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(25.3018f, -1811.693f, -22.6138f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 141.0423f - -117.356f;
		return true;

	case 206:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(208.5337f, 773.6719f, 164.1308f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 136.3104f - -36f;
		return true;

	case 207:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(108.9995f, 396.924f, -263.3745f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 284.4611f - -95.588f;
		return true;

	case 274:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(139.5782f, 2030.446f, -1883.836f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 340.5746f - 9f;
		return true;

	case 312:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(10.0296f, 6560.557f, -200.684f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 134.5505f - 110.5931f;
		return true;

	case 271:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(6.4647f, -1083.751f, -1278.023f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 115.8919f - 26.3597f;
		return true;

	case 248:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(102.4417f, 164.5124f, 325.8113f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 68.4108f - 10.77f;
		return true;

	case 242:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(56.616f, -122.9896f, -1622.22f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 210.8653f - 13.7207f;
		return true;

	case 254:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(53.0019f, -213.7796f, 172.442f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 250.3032f - -40f;
		return true;

	case 287:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(17.3426f, -836.0328f, -887.9977f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 270.8607f - -81f;
		return true;

	case 286:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(4.8359f, -1182.704f, -1264.218f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 298.4328f - -150f;
		return true;

	case 239:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(104.8218f, 289.0073f, -80.4564f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 247.6446f - -122f;
		return true;

	case 243:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 228.6353f - 18f;
		return true;

	case 244:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.2762f, -1477.282f, 434.9171f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 228.6353f - -51f;
		return true;

	case 249:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(103.1881f, 177.7729f, 288.977f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 68.9831f - (138f - 180f);
		return true;

	case 273:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(32.7794f, -432.4635f, -161.4589f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 340.0368f - -153f;
		return true;

	case 92:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(202.1143f, 828.3607f, -806.8813f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 101.1612f - -54.347f;
		return true;

	case 103:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(12.0174f, -1108.081f, -1724.72f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 319.8931f - 143.4931f;
		return true;

	case 109:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(10.2248f, -628.4899f, -1859.505f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 229.0784f - 99f;
		return true;

	case 81:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(53.1469f, 90.4242f, -1393.442f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 123.1782f - -45f;
		return true;

	case 95:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(101.921f, 186.1865f, 370.5876f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 159.7861f - 70f;
		return true;

	case 97:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(45.9871f, -188.5636f, -1391.156f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 36.5172f - -45f;
		return true;

	case 134:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(46.0567f, 3076.742f, 2001.918f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 328.101f - -33.128f;
		return true;

	case 88:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(60.9442f, 314.7191f, -1421.821f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 336.5938f - -132f;
		return true;

	case 306:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(37.4888f, 5643.726f, -569.3535f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 296.1685f - gameplay::get_heading_from_vector_2d(7.4998f, -7.4995f);
		return true;

	case 307:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(47.4526f, 4717.728f, -1555.593f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 236.223f - gameplay::get_heading_from_vector_2d(-10.6345f, -0.7246f);
		return true;

	case 308:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(22.7549f, 4629.148f, -1553.861f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 332.7842f - gameplay::get_heading_from_vector_2d(3.4271f, 13.6787f);
		return true;

	case 278:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(35.9161f, -1009.745f, 631.8275f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 98.8128f - -33.77f;
		return true;

	case 279:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(234.6825f, 900.8749f, -111.9033f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 6.1087f - 155.68f;
		return true;

	case 240:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(33.5351f, 3636.151f, 1546.323f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 298.4009f - -4.124f;
		return true;

	case 241:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(30.512f, 6439.667f, -179.4242f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 225.5593f - 108f;
		return true;

	case 264:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.2977f, -1390.545f, 486.7419f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 178.298f - -90f;
		return true;

	case 266:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(10.5662f, 143.2342f, -3052.895f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 85.3429f - 68.8227f;
		return true;

	case 267:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(39.9155f, 4934.08f, 2202.375f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 314.2654f - 56.2037f;
		return true;

	case 269:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(28.149f, -782.0952f, 401.2502f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 179.9905f - -106.6605f;
		return true;

	case 246:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(3.3919f, -1534.507f, -1195.256f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 305.8221f - -165f;
		return true;

	case 263:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(12.8792f, -1241.213f, -573.3765f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 316.9941f - -171f;
		return true;

	case 259:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(4.0002f, -1298.539f, -724.429f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 230.5715f - -32.488f;
		return true;

	case 260:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(61.203f, 250.8387f, -1309.114f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 10.7756f - -29.093f;
		return true;

	case 261:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(79.764f, 60.3233f, 917.6678f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = 148.021f - 229.6085f;
		return true;

	case 270:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {Vector(350f, 8588f, 2919f) - Global_89995[iParam1 /*3*/]};
		*fParam4 = gameplay::get_random_float_in_range(-180f, 180f);
		return true;

	case 289:
		func_335(iParam0, iParam2, 0);
		*uParam3 = {-48.5171f, 28.4211f, 3.0057f};
		*fParam4 = -1.3831f;
		return true;
	}
	return false;
}

// Position - 0x302A5
int func_335(int iParam0, int *iParam1, int iParam2) {
	if (Global_90960[iParam0 /*98*/] == 0) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("blimp")) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (func_344(iParam0)) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (vehicle::is_this_model_a_boat(Global_90960[iParam0 /*98*/])) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (vehicle::is_this_model_a_plane(Global_90960[iParam0 /*98*/])) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (vehicle::is_this_model_a_heli(Global_90960[iParam0 /*98*/])) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (vehicle::is_this_model_a_train(Global_90960[iParam0 /*98*/])) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1) {
		if (!vehicle::is_this_model_a_car(Global_90960[iParam0 /*98*/])) {
			func_172(iParam0, iParam1, iParam2);
			iParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2) {
		if (!vehicle::is_this_model_a_bike(Global_90960[iParam0 /*98*/])) {
			func_172(iParam0, iParam1, iParam2);
			iParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!func_336(Global_90960[iParam0 /*98*/], 0)) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0) {
		func_172(iParam0, iParam1, iParam2);
		iParam1->f_91 = iParam2;
		if (Global_90960[iParam0 /*98*/] != *iParam1) {
			*iParam1 = {Global_90960[iParam0 /*98*/]};
			iParam1->f_91 = 0;
			return 0;
		}
	}
	else {
		func_172(iParam0, iParam1, 1);
		iParam1->f_91 = 1;
		if (Global_90960[iParam0 /*98*/] == *iParam1) {
			func_172(iParam0, iParam1, 1);
			iParam1->f_91 = 1;
			return 1;
		}
		func_172(iParam0, iParam1, 2);
		iParam1->f_91 = 2;
		if (Global_90960[iParam0 /*98*/] == *iParam1) {
			func_172(iParam0, iParam1, 2);
			iParam1->f_91 = 2;
			return 1;
		}
		*iParam1 = {Global_90960[iParam0 /*98*/]};
		iParam1->f_91 = 0;
		return 0;
	}
	func_172(iParam0, iParam1, iParam2);
	iParam1->f_91 = iParam2;
	return 1;
}

// Position - 0x304DC
int func_336(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_164()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_343() && !func_342() && !func_341() && !func_340() && !func_164()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_341()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_339(iParam0)) {
			return 0;
		}
	}
	if (!func_337(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x3066A
int func_337(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_338()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x30736
int func_338() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x3074A
int func_339(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x3148D
int func_340() { return 0; }

// Position - 0x31496
int func_341() { return 1; }

// Position - 0x3149F
int func_342() { return 1; }

// Position - 0x314A8
int func_343() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x314C1
bool func_344(int iParam0) {
	if (Global_90960[iParam0 /*98*/] == joaat("blimp") || Global_90960[iParam0 /*98*/] == joaat("blimp2")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("submersible") || Global_90960[iParam0 /*98*/] == joaat("submersible2")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("freight")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("packer")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("asea2")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("burrito2") || Global_90960[iParam0 /*98*/] == joaat("fbi2")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("entityxf") && !Global_101700.f_8044.f_330[8 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("cheetah") && !Global_101700.f_8044.f_330[8 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("policeb") && !Global_101700.f_8044.f_330[8 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("ztype") && !Global_101700.f_8044.f_330[9 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("polmav") && !Global_101700.f_8044.f_330[9 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("jb700") && !Global_101700.f_8044.f_330[10 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("monroe") && !Global_101700.f_8044.f_330[11 /*6*/]) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("firetruk")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("handler")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("monroe")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("phantom")) {
		return true;
	}
	if (Global_90960[iParam0 /*98*/] == joaat("gauntlet") && !Global_101700.f_8044.f_330[80 /*6*/] &&
		!Global_101700.f_8044.f_330[81 /*6*/] && !Global_101700.f_8044.f_330[82 /*6*/]) {
		return true;
	}
	return false;
}

// Position - 0x31741
bool func_345(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return true;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return true;

	case 9: return func_345(8, uParam1, fParam2);

	case 10: return func_345(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return true;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return true;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return true;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return true;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return true;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return true;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return true;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return true;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return true;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return true;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return true;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return true;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return true;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return true;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return true;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return true;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return true;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return true;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return true;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return true;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return true;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return true;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return true;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return true;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return true;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return true;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return true;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return true;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return true;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return true;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return true;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return true;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return true;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return true;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return true;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return true;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return true;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return true;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return true;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return true;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return true;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return true;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return true;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return true;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return true;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return true;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x320B0
void func_346(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_345(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_347(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0x32279
void func_347(int *iParam0) { *iParam0 = -15; }

// Position - 0x32287
void func_348(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1) {
		return;
	}
	if (iParam1 && !Global_101700.f_8044.f_330[iParam0 /*6*/]) {
		if (!gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 6)) {
			iVar0 = func_353(iParam0);
			if (iVar0 != 322) {
				func_178(iVar0, 0, 0);
			}
		}
		func_349(iParam0, func_352(iParam0), 0);
		if (iParam0 == 53) {
			if (network::network_is_signed_in()) {
				stats::_0xB475F27C6A994D65();
			}
		}
	}
	Global_101700.f_8044.f_330[iParam0 /*6*/] = iParam1;
}

// Position - 0x32317
void func_349(int iParam0, int iParam1, int iParam2) {
	if (iParam2 == 0) {
		func_351(iParam0, 0);
	}
	Global_101700.f_8044.f_330[iParam0 /*6*/].f_3 = func_350();
	Global_101700.f_8975.f_21++;
	if (iParam2 == 0) {
		if (!gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 7)) {
			if (iParam1 != joaat("cities_passed")) {
				stats::stat_set_int(iParam1, Global_101700.f_8975.f_21, 1);
				if (!Global_69971) {
					stats::_0x11FF1C80276097ED(iParam1, Global_101700.f_8044.f_330[iParam0 /*6*/].f_4, 0);
				}
			}
		}
	}
}

// Position - 0x323A7
int func_350() { return Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380; }

// Position - 0x323C3
void func_351(var uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 55;
	if (iParam1) {
		iVar1 = uParam0;
		if (iVar1 == 46) {
			iVar0 = 35;
		}
		else if (iVar1 == 49) {
			iVar0 = 36;
		}
		else if (iVar1 == 50) {
			iVar0 = 37;
		}
		else if (iVar1 == 8) {
			iVar0 = 38;
		}
		else if (iVar1 == 16) {
			iVar0 = 39;
		}
		else if (iVar1 == 38) {
			iVar0 = 40;
		}
		else if (iVar1 == 39) {
			iVar0 = 41;
		}
		else if (iVar1 == 40) {
			iVar0 = 42;
		}
		else if (iVar1 == 41) {
			iVar0 = 43;
		}
		else if (iVar1 == 42) {
			iVar0 = 44;
		}
		else if (iVar1 == 43) {
			iVar0 = 45;
		}
		else if (iVar1 == 20) {
			iVar0 = 46;
		}
	}
	else {
		iVar2 = uParam0;
		if (iVar2 == 53) {
			iVar0 = 0;
		}
		else if (iVar2 == 1) {
			iVar0 = 1;
		}
		else if (iVar2 == 2) {
			iVar0 = 2;
		}
		else if (iVar2 == 17) {
			iVar0 = 3;
		}
		else if (iVar2 == 19) {
			iVar0 = 4;
		}
		else if (iVar2 == 43) {
			iVar0 = 5;
		}
		else if (iVar2 == 44) {
			iVar0 = 6;
		}
		else if (iVar2 == 63) {
			iVar0 = 8;
		}
		else if (iVar2 == 12) {
			iVar0 = 9;
		}
		else if (iVar2 == 13) {
			iVar0 = 10;
		}
		else if (iVar2 == 64) {
			iVar0 = 11;
		}
		else if (iVar2 == 20) {
			iVar0 = 12;
		}
		else if (iVar2 == 30) {
			iVar0 = 13;
		}
		else if (iVar2 == 31) {
			iVar0 = 14;
		}
		else if (iVar2 == 41) {
			iVar0 = 15;
		}
		else if (iVar2 == 38) {
			iVar0 = 16;
		}
		else if (iVar2 == 9) {
			iVar0 = 18;
		}
		else if (iVar2 == 59) {
			iVar0 = 19;
		}
		else if (iVar2 == 45) {
			iVar0 = 20;
		}
		else if (iVar2 == 10) {
			iVar0 = 21;
		}
		else if (iVar2 == 14) {
			iVar0 = 22;
		}
		else if (iVar2 == 16) {
			iVar0 = 24;
		}
		else if (iVar2 == 39) {
			iVar0 = 25;
		}
		else if (iVar2 == 46) {
			iVar0 = 26;
		}
		else if (iVar2 == 60) {
			iVar0 = 27;
		}
		else if (iVar2 == 22) {
			iVar0 = 28;
		}
		else if (iVar2 == 48) {
			iVar0 = 30;
		}
		else if (iVar2 == 61) {
			iVar0 = 31;
		}
		else if (iVar2 == 49) {
			iVar0 = 32;
		}
		else if (iVar2 == 27) {
			iVar0 = 34;
		}
		else if (iVar2 == 3) {
			iVar0 = 47;
		}
		else if (iVar2 == 4) {
			iVar0 = 48;
		}
		else if (iVar2 == 5) {
			iVar0 = 49;
		}
		else if (iVar2 == 6) {
			iVar0 = 50;
		}
		else if (iVar2 == 7) {
			iVar0 = 51;
		}
		else if (iVar2 == 58) {
			iVar0 = 53;
		}
		else if (iVar2 == 90) {
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75) {
			iVar0 = 17;
		}
		else if (iVar2 == 93) {
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70) {
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85) {
			iVar0 = 33;
		}
	}
	if (iVar0 != 55) {
		Global_101700.f_19523.f_472 = iVar0;
	}
}

// Position - 0x326E7
int func_352(int iParam0) {
	char cVar0[16];

	if (!gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 7)) {
		StringCopy(&cVar0, "FL_CO_", 16);
		StringConCat(&cVar0, &Global_82612[iParam0 /*34*/].f_8, 16);
		if (iParam0 == 90) {
			if (Global_101700.f_8044.f_99.f_205[7] == 2) {
				StringConCat(&cVar0, "B", 16);
			}
			else {
				StringConCat(&cVar0, "A", 16);
			}
		}
		return gameplay::get_hash_key(&cVar0);
	}
	return joaat("cities_passed");
}

// Position - 0x32752
int func_353(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 144;

	case 4: return 145;

	case 5: return 146;

	case 6: return 147;

	case 7: return 148;

	case 8: return 3;

	case 9: return 4;

	case 10: return 5;

	case 11: return 6;

	case 12: return 7;

	case 13: return 8;

	case 14: return 9;

	case 15: return 10;

	case 16: return 11;

	case 17: return 12;

	case 18: return 13;

	case 19: return 14;

	case 20: return 15;

	case 21: return 16;

	case 22: return 17;

	case 24: return 65;

	case 25: return 65;

	case 27: return 65;

	case 29: return 18;

	case 30: return 19;

	case 31: return 20;

	case 33: return 21;

	case 34: return 22;

	case 36: return 24;

	case 37: return 25;

	case 38: return 26;

	case 39: return 27;

	case 40: return 28;

	case 41: return 29;

	case 42: return 30;

	case 43: return 31;

	case 44: return 32;

	case 45: return 39;

	case 46: return 34;

	case 47: return 35;

	case 48: return 36;

	case 49: return 37;

	case 53: return 38;

	case 59: return 40;

	case 60: return 41;

	case 61: return 42;

	case 62: return 43;

	case 63: return 44;

	case 64: return 45;

	case 65: return 46;

	case 66: return 47;

	case 67: return 48;

	case 69: return 49;

	case 70: return 49;

	case 71: return 60;

	case 72: return 59;

	case 74: return 61;

	case 75: return 61;

	case 76: return 51;

	case 77: return 50;

	case 78: return 62;

	case 79: return 62;

	case 80: return 63;

	case 81: return 63;

	case 82: return 63;

	case 83: return 63;

	case 84: return 52;

	case 85: return 52;

	case 86: return 53;

	case 87: return 54;

	case 89: return 54;

	case 90: return 55;

	case 91: return 57;

	case 92: return 56;

	case 93: return 58;
	}
	return 322;
}

// Position - 0x32BA0
void func_354(int iParam0) {
	int iVar0;

	iVar0 = func_355(61);
	Global_2413052[iVar0 /*83*/] = 61;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
	switch (iParam0) {
	case 0: StringCopy(&Global_2413052[iVar0 /*83*/].f_1, "AF_MICHAEL", 64); break;

	case 1: StringCopy(&Global_2413052[iVar0 /*83*/].f_1, "AF_FRANKLIN", 64); break;

	case 2: StringCopy(&Global_2413052[iVar0 /*83*/].f_1, "AF_TREVOR", 64); break;

	default: break;
	}
}

// Position - 0x32C22
int func_355(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19) {
		if (Global_2413052[iVar1 /*83*/] == iParam0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x32C6F
void func_356() {
	int iVar0;

	iVar0 = func_355(59);
	Global_2413052[iVar0 /*83*/] = 59;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x32C9C
void func_357() {
	int iVar0;

	iVar0 = func_355(58);
	Global_2413052[iVar0 /*83*/] = 58;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x32CC9
void func_358() {
	int iVar0;

	iVar0 = func_355(57);
	Global_2413052[iVar0 /*83*/] = 57;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x32CF6
void func_359(int iParam0, int iParam1) {
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x32D40
void func_360(int iParam0, int iParam1) {
	switch (iParam0) {
	case 53: func_361(5, 1); break;

	case 0: func_361(1, 1); break;

	case 1: func_361(20, iParam1); break;

	case 2: func_361(0, iParam1); break;

	case 17: func_361(12, iParam1); break;

	case 18: func_361(26, iParam1); break;

	case 19: func_361(3, iParam1); break;

	case 43:
		func_361(13, iParam1);
		func_361(23, iParam1);
		break;

	case 62:
		func_361(2, iParam1);
		func_361(27, iParam1);
		break;

	case 63: func_361(18, iParam1); break;

	case 12: func_361(25, iParam1); break;

	case 64: func_361(11, iParam1); break;

	case 20:
		func_361(14, iParam1);
		func_361(10, iParam1);
		break;

	case 29: func_361(7, iParam1); break;

	case 30: func_361(22, iParam1); break;

	case 31: func_361(8, iParam1); break;

	case 59: func_361(21, iParam1); break;

	case 45: func_361(19, iParam1); break;

	case 42: func_361(24, iParam1); break;

	case 54:
	case 55:
	case 56:
	case 57:
	case 58: func_361(9, iParam1); break;
	}
}

// Position - 0x32ECB
void func_361(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31) {
		if (!func_368(iParam0)) {
			gameplay::set_bit(&Global_101700.f_25393, iVar0);
			if (!iParam1) {
				func_366(func_367(iParam0));
				if (!func_365(68)) {
					func_362("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

// Position - 0x32F31
void func_362(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_363(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x32F53
void func_363(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_364();
	}
}

// Position - 0x33127
void func_364() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x33247
int func_365(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x3328A
void func_366(char *sParam0) {
	ui::_set_notification_text_entry("");
	ui::_set_notification_message_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

// Position - 0x332AF
char *func_367(int iParam0) {
	switch (iParam0) {
	case 0: return "CM_STOMIC";

	case 1: return "CM_STOFRA";

	case 2: return "CM_STOTRE";

	case 3: return "CM_STOAMA";

	case 4: return "CM_STOBEV";

	case 5: return "CM_STOBRA";

	case 6: return "CM_STOCHR";

	case 7: return "CM_STODAV";

	case 8: return "CM_STODEV";

	case 9: return "CM_STODRF";

	case 10: return "CM_STOFAB";

	case 11: return "CM_STOFLO";

	case 12: return "CM_STOJIM";

	case 13: return "CM_STOLAM";

	case 14: return "CM_STOLAZ";

	case 15: return "CM_STOLES";

	case 16: return "CM_STOMAU";

	case 17: return "CM_STOTHO";

	case 18: return "CM_STONER";

	case 19: return "CM_STOPAT";

	case 20: return "CM_STOSIM";

	case 21: return "CM_STOSOL";

	case 22: return "CM_STOSTE";

	case 23: return "CM_STOSTR";

	case 24: return "CM_STOTAN";

	case 25: return "CM_STOTAO";

	case 26: return "CM_STOTRA";

	case 27: return "CM_STOWAD";
	}
	return "ERROR!";
}

// Position - 0x33482
int func_368(int iParam0) {
	if (iParam0 != -1 && iParam0 != 28) {
		return gameplay::is_bit_set(Global_101700.f_25393, iParam0);
	}
	return 0;
}

// Position - 0x334AF
struct<2> func_369(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x33518
void func_370(char* sParam0, int iParam1)
{
	stats::stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (gameplay::is_bit_set(iParam1, 0)) {
		stats::stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 1)) {
		stats::stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (gameplay::is_bit_set(iParam1, 2)) {
		stats::stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

// Position - 0x33572
void func_371(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 14)) {
		iVar0 = func_378(iParam0);
		if (iVar0 != -1) {
			iVar1 = Global_101700.f_8044.f_99.f_205[func_298(iVar0)];
			iVar2 = 0;
			while (iVar2 < Global_87853[iVar1 /*19*/]) {
				iVar3 = Global_101700.f_1.f_12[iVar1 /*6*/][iVar2];
				if (!gameplay::is_bit_set(Global_101700.f_1.f_118, iVar3)) {
					Global_101700.f_1.f_73[iVar3 /*3*/].f_1 = Global_87836[iVar2 /*3*/].f_1;
					Global_101700.f_1.f_73[iVar3 /*3*/].f_2 = Global_87836[iVar2 /*3*/].f_2;
					func_372(iVar3);
				}
				iVar2++;
			}
		}
	}
	if (Global_87852) {
		Global_87852 = 0;
	}
}

// Position - 0x33632
void func_372(int iParam0) {
	float fVar0;
	int iVar1;

	if (Global_101700.f_1.f_73[iParam0 /*3*/] == 2) {
		return;
	}
	fVar0 = 0f;
	switch (Global_87699[iParam0 /*5*/]) {
	case 1:
		iVar1 = 0;
		while (iVar1 < 4) {
			fVar0 += system::to_float(func_376(iParam0, iVar1)) / system::to_float(func_375(iVar1)) * 100f;
			iVar1++;
		}
		fVar0 /= 4f;
		break;

	case 2:
		iVar1 = 0;
		while (iVar1 < 3) {
			fVar0 += system::to_float(func_376(iParam0, iVar1)) / system::to_float(func_374(iVar1)) * 100f;
			iVar1++;
		}
		fVar0 /= 3f;
		break;

	case 3:
		iVar1 = 0;
		while (iVar1 < 3) {
			fVar0 += system::to_float(func_376(iParam0, iVar1)) / system::to_float(func_373(iVar1)) * 100f;
			iVar1++;
		}
		fVar0 /= 3f;
		break;
	}
	if (fVar0 > 66.6f) {
		if (Global_101700.f_1.f_73[iParam0 /*3*/] < 2) {
			Global_101700.f_1.f_73[iParam0 /*3*/] = 2;
		}
	}
	else if (fVar0 > 33.3f) {
		if (Global_101700.f_1.f_73[iParam0 /*3*/] < 1) {
			Global_101700.f_1.f_73[iParam0 /*3*/] = 1;
		}
	}
}

// Position - 0x33779
int func_373(int iParam0) {
	switch (iParam0) {
	case 0: return 100;

	case 1: return 100;

	case 2: return 100;
	}
	return 0;
}

// Position - 0x337B3
int func_374(int iParam0) {
	switch (iParam0) {
	case 0: return 100;

	case 1: return 100;

	case 2: return 100;
	}
	return 0;
}

// Position - 0x337ED
int func_375(int iParam0) {
	switch (iParam0) {
	case 0: return 1000;

	case 1: return 100;

	case 2: return 100;

	case 3: return 100;
	}
	return 0;
}

// Position - 0x33836
int func_376(int iParam0, int iParam1) {
	return func_377(iParam1, Global_101700.f_1.f_73[iParam0 /*3*/].f_1, Global_101700.f_1.f_73[iParam0 /*3*/].f_2);
}

// Position - 0x33860
int func_377(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case 0:
	case 1: return system::shift_right(iParam1, 15 * iParam0) & 32767;

	case 2:
	case 3: return system::shift_right(iParam2, 15 * (iParam0 - 2)) & 32767;
	}
	return -1;
}

// Position - 0x338B4
int func_378(int iParam0) {
	switch (iParam0) {
	case 90: return 0;

	case 74:
	case 75: return 1;

	case 93: return 2;

	case 69:
	case 70: return 3;

	case 84:
	case 85: return 4;
	}
	return -1;
}

// Position - 0x33917
void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;
	struct<2> Var5;

	if (iParam3 != -1) {
		Global_69971.f_9 = iParam3;
	}
	if (Global_88744) {
		player::set_max_wanted_level(5);
		player::set_wanted_level_multiplier(1f);
	}
	Global_88044.f_8 = 0;
	if (player::is_player_playing(player::player_id())) {
		if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 21) &&
			!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 15)) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			player::start_firing_amnesty(5000);
			if (ped::is_ped_using_action_mode(player::player_ped_id())) {
				ped::set_ped_using_action_mode(player::player_ped_id(), 0, -1, 0);
			}
			player::special_ability_deactivate(player::player_id());
		}
		if (Global_69707 == iParam2) {
			entity::set_entity_invincible(player::player_ped_id(), 1);
		}
		else {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
	}
	script::request_script("buddyDeathResponse");
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 0);
		if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 21) &&
			!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 15)) {
			func_601();
		}
	}
	func_597(func_199());
	if (!func_596()) {
		func_452(player::player_ped_id(), 1);
	}
	func_283();
	iVar0 = func_199();
	if (func_22(iVar0)) {
		func_325(player::player_ped_id(), &Global_90960[iVar0 /*98*/], &Global_91263[iVar0 /*3*/], &Global_91273[iVar0],
				 &Global_91255[iVar0], &Global_2595543[iVar0]);
	}
	func_451();
	Global_2989[0] = 0;
	Global_2989[2] = 0;
	Global_2989[1] = 0;
	if (func_450()) {
		func_448();
	}
	Global_101700.f_2095.f_4092 = func_447(iParam2);
	ui::clear_additional_text(0, 1);
	if (iParam4 && !gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 15)) {
		func_273(0);
	}
	Global_69947 = 0;
	func_442();
	func_441();
	if (!func_181(0)) {
		if (Global_69707 == iParam2) {
			if (!gameplay::are_strings_equal("NONE", &Global_69708)) {
				cutscene::_0x8D9DF6ECA8768583(Global_82576[iParam1 /*5*/].f_4);
			}
			Global_69707 = -1;
			Global_69706 = 0;
			Global_69720 = 0;
			Global_69714[0] = -1;
			Global_69714[1] = -1;
			Global_69714[2] = -1;
			iVar1 = 0;
			while (iVar1 < Global_69764) {
				Global_69765[iVar1 /*4*/] = -1;
				Global_69765[iVar1 /*4*/].f_1 = 0;
				Global_69765[iVar1 /*4*/].f_2 = 0;
				Global_69765[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_69764 = 0;
			iVar1 = 0;
			while (iVar1 < Global_69886) {
				Global_69887[iVar1 /*3*/] = -1;
				Global_69887[iVar1 /*3*/].f_1 = 0;
				Global_69887[iVar1 /*3*/].f_2 = -99;
				iVar1++;
			}
			Global_69886 = 0;
			iVar1 = 0;
			while (iVar1 < Global_69900) {
				Global_69901[iVar1 /*2*/] = -1;
				Global_69901[iVar1 /*2*/].f_1 = 0;
				iVar1++;
			}
			Global_69900 = 0;
			iVar1 = 0;
			while (iVar1 < Global_69912) {
				Global_69913[iVar1 /*4*/] = -1;
				Global_69913[iVar1 /*4*/].f_1 = 0;
				Global_69913[iVar1 /*4*/].f_2 = 0;
				Global_69913[iVar1 /*4*/].f_3 = 0;
				iVar1++;
			}
			Global_69912 = 0;
			func_440();
			iVar1 = 0;
			while (iVar1 < 3) {
				Global_69722[iVar1] = 0;
				iVar1++;
			}
			Global_69705 = 0;
			Global_69721 = 0;
			if (Global_69718 != -1) {
				func_438(&Global_69718);
			}
		}
		else {
			cutscene::remove_cutscene();
			Global_69719 = 1;
		}
	}
	func_437(iParam2);
	iVar2 = func_281(iParam2);
	sVar3 = {Global_82612[iParam2 /*34*/].f_8};
	if (iParam2 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&sVar3, "A", 8); break;

		case 2: StringConCat(&sVar3, "B", 8); break;
		}
	}
	func_436(&sVar3, iVar2, 0);
	Var5 = {func_369(iParam2)};
	ui::set_mission_name(1, &Var5);
	if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 3)) {
		if (!func_596()) {
			func_434(iParam2);
		}
	}
	if (!gameplay::is_bit_set(Global_82612[iParam2 /*34*/].f_15, 1) &&
		!gameplay::is_bit_set(Global_82576[iParam1 /*5*/].f_1, 3)) {
		func_395(iParam0);
	}
	func_381(iParam2);
	func_380(iParam2);
	cam::stop_gameplay_hint(0);
	Global_69964 = iParam2;
}

// Position - 0x33D52
void func_380(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!Global_87852) {
		iVar0 = func_378(iParam0);
		iVar1 = func_298(iVar0);
		if (iParam0 == 93) {
			if (Global_101700.f_8044.f_99.f_205[9] != 5) {
				Global_101700.f_8044.f_99.f_205[9] = 5;
			}
		}
		if (gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 14)) {
			if (iVar0 != -1) {
				iVar2 = Global_101700.f_8044.f_99.f_205[iVar1];
				iVar3 = 0;
				while (iVar3 < Global_87853[iVar2 /*19*/]) {
					iVar4 = Global_101700.f_1.f_12[iVar2 /*6*/][iVar3];
					Global_87836[iVar3 /*3*/] = 0;
					Global_87836[iVar3 /*3*/].f_1 = Global_101700.f_1.f_73[iVar4 /*3*/].f_1;
					Global_87836[iVar3 /*3*/].f_2 = Global_101700.f_1.f_73[iVar4 /*3*/].f_2;
					iVar3++;
				}
				Global_87852 = 1;
			}
		}
	}
}

// Position - 0x33E32
void func_381(int iParam0) {
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = false;
	if (iParam0 == 26) {
		Global_55843 = 1;
	}
	iVar1 = iParam0;
	if (iVar1 == 28) {
		return;
	}
	if (iVar1 == 27) {
		iVar1 = 26;
		if (Global_55815) {
			return;
		}
		bVar0 = true;
	}
	if (Global_3) {
		func_387();
		return;
	}
	MemCopy(&Global_55837, {func_369(iVar1)}, 4);
	Global_55825 = 0;
	Global_55824 = 0;
	if (gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 4)) {
		Global_55824 = 1;
	}
	switch (iVar1) {
	case 53:
		Global_55815 = 1;
		Global_55824 = 1;
		break;

	case 24:
	case 25:
	case 26:
	case 27:
		Global_55815 = 1;
		Global_55824 = 1;
		break;

	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
		Global_55815 = 1;
		Global_55824 = 1;
		break;

	case 50:
	case 51:
	case 52:
		Global_55812 = 1;
		Global_55815 = 1;
		Global_55818 = 1;
		break;

	case 32:
	case 23:
	case 28:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 77:
		Global_55824 = 1;
		Global_55823 = 1;
		func_387();
		func_612();
		return;

	case 90:
	case 74:
	case 75:
	case 93:
	case 69:
	case 70:
	case 84:
	case 85:
		Global_55826 = func_386(iVar1);
		Global_55825 = 1;
		Global_88044.f_3 = 0;
		break;
	}
	iVar2 = Global_68067;
	Global_68067 = 0;
	iVar3 = Global_68068;
	Global_68068 = iVar1;
	if (!Global_55812) {
		if (Global_68068 != iVar3 || Global_67917 == 0 || iVar2 != Global_68067) {
			Global_25439 = 0;
			func_387();
			func_383(iVar1);
		}
		else {
			Global_55815 = 1;
		}
	}
	if (bVar0) {
		Global_55819 = 1;
	}
	Global_55850 = gameplay::get_game_timer();
	Global_55823 = 0;
	func_382();
	Global_55822 = 0;
}

// Position - 0x34030
void func_382() {
	int iVar0;

	if (!Global_55819) {
		return;
	}
	if (Global_67917 == 0) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		switch (Global_56047[Global_67918[iVar0 /*9*/] /*13*/]) {
		case 1:
		case 9: Global_67918[iVar0 /*9*/].f_3 = 1; break;

		case 4:
			if (Global_55830) {
				Global_67918[iVar0 /*9*/].f_3 = 1;
			}
			break;

		case 6:
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/].f_3) {
				if (Global_67918[iVar0 /*9*/].f_1 != 0) {
					Global_67918[iVar0 /*9*/].f_3 = 1;
				}
			}
			break;
		}
		iVar0++;
	}
	Global_55819 = 0;
}

// Position - 0x340E3
void func_383(int iParam0) {
	switch (iParam0) {
	case 0:
		func_384(0);
		func_384(1);
		func_384(2);
		func_384(3);
		func_384(4);
		func_384(5);
		func_384(6);
		func_384(7);
		func_384(8);
		return;

	case 1:
		func_384(9);
		func_384(10);
		func_384(11);
		func_384(12);
		func_384(13);
		func_384(14);
		func_384(15);
		func_384(16);
		func_384(17);
		func_384(18);
		func_384(19);
		func_384(20);
		return;

	case 2:
		func_384(21);
		func_384(22);
		func_384(23);
		func_384(24);
		func_384(25);
		func_384(26);
		func_384(27);
		func_384(28);
		func_384(29);
		return;

	case 3:
		func_384(30);
		func_384(31);
		func_384(32);
		func_384(33);
		func_384(34);
		func_384(35);
		func_384(36);
		func_384(37);
		func_384(38);
		func_384(39);
		func_384(40);
		func_384(41);
		func_384(42);
		return;

	case 4:
		func_384(43);
		func_384(44);
		func_384(45);
		func_384(46);
		func_384(47);
		func_384(48);
		func_384(49);
		func_384(50);
		func_384(51);
		func_384(52);
		func_384(53);
		func_384(54);
		func_384(55);
		func_384(56);
		return;

	case 5:
		func_384(57);
		func_384(58);
		func_384(59);
		func_384(60);
		func_384(61);
		func_384(62);
		func_384(63);
		func_384(64);
		func_384(65);
		func_384(66);
		func_384(67);
		func_384(68);
		func_384(69);
		func_384(70);
		return;

	case 6:
		func_384(71);
		func_384(72);
		func_384(73);
		func_384(74);
		func_384(75);
		func_384(76);
		func_384(77);
		func_384(78);
		func_384(79);
		func_384(80);
		func_384(81);
		func_384(82);
		func_384(83);
		func_384(84);
		func_384(85);
		return;

	case 7:
		func_384(86);
		func_384(87);
		func_384(88);
		func_384(89);
		func_384(90);
		func_384(91);
		func_384(92);
		func_384(93);
		func_384(94);
		func_384(95);
		func_384(96);
		func_384(97);
		func_384(98);
		func_384(99);
		func_384(100);
		func_384(101);
		return;

	case 9:
		func_384(102);
		func_384(103);
		func_384(104);
		func_384(105);
		func_384(106);
		func_384(107);
		func_384(108);
		func_384(109);
		func_384(110);
		return;

	case 8:
		func_384(111);
		func_384(112);
		func_384(113);
		func_384(114);
		func_384(115);
		func_384(116);
		func_384(117);
		func_384(118);
		func_384(119);
		return;

	case 10:
		func_384(120);
		func_384(121);
		func_384(122);
		func_384(123);
		func_384(124);
		func_384(125);
		func_384(126);
		func_384(127);
		func_384(128);
		return;

	case 11:
		func_384(129);
		func_384(130);
		func_384(131);
		func_384(132);
		func_384(133);
		func_384(134);
		func_384(135);
		return;

	case 12:
		func_384(136);
		func_384(137);
		func_384(138);
		func_384(139);
		func_384(140);
		func_384(141);
		func_384(142);
		func_384(143);
		func_384(144);
		func_384(145);
		func_384(146);
		func_384(147);
		return;

	case 13:
		func_384(148);
		func_384(149);
		func_384(150);
		func_384(151);
		func_384(152);
		func_384(153);
		func_384(154);
		func_384(155);
		func_384(156);
		func_384(157);
		func_384(158);
		func_384(159);
		func_384(160);
		return;

	case 14:
		func_384(161);
		func_384(162);
		func_384(163);
		func_384(164);
		func_384(165);
		func_384(166);
		func_384(167);
		func_384(168);
		func_384(169);
		func_384(170);
		func_384(171);
		return;

	case 15:
		func_384(172);
		func_384(173);
		func_384(174);
		func_384(175);
		func_384(176);
		func_384(177);
		func_384(178);
		func_384(179);
		func_384(180);
		func_384(181);
		func_384(182);
		func_384(183);
		func_384(184);
		return;

	case 16:
		func_384(185);
		func_384(186);
		func_384(187);
		func_384(188);
		func_384(189);
		func_384(190);
		func_384(191);
		func_384(192);
		func_384(193);
		func_384(194);
		func_384(195);
		return;

	case 17:
		func_384(196);
		func_384(197);
		func_384(198);
		func_384(199);
		func_384(200);
		func_384(201);
		func_384(202);
		func_384(203);
		func_384(204);
		return;

	case 18:
		func_384(205);
		func_384(206);
		func_384(207);
		func_384(208);
		func_384(209);
		func_384(210);
		func_384(211);
		func_384(212);
		func_384(213);
		func_384(214);
		func_384(215);
		func_384(216);
		return;

	case 19:
		func_384(217);
		func_384(218);
		func_384(219);
		func_384(220);
		func_384(221);
		func_384(222);
		func_384(223);
		func_384(224);
		func_384(225);
		func_384(226);
		func_384(227);
		func_384(228);
		return;

	case 20:
		func_384(229);
		func_384(230);
		func_384(231);
		func_384(232);
		func_384(233);
		func_384(234);
		func_384(235);
		func_384(236);
		func_384(237);
		func_384(238);
		return;

	case 21:
		func_384(239);
		func_384(240);
		func_384(241);
		func_384(242);
		func_384(243);
		func_384(244);
		func_384(245);
		func_384(246);
		func_384(247);
		func_384(248);
		return;

	case 22:
		func_384(249);
		func_384(250);
		func_384(251);
		func_384(252);
		func_384(253);
		func_384(254);
		func_384(255);
		func_384(256);
		return;

	case 26:
		func_384(257);
		func_384(258);
		func_384(259);
		func_384(260);
		func_384(261);
		func_384(262);
		func_384(263);
		func_384(264);
		func_384(265);
		func_384(266);
		func_384(267);
		func_384(268);
		func_384(269);
		func_384(270);
		func_384(271);
		func_384(272);
		return;

	case 29:
		func_384(273);
		func_384(274);
		func_384(275);
		func_384(276);
		func_384(277);
		func_384(278);
		func_384(279);
		func_384(280);
		func_384(281);
		func_384(282);
		return;

	case 30:
		func_384(283);
		func_384(284);
		func_384(285);
		func_384(286);
		func_384(287);
		func_384(288);
		func_384(289);
		func_384(290);
		func_384(291);
		func_384(292);
		func_384(293);
		return;

	case 31:
		func_384(294);
		func_384(295);
		func_384(296);
		func_384(297);
		func_384(298);
		func_384(299);
		func_384(300);
		func_384(301);
		func_384(302);
		func_384(303);
		func_384(304);
		func_384(305);
		return;

	case 38:
		func_384(306);
		func_384(307);
		func_384(308);
		func_384(309);
		func_384(310);
		func_384(311);
		func_384(312);
		func_384(313);
		func_384(314);
		func_384(315);
		func_384(316);
		return;

	case 33:
		func_384(317);
		func_384(318);
		func_384(319);
		func_384(320);
		func_384(321);
		return;

	case 34:
		func_384(322);
		func_384(323);
		func_384(324);
		func_384(325);
		return;

	default:
	}
	switch (iParam0) {
	case 39:
		func_384(326);
		func_384(327);
		func_384(328);
		func_384(329);
		func_384(330);
		func_384(331);
		func_384(332);
		func_384(333);
		func_384(334);
		func_384(335);
		func_384(336);
		func_384(337);
		return;

	case 40:
		func_384(338);
		func_384(339);
		func_384(340);
		func_384(341);
		func_384(342);
		func_384(343);
		func_384(344);
		func_384(345);
		return;

	case 41:
		func_384(346);
		func_384(347);
		func_384(348);
		func_384(349);
		func_384(350);
		func_384(351);
		func_384(352);
		func_384(353);
		func_384(354);
		func_384(355);
		func_384(356);
		func_384(357);
		func_384(358);
		func_384(359);
		return;

	case 42:
		func_384(360);
		func_384(361);
		func_384(362);
		func_384(363);
		func_384(364);
		func_384(365);
		func_384(366);
		func_384(367);
		func_384(368);
		func_384(369);
		func_384(370);
		func_384(371);
		return;

	case 43:
		func_384(372);
		func_384(373);
		func_384(374);
		func_384(375);
		func_384(376);
		func_384(377);
		func_384(378);
		func_384(379);
		func_384(380);
		func_384(381);
		func_384(382);
		func_384(383);
		return;

	case 44:
		func_384(384);
		func_384(385);
		func_384(386);
		func_384(387);
		func_384(388);
		func_384(389);
		func_384(390);
		func_384(391);
		func_384(392);
		return;

	case 45:
		func_384(393);
		func_384(394);
		func_384(395);
		func_384(396);
		func_384(397);
		func_384(398);
		func_384(399);
		return;

	case 46:
		func_384(400);
		func_384(401);
		func_384(402);
		func_384(403);
		func_384(404);
		func_384(405);
		func_384(406);
		func_384(407);
		func_384(408);
		func_384(409);
		func_384(410);
		func_384(411);
		func_384(412);
		return;

	case 47:
		func_384(413);
		func_384(414);
		func_384(415);
		func_384(416);
		func_384(417);
		func_384(418);
		func_384(419);
		func_384(420);
		func_384(421);
		func_384(422);
		func_384(423);
		func_384(424);
		func_384(425);
		func_384(426);
		func_384(427);
		func_384(428);
		return;

	case 48:
		func_384(429);
		func_384(430);
		func_384(431);
		func_384(432);
		func_384(433);
		func_384(434);
		func_384(435);
		func_384(436);
		func_384(437);
		func_384(438);
		func_384(439);
		func_384(440);
		return;

	case 49:
		func_384(441);
		func_384(442);
		func_384(443);
		func_384(444);
		func_384(445);
		func_384(446);
		func_384(447);
		func_384(448);
		func_384(449);
		func_384(450);
		func_384(451);
		func_384(452);
		func_384(453);
		return;

	case 53:
		func_384(454);
		func_384(455);
		func_384(456);
		func_384(457);
		func_384(458);
		func_384(459);
		func_384(460);
		func_384(461);
		func_384(462);
		func_384(463);
		func_384(464);
		func_384(465);
		return;

	case 60:
		func_384(466);
		func_384(467);
		func_384(468);
		func_384(469);
		func_384(470);
		func_384(471);
		func_384(472);
		func_384(473);
		return;

	case 61:
		func_384(474);
		func_384(475);
		func_384(476);
		func_384(477);
		func_384(478);
		func_384(479);
		func_384(480);
		func_384(481);
		func_384(482);
		func_384(483);
		func_384(484);
		func_384(485);
		return;

	case 62:
		func_384(486);
		func_384(487);
		func_384(488);
		func_384(489);
		func_384(490);
		func_384(491);
		func_384(492);
		func_384(493);
		func_384(494);
		func_384(495);
		func_384(496);
		func_384(497);
		func_384(498);
		return;

	case 63:
		func_384(499);
		func_384(500);
		func_384(501);
		func_384(502);
		func_384(503);
		func_384(504);
		func_384(505);
		func_384(506);
		func_384(507);
		func_384(508);
		func_384(509);
		func_384(510);
		func_384(511);
		func_384(512);
		func_384(513);
		func_384(514);
		return;

	case 64:
		func_384(515);
		func_384(516);
		func_384(517);
		func_384(518);
		func_384(519);
		func_384(520);
		func_384(521);
		func_384(522);
		func_384(523);
		func_384(524);
		func_384(525);
		func_384(526);
		return;

	case 66:
		func_384(527);
		func_384(528);
		func_384(529);
		func_384(530);
		func_384(531);
		func_384(532);
		func_384(533);
		return;

	case 67:
		func_384(534);
		func_384(535);
		func_384(536);
		func_384(537);
		func_384(538);
		func_384(539);
		return;

	case 68:
		func_384(540);
		func_384(541);
		func_384(542);
		func_384(543);
		func_384(544);
		func_384(545);
		func_384(546);
		return;

	case 69:
		func_384(547);
		func_384(548);
		func_384(549);
		func_384(550);
		func_384(551);
		func_384(552);
		func_384(553);
		func_384(554);
		func_384(555);
		func_384(556);
		func_384(557);
		func_384(558);
		func_384(559);
		func_384(560);
		return;

	case 70:
		func_384(561);
		func_384(562);
		func_384(563);
		func_384(564);
		func_384(565);
		func_384(566);
		func_384(567);
		func_384(568);
		func_384(569);
		func_384(570);
		func_384(571);
		func_384(572);
		func_384(573);
		func_384(574);
		func_384(575);
		return;

	case 71:
		func_384(576);
		func_384(577);
		func_384(578);
		func_384(579);
		func_384(580);
		func_384(581);
		func_384(582);
		func_384(583);
		func_384(584);
		func_384(585);
		func_384(586);
		return;

	case 72:
		func_384(587);
		func_384(588);
		func_384(589);
		func_384(590);
		func_384(591);
		func_384(592);
		func_384(593);
		func_384(594);
		return;

	case 73:
		func_384(595);
		func_384(596);
		func_384(597);
		func_384(598);
		func_384(599);
		func_384(600);
		func_384(601);
		func_384(602);
		func_384(603);
		func_384(604);
		return;

	case 74:
		func_384(605);
		func_384(606);
		func_384(607);
		func_384(608);
		func_384(609);
		func_384(610);
		func_384(611);
		func_384(612);
		func_384(613);
		func_384(614);
		func_384(615);
		func_384(616);
		func_384(617);
		func_384(618);
		func_384(619);
		func_384(620);
		return;

	case 75:
		func_384(621);
		func_384(622);
		func_384(623);
		func_384(624);
		func_384(625);
		func_384(626);
		func_384(627);
		func_384(628);
		func_384(629);
		func_384(630);
		func_384(631);
		func_384(632);
		func_384(633);
		func_384(634);
		func_384(635);
		func_384(636);
		return;

	case 76:
		func_384(637);
		func_384(638);
		func_384(639);
		func_384(640);
		func_384(641);
		func_384(642);
		func_384(643);
		func_384(644);
		func_384(645);
		func_384(646);
		func_384(647);
		func_384(648);
		return;

	case 78:
		func_384(649);
		func_384(650);
		func_384(651);
		func_384(652);
		return;

	case 79:
		func_384(653);
		func_384(654);
		func_384(655);
		func_384(656);
		func_384(657);
		func_384(658);
		func_384(659);
		return;

	case 84:
		func_384(660);
		func_384(661);
		func_384(662);
		func_384(663);
		func_384(664);
		func_384(665);
		func_384(666);
		func_384(667);
		func_384(668);
		func_384(669);
		func_384(670);
		func_384(671);
		func_384(672);
		func_384(673);
		return;

	default:
	}
	switch (iParam0) {
	case 85:
		func_384(674);
		func_384(675);
		func_384(676);
		func_384(677);
		func_384(678);
		func_384(679);
		func_384(680);
		func_384(681);
		func_384(682);
		func_384(683);
		func_384(684);
		func_384(685);
		func_384(686);
		func_384(687);
		func_384(688);
		return;

	case 86:
		func_384(689);
		func_384(690);
		func_384(691);
		func_384(692);
		func_384(693);
		func_384(694);
		func_384(695);
		return;

	case 87:
		func_384(696);
		func_384(697);
		func_384(698);
		func_384(699);
		func_384(700);
		func_384(701);
		return;

	case 88:
		func_384(702);
		func_384(703);
		func_384(704);
		func_384(705);
		func_384(706);
		func_384(707);
		func_384(708);
		return;

	case 91:
		func_384(709);
		func_384(710);
		func_384(711);
		func_384(712);
		func_384(713);
		func_384(714);
		func_384(715);
		func_384(716);
		func_384(717);
		return;

	case 92:
		func_384(718);
		func_384(719);
		func_384(720);
		func_384(721);
		func_384(722);
		func_384(723);
		func_384(724);
		func_384(725);
		func_384(726);
		func_384(727);
		func_384(728);
		return;

	case 93:
		func_384(729);
		func_384(730);
		func_384(731);
		func_384(732);
		func_384(733);
		func_384(734);
		func_384(735);
		func_384(736);
		func_384(737);
		func_384(738);
		func_384(739);
		func_384(740);
		return;

	case 90:
		func_384(810);
		func_384(811);
		func_384(812);
		func_384(813);
		func_384(814);
		func_384(815);
		func_384(816);
		func_384(817);
		func_384(818);
		func_384(819);
		return;

	case 36:
		func_384(820);
		func_384(821);
		func_384(822);
		func_384(823);
		return;

	case 37:
		func_384(824);
		func_384(825);
		func_384(826);
		func_384(827);
		return;

	case 24:
		func_384(846);
		func_384(847);
		func_384(848);
		func_384(849);
		func_384(850);
		func_384(851);
		return;

	case 25:
		func_384(852);
		func_384(853);
		func_384(854);
		func_384(855);
		func_384(856);
		func_384(857);
		func_384(858);
		func_384(859);
		func_384(860);
		return;

	case 59:
		func_384(861);
		func_384(862);
		func_384(863);
		func_384(864);
		func_384(865);
		func_384(866);
		func_384(867);
		func_384(868);
		func_384(869);
		return;

	case 65:
		func_384(870);
		func_384(871);
		func_384(872);
		func_384(873);
		func_384(874);
		return;

	case 80:
		func_384(875);
		func_384(876);
		func_384(877);
		func_384(878);
		func_384(879);
		func_384(880);
		func_384(881);
		func_384(882);
		return;

	case 81:
		func_384(883);
		func_384(884);
		func_384(885);
		func_384(886);
		func_384(887);
		func_384(888);
		func_384(889);
		func_384(890);
		return;

	case 82:
		func_384(891);
		func_384(892);
		func_384(893);
		func_384(894);
		func_384(895);
		func_384(896);
		func_384(897);
		func_384(898);
		return;

	case 83:
		func_384(899);
		func_384(900);
		func_384(901);
		func_384(902);
		func_384(903);
		func_384(904);
		func_384(905);
		return;

	case 89:
		func_384(906);
		func_384(907);
		func_384(908);
		func_384(909);
		func_384(910);
		func_384(911);
		func_384(912);
		return;

	default:
	}
}

// Position - 0x3595E
void func_384(int iParam0) {
	Global_55815 = 1;
	Global_55818 = 1;
	if (Global_67917 > 15) {
		return;
	}
	func_385(Global_67917);
	Global_67918[Global_67917 /*9*/] = iParam0;
	Global_67917++;
	if (Global_56047[iParam0 /*13*/] == 16) {
		Global_68069 = 1;
	}
}

// Position - 0x359A9
void func_385(int iParam0) {
	Global_67918[iParam0 /*9*/].f_1 = 0;
	Global_67918[iParam0 /*9*/].f_2 = 0f;
	Global_67918[iParam0 /*9*/].f_3 = 0;
	Global_67918[iParam0 /*9*/].f_4 = 0;
}

// Position - 0x359DD
int func_386(int iParam0) {
	switch (iParam0) {
	case 90: return 0;

	case 74:
	case 75: return 1;

	case 93: return 2;

	case 69:
	case 70: return 3;

	case 84:
	case 85: return 4;
	}
	return -1;
}

// Position - 0x35A40
void func_387() {
	if (Global_55822) {
		return;
	}
	Global_55831 = 0;
	Global_67917 = 0;
	Global_55833 = 0;
	if (Global_55830) {
	}
	Global_55830 = 0;
	func_394(0);
	func_393();
	Global_68069 = 0;
	Global_55821 = 1;
	func_391();
	func_390();
	func_389();
	func_388();
	Global_55812 = 0;
	Global_55842 = 0;
	Global_55850 = -1;
}

// Position - 0x35A96
void func_388() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_68104[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68113 = 0;
}

// Position - 0x35AC3
void func_389() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		Global_68070[iVar0 /*2*/] = 0;
		Global_68070[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68103 = 0;
}

// Position - 0x35AFA
void func_390() { Global_55981 = 0; }

// Position - 0x35B06
void func_391() {
	Global_55841 = 0;
	Global_55845 = func_392(joaat("sp0_shots"));
	Global_55844 = func_392(joaat("sp0_hits"));
	Global_55847 = func_392(joaat("sp1_shots"));
	Global_55846 = func_392(joaat("sp1_hits"));
	Global_55849 = func_392(joaat("sp2_shots"));
	Global_55848 = func_392(joaat("sp2_hits"));
}

// Position - 0x35B5A
var func_392(int iParam0) {
	var uVar0;

	stats::stat_get_int(iParam0, &uVar0, -1);
	return uVar0;
}

// Position - 0x35B6E
void func_393() {
	int iVar0;

	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

// Position - 0x35B98
void func_394(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0x35BAC
void func_395(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69971.f_109[iParam0 /*4*/];
	gameplay::clear_bit(&Global_91491.f_20, 17);
	func_397(&Global_82612[iVar0 /*34*/], 1, 0);
	if (Global_82612[iVar0 /*34*/].f_13 != -1 && Global_82612[iVar0 /*34*/].f_14 != -1 &&
		!gameplay::is_bit_set(Global_82612[iVar0 /*34*/].f_15, 30)) {
		iVar1 = func_127(Global_93635.f_1);
		iVar2 = Global_82612[iVar0 /*34*/].f_13;
		iVar3 = Global_82612[iVar0 /*34*/].f_14;
		if (!func_396(iVar1, iVar2, iVar3)) {
			func_121(&Global_93635.f_1, iVar2);
			func_121(&Global_96040.f_1, iVar2);
		}
	}
	if (iVar0 == 62) {
		Global_93635 = 2;
		Global_96040 = 2;
	}
	if (iVar0 == 20) {
		if (Global_93635 == 1) {
			Global_93635 = 0;
			Global_96040 = 0;
		}
	}
}

// Position - 0x35C84
int func_396(int iParam0, int iParam1, int iParam2) {
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24) {
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24) {
		return 0;
	}
	if (iParam2 == 24) {
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24) {
		return 0;
	}
	if (iParam1 == iParam2) {
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0) {
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2) {
		return 1;
	}
	if (!bVar0) {
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2) {
		return 1;
	}
	return 0;
}

// Position - 0x35D2D
void func_397(char[4] cParam0, int iParam1, int iParam2) {
	if (Global_91491 != 10 && Global_91491 != 9) {
		StringCopy(&Global_93627, cParam0, 32);
		func_399(&Global_93635, cParam0, 0, "Start", iParam1, iParam2);
		func_398();
		Global_86002 = 0;
	}
}

// Position - 0x35D72
void func_398() {
	int iVar0;
	int iVar1;

	Global_96040 = Global_93635;
	Global_96040.f_1 = Global_93635.f_1;
	Global_96040.f_6 = Global_93635.f_6;
	Global_96040.f_7 = Global_93635.f_7;
	Global_96040.f_8 = Global_93635.f_8;
	Global_96040.f_2 = Global_93635.f_2;
	Global_96040.f_3 = Global_93635.f_3;
	Global_96040.f_4 = Global_93635.f_4;
	Global_96040.f_5 = Global_93635.f_5;
	iVar1 = 0;
	while (iVar1 < 3) {
		Global_96040.f_9[iVar1] = Global_93635.f_9[iVar1];
		Global_96040.f_13[iVar1] = Global_93635.f_13[iVar1];
		Global_96040.f_17[iVar1] = Global_93635.f_17[iVar1];
		Global_96040.f_21[iVar1] = Global_93635.f_21[iVar1];
		Global_96040.f_25[0 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[0 /*295*/][iVar1 /*98*/]};
		Global_96040.f_25[1 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 < 12) {
			Global_96040.f_616[iVar1 /*65*/][iVar0] = Global_93635.f_616[iVar1 /*65*/][iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_96040.f_616[iVar1 /*65*/].f_59 = Global_93635.f_616[iVar1 /*65*/].f_59;
		Global_96040.f_616[iVar1 /*65*/].f_60 = Global_93635.f_616[iVar1 /*65*/].f_60;
		Global_96040.f_616[iVar1 /*65*/].f_61 = Global_93635.f_616[iVar1 /*65*/].f_61;
		Global_96040.f_616[iVar1 /*65*/].f_62 = Global_93635.f_616[iVar1 /*65*/].f_62;
		Global_96040.f_616[iVar1 /*65*/].f_63 = Global_93635.f_616[iVar1 /*65*/].f_63;
		Global_96040.f_616[iVar1 /*65*/].f_64 = Global_93635.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9) {
			Global_96040.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			Global_96040.f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_93635.f_812[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			Global_96040.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_93635.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			Global_96040.f_1665[iVar1 /*32*/][iVar0] = Global_93635.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			Global_96040.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			Global_96040.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_96040.f_1762[iVar1] = Global_93635.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3) {
			Global_96040.f_2259[iVar1 /*15*/][iVar0] = Global_93635.f_2259[iVar1 /*15*/][iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			Global_96040.f_1766[iVar1 /*164*/][iVar0] = Global_93635.f_1766[iVar1 /*164*/][iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_96040.f_2305 = {Global_93635.f_2305};
	Global_96040.f_2305.f_3 = Global_93635.f_2305.f_3;
	Global_96040.f_2311 = {Global_93635.f_2311};
	Global_96040.f_2311.f_3 = {Global_93635.f_2311.f_3};
	Global_96040.f_2311.f_6 = Global_93635.f_2311.f_6;
	Global_96040.f_2311.f_8 = Global_96040.f_2311.f_8;
	Global_96040.f_2311.f_7 = Global_93635.f_2311.f_7;
	Global_96040.f_2311.f_9 = Global_93635.f_2311.f_9;
	Global_96040.f_2311.f_11 = Global_93635.f_2311.f_11;
	Global_96040.f_2311.f_10 = Global_93635.f_2311.f_10;
	Global_96040.f_2311.f_12 = Global_93635.f_2311.f_12;
	Global_96040.f_2311.f_12.f_1 = {Global_93635.f_2311.f_12.f_1};
	Global_96040.f_2311.f_12.f_5 = Global_93635.f_2311.f_12.f_5;
	Global_96040.f_2311.f_12.f_6 = Global_93635.f_2311.f_12.f_6;
	Global_96040.f_2311.f_12.f_7 = Global_93635.f_2311.f_12.f_7;
	Global_96040.f_2311.f_12.f_8 = Global_93635.f_2311.f_12.f_8;
	Global_96040.f_2311.f_12.f_9 = {Global_93635.f_2311.f_12.f_9};
	Global_96040.f_2311.f_12.f_59 = {Global_93635.f_2311.f_12.f_59};
	Global_96040.f_2311.f_12.f_62 = Global_93635.f_2311.f_12.f_62;
	Global_96040.f_2311.f_12.f_63 = Global_93635.f_2311.f_12.f_63;
	Global_96040.f_2311.f_12.f_64 = Global_93635.f_2311.f_12.f_64;
	Global_96040.f_2311.f_12.f_65 = Global_93635.f_2311.f_12.f_65;
	Global_96040.f_2311.f_12.f_77 = Global_93635.f_2311.f_12.f_77;
	Global_96040.f_2311.f_12.f_66 = Global_93635.f_2311.f_12.f_66;
	Global_96040.f_2311.f_12.f_67 = Global_93635.f_2311.f_12.f_67;
	Global_96040.f_2311.f_12.f_68 = Global_93635.f_2311.f_12.f_68;
	Global_96040.f_2311.f_12.f_69 = Global_93635.f_2311.f_12.f_69;
	Global_96040.f_2311.f_12.f_71 = Global_93635.f_2311.f_12.f_71;
	Global_96040.f_2311.f_12.f_72 = Global_93635.f_2311.f_12.f_72;
	Global_96040.f_2311.f_12.f_73 = Global_93635.f_2311.f_12.f_73;
	Global_96040.f_2311.f_12.f_74 = Global_93635.f_2311.f_12.f_74;
	Global_96040.f_2311.f_12.f_75 = Global_93635.f_2311.f_12.f_75;
	Global_96040.f_2311.f_12.f_76 = Global_93635.f_2311.f_12.f_76;
	Global_96040.f_2401 = Global_93635.f_2401;
	Global_96040.f_2401.f_1 = Global_93635.f_2401.f_1;
	Global_96040.f_2401.f_2 = Global_93635.f_2401.f_2;
	Global_96040.f_2401.f_3 = Global_93635.f_2401.f_3;
}

// Position - 0x36A06
void func_399(var *uParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_199();
	uParam0->f_1 = func_132();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_422(&uParam0->f_2305, 0);
		func_421(player::player_ped_id());
		func_415(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_631()) {
			func_411(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_401(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_400(&uParam0->f_2401);
	sParam3 = sParam3;
	iParam2 = iParam2;
}

// Position - 0x3788E
int func_400(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x378B0
void func_401(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_27(iParam2);
	}
	if (func_410(iParam2, &iVar0, iParam3, iParam5)) {
		func_402(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_402(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x37938
int func_402(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_404(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_403(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x37978
bool func_403(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x379A6
void func_404(var *uParam0, int iParam1, int iParam2) {
	func_408(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_407(iParam1, 145, 0);
	uParam0->f_11 = func_406(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_405(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0x37A82
int func_405(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x37AC4
int func_406(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x37B27
int func_407(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_171(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x37BB5
void func_408(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_168(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_328(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_409(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x37E61
int func_409(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x37F11
bool func_410(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_330(*uParam1, func_199(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x38041
void func_411(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_27(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_414(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_413(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_22(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_412(161, -1)) {
				uParam1->f_59 = func_49(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_49(747, Global_69521, 0);
			}
			uParam1->f_60 = func_49(748, Global_69521, 0);
			uParam1->f_61 = func_49(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_412(161, -1)) {
				uParam1->f_59 = func_49(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_49(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x381EB
bool func_412(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x38217
void func_413(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_27(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0x3875F
void func_414(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_27(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0x389A0
void func_415(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_27(iParam0);
	if (func_22(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_416(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0x38A93
void func_416(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_420(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_420(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_418(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_418(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_417(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0x38CF7
int func_417(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0x38E65
int func_418(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_419(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x39951
int func_419(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x3998C
int func_420(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x39C00
void func_421(int iParam0) {
	int iVar0;

	iVar0 = func_27(iParam0);
	if (func_22(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x39C3C
void func_422(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_425(&iVar0)) {
			if (func_424(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_199();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_423(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x3A197
bool func_423(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x3A1DB
bool func_424(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_170(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x3A86A
bool func_425(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_433()) {
			*iParam0 = func_428(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_427(*iParam0) && !func_426(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3A8C5
bool func_426(int iParam0) { return func_293(iParam0, 0, 1); }

// Position - 0x3A8D5
bool func_427(int iParam0) { return func_293(iParam0, 5, 1); }

// Position - 0x3A8E5
int func_428(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_432(iVar0)) {
			if (!iParam5 || func_431(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_429(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x3A987
Vector3 func_429(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_430(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x3AEA1
Vector3 func_430(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x3AFB7
bool func_431(int iParam0) { return func_293(iParam0, 0, 0); }

// Position - 0x3AFC7
int func_432(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x3B23A
bool func_433() { return Global_91543.f_303 > 0; }

// Position - 0x3B24B
void func_434(int iParam0) {
	if (iParam0 < 94) {
		func_435();
		Global_69957 = iParam0;
		Global_69956 = 0;
		Global_69959 = 1;
	}
}

// Position - 0x3B271
void func_435() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x3B2A9
void func_436(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_181(0));
}

// Position - 0x3B2EB
void func_437(int iParam0) {
	var uVar0;
	vector3 vVar1[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		uVar0 = iParam0;
		network::network_set_rich_presence(1, &uVar0, 1, 1);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar1, "SPM_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network::_0x3E200C2BCF4164EB(1, &cVar1);
	}
}

// Position - 0x3B342
void func_438(int *iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam0 == -1) {
		return;
	}
	if (Global_69699 == *iParam0) {
		func_439(*iParam0, 0);
	}
	if (Global_69698 == *iParam0) {
		Global_69698 = -1;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (!iVar0 && iVar1 < Global_69695) {
		if (Global_69684[iVar1 /*2*/] == *iParam0) {
			iVar0 = 1;
		}
		else {
			iVar1++;
		}
	}
	if (!iVar0) {
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= Global_69695 - 2) {
		Global_69684[iVar2 /*2*/] = Global_69684[iVar2 + 1 /*2*/];
		Global_69684[iVar2 /*2*/].f_1 = Global_69684[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69684[Global_69695 - 1 /*2*/] = -1;
	Global_69684[Global_69695 - 1 /*2*/].f_1 = 3;
	Global_69695--;
	Global_69696 = 1;
	Global_69697 = gameplay::get_frame_count();
	*iParam0 = -1;
}

// Position - 0x3B42A
void func_439(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (Global_69698 == iParam0) {
			Global_69699 = iParam0;
		}
	}
	else if (Global_69699 == iParam0) {
		Global_69699 = -1;
	}
}

// Position - 0x3B466
void func_440() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_69726) {
		StringCopy(&Global_69727[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	Global_69726 = 0;
}

// Position - 0x3B496
void func_441() {
	var *uVar0;
	float *fVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	while (iVar4 < 3) {
		iVar5 = Global_101700.f_17492[iVar4];
		if (func_345(iVar5, &uVar0, &fVar3)) {
			if (iVar5 != 8 && iVar5 != 11 && iVar5 != 9 && iVar5 != 10) {
				Global_101700.f_17492[iVar4] = 318;
			}
		}
		iVar4++;
	}
}

// Position - 0x3B4FE
void func_442() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 263) {
		if (Global_25501[iVar0 /*23*/].f_16 == 6) {
			iVar1 = iVar0;
			func_443(iVar1);
		}
		iVar0++;
	}
}

// Position - 0x3B531
void func_443(int iParam0) {
	func_446(iParam0, 0, 0);
	func_445(iParam0, 1);
	func_444(iParam0, 1);
}

// Position - 0x3B54F
void func_444(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 4)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x3B5D5
void func_445(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 5)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x3B65B
void func_446(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 6)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	if (iParam2) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x3B707
int func_447(int iParam0) {
	switch (iParam0) {
	case 62:
	case 15: return 0;

	case 47: return 1;
	}
	return 145;
}

// Position - 0x3B738
void func_448() {
	Global_14611 = 0;
	func_449();
}

// Position - 0x3B748
void func_449() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x3B79F
bool func_450() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x3B7C1
void func_451() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	gameplay::clear_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x3B83E
void func_452(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_27(iParam0);
		if (func_22(iVar0)) {
			if (iVar0 == 2) {
				iVar1 = func_230(iParam0, 4, -1);
				if (iVar1 == 93) {
					func_595(iVar0);
					func_459(iParam0, &Global_101700.f_2095.f_539[iVar0 /*65*/], 0, 0, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_411(iParam0, &Var2, 1);
			Global_91281[iVar0 /*65*/] = {Var2};
			if (iParam0 == player::player_ped_id()) {
				func_454();
			}
			if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("clothes_shop_sp") ||
				script::_get_number_of_instances_of_script_with_name_hash(joaat("lester1")) == 0 &&
					script::_get_number_of_instances_of_script_with_name_hash(joaat("michael4")) == 0) {
				if (iParam1 || !func_26(0) && !func_26(1) && !func_26(2) && !func_26(3) && !func_26(4) && !func_26(9) &&
								   !func_26(10)) {
					Global_101700.f_2095.f_539[iVar0 /*65*/] = {Var2};
					Global_101700.f_2095.f_539.f_1619[iVar0] = func_453(iParam0);
					iVar67 = 0;
					while (iVar67 < 12) {
						Global_101700.f_2095.f_539.f_204[iVar67 /*4*/][iVar0] = func_231(iParam0, func_40(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12) {
						Global_101700.f_2095.f_539.f_204[iVar67 /*4*/][iVar0] = func_231(iParam0, func_40(iVar67));
						iVar67++;
					}
					if (iVar0 == 0) {
						if (Global_101700.f_8044.f_99.f_58[121]) {
							Global_101700.f_8044.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

// Position - 0x3BA24
int func_453(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12) {
		iVar4 = iVar1;
		iVar3 = ped::get_number_of_ped_drawable_variations(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3) {
			iVar0 += ped::get_number_of_ped_texture_variations(iParam0, iVar4, iVar2);
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9) {
		iVar8 = iVar5;
		iVar7 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7) {
			iVar0 += ped::get_number_of_ped_prop_texture_variations(iParam0, iVar8, iVar6);
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

// Position - 0x3BAB7
void func_454() {
	struct<50> Var0;

	if (ped::is_ped_injured(player::player_ped_id()) || !func_22(func_199()) || !func_456()) {
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_411(player::player_ped_id(), &Var0, 1);
	func_455(1306, Var0[0], -1, 1);
	func_455(1307, Var0[1], -1, 1);
	func_455(1308, Var0[2], -1, 1);
	func_455(1309, Var0[3], -1, 1);
	func_455(1310, Var0[4], -1, 1);
	func_455(1311, Var0[5], -1, 1);
	func_455(1312, Var0[6], -1, 1);
	func_455(1313, Var0[7], -1, 1);
	func_455(1314, Var0[8], -1, 1);
	func_455(1315, Var0[9], -1, 1);
	func_455(1316, Var0[10], -1, 1);
	func_455(1317, Var0[11], -1, 1);
	func_455(1318, Var0.f_13[0], -1, 1);
	func_455(1319, Var0.f_13[1], -1, 1);
	func_455(1320, Var0.f_13[2], -1, 1);
	func_455(1321, Var0.f_13[3], -1, 1);
	func_455(1322, Var0.f_13[4], -1, 1);
	func_455(1323, Var0.f_13[5], -1, 1);
	func_455(1324, Var0.f_13[6], -1, 1);
	func_455(1325, Var0.f_13[7], -1, 1);
	func_455(1326, Var0.f_13[8], -1, 1);
	func_455(1327, Var0.f_13[9], -1, 1);
	func_455(1328, Var0.f_13[10], -1, 1);
	func_455(1329, Var0.f_13[11], -1, 1);
	func_455(1330, Var0.f_26[0], -1, 1);
	func_455(1331, Var0.f_26[1], -1, 1);
	func_455(1332, Var0.f_26[2], -1, 1);
	func_455(1333, Var0.f_26[3], -1, 1);
	func_455(1334, Var0.f_26[4], -1, 1);
	func_455(1335, Var0.f_26[5], -1, 1);
	func_455(1336, Var0.f_26[6], -1, 1);
	func_455(1337, Var0.f_26[7], -1, 1);
	func_455(1338, Var0.f_26[8], -1, 1);
	func_455(1339, Var0.f_26[9], -1, 1);
	func_455(1340, Var0.f_26[10], -1, 1);
	func_455(1341, Var0.f_26[11], -1, 1);
	func_455(1342, Var0.f_39[0], -1, 1);
	func_455(1343, Var0.f_39[1], -1, 1);
	func_455(1344, Var0.f_39[2], -1, 1);
	func_455(1345, Var0.f_39[3], -1, 1);
	func_455(1346, Var0.f_39[4], -1, 1);
	func_455(1347, Var0.f_39[5], -1, 1);
	func_455(1348, Var0.f_39[6], -1, 1);
	func_455(1349, Var0.f_39[7], -1, 1);
	func_455(1350, Var0.f_39[8], -1, 1);
	func_455(1351, Var0.f_49[0], -1, 1);
	func_455(1352, Var0.f_49[1], -1, 1);
	func_455(1353, Var0.f_49[2], -1, 1);
	func_455(1354, Var0.f_49[3], -1, 1);
	func_455(1355, Var0.f_49[4], -1, 1);
	func_455(1356, Var0.f_49[5], -1, 1);
	func_455(1357, Var0.f_49[6], -1, 1);
	func_455(1358, Var0.f_49[7], -1, 1);
	func_455(1359, Var0.f_49[8], -1, 1);
	func_455(1360, func_199(), -1, 1);
	stats::stat_set_bool(joaat("clo_stored_initial"), 1, 1);
	Global_101700.f_2095.f_539.f_3543 = 1;
}

// Position - 0x3BECA
var func_455(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam2 == -1) {
		iParam2 = func_51();
	}
	if (iParam1 < 0) {
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stats::stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

// Position - 0x3C2BF
int func_456() {
	if (func_458() && func_457(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x3C2DD
var func_457(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x3C2ED
var func_458() { return func_457(func_51() + 1); }

// Position - 0x3C2FF
void func_459(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_27(iParam0);
		iVar1 = entity::get_entity_model(iParam0);
		iVar3 = 0;
		while (iVar3 < 12) {
			if (iVar3 != 1 || iVar3 == 1 && !iParam2) {
				if (iParam4) {
					if (*uParam1)
						[iVar3] >= ped::get_number_of_ped_texture_variations(iParam0, iVar3, uParam1->f_13[iVar3]) {
							(*uParam1)[iVar3] = 0;
						}
				}
				ped::set_ped_component_variation(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3],
												 uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9) {
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255) {
				ped::set_ped_prop_index(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
			}
			else {
				ped::clear_ped_prop(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_22(iVar0)) {
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_322(iParam0, iVar1, &iVar2, 0)) {
				func_304(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_302(iParam0, iVar1, &iVar2)) {
				func_304(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			iVar4 = func_594(iParam0);
			func_290(748, uParam1->f_60, Global_69521, 1, 0);
			func_290(749, uParam1->f_61, Global_69521, 1, 0);
			iVar5 = func_232(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_462(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			if (!iParam2) {
				iVar6 = func_232(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_462(iParam0, 1, iVar6, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			}
			if (!iParam3) {
				iVar7 = func_234(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_462(iParam0, 14, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			}
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			func_290(747, uParam1->f_59, Global_69521, 1, 0);
			func_290(2045, uParam1->f_59, Global_69521, 1, 0);
			func_460(161, 1, -1, 1);
		}
	}
}

// Position - 0x3C5C9
void func_460(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (func_461()) {
		iVar0 = Global_2522581[iParam0 /*3*/][func_50(iParam2)];
		if (iVar0 != 0) {
			stats::stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

// Position - 0x3C5FB
bool func_461() {
	return true;
	return false;
}

// Position - 0x3C608
int func_462(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	float fVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int *iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	var uVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	var uVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	var uVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;

	if (!network::network_is_game_in_progress()) {
		if (Global_1315167 != 4 && Global_1315167 != 5 && Global_1315167 != 7) {
			return 0;
		}
	}
	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	if (iParam0 == player::player_ped_id() && Global_2421664[player::player_id() /*358*/].f_225 == 2) {
		if (!iParam12) {
			return 0;
		}
	}
	if (iParam10 == -1) {
		iParam10 = Global_69521;
	}
	Global_69522++;
	iVar5 = entity::get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
		if (!func_321(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_559(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12) {
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		ped::clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1) {
			uVar15 = {Global_69566};
		}
		else {
			uVar15 = {func_38(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar15[iVar0] != -99) {
				if (iVar0 == 10 && uVar15.f_16) {
					Global_69523[1 /*14*/] = {func_561(iVar5, 10, 0)};
					if (iParam4 == -1) {
						ped::set_ped_component_variation(iParam0, func_35(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4,
														 ped::get_ped_palette_variation(iParam0, func_35(iVar0)));
					}
					else {
						ped::set_ped_component_variation(iParam0, func_35(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4, iParam4);
					}
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
						func_559(iVar5, 10, 0, 1);
					}
				}
				else {
					Global_69523[1 /*14*/] = {func_561(iVar5, iVar0, uVar15[iVar0])};
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) || iVar0 == 13) {
						if (iVar0 == 13) {
							uVar32 = 9;
							if (iParam5 == 1) {
								uVar32 = {Global_69583};
							}
							else {
								uVar32 = {func_31(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8) {
								Global_69523[1 /*14*/] = {func_561(iVar5, 14, uVar32[iVar1])};
								func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
										 Global_69523[1 /*14*/].f_4);
								if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
									func_559(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12) {
							if (iVar0 != 1) {
								if (iParam4 == -1) {
									ped::set_ped_component_variation(
										iParam0, func_35(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4,
										ped::get_ped_palette_variation(iParam0, func_35(iVar0)));
								}
								else {
									ped::set_ped_component_variation(iParam0, func_35(iVar0),
																	 Global_69523[1 /*14*/].f_3,
																	 Global_69523[1 /*14*/].f_4, iParam4);
								}
							}
							else {
								func_462(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
								func_559(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_561(iVar5, iVar0, func_558(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					uVar42 = {func_38(iVar5, 0)};
					func_462(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0) {
			iVar59 = func_557();
			if (iVar59 != -1) {
				func_555(iVar59, 0, iParam10);
			}
			func_553(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13) {
		uVar60 = {func_31(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_561(iVar5, 14, uVar60[iVar1])};
			func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
				func_559(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0) {
				if (Global_69522 == 1) {
					iVar2 = 0;
					while (iVar2 < 15) {
						iVar3 = func_551(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99) {
							func_462(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_317(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			func_559(iVar5, iParam1, iParam2, 1);
		}
		if (Global_69523[1 /*14*/].f_12 == 0) {
			func_548(iParam0);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_551(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_462(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else {
		if (iParam1 == 11) {
			if (iParam5 == 0) {
				iVar70 = -1;
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11)) {
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 0);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 1);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 2);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 3);
				}
				iVar71 = func_231(iParam0, 11);
				iVar72 = func_231(iParam0, 8);
				iVar73 = func_231(iParam0, 4);
				iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
														  ped::get_ped_texture_variation(iParam0, 8));
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						iVar70 = func_240(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						iVar70 = func_240(iVar5, iParam2, 11, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -2017999390, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1855618474, 0)) {
					}
					else {
						iVar9 = func_231(iParam0, 8);
					}
				}
				iVar74 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar74, -356646862, 0)) {
					iVar75 = func_547(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99) {
						iVar75 = func_551(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74) {
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar75 = 11;
						iVar70 = func_240(iVar5, iParam2, 11, 4);
						if (!dlc1::_0x341DE7ED1D2A1BFD(iVar70, -530089825, 0)) {
							iVar75 = -99;
						}
						break;
					}
					if (iVar75 != -99) {
						iVar76 = 0;
						while (iVar76 < 15) {
							if (func_546(iVar5, iVar75, iVar76) == iVar74) {
								iVar11 = iVar76;
								iVar12 = ped::get_ped_texture_variation(iParam0, 3);
							}
							iVar76++;
						}
					}
				}
				iVar70 = -1;
				if (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256 &&
					dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 4), -1200513218, 0)) {
					iVar71 = func_231(iParam0, 11);
					if (iVar71 >= 256) {
						iVar70 = func_240(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0)) {
						iVar77 = func_544(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
						if (iVar77 != -99) {
							func_462(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_543(iVar5, iParam2)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						if (iVar71 >= 237) {
							iVar70 = func_240(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						if (iVar71 >= 256) {
							iVar70 = func_240(iVar5, iVar71, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_543(iVar5, iVar71)) {
						if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
							(dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1200513218, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0))) {
						}
						else if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
								 (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 684992453, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 916636514, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1939378450, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -820724897, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 153792394, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -872449705, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 700658917, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -549843760, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1830529185, 0))) {
						}
						else {
							iVar78 = func_544(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
							if (iVar78 != -99) {
								func_462(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else {
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar79 = func_542(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar79)};
									iVar78 = func_544(iVar5, iVar79, iParam2, Global_69523[1 /*14*/].f_4);
									if (iVar78 == -99 ||
										dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 3), -1237899132, 0)) {
										iVar78 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 4), -1237899132, 0)) {
										iVar78 = 120;
									}
									else {
										iVar78 = 48;
									}
								}
								func_462(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
							}
						}
					}
					else {
						Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar71)};
						iVar80 = Global_69523[1 /*14*/].f_3;
						Global_69523[1 /*14*/] = {func_561(iVar5, 11, iParam2)};
						iVar81 = Global_69523[1 /*14*/].f_3;
						if (iVar80 != iVar81) {
							Global_69523[1 /*14*/] = {func_561(iVar5, 8, iVar72)};
							iVar82 = Global_69523[1 /*14*/].f_4;
							iVar83 = func_541(iVar5, iVar72, iVar82);
							if (iVar83 == -99) {
								iVar84 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar85 = func_240(iVar5, iParam2, 11, 3);
									if (iParam2 >= 96 && iParam2 <= 107 || func_540(iVar85) == 6 ||
										dlc1::_0x341DE7ED1D2A1BFD(iVar85, -1237899132, 0)) {
										iVar83 = func_542(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar83)};
										iVar84 = func_544(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar72 == 32 || iVar72 == 33)) {
									if (!dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 4), -491588875, 0)) {
										iVar83 = func_542(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar83)};
										iVar84 = func_544(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								iVar86 = -1;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar86 = func_240(iVar5, iVar72, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									iVar86 = func_240(iVar5, iVar72, 8, 4);
								}
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar86, -316495692, 0)) {
									iVar83 = func_542(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar83)};
									iVar84 = func_544(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								}
							}
							else {
								iVar84 = func_544(iVar5, iVar83, iParam2, iVar82);
								if (iVar5 == joaat("mp_m_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 3), -1719338724, 0)) {
										if (!func_539(iVar5, func_231(iParam0, 4), iVar83)) {
											iVar84 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iParam2, 11, 4), -1719338724, 0)) {
										if (!func_539(iVar5, func_231(iParam0, 4), iVar83)) {
											iVar84 = 48;
										}
									}
								}
							}
							if (iVar84 != -99) {
								func_462(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01")) {
								iVar83 = func_542(iVar5, 11, -1);
								Global_69523[1 /*14*/] = {func_561(iVar5, 11, iVar83)};
								iVar84 = func_544(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								if (iVar84 == -99) {
									iVar84 = 240;
								}
								func_462(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01")) {
								func_462(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
						}
					}
				}
				else {
					func_536(iVar5, iParam2);
					if (!iParam13) {
						ped::set_ped_component_variation(iParam0, 10, 0, 0,
														 ped::get_ped_palette_variation(iParam0, 10));
					}
				}
			}
			func_553(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0) {
				iVar6 = func_547(iVar5, func_558(iParam0, 8, -1), iParam2, func_558(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2) {
			if (iParam5 == 0) {
				if (iParam8 == -1) {
					iParam8 = func_49(2145, iParam10, 0);
				}
				if (iParam9 == -1) {
					iParam9 = func_49(2152, iParam10, 0);
				}
				ped::_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0) {
				func_504(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8) {
			func_553(iParam0, iParam1, iParam2, iParam6, 0);
			iVar87 = func_231(iParam0, 11);
			if (func_543(iVar5, iVar87)) {
				iVar88 = func_541(iVar5, iParam2, Global_69523[1 /*14*/].f_4);
				func_536(iVar5, iVar88);
			}
			if (iParam5 == 0) {
				iVar6 = func_547(iVar5, iParam2, func_231(iParam0, 11), func_231(iParam0, 4));
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 1 && iParam2 <= 41) {
				iVar89 = func_231(iParam0, 7);
				if (!func_501(iVar5, iVar89, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)) {
					ped::set_ped_component_variation(iParam0, func_35(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1) {
			if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0) ||
				iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) {
				iVar90 = func_49(2092, iParam10, 0);
				iVar91 = func_49(2093, iParam10, 0);
				iVar92 = func_49(2094, iParam10, 0);
				fVar93 = func_500(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 0, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 21, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				iVar94 = 0;
				while (iVar94 < 20) {
					ped::_set_ped_face_feature(iParam0, iVar94, 0f);
					iVar94++;
				}
			}
			else {
				func_484(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4) {
			iVar95 = func_231(iParam0, 11);
			iVar96 = func_231(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iVar95, 11, 3), -1719338724, 0)) {
					if (!func_539(iVar5, iParam2, func_541(iVar5, iVar96, 0))) {
						func_462(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_240(iVar5, iVar95, 11, 4), -1719338724, 0)) {
					if (!func_539(iVar5, iParam2, func_541(iVar5, iVar96, 0))) {
						func_462(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_561(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0) {
				iVar6 = func_547(iVar5, func_231(iParam0, 8), func_231(iParam0, 11), iParam2);
			}
			iVar97 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar97, -356646862, 0)) {
				iVar98 = func_547(iVar5, iVar96, iVar95, iParam2);
				if (iVar98 == -99) {
					iVar98 = func_551(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar97) {
				case 1165919867:
				case 1606204151:
				case 1774276352:
				case 1934254610:
				case 980775017:
				case 399321881:
					iVar98 = 11;
					iVar99 = func_240(iVar5, iParam2, 11, 4);
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar99, -530089825, 0)) {
						iVar98 = -99;
					}
					break;
				}
				if (iVar98 != -99) {
					iVar100 = 0;
					while (iVar100 < 15) {
						if (func_546(iVar5, iVar98, iVar100) == iVar97) {
							iVar11 = iVar100;
							iVar12 = ped::get_ped_texture_variation(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
		}
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_35(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_35(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_551(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_462(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3) {
							switch (Global_2621444) {
							case 1165919867:
							case 1606204151:
							case 1774276352:
							case 1934254610:
							case 980775017:
							case 399321881: iVar11 = -1; break;
							}
						}
						else if (iVar2 == 8) {
							if (iVar6 != -99) {
								iVar6 = func_547(iVar5, iVar3, func_231(iParam0, 11), func_231(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8) {
				if (func_483(iParam0)) {
					iVar101 = func_482(iVar5, iParam1, iParam2);
					if (iVar101 > 0) {
						iVar101 += ped::get_ped_texture_variation(iParam0, 9);
						if (!func_481(iParam0, 9, iVar101)) {
							func_462(iParam0, 9, iVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else {
						func_462(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
															  ped::get_ped_texture_variation(iParam0, 8));
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
						func_462(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
				iVar102 = func_49(2034, -1, 0);
				if (ped::get_ped_drawable_variation(iParam0, 5) != 0) {
					ped::set_ped_component_variation(iParam0, 5, func_477(iParam0, iVar102), func_476(iParam0, iVar102),
													 func_475(iParam0, iVar102));
				}
				if (iParam0 == player::player_ped_id()) {
					player::set_player_parachute_variation_override(player::player_id(), 5,
																	func_477(player::player_ped_id(), iVar102),
																	func_476(player::player_ped_id(), iVar102), 0);
					player::set_player_parachute_pack_tint_index(player::player_id(),
																 func_475(player::player_ped_id(), iVar102));
					func_472(player::player_id(), iVar102);
				}
			}
			if (iParam1 == 7) {
				if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92 ||
					iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55) {
					if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0)) {
						func_462(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4)) {
				if (iParam1 == 11) {
					iVar103 = func_558(iParam0, 4, -1);
					iVar104 = iParam2;
				}
				else {
					iVar103 = iParam2;
					iVar104 = func_558(iParam0, 11, -1);
				}
				if (func_471(iVar5, 11, iVar104, -1)) {
					if (!func_470(iVar5, 4, iVar103, -1)) {
						if (func_469(iVar5, 4, iVar103, &iVar105)) {
							func_462(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_470(iVar5, 4, iVar103, -1)) {
					if (func_468(iVar5, 4, iVar103, &iVar105)) {
						func_462(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6) {
				iVar106 = ped::get_ped_drawable_variation(iParam0, 6);
				iVar107 = ped::get_ped_texture_variation(iParam0, 6);
				iVar108 = dlc1::get_hash_name_for_component(iParam0, 6, iVar106, iVar107);
				iVar109 = ped::get_ped_drawable_variation(iParam0, 4);
				iVar110 = ped::get_ped_texture_variation(iParam0, 4);
				iVar111 = dlc1::get_hash_name_for_component(iParam0, 4, iVar109, iVar110);
				iVar112 = func_231(iParam0, 4);
				iVar113 = func_231(iParam0, 6);
				if (func_467(iVar5, iVar108)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_466(iVar5, iVar112, iVar108)) {
						iVar114 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar115 = 0;
						while (iVar115 < iVar114) {
							dlc1::get_variant_component(iVar108, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6) {
								if (iVar116 != 0 && iVar116 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_33(iVar5, iVar116, 6, 3);
										iVar108 = iVar116;
										func_462(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_33(iVar5, iVar116, 6, 4);
										iVar108 = iVar116;
										func_462(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_465(iVar5, iVar113, iVar111)) {
						iVar119 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar120 = 0;
						while (iVar120 < iVar119) {
							dlc1::get_variant_component(iVar111, iVar120, &iVar121, &uVar122, &iVar123);
							if (iVar123 == 4) {
								if (iVar121 != 0 && iVar121 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_33(iVar5, iVar121, 4, 3);
										iVar111 = iVar121;
										func_462(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_33(iVar5, iVar121, 4, 4);
										iVar111 = iVar121;
										func_462(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar120 = iVar119 + 1;
								}
							}
							iVar120++;
						}
					}
				}
				if (func_467(iVar5, iVar111)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_465(iVar5, iVar113, iVar111)) {
						iVar124 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar125 = 0;
						while (iVar125 < iVar124) {
							dlc1::get_variant_component(iVar111, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 4) {
								if (iVar126 != 0 && iVar126 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_33(iVar5, iVar126, 4, 3);
										iVar111 = iVar126;
										func_462(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_33(iVar5, iVar126, 4, 4);
										iVar111 = iVar126;
										func_462(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_466(iVar5, iVar112, iVar108)) {
						iVar129 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar130 = 0;
						while (iVar130 < iVar129) {
							dlc1::get_variant_component(iVar108, iVar130, &iVar131, &uVar132, &iVar133);
							if (iVar133 == 6) {
								if (iVar131 != 0 && iVar131 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_33(iVar5, iVar131, 6, 3);
										iVar108 = iVar131;
										func_462(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_33(iVar5, iVar131, 6, 4);
										iVar108 = iVar131;
										func_462(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar130 = iVar129 + 1;
								}
							}
							iVar130++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1) {
				func_548(iParam0);
				iVar134 = ped::get_ped_drawable_variation(iParam0, 1);
				iVar135 = ped::get_ped_texture_variation(iParam0, 1);
				iVar136 = dlc1::get_hash_name_for_component(iParam0, 1, iVar134, iVar135);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar136, 838607662, 0)) {
					iVar3 = func_551(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99) {
						func_462(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_551(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99) {
						func_462(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2) {
		if (func_463(iParam0, &iVar4)) {
			func_462(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !iParam13) {
		func_462(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99) {
		func_462(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99) {
		func_462(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1) {
		iVar137 = func_546(iVar5, func_558(iParam0, 3, -1), iVar11);
		if (iVar137 != -1) {
			if (iVar5 == joaat("mp_m_freemode_01")) {
				iVar10 = func_33(iVar5, iVar137, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				iVar10 = func_33(iVar5, iVar137, 3, 4);
			}
			if (iVar10 != -99) {
				iVar10 += iVar12;
				func_462(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x3E0A4
bool func_463(int iParam0, int *iParam1) {
	int iVar0;
	int iVar1;

	*iParam1 = func_558(player::player_ped_id(), 2, -1);
	if (func_49(748, Global_69521, 0) != -99 && func_456()) {
		if (func_464() == 4) {
			return true;
		}
		if (func_49(748, Global_69521, 0) == 0 && func_49(749, Global_69521, 0) == 0) {
			if (func_412(161, Global_69521)) {
				if (func_49(2045, Global_69521, 0) == 0) {
					return false;
				}
			}
			else if (func_49(747, Global_69521, 0) == 0) {
				return false;
			}
		}
		iVar0 = func_49(748, Global_69521, 0);
		iVar1 = func_49(749, Global_69521, 0);
		if (!func_481(iParam0, iVar1, iVar0)) {
			if (func_412(161, Global_69521)) {
				*iParam1 = func_49(2045, Global_69521, 0);
			}
			else {
				*iParam1 = func_49(747, Global_69521, 0);
			}
			func_290(748, -99, Global_69521, 1, 0);
			func_290(749, 2, Global_69521, 1, 0);
			return true;
		}
	}
	return false;
}

// Position - 0x3E1B8
int func_464() { return Global_1315167; }

// Position - 0x3E1C4
int func_465(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_240(iParam0, iParam1, 6, 3);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0)) {
				return 1;
			}
		}
		break;

	case joaat("mp_f_freemode_01"): break;
	}
	return 0;
	return 0;
}

// Position - 0x3E2D7
int func_466(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_240(iParam0, iParam1, 4, 3);
			iVar1 = func_540(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			iVar2 = 1;
			if (iParam1 >= 32 && iParam1 <= 47 || iParam1 >= 64 && iParam1 <= 79 || iParam1 >= 96 && iParam1 <= 111 ||
				iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 192 && iParam1 <= 207 ||
				iParam1 >= 224 && iParam1 <= 239 || iParam1 >= 240 && iParam1 <= 255 || iVar1 == 2 || iVar1 == 4 ||
				iVar1 == 6 || iVar1 == 11 || iVar1 == 12 || iVar1 == 14 || iVar1 == 15 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) {
				iVar2 = 0;
			}
			switch (iVar0) {
			case -439764935:
			case 1858824227:
			case -44268217:
			case 301706885:
			case 1283072893:
			case -1590178565:
			case 1995307108:
			case 1029014836:
			case -365568266:
			case -138446327:
			case -2034722819:
			case -1219513062:
			case 153704652:
			case 356276239:
			case 586511233:
			case 1558996842:
			case 1183988406:
			case 1000678684:
			case 761792674:
			case -145679239:
			case 686423978:
			case -763407658:
			case 74266289:
			case 987390769:
			case 1591372991:
			case 1834027448:
			case 913054691:
			case 1142372153:
			case -1698011990:
			case -1443101939:
			case 2133699953:
			case -1924511318:
			case -475531676:
			case -237137197:
			case 754461254:
			case -1155840382:
			case 629180074:
			case 859251223:
			case 1610316715:
			case 901392169:
			case -92983136:
			case 1346362420:
			case 485782942:
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106: iVar2 = 0; break;
			}
			return iVar2;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_240(iParam0, iParam1, 4, 4);
			iVar1 = func_540(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 96 && iParam1 <= 111 ||
				iVar1 == 1 || iVar1 == 3 || iVar1 == 6 || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -761463976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -430330349, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x3E7BD
bool func_467(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3E829
bool func_468(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_240(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (!dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_33(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3E8D2
bool func_469(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_240(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_33(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3E97A
bool func_470(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1100807313, 0)) {
					return true;
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3E9D0
bool func_471(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 11:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_240(iParam0, iParam2, 11, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3EA23
void func_472(int iParam0, int iParam1) {
	if (func_474()) {
		if (iParam1 > 46) {
			player::set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26) {
			player::set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_473()) {
		if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

// Position - 0x3EA9A
bool func_473() { return dlc2::is_dlc_present(1428761799); }

// Position - 0x3EAAB
bool func_474() { return dlc2::is_dlc_present(-1005876368); }

// Position - 0x3EABC
int func_475(int iParam0, int iParam1) { return 0; }

// Position - 0x3EAC5
int func_476(int iParam0, int iParam1) {
	if (iParam1 > 62) {
		return iParam1 - 63;
	}
	if (iParam1 > 51) {
		return iParam1 - 52;
	}
	if (iParam1 > 46) {
		return iParam1 - 47;
	}
	if (iParam1 > 26) {
		return iParam1 - 27;
	}
	if (iParam1 > 0) {
		return iParam1 - 1;
	}
	return iParam1;
}

// Position - 0x3EB27
int func_477(int iParam0, int iParam1) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
	if (ped::get_ped_drawable_variation(iParam0, 9) != 0) {
		bVar1 = true;
	}
	iVar2 = entity::get_entity_model(iParam0);
	iVar3 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
											  ped::get_ped_texture_variation(iParam0, 8));
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8)) {
		return func_480(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61) {
		iVar4 = 50;
	}
	else if (iParam1 > 51) {
		return iParam1;
	}
	else if (iParam1 > 46) {
		iVar4 = 30;
	}
	else if (iParam1 > 26) {
		iVar4 = 20;
	}
	else if (iParam1 > 0) {
		iVar4 = 9;
	}
	else {
		iVar4 = 0;
	}
	if (iVar0 > 15) {
		iVar5 = dlc1::get_hash_name_for_component(iParam0, 11, iVar0, ped::get_ped_texture_variation(iParam0, 11));
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0)) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0)) {
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0)) {
			if (iParam1 > 46) {
				return 39;
			}
			else if (iParam1 > 26) {
				return 29;
			}
			else if (iParam1 > 0) {
				return 18;
			}
			else {
				return 19;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0)) {
			iVar6 = func_479(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01")) {
				switch (iVar6) {
				case 0: return 2 + iVar4;

				case 2:
					if (iParam1 > 46) {
						return 39;
					}
					else if (iParam1 > 26) {
						return 29;
					}
					else if (iParam1 > 0) {
						return 18;
					}
					else {
						return 19;
					}
					break;

				default: iVar0 = func_540(iVar5); break;
				}
			}
			else {
				switch (iVar6) {
				case 2: return 7 + iVar4;

				default: iVar0 = func_540(iVar5); break;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0)) {
				return 3 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0)) {
			iVar7 = func_478(iVar5, 0);
			switch (iVar7) {
			case 4:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 28;
				}
				else if (iParam1 > 0) {
					return 17;
				}
				else {
					return 8;
				}
				break;

			case 5:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 6:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 7:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 11:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 12:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 14:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
				break;

			default: iVar0 = func_540(iVar5); break;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else if (bVar1) {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 7 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0)) {
			if (iVar2 == joaat("mp_f_freemode_01")) {
				if (bVar1) {
					return func_480(iParam0, iParam1);
				}
				else {
					return 2 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 7 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else if (bVar1) {
				return 55 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return func_480(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return func_480(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_480(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1) + 15;
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1) + 15;
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_480(iParam0, iParam1) + 15;
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return func_480(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return 48 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0)) {
			return 7 + iVar4;
		}
		else {
			iVar0 = func_540(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01")) {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 9:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 10:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;
		}
	}
	else {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 4 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 9: return 2 + iVar4;

		case 10:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;
		}
	}
	return 1 + iVar4;
	return 0;
}

// Position - 0x405A1
int func_478(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1)) {
		iVar0 = 15;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1)) {
		iVar0 = 16;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1)) {
		iVar0 = 17;
	}
	return iVar0;
}

// Position - 0x40741
int func_479(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x40885
int func_480(int iParam0, int iParam1) {
	if (iParam1 > 61) {
		return 61;
	}
	if (iParam1 > 51) {
		return 51;
	}
	if (iParam1 > 46) {
		return 51;
	}
	if (iParam1 > 26) {
		return 50;
	}
	if (iParam1 > 0) {
		return 49;
	}
	return 48;
}

// Position - 0x408D9
bool func_481(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	int *iVar68;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_561(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar8 = {func_38(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7) {
			switch (iVar7) {
			case 0: iVar4 = 1; break;

			case 1: iVar4 = 4; break;

			case 2: iVar4 = 6; break;

			case 3: iVar4 = 7; break;

			case 4: iVar4 = 8; break;

			case 5: iVar4 = 11; break;

			case 6: iVar4 = 13; break;
			}
			if (uVar8[iVar4] != -99) {
				if (!func_481(iParam0, iVar4, uVar8[iVar4])) {
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return false;
					if (iVar4 == 13) {
						uVar25 = {func_31(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8) {
							if (!func_481(iParam0, 14, uVar25[iVar5])) {
								iVar6 = 0;
								while (iVar6 <= 19) {
									Global_69523[2 /*14*/] = {func_561(iVar0, 14, iVar6)};
									if (Global_69523[2 /*14*/].f_12 == iVar5) {
										if (func_481(iParam0, 14, iVar6)) {
											if (!func_238(iVar0, iParam2, 14, iVar6, &uVar8, &Global_69523[2 /*14*/])) {
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return false;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else {
						iVar1 = func_231(iParam0, iVar4);
						Global_69523[2 /*14*/] = {func_561(iVar0, iVar4, iVar1)};
						if (!func_238(iVar0, iParam2, iVar4, iVar1, &uVar8, &Global_69523[2 /*14*/])) {
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return false;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579 && uVar8.f_16) {
			if (func_49(1751, Global_69521, 0) != uVar8[10]) {
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return false;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return true;
	}
	else if (iParam1 == 13) {
		uVar36 = {func_31(iVar0, iParam2)};
		iVar35 = 0;
		while (iVar35 <= 8) {
			if (!func_481(iParam0, 14, uVar36[iVar35])) {
				return false;
			}
			iVar35++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
		if (Global_69523[1 /*14*/].f_12 == 0 && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
			dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1033433901, 1) && unk_0xD40AAC51E8E4C663(Global_2621444) > 0) {
			iVar50 = unk_0xD40AAC51E8E4C663(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50) {
				unk_0xD81B7F27BC773E66(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579) {
					dlc1::init_shop_ped_prop(&Var51);
					dlc1::_0x5D5CAFF661DDF6FC(iVar47, &Var51);
					if (Var51.f_3 == ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) &&
						Var51.f_4 == ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12)) {
						return true;
					}
				}
				iVar46++;
			}
		}
	}
	else {
		if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_35(iParam1)) &&
			Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_35(iParam1))) {
			return true;
		}
		if (iParam1 == 4) {
			if (func_471(iVar0, 11, func_231(iParam0, 11), -1)) {
				if (func_469(iVar0, 4, iParam2, &iVar68)) {
					return func_481(iParam0, 4, iVar68);
				}
			}
			else if (func_468(iVar0, 4, iParam2, &iVar68)) {
				return func_481(iParam0, 4, iVar68);
			}
		}
	}
	return false;
}

// Position - 0x40D1A
int func_482(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	if (iParam1 == 11) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 80 && iParam2 <= 95 ||
				iParam2 >= 140 && iParam2 <= 155 || iParam2 >= 188 && iParam2 <= 203) {
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 64 && iParam2 <= 79 ||
					 iParam2 >= 108 && iParam2 <= 123) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107) {
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171) {
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187) {
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219) {
				return 16;
			}
			else if (iParam2 >= 220 && iParam2 <= 235 || iParam2 >= 124 && iParam2 <= 139) {
				return 26;
			}
			else if (iParam2 == 236) {
				return 21;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_240(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								return func_33(iParam0, iVar3, 9, 3);
							}
							else {
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 64 && iParam2 <= 79 || iParam2 >= 176 && iParam2 <= 191 ||
				iParam2 >= 192 && iParam2 <= 207 || iParam2 >= 208 && iParam2 <= 223 ||
				iParam2 >= 240 && iParam2 <= 255) {
				return 1;
			}
			else if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 112 && iParam2 <= 127 ||
					 iParam2 >= 128 && iParam2 <= 143) {
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 160 && iParam2 <= 175) {
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239) {
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159) {
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95) {
				return 31;
			}
			else if (iParam2 >= 256) {
				iVar6 = func_240(iParam0, iParam2, 11, 4);
				if (iVar6 != -1) {
					iVar7 = dlc1::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7) {
						dlc1::get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9) {
							if (iVar9 != 0 && iVar9 != 1849449579) {
								return func_33(iParam0, iVar9, 9, 4);
							}
							else {
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

// Position - 0x4111B
bool func_483(int iParam0) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = entity::get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01")) {
			if (func_231(iParam0, 9) != 0) {
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (func_231(iParam0, 9) != 0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4116D
void func_484(int iParam0, int iParam1) {
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;

	if (!ped::has_ped_head_blend_finished(iParam0)) {
	}
	ped::_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_49(2089, iParam1, 0);
	iVar11 = func_49(2090, iParam1, 0);
	iVar12 = func_49(2091, iParam1, 0);
	iVar13 = func_49(2092, iParam1, 0);
	iVar14 = func_49(2093, iParam1, 0);
	iVar15 = func_49(2094, iParam1, 0);
	fVar16 = func_500(134, iParam1);
	fVar17 = func_500(135, iParam1);
	fVar18 = func_500(136, iParam1);
	iVar19 = func_412(160, iParam1);
	if (Var0 != iVar10 || Var0.f_1 != iVar11 || Var0.f_2 != iVar12 || Var0.f_3 != iVar13 || Var0.f_4 != iVar14 ||
		Var0.f_5 != iVar15 || Var0.f_6 != fVar16 || Var0.f_7 != fVar17 || Var0.f_8 != fVar18 || Var0.f_9 != iVar19) {
		ped::set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18,
									 iVar19);
		iVar20 = func_49(2095, iParam1, 0);
		if (iVar20 > 0) {
			func_485(iParam0, iParam1, 0);
		}
	}
}

// Position - 0x412AD
void func_485(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int *iVar15;

	iVar0 = 0;
	while (iVar0 < 20) {
		iVar1 = iVar0;
		iVar2 = func_499(iVar1);
		if (!iParam2) {
			fVar3 = func_500(iVar2, iParam1);
		}
		else {
			fVar3 = func_498(iVar2, iParam1);
		}
		ped::_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13) {
		iVar5 = func_497(iVar4);
		iVar6 = func_496(iVar5);
		iVar7 = func_495(iVar5);
		if (iVar6 != -1 && iVar7 != -1) {
			if (!iParam2) {
				iVar10 = func_492(iVar6, iParam1, -1);
				fVar11 = func_500(iVar7, iParam1);
			}
			else {
				iVar10 = func_491(iVar6, iParam1);
				fVar11 = func_498(iVar7, iParam1);
			}
			ped::set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_490(iVar5);
			iVar9 = func_489(iVar5);
			if (iVar8 != -1) {
				if (!iParam2) {
					iVar13 = func_49(iVar8, iParam1, 0);
					iVar14 = func_49(iVar9, iParam1, 0);
				}
				else {
					iVar13 = func_488(iVar8, iParam1);
					iVar14 = func_488(iVar9, iParam1);
				}
				func_487(iVar13, &iVar12, &iVar15);
				ped::_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_486(&iParam0, iParam1, iParam2);
}

// Position - 0x413DF
void func_486(int iParam0, int iParam1, bool bParam2) {
	float fVar0;

	if (!bParam2) {
		fVar0 = func_500(157, iParam1);
	}
	else {
		fVar0 = func_498(157, iParam1);
	}
	if (*iParam0 == player::player_ped_id()) {
	}
	ped::_set_ped_eye_color(*iParam0, system::round(fVar0));
}

// Position - 0x4141E
void func_487(int iParam0, var *uParam1, int *iParam2) {
	int iVar0;

	*uParam1 = system::shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*iParam2 = iVar0;
}

// Position - 0x4143F
int func_488(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam1)];
	if (ui::set_userids_uihidden(iVar0, &uVar1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x4146A
int func_489(int iParam0) {
	switch (iParam0) {
	case 2: return 2153;

	case 1: return 2154;

	case 5: return 2155;

	case 8: return 2156;

	case 10: return 2151;

	default:
	}
	return -1;
}

// Position - 0x414B6
int func_490(int iParam0) {
	switch (iParam0) {
	case 2: return 2146;

	case 1: return 2147;

	case 5: return 2148;

	case 8: return 2149;

	case 10: return 2150;

	default:
	}
	return -1;
}

// Position - 0x41502
int func_491(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_51();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!ui::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8)) {
		iVar0 = 0;
	}
	if (iParam0 == 384) {
	}
	return iVar0;
}

// Position - 0x418FA
int func_492(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1) {
		iParam1 = func_51();
	}
	iVar0 = 0;
	iVar1 = func_494(iParam0, iParam1);
	iVar2 = func_493(iParam0);
	if (0 != iVar1) {
		if (!stats::stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2)) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x41940
int func_493(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

// Position - 0x41BFC
int func_494(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_51();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

// Position - 0x41E7A
int func_495(int iParam0) {
	switch (iParam0) {
	case 3: return 90;

	case 7: return 93;

	case 0: return 87;

	case 6: return 92;

	case 2: return 89;

	case 1: return 88;

	case 4: return 91;

	case 8: return 158;

	case 9: return 159;

	case 5: return 160;

	case 10: return 163;

	case 11: return 161;

	case 12: return 162;

	default:
	}
	return -1;
}

// Position - 0x41F19
int func_496(int iParam0) {
	switch (iParam0) {
	case 3: return 450;

	case 7: return 453;

	case 0: return 447;

	case 6: return 452;

	case 2: return 449;

	case 1: return 448;

	case 4: return 451;

	case 8: return 3940;

	case 9: return 3941;

	case 5: return 3942;

	case 10: return 3943;

	case 11: return 3944;

	case 12: return 3945;

	default:
	}
	return -1;
}

// Position - 0x41FC5
int func_497(int iParam0) {
	switch (iParam0) {
	case 0: return 7;

	case 1: return 3;

	case 2: return 9;

	case 3: return 6;

	case 4: return 0;

	case 5: return 4;

	case 6: return 5;

	case 7: return 2;

	case 8: return 1;

	case 9: return 8;

	case 10: return 10;

	case 11: return 11;

	case 12: return 12;

	default:
	}
	return -1;
}

// Position - 0x4205C
float func_498(int iParam0, int iParam1) {
	var uVar0;
	var uVar1;

	uVar0 = Global_2521893[iParam0 /*3*/][func_50(iParam1)];
	if (ui::_0x5FBD7095FE7AE57F(uVar0, &uVar1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x42087
int func_499(int iParam0) {
	switch (iParam0) {
	case 0: return 137;

	case 1: return 138;

	case 2: return 139;

	case 3: return 140;

	case 4: return 141;

	case 5: return 142;

	case 6: return 143;

	case 7: return 144;

	case 8: return 145;

	case 9: return 146;

	case 10: return 147;

	case 11: return 148;

	case 12: return 149;

	case 13: return 150;

	case 14: return 151;

	case 15: return 152;

	case 16: return 153;

	case 17: return 154;

	case 18: return 155;

	case 19: return 156;

	default:
	}
	return -1;
}

// Position - 0x42173
float func_500(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2521893[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_float(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x4219F
int func_501(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<7> Var15;
	int iVar32;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2592910 == iParam1) {
			iVar2 = Global_2592909;
			iVar1 = Global_2592908;
		}
		else if (iParam1 >= 92) {
			iVar2 = func_240(iParam0, iParam1, 7, 3);
			iVar1 = func_540(iVar2);
			Global_2592910 = iParam1;
			Global_2592909 = iVar2;
			Global_2592908 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2592913 == iParam3) {
			iVar4 = Global_2592912;
			iVar3 = Global_2592911;
		}
		else if (iParam3 >= 237) {
			iVar4 = func_240(iParam0, iParam3, 11, 3);
			iVar3 = func_540(iVar4);
			Global_2592913 = iParam3;
			Global_2592912 = iVar4;
			Global_2592911 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2592916 == iParam4) {
			iVar6 = Global_2592915;
			iVar5 = Global_2592914;
		}
		else if (iParam4 >= 241) {
			iVar6 = func_240(iParam0, iParam4, 8, 3);
			iVar5 = func_540(iVar6);
			Global_2592916 = iParam4;
			Global_2592915 = iVar6;
			Global_2592914 = iVar5;
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
			if (iParam9 != -99) {
				iVar7 = -1;
				if (iParam9 >= 327) {
					iVar7 = func_240(iParam0, iParam9, 14, 3);
				}
				if (iParam9 >= 27 && iParam9 <= 34 || iParam9 >= 75 && iParam9 <= 82 ||
					iParam9 >= 107 && iParam9 <= 114) {
					return 0;
				}
				switch (iVar7) {
				case 1411612772:
				case 1399488226:
				case 1103092621:
				case 798340921:
				case 495850282:
				case -1972900644:
				case 2016102499:
				case 1719477511:
				case 288210625:
				case -882756821:
				case -1242625979:
				case -1358792084:
				case -1854813796:
				case -1257185072:
				case -75666008:
				case -451657514:
				case -1339992339:
				case -1987638855:
				case 1148780446:
				case 1379309694:
				case 491826867:
				case 1855607109:
				case -1962767847:
				case -1654116636:
				case -1485356286:
				case -1178212449:
				case -766633809:
				case 665568109:
				case -288304716:
				case 1772824957:
				case 1533381874:
				case -2012223930:
				case 2008237453:
				case -1304118613:
				case -1543430620:
				case -854101936:
				case -1061103709:
				case -616035151:
				case 1307111925:
				case 1759289928: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) {
						return 0;
					}
					else if (func_503(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0)) {
					return 0;
				}
				else if (func_503(iParam0, iParam3)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
					if (iParam3 >= 188 && iParam3 <= 203 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 12 ||
						iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
						return 0;
					}
				}
			}
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
					if (iParam3 >= 96 && iParam3 <= 107 || iVar3 == 6) {
						return 0;
					}
				}
				if (iParam3 == 236) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 172 && iParam3 <= 187 || iParam3 >= 188 && iParam3 <= 203 ||
						 iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 11 ||
						 iVar3 == 12 || iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -491588875, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
					return 0;
				}
				else if (!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 192 && iParam4 <= 207 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 ||
					iVar5 == 6 || iVar5 == 7 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1010805287, 0)) {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
			if (iParam8 != -99) {
				return 0;
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam9, 14, 3), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam9, 14, 3), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 188 && iParam3 <= 203 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 9 || iVar3 == 12 ||
					iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 144 && iParam4 <= 159 || iParam4 >= 160 && iParam4 <= 175 ||
					iParam4 >= 176 && iParam4 <= 191 || iParam4 >= 192 && iParam4 <= 207 ||
					iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 || iVar5 == 6 || iVar5 == 7 ||
					iVar5 == 9 || iVar5 == 10 || iVar5 == 11 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
					return 0;
				}
			}
		}
		if (iParam1 >= 1 && iParam1 <= 3 || iVar1 == 1) {
			if (iParam5 != -99) {
				if (iParam5 != 15) {
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 != 236) {
					return 0;
				}
			}
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0)) {
				return 0;
			}
		}
		else if (iParam1 >= 4 && iParam1 <= 6 || iVar1 == 2) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 || iVar3 == 0 || iVar3 == 1 ||
					iVar3 == 2 || iVar3 == 5 || iVar3 == 8) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 0 && iParam4 <= 15 || iParam4 >= 16 && iParam4 <= 31 || iParam4 >= 32 && iParam4 <= 47 ||
					iParam4 >= 80 && iParam4 <= 95 || iParam4 >= 128 && iParam4 <= 143 || iParam4 == 240 ||
					iVar5 == 0 || iVar5 == 1 || iVar5 == 2 || iVar5 == 5 || iVar5 == 8 || iVar5 == 15) {
				}
				else {
					return 0;
				}
			}
			else if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 10 && iParam1 <= 25 || iVar1 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 ||
					iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 172 && iParam3 <= 187 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 == 236 || iVar3 == 0 || iVar3 == 1 || iVar3 == 2 ||
					iVar3 == 5 || iVar3 == 8 || iVar3 == 9 || iVar3 == 11 || iVar3 == 13 || iVar3 == 15) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 32 && iParam1 <= 37 || iVar1 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 96 && iParam3 <= 107 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 6 || iVar3 == 10) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 41 && iParam1 <= 56 || iParam1 >= 73 && iParam1 <= 88 || iVar1 == 10 || iVar1 == 12 ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || func_543(iParam0, iParam3) || iVar3 == 13) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 10 ||
					iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
				}
				else {
					iVar0 = func_231(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_540(func_240(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 176 && iParam4 <= 191 || iVar5 == 11) {
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 57 && iParam1 <= 72 || iVar1 == 11) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 172 && iParam3 <= 187 ||
					func_543(iParam0, iParam3) || iVar3 == 13 || iVar3 == 11) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
					iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 4 || iVar5 == 6 ||
					iVar5 == 10 || iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					iVar0 = func_231(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_540(func_240(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11 || iVar4 == -27166014 || iVar4 == -273228435 ||
					iVar4 == -2118057713 || iVar4 == -1809078812 || iVar4 == -1522415600 || iVar4 == -1212584705 ||
					iVar4 == -886664231 || iVar4 == -646500230 || iVar4 == -290891042 || iVar4 == 15400801 ||
					iVar4 == -485413449 || iVar4 == -254359230 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					iVar4 == 1343601766 || iVar4 == 567992305 || iVar4 == -192707261 || iVar4 == 1156347903 ||
					iVar4 == 1853344529 || iVar4 == 1597648022 || iVar4 == -1995669446) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 || iVar5 == 4 || iVar5 == 6 ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0)) {
			if (iParam3 != -99) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) &&
						dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) &&
						!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -108328099, 0)) {
			if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -1305325922 || iVar6 == 242616108 || iVar6 == 1085565864 ||
					iVar6 == -1968210019 || iVar6 == 2028002304 || iVar6 == 830393657 || iVar6 == -473747009 ||
					iVar6 == 240453350 || iVar6 == 1083927410 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
							iParam4 >= 160 && iParam4 <= 175 || iVar5 == 4 || iVar5 == 6 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -378906828, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 4 || iVar3 == 10 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 160 && iParam4 <= 175 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -695703461, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 188 && iParam3 <= 203 || iVar3 == 12 || iVar3 == 4 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 192 && iParam4 <= 207 || func_502(iVar6) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar8 = -1;
		iVar9 = -1;
		if (iParam1 >= 55) {
			iVar9 = func_240(iParam0, iParam1, 7, 4);
			iVar8 = func_540(iVar9);
		}
		iVar10 = -1;
		iVar11 = -1;
		if (iParam3 >= 256) {
			iVar11 = func_240(iParam0, iParam3, 11, 4);
			iVar10 = func_540(iVar11);
		}
		iVar12 = -1;
		if (iParam9 >= 327) {
			iVar12 = func_240(iParam0, iParam9, 14, 4);
		}
		iVar13 = -1;
		iVar14 = -1;
		if (iParam4 >= 136) {
			iVar13 = func_240(iParam0, iParam4, 8, 4);
			iVar14 = func_540(iVar13);
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (iVar9 == 281786684 || iVar9 == 653911448 || iVar9 == -1519558015) {
			if (iParam9 != -99) {
				switch (iVar12) {
				case 1446628467:
				case -1938048778:
				case 2041418586:
				case -1342898200:
				case 2026483804:
				case -1977527541:
				case -1670449242:
				case -1385031204:
				case -1088111295:
				case -1530918836:
				case -1221415631:
				case -629869643:
				case 530255864:
				case 38181873:
				case 319110510:
				case 482562282:
				case -1178170642:
				case -880726429:
				case -699776011:
				case -401873032:
				case -700496933:
				case -404429018:
				case -2134238990:
				case -2136376254:
				case 1861212367:
				case -789144321:
				case -223092615:
				case 763352592:
				case -549897852:
				case -1976889495:
				case -1410575637:
				case -428980242:
				case -1731482454:
				case -1390357480: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0)) {
						return 0;
					}
					else if (func_503(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (func_503(iParam0, iParam3)) {
					return 0;
				}
			}
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam9, 14, 4), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam9, 14, 4), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar9 != -1 &&
			(dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0))) {
			if (iParam2 == 11) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 684992453, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 916636514, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1939378450, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -820724897, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -872449705, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1714969731, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1055526375, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 947651647, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) || iParam3 >= 112 && iParam3 <= 127 ||
					iVar10 == 7) {
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 700658917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 745826556, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 144417099, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam2 == 8) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1553766533, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1914383230, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0)) {
							if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							}
							else {
								return 0;
							}
						}
						else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							return 0;
						}
					}
				}
				else {
					return 0;
				}
			}
		}
		if (iParam9 != -99) {
			if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 1)) {
				if (iParam1 >= 1 && iParam1 <= 12 || iVar8 == 1 || iVar8 == 2 ||
					iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1406402954, 0)) {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (func_543(iParam0, iParam3)) {
				}
				else if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 176 && iParam3 <= 191 || iVar10 == 2 ||
						 iVar10 == 11 || dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -939525357, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2102859770, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1784133476, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) || iVar11 == 998321559 ||
						 iVar11 == 619380843) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
						 iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -55104292, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 140732128, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2106216756, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1976716889, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1407863332, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1103045158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 71 && iParam4 <= 86 || iVar14 == 11 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1455992833, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1177480446, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1347486026, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1655154167, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2105858993, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1893564692, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1710451520, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1416808511, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1641506460, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 699233865, 0) || iVar13 == -565297075 || iVar13 == 262349558 ||
					iVar13 == -917804055 || iVar13 == -1156067454 || iVar13 == -2124751863 || iVar13 == 1812836719 ||
					iVar13 == 1582116924 || iVar13 == 877452376 || iVar13 == 1117419763 || iVar13 == 732885188 ||
					iVar13 == -1037820496 || iVar13 == -79097863 || dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2102859770, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1784133476, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1976716889, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1419806467, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -849839091, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2088146832, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -352447393, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -642551350, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -819569488, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020068325, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 201427653, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 967829025, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -685039259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1266557933, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -979468724, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -58412562, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 974680318, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 684992453, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 916636514, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1353777856, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1207283343, 0)) {
					return 0;
				}
				else if (func_541(iParam0, iParam4, 0) != -99) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iParam1 >= 13 && iParam1 <= 18 || iVar8 == 3 ||
			iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1320139576, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 19 && iParam1 <= 24 || iVar8 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					dlc1::_0x5D5CAFF661DDF6FC(iVar12, &Var15);
					if (Var15.f_6 == 7) {
						return 0;
					}
				}
			}
		}
		else if (iParam1 >= 25 && iParam1 <= 30 || iVar8 == 5) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_240(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 31 && iParam1 <= 36 || iVar8 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 905042630, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1204125293, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 37 && iParam1 <= 42 || iVar8 == 7 ||
				 iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 48 && iParam3 <= 63 ||
					iParam3 >= 144 && iParam3 <= 159 || iParam3 >= 224 && iParam3 <= 239 || iVar10 == 2 ||
					iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 821147517, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1831422288, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (iParam3 >= 112 && iParam3 <= 127 || iParam3 >= 160 && iParam3 <= 175 ||
						 iParam3 >= 192 && iParam3 <= 207 || iVar10 == 7 || iVar10 == 10 || iVar10 == 12 ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1703203608, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1415000253, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -168336417, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 48 || iVar8 == 8) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 64 && iParam3 <= 79 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 2 || iVar10 == 4 || iVar10 == 5 || iVar10 == 9 || iVar10 == 11 || iVar10 == 12 ||
					iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 49 && iParam1 <= 54 || iVar8 == 9) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 80 && iParam3 <= 95 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 4 || iVar10 == 5 || iVar10 == 11 || iVar10 == 12 || iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -7109286, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1716958480, 0)) {
			if (iParam3 != -99) {
				if (iVar11 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (iParam11 != -99) {
				iVar32 = -1;
				if (iParam11 >= 256) {
					iVar32 = func_240(iParam0, iParam11, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar32, -33031567, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
	}
	return 1;
}

// Position - 0x46818
int func_502(int iParam0) {
	if (iParam0 != -1) {
		return 0;
	}
	switch (iParam0) {
	case -783649692:
	case 691352495:
	case 1313566316:
	case 451909412:
	case 1552550633:
	case -206550874:
	case 860928119:
	case -445797343:
	case 1107219923:
	case -173716332:
	case -2017140386:
	case -538304226:
	case -1235599732:
	case -592242000:
	case 1815489089:
	case -831095241:
	case 2062043045:
	case -1092100326:
	case -1065332020:
	case -1465994616:
	case -1516536717:
	case 507503642:
	case -1470397961:
	case -1392082519:
	case 264425668:
	case -88859389:
	case 560755735:
	case 157858412:
	case -593565059:
	case -513152401:
	case -286945526:
	case 2004948615: return 1;
	}
	return 0;
}

// Position - 0x468F9
bool func_503(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar0 = func_240(iParam0, iParam1, 11, 3);
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -441291342, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -785939537, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1506370874, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1010805287, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1603194928, 0)) {
				return true;
			}
		}
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				return true;
			}
		}
		return func_543(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar1 = func_240(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1) {
			iVar2 = func_540(iVar1);
		}
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 48 && iParam1 < 64 || iParam1 >= 96 && iParam1 < 112 ||
			iParam1 >= 112 && iParam1 < 128 || iParam1 >= 128 && iParam1 < 144 || iParam1 >= 144 && iParam1 < 160 ||
			iParam1 >= 160 && iParam1 < 176 || iParam1 >= 224 && iParam1 < 240 || iVar2 == 1 || iVar2 == 3 ||
			iVar2 == 6 || iVar2 == 7 || iVar2 == 8 || iVar2 == 9 || iVar2 == 10 || iVar2 == 14 ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -826135203, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -747583185, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -102825006, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -733792105, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -641612092, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1506370874, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1010805287, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x46E02
void func_504(int iParam0, int iParam1, int iParam2, bool bParam3) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	func_535(gameplay::get_hash_key("hairOverlay"), iParam0);
	iVar1 = func_534(iVar0, iParam1);
	if (iVar1 != -1) {
		if (iParam2 == -1) {
			iParam2 = Global_69521;
		}
		func_555(iVar1, 1, iParam2);
	}
	func_505(iParam0, bParam3, 0);
}

// Position - 0x46E4E
void func_505(int iParam0, bool bParam1, int iParam2) {
	int iVar0;
	struct<9> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = Global_69521;
		ped::_clear_ped_facial_decorations(iParam0);
		iVar14 = func_533(iParam0);
		iVar15 = func_520(iParam0, 0);
		iVar16 = func_518(iParam0);
		iVar17 = func_517(iParam0);
		if (bParam1) {
			iVar16 = 1;
		}
		if (iParam2) {
			iVar16 = 0;
		}
		iVar18 = 0;
		while (iVar18 < 127) {
			if (func_514(iVar18, iVar0)) {
				if (func_510(&Var1, iVar18, iVar14, iParam0, -1)) {
					if (func_507(iParam0, &Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, bParam1, iVar17)) {
						ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_514(123, iVar0)) {
			if (ped::_get_tattoo_zone(-1719270477, -1824026490) != 7) {
				ped::_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = dlc1::_get_num_decorations(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20) {
			if (dlc1::_0xFF56381874F82086(iVar14, iVar19, &Var21)) {
				if (!dlc1::_is_dlc_data_empty(Var21)) {
					iVar36 = 129 + iVar19;
					if (func_514(iVar36, iVar0)) {
						if (func_507(iParam0, &Var21.f_7, Var21.f_2, Var21.f_6, iVar15, iVar16, bParam1, iVar17)) {
							ped::_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_506(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

// Position - 0x46F9E
void func_506(int iParam0, int iParam1, int iParam2) {
	switch (iParam1) {
	case -1194930348:
		switch (iParam2) {
		case -841238543: ped::_set_ped_decoration(iParam0, -1194930348, -441419962); break;

		case -1405854945: ped::_set_ped_decoration(iParam0, -1194930348, 1647997020); break;
		}
		break;

	case -777275782:
		switch (iParam2) {
		case 671171671: ped::_set_ped_decoration(iParam0, -777275782, 904519720); break;

		case 1911627074: ped::_set_ped_decoration(iParam0, -777275782, -607391498); break;
		}
		break;

	case 484754152:
		switch (iParam2) {
		case 266230635:
			ped::_set_ped_decoration(iParam0, 484754152, -588549683);
			ped::_set_ped_decoration(iParam0, 484754152, 464027076);
			break;

		case -1261787835:
			ped::_set_ped_decoration(iParam0, 484754152, -965491494);
			ped::_set_ped_decoration(iParam0, 484754152, 939374190);
			break;
		}
		break;
	}
}

// Position - 0x47093
bool func_507(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6,
			  int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	if (iParam3 == 0) {
		iVar1 = func_509(iVar0, sParam1, iParam3);
		iParam3 = gameplay::get_hash_key(func_508(iVar1));
	}
	if (iParam2 == 449512698) {
		return false;
	}
	switch (iParam3) {
	case -793495770:
	case -763917073:
	case -1409061796:
	case -2066166276:
	case 849089063:
	case 1192230427:
	case -454273031:
	case -1459967458:
	case 1548327796:
	case -1238079313:
	case 129912816:
	case -1469750959:
	case 1586504577:
	case 1753976524:
	case 1361645381:
	case -388268096:
		if (iParam4) {
			return false;
		}
		if (iParam3 == -793495770 || iParam3 == -1409061796 && iVar0 == joaat("mp_f_freemode_01") ||
			iParam3 == -2066166276 || iParam3 == 849089063 || iParam3 == 1192230427) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_514(13, -1)) {
							return false;
						}
						else if (func_514(14, -1)) {
							return false;
						}
						else if (func_514(15, -1)) {
							return false;
						}
						else if (func_514(16, -1)) {
							return false;
						}
						else if (func_514(71, -1)) {
							return false;
						}
						else if (func_514(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == -763917073) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_514(13, -1)) {
							return false;
						}
						else if (func_514(14, -1)) {
							return false;
						}
						else if (func_514(15, -1)) {
							return false;
						}
						else if (func_514(16, -1)) {
							return false;
						}
						else if (func_514(71, -1)) {
							return false;
						}
						else if (func_514(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == 129912816 || iParam3 == 1361645381 || iParam3 == -1469750959) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_514(13, -1)) {
						}
						else if (func_514(14, -1)) {
							return false;
						}
						else if (func_514(15, -1)) {
							return false;
						}
						else if (func_514(16, -1)) {
						}
						else if (func_514(71, -1)) {
							return false;
						}
						else if (func_514(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 1484379715:
	case 711089605:
	case 1206993109:
	case 32564956:
	case 1618133209:
	case 314326195:
	case 1928884106:
	case 1565386395:
	case 2107621060:
		if (iParam7) {
			return false;
		}
		if (!iParam5) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_514(13, -1)) {
					}
					else if (func_514(14, -1)) {
					}
					else if (func_514(15, -1)) {
						return false;
					}
					else if (func_514(16, -1)) {
					}
					else if (func_514(71, -1)) {
					}
					else if (func_514(72, -1)) {
						return false;
					}
				}
			}
			else if (Global_2593872 == 13) {
			}
			else if (Global_2593872 == 14) {
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
				return false;
			}
		}
		break;

	case 1019352240:
		if (iParam7) {
			if (iVar0 == joaat("mp_m_freemode_01")) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_514(15, -1)) {
							return false;
						}
					}
				}
				else if (Global_2593872 == 15) {
					return false;
				}
			}
		}
		if (iParam5) {
			return false;
		}
		if (iParam4) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_514(13, -1)) {
						return false;
					}
					else if (func_514(14, -1)) {
						return false;
					}
					else if (func_514(15, -1)) {
						return false;
					}
					else if (func_514(16, -1)) {
					}
					else if (func_514(71, -1)) {
					}
					else if (func_514(72, -1)) {
					}
				}
			}
			else if (Global_2593872 == 13) {
				return false;
			}
			else if (Global_2593872 == 14) {
				return false;
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
			}
		}
		break;

	case 0:
	case 2:
	case -518474626:
		if (iParam4) {
			if (!gameplay::is_string_null_or_empty(sParam1)) {
				switch (gameplay::get_hash_key(sParam1)) {
				case 1774176944:
				case 1363941829:
				case -328314869:
				case -1903783095:
				case -1674924399:
				case -106785870:
				case -344656041:
				case 1480281490:
				case -2097372400:
				case 118598456:
				case -1386676768:
				case 1464947154:
				case -1282504117:
				case -1877294236:
				case 736950162: return false;
				}
			}
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_514(13, -1)) {
						}
						else if (func_514(14, -1)) {
						}
						else if (func_514(15, -1)) {
						}
						else if (func_514(16, -1)) {
						}
						else if (func_514(71, -1)) {
						}
						else if (func_514(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 277073536:
		if (bParam6) {
			return false;
		}
		break;
	}
	return true;
}

// Position - 0x477DA
char *func_508(int iParam0) {
	switch (iParam0) {
	case 0: return "ARM_LEFT_FULL_SLEEVE";

	case 1: return "ARM_LEFT_SHORT_SLEEVE";

	case 2: return "ARM_LEFT_LOWER_SLEEVE";

	case 3: return "ARM_LEFT_LOWER_INNER";

	case 4: return "ARM_LEFT_LOWER_OUTER";

	case 5: return "ARM_LEFT_WRIST";

	case 6: return "ARM_LEFT_UPPER_SLEEVE";

	case 7: return "ARM_LEFT_UPPER_TRICEP";

	case 8: return "ARM_LEFT_UPPER_SIDE";

	case 9: return "ARM_LEFT_UPPER_BICEP";

	case 10: return "ARM_LEFT_SHOULDER";

	case 11: return "ARM_LEFT_ELBOW";

	case 12: return "ARM_RIGHT_FULL_SLEEVE";

	case 13: return "ARM_RIGHT_SHORT_SLEEVE";

	case 14: return "ARM_RIGHT_LOWER_SLEEVE";

	case 15: return "ARM_RIGHT_LOWER_INNER";

	case 16: return "ARM_RIGHT_LOWER_OUTER";

	case 17: return "ARM_RIGHT_WRIST";

	case 18: return "ARM_RIGHT_UPPER_SLEEVE";

	case 19: return "ARM_RIGHT_UPPER_TRICEP";

	case 20: return "ARM_RIGHT_UPPER_SIDE";

	case 21: return "ARM_RIGHT_UPPER_BICEP";

	case 22: return "ARM_RIGHT_SHOULDER";

	case 23: return "ARM_RIGHT_ELBOW";

	case 24: return "HAND_LEFT";

	case 25: return "HAND_RIGHT";

	case 26: return "BACK_FULL";

	case 27: return "BACK_FULL_ARMS_FULL_BACK";

	case 28: return "BACK_FULL_SHORT";

	case 29: return "BACK_MID";

	case 30: return "BACK_UPPER";

	case 31: return "BACK_UPPER_LEFT";

	case 32: return "BACK_UPPER_RIGHT";

	case 33: return "BACK_LOWER";

	case 34: return "BACK_LOWER_LEFT";

	case 35: return "BACK_LOWER_MID";

	case 36: return "BACK_LOWER_RIGHT";

	case 37: return "CHEST_FULL";

	case 38: return "CHEST_STOM";

	case 39: return "CHEST_STOM_FULL";

	case 40: return "CHEST_LEFT";

	case 41: return "CHEST_UPPER_LEFT";

	case 42: return "CHEST_RIGHT";

	case 43: return "CHEST_UPPER_RIGHT";

	case 44: return "CHEST_MID";

	case 45: return "TORSO_SIDE_RIGHT";

	case 46: return "TORSO_SIDE_LEFT";

	case 47: return "STOMACH_FULL";

	case 48: return "STOMACH_UPPER";

	case 49: return "STOMACH_UPPER_LEFT";

	case 50: return "STOMACH_UPPER_RIGHT";

	case 51: return "STOMACH_LOWER";

	case 52: return "STOMACH_LOWER_LEFT";

	case 53: return "STOMACH_LOWER_RIGHT";

	case 54: return "STOMACH_LEFT";

	case 55: return "STOMACH_RIGHT";

	case 56: return "FACE";

	case 57: return "HEAD_LEFT";

	case 58: return "HEAD_RIGHT";

	case 59: return "NECK_FRONT";

	case 60: return "NECK_BACK";

	case 61: return "NECK_LEFT_FULL";

	case 62: return "NECK_LEFT_BACK";

	case 63: return "NECK_RIGHT_FULL";

	case 64: return "NECK_RIGHT_BACK";

	case 65: return "LEG_LEFT_FULL_SLEEVE";

	case 66: return "LEG_LEFT_FULL_FRONT";

	case 67: return "LEG_LEFT_FULL_BACK";

	case 68: return "LEG_LEFT_UPPER_SLEEVE";

	case 69: return "LEG_LEFT_UPPER_FRONT";

	case 70: return "LEG_LEFT_UPPER_BACK";

	case 71: return "LEG_LEFT_UPPER_OUTER";

	case 72: return "LEG_LEFT_UPPER_INNER";

	case 73: return "LEG_LEFT_LOWER_SLEEVE";

	case 74: return "LEG_LEFT_LOWER_FRONT";

	case 75: return "LEG_LEFT_LOWER_BACK";

	case 76: return "LEG_LEFT_LOWER_OUTER";

	case 77: return "LEG_LEFT_LOWER_INNER";

	case 78: return "LEG_LEFT_KNEE";

	case 79: return "LEG_LEFT_ANKLE";

	case 80: return "LEG_LEFT_CALF";

	case 81: return "LEG_RIGHT_FULL_SLEEVE";

	case 82: return "LEG_RIGHT_FULL_FRONT";

	case 83: return "LEG_RIGHT_FULL_BACK";

	case 84: return "LEG_RIGHT_UPPER_SLEEVE";

	case 85: return "LEG_RIGHT_UPPER_FRONT";

	case 86: return "LEG_RIGHT_UPPER_BACK";

	case 87: return "LEG_RIGHT_UPPER_OUTER";

	case 88: return "LEG_RIGHT_UPPER_INNER";

	case 89: return "LEG_RIGHT_LOWER_SLEEVE";

	case 90: return "LEG_RIGHT_LOWER_FRONT";

	case 91: return "LEG_RIGHT_LOWER_BACK";

	case 92: return "LEG_RIGHT_LOWER_OUTER";

	case 93: return "LEG_RIGHT_LOWER_INNER";

	case 94: return "LEG_RIGHT_KNEE";

	case 95: return "LEG_RIGHT_ANKLE";

	case 96: return "LEG_RIGHT_CALF";

	case 97: return "FOOT_LEFT";

	case 98: return "FOOT_RIGHT";
	}
	return "";
}

// Position - 0x47E1D
int func_509(int iParam0, char *sParam1, int iParam2) {
	switch (iParam2) {
	case 1019352240:
	case 2140335355:
	case 277073536: return -1;
	}
	switch (iParam2) {
	case -1775023605: return 0;

	case 917950949: return 1;

	case -1684314297: return 2;

	case -1546663824: return 3;

	case -2119253768: return 4;

	case 1639951086: return 5;

	case 1372660034: return 6;

	case -1524227787: return 7;

	case -311742370: return 8;

	case -2057190659: return 9;

	case -686545645: return 10;

	case -80377674: return 11;

	case -1055976551: return 12;

	case 1963750528: return 13;

	case 796226384: return 14;

	case 123428314: return 15;

	case 1944550961: return 16;

	case 2136911405: return 17;

	case -1309595991: return 18;

	case 1470319061: return 19;

	case -1716562576: return 20;

	case -1940582056: return 21;

	case 1089807219: return 22;

	case -1073830579: return 23;

	case 1071134407: return 24;

	case 1455567330: return 25;

	case 711089605: return 26;

	case 1206993109: return 27;

	case 32564956: return 28;

	case 314326195: return 29;

	case 1928884106: return 30;

	case 1565386395: return 31;

	case 2107621060: return 32;

	case 1618133209: return 33;

	case -951899470: return 34;

	case 2048696626: return 35;

	case 74017048: return 36;

	case -793495770: return 37;

	case 849089063: return 38;

	case 1192230427: return 39;

	case -763917073: return 40;

	case 337552605: return 41;

	case -2066166276: return 42;

	case 100935796: return 43;

	case -1409061796: return 44;

	case 1548327796: return 45;

	case -1459967458: return 46;

	case 129912816: return 47;

	case 1387715942: return 48;

	case -1871804242: return 49;

	case 1603728616: return 50;

	case -742053244: return 51;

	case 1586504577: return 52;

	case 1753976524: return 53;

	case -1469750959: return 54;

	case -388268096: return 55;

	case -1538681432: return 56;

	case -737856380: return 57;

	case 1261643197: return 58;

	case 436139458: return 59;

	case 1012782925: return 60;

	case -277214012: return 61;

	case -484264198: return 62;

	case 1708200656: return 63;

	case 758827473: return 64;

	case 1039283199: return 65;

	case 325801797: return 66;

	case -1946435033: return 67;

	case -1917346117: return 68;

	case -382139768: return 69;

	case 1725561361: return 70;

	case -266913369: return 71;

	case 511433871: return 72;

	case -1399656601: return 73;

	case -1560441083: return 74;

	case 1034503747: return 75;

	case -1170681301: return 76;

	case 660577126: return 77;

	case -818089340: return 78;

	case 1052642087: return 79;

	case 134497037: return 80;

	case -624267373: return 81;

	case -1178847967: return 82;

	case -197292861: return 83;

	case 730193962: return 84;

	case 1469472731: return 85;

	case -1918884694: return 86;

	case -1670727628: return 87;

	case -1389296468: return 88;

	case -405262373: return 89;

	case -1619609833: return 90;

	case 2060550302: return 91;

	case -1202647020: return 92;

	case 12584588: return 93;

	case -1559605744: return 94;

	case -88374898: return 95;

	case -292219126: return 96;

	case -634232984: return 97;

	case -1259754598: return 98;
	}
	switch (gameplay::get_hash_key(sParam1)) {
	case 1948764112: return -1;

	case 1099734529: return 12;

	case 1875475066: return 12;

	case -2027116220:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 75;
		}
		else {
			return 65;
		}
		break;

	case 973279522: return 26;

	case -344656041: return 47;

	case 437243648: return 1;

	case -1636967950: return 75;

	case -1759426263: return 1;

	case 1702259548: return 89;

	case 1471205329: return 73;

	case -33154131: return 22;

	case -1364624791: return 91;

	case 2048169112: return 26;

	case -2132107540: return 73;

	case -2097372400: return 38;

	case -106785870:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case 1116120433: return 31;

	case 118598456: return 42;

	case 1480281490: return 47;

	case -652292269: return 75;

	case -1179283327: return 20;

	case 860620540: return 32;

	case -880004050: return 14;

	case -1386676768: return 52;

	case 2104696341: return 30;

	case -1952728474: return 6;

	case 1464947154: return 80;

	case -1134718043: return 13;

	case -440373586:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 67;
		}
		else {
			return 75;
		}
		break;

	case -1282504117:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case -1035884623: return 73;

	case -1877294236: return 47;

	case 1289632992: return 73;

	case 1152623695: return 10;

	case 1705208746: return 26;

	case 1774176944: return 42;

	case -2016202731: return 89;

	case 474241973: return 16;

	case 1549424756: return 91;

	case 1915520024: return 82;

	case -654914345: return 13;

	case -1745115353: return 75;

	case 1466027815: return 26;

	case -161772432: return 10;

	case 74131599: return 90;

	case 363383562: return 89;

	case 736950162: return 38;

	case 1291882802: return 20;

	case -281772534: return 26;

	case -837798134: return 18;

	case 62456: return 56;

	case -800320369: return 3;

	case 1363941829: return 47;

	case 1586377801:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1514257748: return 89;

	case -1023836894: return 6;

	case -1974105125: return 33;

	case -558386018: return 16;

	case -328314869: return 40;

	case -1903783095: return 40;

	case -1674924399: return 40;

	case -252323802: return 33;

	case 11466648: return 6;

	case 927130819:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -978943608:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 452144164:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 691194019:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1516865571: return 44;

	case 2130586285: return 32;

	case 386521802: return 3;

	case 579924440: return 33;

	case 741770527: return 31;

	case 1173403795: return 33;

	case -569087776: return 45;

	case -1344959389: return 89;

	case -211217527: return 64;

	case 86488838: return 53;

	case 705494964: return 52;

	case -137684175: return 30;

	case -979388709: return 41;

	case 324653646: return 43;

	case -518820414: return 52;

	case -1361737401: return 20;

	case 2010946386: return 8;

	case -894811920: return 10;

	case 165068612: return 28;

	case 1549427782: return 40;

	case -927613913: return 42;

	case 385144996: return 56;

	case -814626401: return 57;

	case -1248225809: return 52;

	case 1910378101: return 8;

	case -2124501642: return 91;

	case -1943747838: return 20;

	case -1570115700: return 75;

	case 931699147: return 62;

	case 1019520067: return 63;

	case -859358814: return 20;

	case -1157818866: return 58;

	case -247856505: return 47;

	case -1628534963: return 37;

	case -1051898870: return 33;

	case 1334929540: return 80;

	case 1097124907: return 64;

	case 747545215: return 62;

	case 61892743: return 96;

	case 501548332: return 15;

	case -244169717: return 48;

	case 421886905: return 37;

	case -1398791504: return 33;

	case -106152761: return 3;

	case 125491300: return 41;

	case -1576950557: return 52;

	case -1815115649: return 53;

	case -1043396870: return 59;

	case -1388618285: return 3;

	case -948484638: return 48;

	case 643387405: return 33;

	case 979630098: return 64;

	case 211688583: return 62;

	case 1343791995: return 60;

	case 576309246: return 20;

	case 949154944: return 40;

	case -622511834: return 42;

	case -275651969: return 11;

	case -1256283855: return 15;

	case 955525350: return 40;

	case 1252641873: return 22;

	case -2034766264: return 40;

	case 1748021562: return 22;

	case -657146050: return 30;

	case -955835485: return 19;

	case -1269959119: return 40;

	case -1478763187: return 4;

	case -1881592504: return 15;

	case 2115996117: return 62;

	case 1824417551: return 45;

	case 1502068898: return 24;

	case -2019287742: return 22;

	case -1780827729: return 80;

	case -1966497207: return 25;

	case -2126999769: return 30;

	case 2014772448: return 30;

	case 1705760778: return 44;

	case 497993745: return 15;

	case 1142887665: return 9;

	case 22777707: return 3;

	case 799173624: return 16;

	case -410297401: return 17;

	case 214410819: return 75;

	case -2098342992: return 23;

	case -1280920283: return 64;

	case -1501455653: return 16;

	case 2117454408: return 25;

	case -1945704982: return 32;

	case -1581870771: return 31;

	case -1350521631: return 10;

	case -954508266: return 5;

	case -716244867: return 4;

	case 185361399: return 52;

	case -1208107213: return 35;

	case -812421538: return 30;

	case -566096965: return 32;

	case -316757644: return 38;

	case -103496992: return 24;

	case 391708136: return 52;

	case 616667309: return 20;

	case 870102755: return 10;

	case 1093030262: return 92;

	case 1378218869: return 0;

	case 332555747: return 80;

	case 1077526193: return 34;

	case 1332632858: return 91;

	case 1556379590: return 10;

	case 1780093553: return 22;

	case 2001284303: return 14;

	case -2059941716: return 30;

	case -1759875983: return 40;

	case -1521153818: return 24;
	}
	if (iParam2 == 0 && gameplay::is_string_null_or_empty(sParam1)) {
		return -1;
	}
	switch (iParam2) {
	case -518474626: return -1;
	}
	return -1;
}

// Position - 0x4900B
bool func_510(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	func_513(uParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (entity::does_entity_exist(iParam3) && !ped::is_ped_injured(iParam3)) {
		iVar0 = entity::get_entity_model(iParam3);
	}
	switch (iParam2) {
	case 0:
		switch (iParam1) {
		case 0:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
			break;

		case 1:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
			break;

		case 2:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
			break;

		case 3:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
			break;

		case 4:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
			break;

		case 5:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
			break;

		case 6:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
			break;

		case 7:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
			break;

		case 8:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
			break;

		case 9:
			if (func_342() || func_341()) {
				iVar1 = 400;
				if (func_164() && (func_512() || func_163())) {
					iVar1 = 0;
				}
				func_513(uParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1,
						 2);
			}
			break;

		case 10:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
			break;

		case 11:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
			break;

		case 12:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
			break;

		case 13:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
			break;

		case 14:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
			break;

		case 15:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
			break;

		case 16:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
			break;

		case 17:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
			break;

		case 18:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
			break;

		case 19:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
			break;

		case 20:
			func_513(uParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
			break;

		default: func_511(uParam0, iParam2, iParam1, 21); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
			if (func_342() || func_341()) {
				iVar1 = 450;
				if (func_164() && (func_512() || func_163())) {
					iVar1 = 0;
				}
				func_513(uParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1,
						 0);
			}
			break;

		case 1:
			break;

		case 2:
			break;

		case 3:


