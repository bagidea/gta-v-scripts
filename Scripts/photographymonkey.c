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
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
int iLocal_28 = 0;
var uLocal_29 = 0;
var uLocal_30 = 0;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
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
float fLocal_46 = 0f;
int iLocal_47 = 0;
int iLocal_48 = 0;
int *iLocal_49 = NULL;
int *iLocal_50 = NULL;
int *iLocal_51 = NULL;
int *iLocal_52 = NULL;
int *iLocal_53 = NULL;
struct<8> Local_54[50];
vector3 vLocal_455 = {0f, 0f, 0f};
int iLocal_458 = 0;
int iLocal_459 = 0;
int iLocal_460 = 0;
int iLocal_461 = 0;
int iLocal_462 = 0;
#pragma endregion //}

void __EntryFunction__() {
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	bool bVar16;
	int iVar17;

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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = 20f * 20f;
	iLocal_49 = -1;
	iLocal_50 = -1;
	iLocal_51 = -1;
	iLocal_52 = -1;
	iLocal_53 = -1;
	vLocal_455 = {0f, 0f, 0f};
	if (player::has_force_cleanup_occurred(210)) {
		func_116(&iLocal_49);
		func_116(&iLocal_50);
		func_116(&iLocal_51);
		func_116(&iLocal_52);
		func_116(&iLocal_53);
		script::terminate_this_thread();
	}
	func_114();
	while (func_113()) {
		system::wait(0);
	}
	while (true) {
		func_106();
		if (func_105() && iLocal_47 == 0) {
			iLocal_47 = 2;
		}
		if (!func_104(0) && !func_103(14)) {
			if (iLocal_47 == 0) {
				if (func_113()) {
					fVar0 = 0f;
					iLocal_48 = func_102(&fVar0);
					iLocal_461 = gameplay::is_bit_set(Global_2314, 28);
					if (iLocal_48 != -1) {
						if (fVar0 < fLocal_46) {
							vVar1 = {vLocal_455};
							vVar4 = {vLocal_455};
							vVar7 = {vLocal_455};
							vVar10 = {vLocal_455};
							func_99(iLocal_48, &vVar1, &vVar4, &vVar7, &vVar10);
							fVar13 = 0f;
							fVar14 = 0f;
							func_98(vVar1, vVar4, vVar7, &fVar13, &fVar14);
							fVar15 = fVar13 * fVar14;
							if (fVar15 >= 0.35f && func_97(vVar1, 0f, 1f) && func_97(vVar4, 0f, 1f) &&
									func_97(vVar7, 0f, 1f) && func_97(vVar10, 0f, 1f) ||
								fVar15 < 0.35f && func_97(vVar1, 0.05f, 0.95f) && func_97(vVar4, 0.05f, 0.95f) &&
									func_97(vVar7, 0.05f, 0.95f) && func_97(vVar10, 0.05f, 0.95f)) {
								if (fVar13 >= 0.08f && fVar14 >= 0.101f) {
									func_96(&iLocal_49, Local_54[iLocal_48 /*8*/], 0.01f);
									func_96(&iLocal_50, vVar1, 0.01f);
									func_96(&iLocal_51, vVar4, 0.01f);
									func_96(&iLocal_52, vVar7, 0.01f);
									func_96(&iLocal_53, vVar10, 0.01f);
									bVar16 = false;
									iVar17 = 0;
									while (iVar17 < 10 && !bVar16) {
										bVar16 = graphics::is_tracked_point_visible(iLocal_49) &
												 graphics::is_tracked_point_visible(iLocal_50) &
												 graphics::is_tracked_point_visible(iLocal_51) &
												 graphics::is_tracked_point_visible(iLocal_52) &
												 graphics::is_tracked_point_visible(iLocal_53);
										iVar17++;
										system::wait(0);
									}
									if (bVar16) {
										func_95(iLocal_48, 1);
										stats::stat_set_int(joaat("num_hidden_packages_6"), func_92(), 1);
										iLocal_460 = 1;
										if (func_105()) {
											func_6();
										}
										func_5();
										func_4(1);
									}
									func_116(&iLocal_49);
									func_116(&iLocal_50);
									func_116(&iLocal_51);
									func_116(&iLocal_52);
									func_116(&iLocal_53);
								}
							}
						}
					}
					iLocal_47 = 1;
				}
			}
			else if (iLocal_47 == 1) {
				if (!func_113()) {
					func_4(iLocal_461);
					iLocal_47 = 0;
				}
			}
			else if (iLocal_47 == 2) {
				if (!iLocal_460) {
					if (func_3()) {
						func_2(33, 1);
						func_1();
						func_5();
						script::terminate_this_thread();
					}
				}
			}
		}
		system::wait(0);
	}
}

