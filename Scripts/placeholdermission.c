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
#pragma endregion //}

void __EntryFunction__() {
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
	if (cam::is_screen_faded_out()) {
		cam::do_screen_fade_in(500);
	}
	if (player::has_force_cleanup_occurred(3)) {
		func_3();
		func_2();
	}
	gameplay::set_mission_flag(1);
	while (true) {
		ui::set_text_colour(255, 255, 255, 255);
		ui::set_text_scale(0.75f, 0.9f);
		ui::set_text_wrap(0f, 1f);
		func_1(0.05f, 0.63f, "PLCHLD_MISS", 0);
		ui::set_text_colour(255, 255, 255, 255);
		ui::set_text_scale(0.4f, 0.45f);
		ui::set_text_wrap(0f, 1f);
		func_1(0.05f, 0.7f, "PLCHLD_PASS", 0);
		system::wait(0);
	}
}

// Position - 0xD8
void func_1(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}

// Position - 0xF0
void func_2() { script::terminate_this_thread(); }

// Position - 0xFC
void func_3() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_18(0)) {
		if (!func_17()) {
			iVar0 = func_16();
			if (iVar0 != -1) {
				if (!func_11(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_4();
		}
	}
}

// Position - 0x16B
void func_4() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_5()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_5()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x252
int func_5() {
	func_6();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x26B
void func_6() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_10(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_9(player::player_ped_id());
			if (func_8(iVar0) && (!func_7(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_8(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x368
bool func_7(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x376
bool func_8(int iParam0) { return iParam0 < 3; }

// Position - 0x382
int func_9(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_10(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x3BF
int func_10(int iParam0) {
	if (func_8(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3E9
int func_11(int iParam0) {
	int iVar0;
	int iVar1;

	func_4();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = G_TextMessageConfig.f_109[iVar0 /*4*/];
	func_15(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_12(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0x500
void func_12(var *uParam0, int iParam1) {
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
			if (!func_14(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_13(&uParam0->f_1524[iVar0]);
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

// Position - 0x6C9
void func_13(int *iParam0) { *iParam0 = -15; }

// Position - 0x6D7
int func_14(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_14(8, uParam1, fParam2);

	case 10: return func_14(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0x1046
void func_15(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x1084
int func_16() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x10B9
int func_17() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x10F7
int func_18(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}