// Position - 0x39B
void func_1() { Global_101700.f_9008.f_135[1] = -1; }

// Position - 0x3B0
void func_2(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 31) {
		if (iParam1) {
			gameplay::set_bit(&Global_101700.f_23954, iVar0);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_23954, iVar0);
		}
	}
	else {
		iVar0 -= 31;
		if (iParam1) {
			gameplay::set_bit(&Global_101700.f_23954.f_1, iVar0);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_23954.f_1, iVar0);
		}
	}
}

// Position - 0x415
bool func_3() {
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

// Position - 0x4D0
void func_4(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2314, 28);
	}
	else {
		gameplay::clear_bit(&Global_2314, 28);
	}
}

// Position - 0x4F3
int func_5() {
	if (func_104(0)) {
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

// Position - 0x53E
void func_6() {
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 1;
	func_7(joaat("player_two"), 3, 22, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 23, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 24, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 25, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 26, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 76, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 77, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 3, 78, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 87, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 88, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 89, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 90, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 97, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 98, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 99, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 100, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 101, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 102, iVar0, iVar1, 0, 0);
	func_7(joaat("player_two"), 4, 103, iVar0, iVar1, 0, 0);
}

// Position - 0x6A2
void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_91(iParam0, iParam1, iParam2, iParam3);
	func_80(iParam0, iParam1, iParam2, iParam4, 1);
	if (iParam5) {
		func_79(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1) {
		func_8(iParam0, iParam1, iParam2, 0);
	}
}

// Position - 0x6E7
int func_8(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 0,
				   1);
		}
		else {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1,
				   0);
		}
		return 1;
	}
	return 0;
}

// Position - 0x782
bool func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
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

// Position - 0x16A0
struct<14> func_10(int iParam0, int iParam1, int iParam2) {
	func_78();
	if (iParam0 == joaat("player_zero")) {
		func_60(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_41(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_11(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x16F2
void func_11(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_40(iParam1); break;

	case 2: func_39(iParam1); break;

	case 3: func_36(iParam1); break;

	case 4: func_35(iParam1); break;

	case 6: func_34(iParam1); break;

	case 5: func_33(iParam1); break;

	case 8: func_32(iParam1); break;

	case 9: func_31(iParam1); break;

	case 10: func_30(iParam1); break;

	case 1: func_29(iParam1); break;

	case 7: func_28(iParam1); break;

	case 11: func_27(iParam1); break;

	case 12: func_26(iParam1); break;

	case 13: func_25(iParam1); break;

	case 14: func_12(iParam1); break;
	}
}

// Position - 0x17E2
void func_12(int iParam0) {
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

	default: func_23(iVar10, iParam0, 155); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x29CE
void func_13(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
	uParam0->f_12 = func_22(iParam8);
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
		if (func_103(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_9(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_9(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_9(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_103(14)) {
				return;
			}
			iVar0 = func_16(func_19(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_16(func_15(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_14(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_16(iVar1, Global_69521, 0);
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

// Position - 0x2D5D
bool func_14(int iParam0, int iParam1, int *iParam2) {
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

// Position - 0x3162
int func_15(int iParam0, int iParam1) {
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

// Position - 0x355D
int func_16(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x358F
int func_17(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_18();
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

// Position - 0x35C3
var func_18() { return Global_1312735; }

// Position - 0x35CF
int func_19(int iParam0, int iParam1) {
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

// Position - 0x39CA
int func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_21(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_16(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x3A0C
bool func_21(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
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

// Position - 0x4C0E
int func_22(int iParam0) {
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

// Position - 0x4CE2
void func_23(int iParam0, int iParam1, int iParam2) {
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
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_13(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
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
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_24(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x4F5B
int func_24(int iParam0) {
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

// Position - 0x500B
void func_25(int iParam0) {
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

	default: func_23(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x514D
void func_26(int iParam0) {
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

	default: func_23(iVar10, iParam0, 48); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5658
void func_27(int iParam0) {
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

	default: func_23(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x56CA
void func_28(int iParam0) {
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

	default: func_23(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x573B
void func_29(int iParam0) {
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

	default: func_23(iVar10, iParam0, 6); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5821
void func_30(int iParam0) {
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

	default: func_23(iVar10, iParam0, 33); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5B41
void func_31(int iParam0) {
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

	default: func_23(iVar10, iParam0, 17); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5D3F
void func_32(int iParam0) {
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

	default: func_23(iVar10, iParam0, 18); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5F4E
void func_33(int iParam0) {
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

	default: func_23(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x604F
void func_34(int iParam0) {
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

	default: func_23(iVar10, iParam0, 84); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x69D3
void func_35(int iParam0) {
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

	default: func_23(iVar10, iParam0, 104); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x750F
void func_36(int iParam0) {
	if (iParam0 < 136) {
		func_38(iParam0);
	}
	else {
		func_37(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_23(3, iParam0, 242);
	}
}

// Position - 0x7543
void func_37(int iParam0) {
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x8149
void func_38(int iParam0) {
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x903B
void func_39(int iParam0) {
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

	default: func_23(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9167
void func_40(int iParam0) {
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

	default: func_23(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9256
void func_41(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_59(iParam1); break;

	case 2: func_58(iParam1); break;

	case 3: func_54(iParam1); break;

	case 4: func_53(iParam1); break;

	case 6: func_52(iParam1); break;

	case 5: func_51(iParam1); break;

	case 8: func_50(iParam1); break;

	case 9: func_49(iParam1); break;

	case 10: func_48(iParam1); break;

	case 1: func_47(iParam1); break;

	case 7: func_46(iParam1); break;

	case 11: func_45(iParam1); break;

	case 12: func_44(iParam1); break;

	case 13: func_43(iParam1); break;

	case 14: func_42(iParam1); break;
	}
}

// Position - 0x9346
void func_42(int iParam0) {
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

	default: func_23(iVar10, iParam0, 175); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA7EE
void func_43(int iParam0) {
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

	default: func_23(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xA92A
void func_44(int iParam0) {
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

	default: func_23(iVar10, iParam0, 47); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xAE32
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

	default: func_23(iVar10, iParam0, 63); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB495
void func_46(int iParam0) {
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

	default: func_23(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB506
void func_47(int iParam0) {
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

	default: func_23(iVar10, iParam0, 5); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB5D5
void func_48(int iParam0) {
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

	default: func_23(iVar10, iParam0, 53); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBA9A
void func_49(int iParam0) {
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

	default: func_23(iVar10, iParam0, 12); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBC24
void func_50(int iParam0) {
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

	default: func_23(iVar10, iParam0, 77); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC404
void func_51(int iParam0) {
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

	default: func_23(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC505
void func_52(int iParam0) {
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

	default: func_23(iVar10, iParam0, 134); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD41F
void func_53(int iParam0) {
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

	default: func_23(iVar10, iParam0, 117); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE0BB
void func_54(int iParam0) {
	if (iParam0 < 107) {
		func_57(iParam0);
	}
	else if (iParam0 < 227) {
		func_56(iParam0);
	}
	else {
		func_55(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_23(3, iParam0, 318);
	}
}

// Position - 0xE100
void func_55(int iParam0) {
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEBA3
void func_56(int iParam0) {
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF990
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x105C6
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

	default: func_23(iVar10, iParam0, 21); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1083C
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

	default: func_23(iVar10, iParam0, 10); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1096D
void func_60(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_77(iParam1); break;

	case 2: func_76(iParam1); break;

	case 3: func_73(iParam1); break;

	case 4: func_72(iParam1); break;

	case 6: func_71(iParam1); break;

	case 5: func_70(iParam1); break;

	case 8: func_69(iParam1); break;

	case 9: func_68(iParam1); break;

	case 10: func_67(iParam1); break;

	case 1: func_66(iParam1); break;

	case 7: func_65(iParam1); break;

	case 11: func_64(iParam1); break;

	case 12: func_63(iParam1); break;

	case 13: func_62(iParam1); break;

	case 14: func_61(iParam1); break;
	}
}

// Position - 0x10A5D
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

	default: func_23(iVar10, iParam0, 113); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1178E
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

	default: func_23(iVar10, iParam0, 10); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x118F1
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

	default: func_23(iVar10, iParam0, 53); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11E5B
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

	default: func_23(iVar10, iParam0, 45); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12380
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_23(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x123F1
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

	default: func_23(iVar10, iParam0, 5); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x124C0
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

	default: func_23(iVar10, iParam0, 48); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12947
void func_68(int iParam0) {
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

	default: func_23(iVar10, iParam0, 20); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12B93
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

	default: func_23(iVar10, iParam0, 24); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12E3C
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

	default: func_23(iVar10, iParam0, 14); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12FE8
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

	default: func_23(iVar10, iParam0, 99); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13B1F
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

	default: func_23(iVar10, iParam0, 113); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1473A
void func_73(int iParam0) {
	if (iParam0 < 60) {
		func_75(iParam0);
	}
	else {
		func_74(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_23(3, iParam0, 181);
	}
}

// Position - 0x1476E
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x154F4
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
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15B6C
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

	default: func_23(iVar10, iParam0, 6); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15C50
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

	default: func_23(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15D3F
void func_78() {
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

// Position - 0x15DB6
void func_79(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam2 == -99) {
		return;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[0 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		break;

	case joaat("player_two"):
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[3], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[1 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[4], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[2 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		break;
	}
}

// Position - 0x15E9F
int func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 1,
				   0);
			if (iParam1 == 12) {
				iVar0 = 1;
				if (iParam0 == joaat("player_zero")) {
					if (iParam2 == 31) {
						iVar0 = 0;
					}
				}
				if (iVar0 == 1) {
					uVar3 = {func_87(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14) {
						if (uVar3[iVar1] != -99 && iVar1 != 12 && iVar1 != 14) {
							if (iVar1 != 13) {
								func_80(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_91(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else {
								uVar20 = {func_81(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8) {
									func_80(iParam0, 14, uVar20[iVar2], 1, 1);
									func_91(iParam0, 14, uVar20[iVar2], 1);
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
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 0,
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
						func_80(iParam0, 3, iVar30, 1, 0);
					}
					else if (iParam2 >= 227 && iParam2 <= 242) {
						iVar30 = 176 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 3, iVar30, 1, 0);
					}
					break;

				case 11:
					if (iParam2 >= 9 && iParam2 <= 24) {
						iVar30 = 25 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 11, iVar30, 1, 0);
					}
					else if (iParam2 >= 25 && iParam2 <= 40) {
						iVar30 = 9 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 11, iVar30, 1, 0);
					}
					break;

				case 8:
					if (iParam2 >= 27 && iParam2 <= 42) {
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 43 && iParam2 <= 58) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 59 && iParam2 <= 74) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 8, iVar30, 1, 0);
					}
					break;

				case 14:
					if (iParam2 >= 64 && iParam2 <= 79) {
						iVar30 = 41 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 14, iVar30, 1, 0);
					}
					break;
				}
				break;

			case joaat("player_two"):
				switch (iParam1) {
				case 4:
					if (iParam2 >= 81 && iParam2 <= 90) {
						iVar30 = 94 + Global_69523[1 /*14*/].f_4;
						func_80(iParam0, 4, iVar30, 1, 0);
					}
					break;

				case 12:
					if (iParam2 == 2) {
						func_80(iParam0, 14, 17, 1, 0);
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

// Position - 0x16286
struct<10> func_81(int iParam0, int iParam1) {
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
		case 31: func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_86(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_86(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_86(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_86(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_86(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_86(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_86(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_86(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_86(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_86(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_86(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_86(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_86(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_86(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_86(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_86(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_86(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_86(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_86(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_86(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_86(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_86(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_86(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_86(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_86(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_86(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_86(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_86(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_86(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_86(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_86(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_86(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_86(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_86(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_86(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_86(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_86(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_86(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_86(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_86(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_86(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_86(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_86(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_86(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_86(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_86(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_86(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_86(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_86(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_86(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_86(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_86(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_86(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_86(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_86(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_86(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_86(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_86(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_86(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_86(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_86(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_86(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_86(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_86(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_86(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_86(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_86(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_86(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_86(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_86(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_86(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_86(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_86(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_86(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x16BB5
void func_82(int iParam0, int iParam1, int iParam2, int iParam3)
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
						(*iParam0)[vVar16.z] = func_83(iParam1, vVar16.x, 14, iVar0);
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

// Position - 0x16CDF
int func_83(int iParam0, int iParam1, int iParam2, int iParam3) {
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
					return func_85(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_24(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_84(iParam0, func_24(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x16DBF
int func_84(int iParam0, int iParam1) {
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

// Position - 0x17166
int func_85(int iParam0) {
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

// Position - 0x171C7
void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0x1720F
struct<17> func_87(int iParam0, int iParam1) {
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
				func_90(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_90(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_90(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_90(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_90(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_90(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_90(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_90(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_90(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_90(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_90(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_90(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_90(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_90(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_90(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_90(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_90(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_90(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_90(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_90(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_90(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_90(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_90(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_90(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_90(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_90(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_90(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_90(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_90(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_90(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_90(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_90(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_90(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_90(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_90(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_90(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_90(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_90(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_90(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_90(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_90(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_90(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_90(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_90(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_90(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_90(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_90(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_90(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_90(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_90(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_90(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_90(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_90(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_90(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_88(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_90(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_90(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_90(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_90(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_90(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_90(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_90(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_90(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_90(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_90(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_90(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_90(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_90(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_90(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_90(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_90(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_90(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_90(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_90(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_90(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_90(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_90(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_90(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_90(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_90(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_90(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_90(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_90(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_90(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_90(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_90(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_90(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_90(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_90(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_90(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_90(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_90(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_90(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_90(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_90(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_90(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_90(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_90(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_90(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_90(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_90(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_90(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_88(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_90(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_90(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_90(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_90(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_90(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_90(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_90(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_90(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_90(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_90(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_90(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_90(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_90(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_90(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_90(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_90(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_90(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_90(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_90(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_90(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_90(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_90(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_90(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_90(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_90(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_90(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_90(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_90(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_90(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_90(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_90(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_90(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_90(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_90(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_90(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_90(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_90(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_90(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_90(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_90(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_90(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_90(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_90(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_90(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_90(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_90(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_90(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_90(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_88(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_90(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_90(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_90(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_90(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_90(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_90(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_90(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_90(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_90(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_90(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_90(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_90(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_90(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_90(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_90(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_90(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_90(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_90(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_90(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_90(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_90(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_90(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_90(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_90(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_90(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_90(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_88(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_90(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_90(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_90(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_90(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_90(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_90(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_90(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_90(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_90(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_90(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_90(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_90(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_90(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_90(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_90(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_90(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_90(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_90(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_90(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_90(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_90(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_90(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_90(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_90(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_90(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_90(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_90(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_90(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_88(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x1905A
void func_88(var* uParam0, int iParam1, int iParam2, int iParam3)
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
						(*uParam0)[func_89(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_89(vVar16.z)] = func_83(iParam1, vVar16.x, func_89(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_89(vVar16.z)] = vVar16.y;
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

// Position - 0x19244
int func_89(int iParam0) {
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

// Position - 0x192F4
void func_90(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0x19365
int func_91(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 1,
				   0);
		}
		else {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 0,
				   1);
		}
		return 1;
	}
	return 0;
}

// Position - 0x19400
int func_92() {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 50) {
		if (func_93(iVar0)) {
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x1942F
bool func_93(int iParam0) {
	int iVar0;
	int *iVar1;

	func_94(iParam0, &iVar0, &iVar1);
	return gameplay::is_bit_set(Global_101700.f_9008.f_135[iVar0], iVar1);
}

// Position - 0x19454
void func_94(int iParam0, int *iParam1, int *iParam2) {
	*iParam1 = iParam0 / 32;
	*iParam2 = iParam0 % 32;
}

// Position - 0x1946C
void func_95(int iParam0, int iParam1) {
	int iVar0;
	int *iVar1;

	func_94(iParam0, &iVar0, &iVar1);
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_9008.f_135[iVar0], iVar1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_9008.f_135[iVar0], iVar1);
	}
}

// Position - 0x194AC
void func_96(int *iParam0, vector3 vParam1, float fParam4) {
	*iParam0 = graphics::create_tracked_point();
	if (*iParam0 == 0) {
	}
	else {
		graphics::set_tracked_point_info(*iParam0, vParam1, fParam4);
	}
}

// Position - 0x194D2
int func_97(vector3 vParam0, float fParam3, float fParam4) {
	float fVar0;
	float fVar1;

	if (graphics::get_screen_coord_from_world_coord(vParam0, &fVar0, &fVar1)) {
		if (fVar0 >= fParam3 && fVar0 <= fParam4) {
			if (fVar1 >= fParam3 && fVar1 <= fParam4) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x19512
void func_98(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, float fParam10) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	graphics::get_screen_coord_from_world_coord(vParam0, &vVar0, &vVar0.f_1);
	graphics::get_screen_coord_from_world_coord(vParam3, &vVar3, &vVar3.f_1);
	graphics::get_screen_coord_from_world_coord(vParam6, &vVar6, &vVar6.f_1);
	*fParam9 = system::vdist(vVar0, vVar3);
	*fParam10 = system::vdist(vVar0, vVar6);
}

// Position - 0x19565
void func_99(int iParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;

	vVar0 = {entity::get_entity_coords(player::player_ped_id(), 0)};
	fVar11 = 0.01f;
	if (iParam0 == 29 && vVar0.z <= 35f) {
		vVar3 = {-95.402f, -744.506f, 37.2165f};
		vVar6 = {0.9047f, 0.4261f, 0f};
		fVar9 = 0.51f;
		fVar10 = 0.35f;
	}
	else if (iParam0 == 29 && vVar0.z <= 36f) {
		vVar3 = {-95.4013f, -744.5073f, 37.1846f};
		vVar6 = {0.9047f, 0.4261f, 0f};
		fVar9 = 0.51f;
		fVar10 = 0.43f;
	}
	else {
		vVar3 = {Local_54[iParam0 /*8*/]};
		vVar6 = {Local_54[iParam0 /*8*/].f_3};
		fVar9 = Local_54[iParam0 /*8*/].f_6;
		fVar10 = Local_54[iParam0 /*8*/].f_7;
	}
	fVar12 = fVar9 / 2f;
	fVar13 = fVar10 / 2f;
	vVar14 = {func_100(func_101(vVar6, 0f, 0f, -1f))};
	vVar17 = {func_100(func_101(vVar6, vVar14))};
	*uParam1 = {vVar3 + FtoV(fVar12) * vVar14 + FtoV(fVar13) * vVar17 + vVar6 * FtoV(fVar11)};
	*uParam2 = {vVar3 + FtoV(fVar12) * -vVar14 + FtoV(fVar13) * vVar17 + vVar6 * FtoV(fVar11)};
	*uParam3 = {vVar3 + FtoV(fVar12) * vVar14 + FtoV(fVar13) * -vVar17 + vVar6 * FtoV(fVar11)};
	*uParam4 = {vVar3 + FtoV(fVar12) * -vVar14 + FtoV(fVar13) * -vVar17 + vVar6 * FtoV(fVar11)};
}

// Position - 0x19706
Vector3 func_100(vector3 vParam0) {
	float fVar0;

	fVar0 = system::vmag(vParam0);
	return vParam0 / FtoV(fVar0);
}

// Position - 0x19720
Vector3 func_101(vector3 vParam0, vector3 vParam3) {
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z,
		   vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

// Position - 0x19759
int func_102(float *fParam0) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	iVar1 = -1;
	vVar2 = {entity::get_entity_coords(player::player_ped_id(), 0)};
	iVar0 = 0;
	while (iVar0 < 50) {
		if (!func_93(iVar0)) {
			fVar5 = system::vdist2(vVar2, Local_54[iVar0 /*8*/]);
			if (iVar1 == -1 || fVar5 < *fParam0) {
				iVar1 = iVar0;
				*fParam0 = fVar5;
			}
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x197BE
bool func_103(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x197CC
bool func_104(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x197F7
bool func_105() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_101700.f_9008.f_135[1] == -1) {
		return true;
	}
	func_94(49, &iVar0, &iVar1);
	if (iVar0 > 0) {
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			if (Global_101700.f_9008.f_135[iVar2] != -1) {
				return false;
			}
			iVar2++;
		}
	}
	if (iVar1 == 31) {
		return Global_101700.f_9008.f_135[iVar0] == -1;
	}
	return Global_101700.f_9008.f_135[iVar0] == system::round(system::pow(2f, system::to_float(iVar1 + 1))) - 1;
}

// Position - 0x1988A
void func_106() {
	if (iLocal_460) {
		if (graphics::has_scaleform_movie_loaded(iLocal_459)) {
			graphics::draw_scaleform_movie(iLocal_459, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
		}
		switch (iLocal_458) {
		case 0:
			iLocal_462 = gameplay::get_game_timer() + 2000;
			iLocal_458++;
			break;

		case 1:
			if (iLocal_462 < gameplay::get_game_timer()) {
				if (!func_112()) {
					iLocal_459 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
					iLocal_462 = gameplay::get_game_timer() + 5000;
					iLocal_458++;
				}
			}
			break;

		case 2:
			if (graphics::has_scaleform_movie_loaded(iLocal_459) || iLocal_462 < gameplay::get_game_timer()) {
				if (iLocal_462 < gameplay::get_game_timer()) {
					iLocal_460 = 0;
					iLocal_458 = 0;
				}
				else {
					iLocal_458++;
				}
			}
			break;

		case 3:
			graphics::_push_scaleform_movie_function(iLocal_459, "SHOW_BRIDGES_KNIVES_PROGRESS");
			func_111("PM_TITLE");
			graphics::_push_scaleform_movie_function_parameter_int(50);
			func_111("PM_PASS");
			func_111("PM_CHALLENGE");
			graphics::_push_scaleform_movie_function_parameter_int(func_92());
			graphics::_pop_scaleform_movie_function_void();
			iLocal_462 = gameplay::get_game_timer() + 7500;
			audio::play_sound_frontend(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
			iLocal_458++;
			break;

		case 4:
			if (iLocal_462 < gameplay::get_game_timer() || cam::is_screen_faded_out() ||
				!player::is_player_playing(player::player_id()) || func_112() ||
				!player::is_player_control_on(player::player_id()) || func_110() || func_109()) {
				graphics::_push_scaleform_movie_function(iLocal_459, "SHARD_ANIM_OUT");
				graphics::_push_scaleform_movie_function_parameter_int(1);
				graphics::_push_scaleform_movie_function_parameter_float(0.33f);
				graphics::_pop_scaleform_movie_function_void();
				iLocal_462 = gameplay::get_game_timer() + 500;
				iLocal_458++;
			}
			break;

		case 5:
			if (iLocal_462 < gameplay::get_game_timer() || cam::is_screen_faded_out() ||
				!player::is_player_playing(player::player_id()) || func_112() ||
				!player::is_player_control_on(player::player_id()) || func_110() || func_109()) {
				iLocal_458++;
			}
			break;

		case 6:
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_459);
			if (func_105()) {
				iLocal_462 = gameplay::get_game_timer() + 1000;
				iLocal_458++;
			}
			else {
				iLocal_460 = 0;
				iLocal_458 = 0;
			}
			break;

		case 7:
			if (iLocal_462 < gameplay::get_game_timer()) {
				if (func_108(62) && !func_108(24)) {
					func_107("PM_CLOTHES", 10000);
				}
				iLocal_460 = 0;
			}
			break;
		}
	}
}

// Position - 0x19B0B
void func_107(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x19B22
int func_108(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x19B4E
int func_109() {
	if (Global_35781 == 9 || Global_35781 == 10) {
		return Global_100352;
	}
	Global_100352 = 0;
	return 0;
}

// Position - 0x19B7B
int func_110() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x19BB9
void func_111(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x19BCB
int func_112() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x19BF5
bool func_113() {
	if (Global_16781) {
		return true;
	}
	return false;
}

// Position - 0x19C0B
void func_114() {
	func_115(0, 157.9448f, -1171.397f, 29.1414f, -0.0872f, 0.9962f, -0.0002f, 0.505f, 0.47f);
	func_115(1, 1124.153f, -1270.971f, 23.3037f, -0.8098f, -0.5868f, 0f, 0.4f, 0.4f);
	func_115(2, 149.5787f, -1183.787f, 31.1711f, 0.4427f, -0.7223f, 0.5313f, 0.49f, 0.5f);
	func_115(3, -146.9499f, 229.0641f, 97.7295f, 0f, 1f, 0f, 0.42f, 0.42f);
	func_115(4, -1939.495f, -408.4034f, 37.6704f, 0.5596f, 0.8288f, -0.0011f, 0.41f, 0.38f);
	func_115(5, 2547.155f, 394.4722f, 111.3622f, -0.9994f, 0.0341f, 0f, 0.54f, 0.52f);
	func_115(6, -1104.941f, 2724.464f, 21.7053f, 0.7479f, 0.6638f, 0f, 0.44f, 0.41f);
	func_115(7, 205.5913f, -2026.605f, 17.8582f, -0.3632f, -0.9317f, -0.0015f, 0.39f, 0.33f);
	func_115(8, 1143.953f, -667.2766f, 58.1309f, 0.9955f, 0.0953f, 0f, 0.59f, 0.51f);
	func_115(9, -495.583f, -457.0046f, 32.6311f, -0.9928f, 0.1194f, -0.0002f, 0.6f, 0.61f);
	func_115(10, 1674.295f, 4973.919f, 45.5824f, -0.707f, 0.7072f, 0f, 0.38f, 0.35f);
	func_115(11, 1511.48f, 3567.613f, 38.0881f, 0.866f, 0.5f, -0.0004f, 0.39f, 0.38f);
	func_115(12, 84.4525f, 213.9647f, 119.2064f, 0.9397f, -0.3419f, -0.0018f, 0.6f, 0.6f);
	func_115(13, 3420.168f, 3769.68f, 35.8602f, -0.4229f, 0.9062f, 0.0001f, 0.71f, 0.72f);
	func_115(14, -420.5195f, 1090.325f, 332.0972f, -0.9639f, 0.2661f, 0.0007f, 0.41f, 0.39f);
	func_115(15, 341.514f, 345.7831f, 105.1536f, 0.9709f, -0.2397f, 0f, 0.51f, 0.5f);
	func_115(16, -940.438f, 332.8253f, 72.5064f, 0f, 1f, 0f, 0.33f, 0.31f);
	func_115(17, -1828.902f, -1266.722f, 7.7045f, 0.766f, -0.6428f, 0f, 0.189f, 0.16f);
	func_115(18, -1168.009f, -2033.271f, 14.4629f, -0.6428f, -0.766f, 0f, 0.409f, 0.41f);
	func_115(19, -346.3339f, -2275.362f, 7.0538f, 1f, 0f, 0f, 0.419f, 0.42f);
	func_115(20, 1725.725f, 4780.778f, 42.7613f, 1f, 0f, 0f, 0.38f, 0.38f);
	func_115(21, 2394.642f, 3142.628f, 48.0601f, 0.9096f, -0.4155f, 0f, 0.52f, 0.52f);
	func_115(22, 559.5842f, -551.627f, 27.5494f, 0.9925f, -0.1219f, 0f, 0.32f, 0.32f);
	func_115(23, 282.2999f, -477.448f, 33.6627f, -0.2438f, 0.9698f, -0.0001f, 0.3f, 0.3f);
	func_115(24, -808.8348f, -2749.262f, 13.5377f, 0.866f, -0.5f, 0f, 0.42f, 0.42f);
	func_115(25, 354.246f, 3397.849f, 36.0745f, 0.3677f, -0.93f, 0f, 0.39f, 0.36f);
	func_115(26, 472.6187f, -1470.425f, 34.864f, 0.2627f, -0.9649f, 0f, 0.59f, 0.54f);
	func_115(27, -466.3089f, -1447.866f, 20.7979f, 0.6997f, -0.7144f, 0f, 0.58f, 0.58f);
	func_115(28, -1370.422f, -524.2557f, 30.5145f, -0.8256f, -0.5643f, -0.0001f, 0.41f, 0.39f);
	func_115(29, -95.4015f, -744.507f, 37.1422f, 0.9047f, 0.4261f, 0f, 0.48f, 0.48f);
	func_115(30, -1985.92f, 4521.647f, 19.9029f, 0.6943f, 0.6959f, -0.1836f, 0.63f, 0.62f);
	func_115(31, 555.9847f, 2800.784f, 41.7896f, -0.0712f, 0.9975f, 0f, 0.44f, 0.43f);
	func_115(32, 1914.375f, 3735.661f, 33.7799f, -0.8666f, -0.4989f, 0.0002f, 0.34f, 0.33f);
	func_115(33, 753.8581f, -1861.106f, 51.9038f, 0.0823f, 0.9966f, -0.0012f, 0.54f, 0.53f);
	func_115(34, 1570.844f, -2130.846f, 77.1156f, 0.9637f, 0.267f, 0.0006f, 0.48f, 0.45f);
	func_115(35, 894.0941f, 3619.246f, 32.319f, 0f, -1f, 0f, 0.36f, 0.35f);
	func_115(36, -251.753f, 6235.92f, 30.9796f, 0.7092f, -0.705f, 0f, 0.23f, 0.23f);
	func_115(37, 1240.086f, -3318.439f, 5.6199f, 1f, 0f, 0f, 0.42f, 0.42f);
	func_115(38, -1382.786f, -905.4655f, 15.0535f, 0.7934f, 0.6087f, 0f, 0.7f, 0.54f);
	func_115(39, -1677.953f, 174.439f, 62.1203f, 0.4226f, -0.9063f, 0.6201f, 0.244f, 0.23f);
	func_115(40, 249.8769f, -3310.74f, 5.6313f, 0f, -0.9063f, 0.0001f, 0.654f, 0.66f);
	func_115(41, 158.6217f, 6657.858f, 35.7506f, 0.7054f, 0.7059f, 0f, 0.544f, 0.47f);
	func_115(42, -1378.472f, -362.0254f, 42.8204f, -0.9687f, 0.2484f, 0f, 1.744f, 1.65f);
	func_115(43, -1706.735f, -265.9444f, 50.891f, -0.8055f, 0.5926f, 0f, 0.365f, 0.32f);
	func_115(44, -1279.316f, -1611.953f, 6.3379f, -0.8219f, -0.5697f, 0.0001f, 2.439f, 2.091f);
	func_115(45, -1035.474f, -160.1076f, 37.9679f, -0.9366f, 0.3504f, 0f, 0.273f, 0.228f);
	func_115(46, 591.9451f, 142.8853f, 103.5083f, -0.3445f, -0.9388f, 0.0038f, 0.355f, 0.36f);
	func_115(47, -463.3655f, -18.1181f, 51.925f, -0.9986f, 0.0523f, 0f, 0.834f, 0.829f);
	func_115(48, -956.4725f, -775.4922f, 16.6361f, 0.6088f, 0.7934f, 0f, 0.258f, 0.263f);
	func_115(49, -814.0197f, -1255.709f, 5.4366f, -0.6431f, -0.7658f, -0.0001f, 0.471f, 0.471f);
}

// Position - 0x1A45B
void func_115(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8) {
	Local_54[iParam0 /*8*/] = {vParam1};
	Local_54[iParam0 /*8*/].f_3 = {vParam4};
	Local_54[iParam0 /*8*/].f_6 = fParam7;
	Local_54[iParam0 /*8*/].f_7 = fParam8;
}

// Position - 0x1A491
void func_116(int *iParam0) {
	if (*iParam0 != -1) {
		graphics::destroy_tracked_point(*iParam0);
		*iParam0 = -1;
	}
}