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
int iLocal_18 = 0;
char *sLocal_19 = NULL;
var uLocal_20 = 0;
int iLocal_21 = 0;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 10;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 2;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 8;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 8;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
float fLocal_90 = 0f;
var uLocal_91 = 0;
var uLocal_92 = 0;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
float fLocal_96 = 0f;
float fLocal_97 = 0f;
var uLocal_98 = 0;
struct<2> Local_99 = {
	0, 0
};
var uLocal_101[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_134 = 0;
int iLocal_135 = 0;
struct<533> Local_136 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
		0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
vector3 vLocal_669 = {0f, 0f, 0f};
var uLocal_672 = 12;
var uLocal_673 = 0;
var uLocal_674 = 0;
var uLocal_675 = 0;
var uLocal_676 = 0;
var uLocal_677 = 0;
var uLocal_678 = 0;
var uLocal_679 = 0;
var uLocal_680 = 0;
var uLocal_681 = 0;
var uLocal_682 = 0;
var uLocal_683 = 0;
var uLocal_684 = 0;
var uLocal_685 = 12;
var uLocal_686 = 0;
var uLocal_687 = 0;
var uLocal_688 = 0;
var uLocal_689 = 0;
var uLocal_690 = 0;
var uLocal_691 = 0;
var uLocal_692 = 0;
var uLocal_693 = 0;
var uLocal_694 = 0;
var uLocal_695 = 0;
var uLocal_696 = 0;
var uLocal_697 = 0;
var uLocal_698 = 12;
var uLocal_699 = 0;
var uLocal_700 = 0;
var uLocal_701 = 0;
var uLocal_702 = 0;
var uLocal_703 = 0;
var uLocal_704 = 0;
var uLocal_705 = 0;
var uLocal_706 = 0;
var uLocal_707 = 0;
var uLocal_708 = 0;
var uLocal_709 = 0;
var uLocal_710 = 0;
var uLocal_711 = 9;
var uLocal_712 = 0;
var uLocal_713 = 0;
var uLocal_714 = 0;
var uLocal_715 = 0;
var uLocal_716 = 0;
var uLocal_717 = 0;
var uLocal_718 = 0;
var uLocal_719 = 0;
var uLocal_720 = 0;
var uLocal_721 = 9;
var uLocal_722 = 0;
var uLocal_723 = 0;
var uLocal_724 = 0;
var uLocal_725 = 0;
var uLocal_726 = 0;
var uLocal_727 = 0;
var uLocal_728 = 0;
var uLocal_729 = 0;
var uLocal_730 = 0;
var uLocal_731 = 0;
var uLocal_732 = 0;
var uLocal_733 = 0;
var uLocal_734 = 0;
var uLocal_735 = 0;
var uLocal_736 = 0;
int iLocal_737 = 0;
int iLocal_738 = 0;
int iLocal_739 = 0;
struct<20> Local_740 = {
	4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_760 = 0;
int iLocal_761 = 0;
vector3 vLocal_762 = {0f, 0f, 0f};
vector3 vLocal_765 = {0f, 0f, 0f};
vector3 vLocal_768 = {0f, 0f, 0f};
float fLocal_771 = 0f;
float fLocal_772 = 0f;
float fLocal_773 = 0f;
float fLocal_774 = 0f;
float fLocal_775 = 0f;
int iLocal_776 = 0;
int iLocal_777 = 0;
int iLocal_778 = 0;
int iLocal_779 = 0;
char *sLocal_780 = NULL;
char *sLocal_781 = NULL;
char *sLocal_782 = NULL;
char *sLocal_783 = NULL;
int iLocal_784 = 0;
int iLocal_785 = 0;
int iLocal_786 = 0;
int iLocal_787 = 0;
int iLocal_788 = 0;
var uLocal_789 = 0;
int iLocal_790 = 0;
int iLocal_791 = 0;
int iLocal_792 = 0;
var uLocal_793 = 0;
int iLocal_794 = 0;
int iLocal_795 = 0;
int iLocal_796 = 0;
var uLocal_797 = 0;
int iLocal_798 = 0;
int iLocal_799 = 0;
int iLocal_800 = 0;
int iLocal_801 = 0;
int iLocal_802 = 0;
vector3 vLocal_803 = {0f, 0f, 0f};
vector3 vLocal_806 = {0f, 0f, 0f};
int iLocal_809 = 0;
int iLocal_810 = 0;
struct<16> Local_811 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_827 = 0;
int iLocal_828 = 0;
int iLocal_829 = 0;
var *uLocal_830 = NULL;
var uLocal_831 = 0;
var uLocal_832 = 0;
var uLocal_833 = 0;
var uLocal_834 = 0;
var uLocal_835 = 0;
var uLocal_836 = 0;
var uLocal_837 = 0;
int iLocal_838 = 0;
struct<4> Local_839 = {
	0, 0, 0, 0
};
var uScriptParam_0 = 0;
var uScriptParam_1 = 0;
var uScriptParam_2 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = 0.05f + 0.275f - 0.01f;
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_778 = -1;
	sLocal_783 = "MISSTATTOO_PARLOUR@SHOP_IG_4BPLAYER";
	iLocal_828 = 207;
	StringCopy(&Local_839, "", 16);
	iLocal_134 = uScriptParam_0;
	iLocal_135 = func_829(iLocal_134);
	gameplay::set_bit(&Global_91543.f_1308[iLocal_134], 16);
	func_824();
	func_823(iLocal_134);
	if (func_822(1)) {
		iLocal_800 = 1;
	}
	Local_136.f_3 = -1;
	func_821(&uLocal_830, iLocal_134, 0);
	while (true) {
		system::wait(0);
		func_820(&Local_136.f_12);
		if (func_819(iLocal_134) && !func_809(&Local_136, iLocal_134)) {
			if (func_808(&Local_136)) {
				iVar0 = 0;
				func_799(&Local_136, &iVar0, 0, Local_136.f_30);
				func_790(&Local_136, &Local_136.f_106);
				if (Local_136.f_9) {
					if (!func_789(Local_136)) {
						func_781(&Local_136, &Local_136.f_106, 0);
					}
				}
				func_780();
				func_772();
				switch (Local_136.f_11) {
				case 0: func_762(); break;

				case 1:
					func_758(0);
					func_757();
					if (Local_136.f_11 == 2) {
						func_733();
					}
					break;

				case 2:
					func_733();
					func_729(&Local_136, &Local_136.f_106);
					break;

				case 3:
					func_726(&Local_136, func_728(iLocal_135, Local_136));
					func_725();
					func_701();
					func_693();
					break;

				case 4:
					func_725();
					func_238();
					func_729(&Local_136, &Local_136.f_106);
					break;

				case 5:
					func_725();
					Local_136.f_11 = 1;
					break;
				}
			}
		}
		else {
			func_21(0);
		}
		if (func_14(&Local_136)) {
			func_8();
		}
		func_1();
	}
}

// Position - 0x226
void func_1() {
	int iVar0;
	int iVar1;

	if (Local_136.f_9 && network::network_is_game_in_progress()) {
		uLocal_101[player::player_id()] = Global_91543.f_1308[Local_136];
		if (network::network_is_host_of_this_script()) {
			func_6(Local_136);
			if (Local_136.f_531) {
				if (network::is_time_more_than(network::get_network_time(), Local_136.f_532)) {
					iVar0 = 1;
					if (!gameplay::is_bit_set(Global_91543.f_1308[Local_136], 0) &&
						!gameplay::is_bit_set(Global_91543.f_1308[Local_136], 5) &&
						(!entity::does_entity_exist(Local_136.f_12) || ped::is_ped_injured(Local_136.f_12))) {
						iVar1 = 0;
						while (iVar1 < 32) {
							if (func_5(player::int_to_playerindex(iVar1), 1, 1)) {
								if (gameplay::is_bit_set(uLocal_101[iVar1], 5)) {
									iVar0 = 0;
									iVar1 = 33;
								}
							}
							iVar1++;
						}
					}
					else {
						iVar0 = 0;
					}
					if (Global_2494199.f_4693) {
						iVar0 = 0;
					}
					func_2(Local_136, iVar0, 0, 1);
					Local_136.f_531 = 0;
				}
			}
			else {
				Local_136.f_532 = network::get_time_offset(network::get_network_time(), 2000);
				Local_136.f_531 = 1;
			}
		}
		else {
			Local_136.f_532 = network::get_network_time();
			Local_136.f_531 = 1;
		}
	}
}

// Position - 0x345
void func_2(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;

	if (!network::network_is_game_in_progress()) {
		return;
	}
	if (iParam1) {
		iVar0 = 1;
		iVar1 = 0;
	}
	else {
		iVar0 = 0;
		iVar1 = 1;
	}
	if (iParam2) {
		if (iParam1) {
			iVar0 = 4;
			iVar1 = 3;
		}
		else {
			iVar0 = 3;
			iVar1 = 4;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2) {
		iVar3 = func_4(iParam0, iVar2);
		if (iVar3 != 226) {
			Var4 = {func_3(iVar3)};
			if (!object::_does_door_exist(Var4.f_5)) {
				object::add_door_to_system(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
			}
			if (object::_does_door_exist(Var4.f_5)) {
				if (network::network_has_control_of_door(Var4.f_5)) {
					if (object::_0x160AA1B32F6139B8(Var4.f_5) == iVar1) {
						object::_set_door_acceleration_limit(Var4.f_5, iVar0, iParam3, 1);
					}
				}
				else {
					network::network_request_control_of_door(Var4.f_5);
				}
			}
		}
		iVar2++;
	}
}

// Position - 0x410
struct<7> func_3(int iParam0) {
	struct<7> Var0;

	switch (iParam0) {
	case 0:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {133f, -1711f, 29f};
		Var0.f_5 = 1804701345;
		break;

	case 1:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-1287.857f, -1115.742f, 7.1401f};
		Var0.f_5 = 1403601067;
		break;

	case 2:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1932.952f, 3725.154f, 32.9944f};
		Var0.f_5 = -2031139496;
		break;

	case 3:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1207.873f, -470.063f, 66.358f};
		Var0.f_5 = 1796834809;
		break;

	case 4:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-29.8692f, -148.1571f, 57.2265f};
		Var0.f_5 = 96153298;
		break;

	case 5:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-280.7851f, 6232.782f, 31.8455f};
		Var0.f_5 = -281080954;
		break;

	case 6:
		Var0.f_3 = joaat("v_ilev_hd_door_l");
		Var0 = {-824f, -187f, 38f};
		Var0 = {-823.2001f, -187.0831f, 37.819f};
		Var0.f_5 = 183249434;
		break;

	case 7:
		Var0.f_3 = joaat("v_ilev_hd_door_r");
		Var0 = {-823f, -188f, 38f};
		Var0 = {-822.4442f, -188.3924f, 37.819f};
		Var0.f_5 = 758345384;
		break;

	case 8:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {82.3186f, -1392.752f, 29.5261f};
		Var0.f_5 = -1069262641;
		break;

	case 9:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {82.3186f, -1390.476f, 29.5261f};
		Var0.f_5 = 1968521986;
		break;

	case 10:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1686.983f, 4821.741f, 42.2131f};
		Var0.f_5 = -2143706301;
		break;

	case 11:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1687.282f, 4819.484f, 42.2131f};
		Var0.f_5 = -1403421822;
		break;

	case 12:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {418.637f, -806.457f, 29.6396f};
		Var0.f_5 = -1950137670;
		break;

	case 13:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {418.637f, -808.733f, 29.6396f};
		Var0.f_5 = 1226259807;
		break;

	case 14:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-1096.661f, 2705.446f, 19.2578f};
		Var0.f_5 = 1090833557;
		break;

	case 15:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1094.965f, 2706.964f, 19.2578f};
		Var0.f_5 = 897332612;
		break;

	case 16:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1196.825f, 2703.221f, 38.3726f};
		Var0.f_5 = 1095946640;
		break;

	case 17:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1199.101f, 2703.221f, 38.3726f};
		Var0.f_5 = 801975945;
		break;

	case 18:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-818.7642f, -1079.544f, 11.4781f};
		Var0.f_5 = -167996547;
		break;

	case 19:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-816.7932f, -1078.406f, 11.4781f};
		Var0.f_5 = -1935818563;
		break;

	case 20:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-0.0564f, 6517.461f, 32.0278f};
		Var0.f_5 = 1891185217;
		break;

	case 21:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1.7253f, 6515.914f, 32.0278f};
		Var0.f_5 = 1236591681;
		break;

	case 22:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-1201.435f, -776.8566f, 17.9918f};
		Var0.f_5 = 1980808685;
		break;

	case 23:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {617.2458f, 2751.022f, 42.7578f};
		Var0.f_5 = 1352749757;
		break;

	case 24:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {127.8201f, -211.8274f, 55.2275f};
		Var0.f_5 = -566554453;
		break;

	case 25:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-3167.75f, 1055.536f, 21.5329f};
		Var0.f_5 = 1284749450;
		break;

	case 26:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-716.6754f, -155.42f, 37.6749f};
		Var0.f_5 = 261851994;
		break;

	case 27:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-715.6154f, -157.2561f, 37.6749f};
		Var0.f_5 = 217646625;
		break;

	case 28:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-157.0924f, -306.4413f, 39.994f};
		Var0.f_5 = 1801139578;
		break;

	case 29:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-156.4022f, -304.4366f, 39.994f};
		Var0.f_5 = -2123275866;
		break;

	case 30:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1454.782f, -231.7927f, 50.0565f};
		Var0.f_5 = 1312689981;
		break;

	case 31:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1456.201f, -233.3682f, 50.0565f};
		Var0.f_5 = -595055661;
		break;

	case 32:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {321.81f, 178.36f, 103.68f};
		Var0.f_5 = -265260897;
		break;

	case 33:
		Var0.f_3 = -1212951353;
		Var0 = {1859.89f, 3749.79f, 33.18f};
		Var0.f_5 = -1284867488;
		break;

	case 34:
		Var0.f_3 = -1212951353;
		Var0 = {-289.1752f, 6199.112f, 31.637f};
		Var0.f_5 = 302307081;
		break;

	case 35:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-1155.454f, -1424.008f, 5.0461f};
		Var0.f_5 = -681886015;
		break;

	case 36:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {1321.286f, -1650.597f, 52.3663f};
		Var0.f_5 = -2086556500;
		break;

	case 37:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-3167.789f, 1074.767f, 20.9209f};
		Var0.f_5 = -1496386696;
		break;

	case 38:
		Var0.f_3 = joaat("v_ilev_mm_doorm_l");
		Var0 = {-817f, 179f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2097039789;
		break;

	case 39:
		Var0.f_3 = joaat("v_ilev_mm_doorm_r");
		Var0 = {-816f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2127416656;
		break;

	case 40:
		Var0.f_3 = joaat("prop_ld_garaged_01");
		Var0 = {-815f, 186f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1986583853;
		Var0.f_6 = 6.5f;
		break;

	case 41:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-797f, 177f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 776026812;
		break;

	case 42:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-795f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 698422331;
		break;

	case 43:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-793f, 181f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 535076355;
		break;

	case 44:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-794f, 183f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 474675599;
		break;

	case 45:
		Var0.f_3 = joaat("prop_bh1_48_gate_1");
		Var0 = {-849f, 179f, 70f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1978427516;
		break;

	case 46:
		Var0.f_3 = joaat("v_ilev_mm_windowwc");
		Var0 = {-802.7333f, 167.5041f, 77.5824f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1700375831;
		break;

	case 47:
		Var0.f_3 = joaat("v_ilev_fa_frontdoor");
		Var0 = {-14f, -1441f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 613961892;
		break;

	case 48:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {-15f, -1427f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -272570634;
		break;

	case 49:
		Var0.f_3 = joaat("prop_sc1_21_g_door_01");
		Var0 = {-25.28f, -1431.06f, 30.84f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1040675994;
		break;

	case 50:
		Var0.f_3 = joaat("v_ilev_fh_frontdoor");
		Var0 = {7.52f, 539.53f, 176.18f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1201219326;
		break;

	case 51:
		Var0.f_3 = joaat("v_ilev_trevtraildr");
		Var0 = {1973f, 3815f, 34f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1736361794;
		break;

	case 52:
		Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
		Var0 = {1972.787f, 3824.554f, 32.5831f};
		Var0.f_5 = 1113956670;
		Var0.f_6 = 12f;
		break;

	case 53:
		Var0.f_3 = joaat("v_ilev_trev_doorfront");
		Var0 = {-1150f, -1521f, 11f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1361617046;
		break;
	}
	switch (iParam0) {
	case 54:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-1145.9f, -1991.14f, 14.18f};
		Var0.f_5 = -1871080926;
		Var0.f_6 = 25f;
		break;

	case 55:
		Var0.f_3 = joaat("prop_id2_11_gdoor");
		Var0 = {723.12f, -1088.83f, 23.28f};
		Var0.f_5 = 1168079979;
		Var0.f_6 = 25f;
		break;

	case 56:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-356.09f, -134.77f, 40.01f};
		Var0.f_5 = 1206354175;
		Var0.f_6 = 25f;
		break;

	case 57:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {108.8502f, 6617.876f, 32.673f};
		Var0.f_5 = -1038180727;
		Var0.f_6 = 25f;
		break;

	case 58:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {114.3206f, 6623.226f, 32.7161f};
		Var0.f_5 = 1200466273;
		Var0.f_6 = 25f;
		break;

	case 59:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1182.305f, 2645.242f, 38.807f};
		Var0.f_5 = 1391004277;
		Var0.f_6 = 25f;
		break;

	case 60:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1174.654f, 2645.242f, 38.6826f};
		Var0.f_5 = -459199009;
		Var0.f_6 = 25f;
		break;

	case 225:
		Var0.f_3 = -427498890;
		Var0 = {-205.7007f, -1310.692f, 30.2957f};
		Var0.f_5 = -288764223;
		Var0.f_6 = 25f;
		break;

	case 61:
		Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
		Var0 = {-107.5401f, -9.0258f, 70.6696f};
		Var0.f_5 = -252283844;
		break;

	case 62:
		Var0.f_3 = joaat("v_ilev_ss_door8");
		Var0 = {717f, -975f, 25f};
		Var0.f_5 = -826072862;
		break;

	case 63:
		Var0.f_3 = joaat("v_ilev_ss_door7");
		Var0 = {719f, -975f, 25f};
		Var0.f_5 = 763780711;
		break;

	case 64:
		Var0.f_3 = joaat("v_ilev_ss_door02");
		Var0 = {709.9813f, -963.5311f, 30.5453f};
		Var0.f_5 = -874851305;
		break;

	case 65:
		Var0.f_3 = joaat("v_ilev_ss_door03");
		Var0 = {709.9894f, -960.6675f, 30.5453f};
		Var0.f_5 = -1480820165;
		break;

	case 66:
		Var0.f_3 = joaat("v_ilev_store_door");
		Var0 = {707.8046f, -962.4564f, 30.5453f};
		Var0.f_5 = 949391213;
		break;

	case 67:
		Var0.f_3 = -1212951353;
		Var0 = {1393f, 3599f, 35f};
		Var0.f_5 = 212192855;
		break;

	case 68:
		Var0.f_3 = -1212951353;
		Var0 = {1395f, 3600f, 35f};
		Var0.f_5 = -126474752;
		break;

	case 69:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1387f, 3614f, 39f};
		Var0.f_5 = 1765671336;
		break;

	case 70:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1083.547f, -1975.435f, 31.6222f};
		Var0.f_5 = 792295685;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 71:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1065.237f, -2006.079f, 32.2329f};
		Var0.f_5 = 563273144;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 72:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1085.307f, -2018.561f, 41.6289f};
		Var0.f_5 = -726993043;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 73:
		Var0.f_3 = joaat("v_ilev_bank4door02");
		Var0 = {-111f, 6464f, 32f};
		Var0.f_5 = 178228075;
		break;

	case 74:
		Var0.f_3 = joaat("v_ilev_bank4door01");
		Var0 = {-110f, 6462f, 32f};
		Var0.f_5 = 1852297978;
		break;

	case 75:
		Var0.f_3 = joaat("v_ilev_lester_doorfront");
		Var0 = {1274f, -1721f, 55f};
		Var0.f_5 = -565026078;
		break;

	case 76:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1271.89f, -1707.57f, 53.79f};
		Var0.f_5 = 1646172266;
		break;

	case 77:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1270.77f, -1708.1f, 53.75f};
		Var0.f_5 = 204467342;
		break;

	case 78:
		Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
		Var0 = {-127.5f, -1456.18f, 37.94f};
		Var0.f_5 = 2047070410;
		break;

	case 79:
		Var0.f_3 = joaat("prop_com_gar_door_01");
		Var0 = {483.56f, -1316.08f, 32.18f};
		Var0.f_5 = 1417775309;
		break;

	case 80:
		Var0.f_3 = joaat("v_ilev_cs_door");
		Var0 = {483f, -1312f, 29f};
		Var0.f_5 = -106474626;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 81:
		Var0.f_3 = joaat("prop_strip_door_01");
		Var0 = {128f, -1299f, 29f};
		Var0.f_5 = 1840510598;
		break;

	case 82:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {96f, -1285f, 29f};
		Var0.f_5 = 1382825971;
		break;

	case 83:
		Var0.f_3 = joaat("prop_motel_door_09");
		Var0 = {549f, -1773f, 34f};
		Var0.f_5 = 232536303;
		break;

	case 84:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {974f, -1839f, 36f};
		Var0.f_5 = 1267246609;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 85:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {977f, -105f, 75f};
		Var0.f_5 = -1900237971;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 86:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1391f, 1163f, 114f};
		Var0.f_5 = 2077901353;
		break;

	case 87:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1391f, 1161f, 114f};
		Var0.f_5 = -2102079126;
		break;

	case 88:
		Var0.f_3 = joaat("prop_cs6_03_door_l");
		Var0 = {1396f, 1143f, 115f};
		Var0.f_5 = -1905793212;
		break;

	case 89:
		Var0.f_3 = joaat("prop_cs6_03_door_r");
		Var0 = {1396f, 1141f, 115f};
		Var0.f_5 = -1797032505;
		break;

	case 90:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1409f, 1146f, 114f};
		Var0.f_5 = -62235167;
		break;

	case 91:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1409f, 1148f, 114f};
		Var0.f_5 = -1727188163;
		break;

	case 92:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1408f, 1159f, 114f};
		Var0.f_5 = -562748873;
		break;

	case 93:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1408f, 1161f, 114f};
		Var0.f_5 = 1976429759;
		break;

	case 94:
		Var0.f_3 = joaat("prop_gar_door_01");
		Var0 = {-1067f, -1666f, 5f};
		Var0.f_5 = 1341041543;
		break;

	case 95:
		Var0.f_3 = joaat("prop_gar_door_02");
		Var0 = {-1065f, -1669f, 5f};
		Var0.f_5 = -1631467220;
		break;

	case 96:
		Var0.f_3 = joaat("prop_map_door_01");
		Var0 = {-1104.66f, -1638.48f, 4.68f};
		Var0.f_5 = -1788473129;
		break;

	case 97:
		Var0.f_3 = joaat("v_ilev_fib_door1");
		Var0 = {-31.72f, -1101.85f, 26.57f};
		Var0.f_5 = -1831288286;
		break;

	case 98:
		Var0.f_3 = joaat("v_ilev_tort_door");
		Var0 = {134.4f, -2204.1f, 7.52f};
		Var0.f_5 = 963876966;
		break;

	case 99:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3628f, 3747f, 28f};
		Var0.f_5 = 1773088812;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 100:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3621f, 3752f, 28f};
		Var0.f_5 = -1332101528;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 101:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-608.73f, -1610.32f, 27.16f};
		Var0.f_5 = -1811763714;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 102:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-611.32f, -1610.09f, 27.16f};
		Var0.f_5 = 1608500665;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 103:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-592.94f, -1631.58f, 27.16f};
		Var0.f_5 = -1456048340;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 104:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-592.71f, -1628.99f, 27.16f};
		Var0.f_5 = 943854909;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 105:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1991f, 3053f, 47f};
		Var0.f_5 = -89065356;
		break;

	case 106:
		Var0.f_3 = 479144380;
		Var0 = {1988.353f, 3054.411f, 47.3204f};
		Var0.f_5 = -925491840;
		break;

	case 107:
		Var0.f_3 = joaat("prop_epsilon_door_l");
		Var0 = {-700.17f, 47.31f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 108:
		Var0.f_3 = joaat("prop_epsilon_door_r");
		Var0 = {-697.94f, 48.35f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 109:
		Var0.f_3 = -1230442770;
		Var0 = {241.3574f, 361.0488f, 105.8963f};
		Var0.f_5 = 1538555582;
		break;

	case 110:
		Var0.f_3 = joaat("prop_ch2_09c_garage_door");
		Var0 = {-689.11f, 506.97f, 110.64f};
		Var0.f_5 = -961994186;
		break;

	case 111:
		Var0.f_3 = joaat("v_ilev_door_orangesolid");
		Var0 = {-1055.96f, -236.43f, 44.17f};
		Var0.f_5 = -1772472848;
		break;

	case 112:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {29f, 3661f, 41f};
		Var0.f_5 = -46374650;
		break;

	case 113:
		Var0.f_3 = joaat("prop_cs4_05_tdoor");
		Var0 = {32f, 3667f, 41f};
		Var0.f_5 = -358302761;
		break;

	case 114:
		Var0.f_3 = joaat("v_ilev_housedoor1");
		Var0 = {87f, -1959f, 21f};
		Var0.f_5 = -1237936041;
		break;

	case 115:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {0f, -1823f, 30f};
		Var0.f_5 = 1487374207;
		break;

	case 116:
		Var0.f_3 = joaat("p_cut_door_03");
		Var0 = {23.34f, -1897.6f, 23.05f};
		Var0.f_5 = -199126299;
		break;

	case 117:
		Var0.f_3 = joaat("p_cut_door_02");
		Var0 = {524.2f, 3081.14f, 41.16f};
		Var0.f_5 = -897071863;
		break;

	case 118:
		Var0.f_3 = joaat("v_ilev_po_door");
		Var0 = {-1910.58f, -576.01f, 19.25f};
		Var0.f_5 = -864465775;
		break;

	case 119:
		Var0.f_3 = joaat("prop_ss1_10_door_l");
		Var0 = {-720.39f, 256.86f, 80.29f};
		Var0.f_5 = -208439480;
		break;

	case 120:
		Var0.f_3 = joaat("prop_ss1_10_door_r");
		Var0 = {-718.42f, 257.79f, 80.29f};
		Var0.f_5 = -1001088805;
		break;

	case 121:
		Var0.f_3 = joaat("v_ilev_fibl_door02");
		Var0 = {106.38f, -742.7f, 46.18f};
		Var0.f_5 = 756894459;
		break;

	case 122:
		Var0.f_3 = joaat("v_ilev_fibl_door01");
		Var0 = {105.76f, -746.65f, 46.18f};
		Var0.f_5 = 476981677;
		break;

	case 123:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2343.53f, 3265.37f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 124:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2342.23f, 3267.62f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 125:
		Var0.f_3 = joaat("ap1_02_door_l");
		Var0 = {-1041.933f, -2748.167f, 22.0308f};
		Var0.f_5 = 169965357;
		break;

	case 126:
		Var0.f_3 = joaat("ap1_02_door_r");
		Var0 = {-1044.841f, -2746.489f, 22.0308f};
		Var0.f_5 = 311232516;
		break;

	case 128:
		Var0.f_3 = joaat("v_ilev_fb_doorshortl");
		Var0 = {-1045.12f, -232.004f, 39.4379f};
		Var0.f_5 = -1563127729;
		break;

	case 129:
		Var0.f_3 = joaat("v_ilev_fb_doorshortr");
		Var0 = {-1046.516f, -229.3581f, 39.4379f};
		Var0.f_5 = 759145763;
		break;

	case 130:
		Var0.f_3 = joaat("v_ilev_fb_door01");
		Var0 = {-1083.62f, -260.4167f, 38.1867f};
		Var0.f_5 = -84399179;
		break;

	case 131:
		Var0.f_3 = joaat("v_ilev_fb_door02");
		Var0 = {-1080.974f, -259.0204f, 38.1867f};
		Var0.f_5 = -461898059;
		break;

	case 127:
		Var0.f_3 = joaat("v_ilev_gtdoor");
		Var0 = {-1042.57f, -240.6f, 38.11f};
		Var0.f_5 = 1259065971;
		break;

	case 132:
		Var0.f_3 = joaat("prop_damdoor_01");
		Var0 = {1385.258f, -2079.949f, 52.7638f};
		Var0.f_5 = -884051216;
		break;

	case 133:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {1656.57f, 4849.66f, 42.35f};
		Var0.f_5 = 243782214;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 134:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {1656.25f, 4852.24f, 42.35f};
		Var0.f_5 = 714115627;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 135:
		Var0.f_3 = -1184516519;
		Var0 = {-1051.402f, -474.6847f, 36.6199f};
		Var0.f_5 = 1668106976;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 136:
		Var0.f_3 = -1184516519;
		Var0 = {-1049.285f, -476.6376f, 36.7584f};
		Var0.f_5 = 1382347031;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 137:
		Var0.f_3 = 1230099731;
		Var0 = {-1210.957f, -580.8765f, 27.2373f};
		Var0.f_5 = -966790948;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 138:
		Var0.f_3 = 1230099731;
		Var0 = {-1212.445f, -578.4401f, 27.2373f};
		Var0.f_5 = -2068750132;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 139:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-565.1712f, 276.6259f, 83.2863f};
		Var0.f_5 = -1716533184;
		break;

	case 140:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-561.2863f, 293.5043f, 87.7771f};
		Var0.f_5 = 2146505927;
		break;

	case 141:
		Var0.f_3 = joaat("p_jewel_door_l");
		Var0 = {-631.96f, -236.33f, 38.21f};
		Var0.f_5 = 1874948872;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 142:
		Var0.f_3 = joaat("p_jewel_door_r1");
		Var0 = {-630.43f, -238.44f, 38.21f};
		Var0.f_5 = -1965020851;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 145:
		Var0.f_3 = -1743257725;
		Var0 = {231.62f, 216.23f, 106.4f};
		Var0.f_5 = 1951546856;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 146:
		Var0.f_3 = -1743257725;
		Var0 = {232.72f, 213.88f, 106.4f};
		Var0.f_5 = -431382051;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 143:
		Var0.f_3 = 110411286;
		Var0 = {258.32f, 203.84f, 106.43f};
		Var0.f_5 = -293975210;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 144:
		Var0.f_3 = 110411286;
		Var0 = {260.76f, 202.95f, 106.43f};
		Var0.f_5 = -785215289;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 148:
		Var0.f_3 = -222270721;
		Var0 = {256.31f, 220.66f, 106.43f};
		Var0.f_5 = -366143778;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 147:
		Var0.f_3 = joaat("v_ilev_bk_door");
		Var0 = {266.36f, 217.57f, 110.43f};
		Var0.f_5 = 440819155;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 149:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-442.66f, 6015.222f, 31.8663f};
		Var0.f_5 = -588495243;
		break;

	case 150:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-444.4985f, 6017.06f, 31.8663f};
		Var0.f_5 = 1815504139;
		break;

	case 151:
		Var0.f_3 = joaat("v_ilev_shrfdoor");
		Var0 = {1855.685f, 3683.93f, 34.5928f};
		Var0.f_5 = 1344911780;
		break;

	case 152:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1223.35f, -172.41f, 39.98f};
		Var0.f_5 = -320891223;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 153:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1220.93f, -173.68f, 39.98f};
		Var0.f_5 = 1511747875;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 154:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1211.99f, -190.57f, 39.98f};
		Var0.f_5 = -1517722103;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 155:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1213.26f, -192.98f, 39.98f};
		Var0.f_5 = -1093199712;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 156:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1217.77f, -201.54f, 39.98f};
		Var0.f_5 = 1902048492;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 157:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1219.04f, -203.95f, 39.98f};
		Var0.f_5 = -444768985;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 158:
		Var0.f_3 = joaat("prop_ch3_04_door_01l");
		Var0 = {2514.32f, -317.34f, 93.32f};
		Var0.f_5 = 404057594;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 159:
		Var0.f_3 = joaat("prop_ch3_04_door_01r");
		Var0 = {2512.42f, -319.26f, 93.32f};
		Var0.f_5 = -1417472813;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 160:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
		Var0 = {2333.23f, 2574.97f, 47.03f};
		Var0.f_5 = -1376084479;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 161:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
		Var0 = {2329.65f, 2576.64f, 47.03f};
		Var0.f_5 = 457472151;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 162:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {16.1279f, -1114.605f, 29.9469f};
		Var0.f_5 = 1071759151;
		break;

	case 163:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {18.572f, -1115.495f, 29.9469f};
		Var0.f_5 = -2119023917;
		break;

	case 165:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {1698.176f, 3751.506f, 34.8553f};
		Var0.f_5 = -1488490473;
		break;

	case 166:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {1699.937f, 3753.42f, 34.8553f};
		Var0.f_5 = -511187813;
		break;

	case 167:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {244.7274f, -44.0791f, 70.91f};
		Var0.f_5 = -248569395;
		break;

	case 168:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {243.8379f, -46.5232f, 70.91f};
		Var0.f_5 = 989443413;
		break;

	case 169:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {845.3624f, -1024.539f, 28.3448f};
		Var0.f_5 = 2022251829;
		break;

	case 170:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {842.7684f, -1024.539f, 23.3448f};
		Var0.f_5 = 649820567;
		break;

	case 171:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-326.1122f, 6075.27f, 31.6047f};
		Var0.f_5 = 537455378;
		break;

	case 172:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-324.273f, 6077.109f, 31.6047f};
		Var0.f_5 = 1121431731;
		break;

	case 173:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-665.2424f, -944.3256f, 21.9792f};
		Var0.f_5 = -1437380438;
		break;

	case 174:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-662.6414f, -944.3256f, 21.9792f};
		Var0.f_5 = -946336965;
		break;

	case 175:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1313.826f, -389.1259f, 36.8457f};
		Var0.f_5 = 1893144650;
		break;

	case 176:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1314.465f, -391.6472f, 36.8457f};
		Var0.f_5 = 435841678;
		break;

	case 177:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1114.009f, 2689.77f, 18.7041f};
		Var0.f_5 = 948508314;
		break;

	case 178:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1112.071f, 2691.505f, 18.7041f};
		Var0.f_5 = -1796714665;
		break;

	case 179:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-3164.845f, 1081.392f, 20.9887f};
		Var0.f_5 = -1155247245;
		break;

	case 180:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-3163.812f, 1083.778f, 20.9887f};
		Var0.f_5 = 782482084;
		break;

	case 181:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {2570.905f, 303.3556f, 108.8848f};
		Var0.f_5 = -1194470801;
		break;

	case 182:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {2568.304f, 303.3556f, 108.8848f};
		Var0.f_5 = -2129698061;
		break;

	case 183:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {813.1779f, -2148.27f, 29.7689f};
		Var0.f_5 = 1071759151;
		break;

	case 184:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {810.5769f, -2148.27f, 29.7689f};
		Var0.f_5 = -2119023917;
		break;

	case 164:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {6.8179f, -1098.209f, 29.9469f};
		Var0.f_5 = 1487704245;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 185:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {827.5342f, -2160.493f, 29.7688f};
		Var0.f_5 = 1529812051;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 186:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1107.01f, 289.38f, 64.76f};
		Var0.f_5 = 904342475;
		break;

	case 187:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1101.62f, 290.36f, 64.76f};
		Var0.f_5 = -795418380;
		break;

	case 188:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1138.64f, 300.82f, 67.18f};
		Var0.f_5 = -1502457334;
		break;

	case 189:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1137.05f, 295.59f, 67.18f};
		Var0.f_5 = -1994188940;
		break;

	case 190:
		Var0.f_3 = joaat("v_ilev_bl_doorel_l");
		Var0 = {-2053.16f, 3239.49f, 30.5f};
		Var0.f_5 = -621770121;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 191:
		Var0.f_3 = joaat("v_ilev_bl_doorel_r");
		Var0 = {-2054.39f, 3237.23f, 30.5f};
		Var0.f_5 = 1018580481;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 192:
		Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
		Var0 = {-108.91f, 6469.11f, 31.91f};
		Var0.f_5 = 421926217;
		break;

	case 193:
		Var0.f_3 = joaat("prop_fnclink_03gate5");
		Var0 = {-182.91f, 6168.37f, 32.14f};
		Var0.f_5 = -1331552374;
		gameplay::set_bit(&Var0.f_4, 2);
		break;
	}
	switch (iParam0) {
	case 196:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-59.89f, -1092.95f, 26.88f};
		Var0.f_5 = -293141277;
		break;

	case 197:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-60.55f, -1094.75f, 26.89f};
		Var0.f_5 = 506750037;
		break;

	case 194:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-39.13f, -1108.22f, 26.72f};
		Var0.f_5 = 1496005418;
		break;

	case 195:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-37.33f, -1108.87f, 26.72f};
		Var0.f_5 = -1863079210;
		break;

	case 198:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1943.73f, 3803.63f, 32.31f};
		Var0.f_5 = -2018911784;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 199:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {316.39f, -276.49f, 54.52f};
		Var0.f_5 = -93934272;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 200:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {313.96f, -275.6f, 54.52f};
		Var0.f_5 = 667682830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 201:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-2965.71f, 484.22f, 16.05f};
		Var0.f_5 = 1876735830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 202:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-2965.82f, 481.63f, 16.05f};
		Var0.f_5 = -2112857171;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 205:
		Var0.f_3 = joaat("v_ilev_abbmaindoor");
		Var0 = {962.1f, -2183.83f, 31.06f};
		Var0.f_5 = 2046930518;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 206:
		Var0.f_3 = joaat("v_ilev_abbmaindoor2");
		Var0 = {961.79f, -2187.08f, 31.06f};
		Var0.f_5 = 1208502884;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 207:
		Var0.f_3 = joaat("prop_ch3_04_door_02");
		Var0 = {2508.43f, -336.63f, 115.76f};
		Var0.f_5 = 1986432421;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 208:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2255.19f, 322.26f, 184.93f};
		Var0.f_5 = -722798986;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 209:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2254.06f, 319.7f, 184.93f};
		Var0.f_5 = 204301578;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 210:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2301.13f, 336.91f, 184.93f};
		Var0.f_5 = -320140460;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 211:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2298.57f, 338.05f, 184.93f};
		Var0.f_5 = 65222916;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 212:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2222.32f, 305.86f, 184.93f};
		Var0.f_5 = -920027322;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 213:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2221.19f, 303.3f, 184.93f};
		Var0.f_5 = -58432001;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 214:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2280.6f, 265.43f, 184.93f};
		Var0.f_5 = -2007378629;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 215:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2278.04f, 266.57f, 184.93f};
		Var0.f_5 = 418772613;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 216:
		Var0.f_3 = joaat("prop_gar_door_04");
		Var0 = {778.31f, -1867.49f, 30.66f};
		Var0.f_5 = 1679064921;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 217:
		Var0.f_3 = joaat("prop_gate_tep_01_l");
		Var0 = {-721.35f, 91.01f, 56.68f};
		Var0.f_5 = 412198396;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 218:
		Var0.f_3 = joaat("prop_gate_tep_01_r");
		Var0 = {-728.84f, 88.64f, 56.68f};
		Var0.f_5 = -1053755588;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 219:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2287.62f, 363.9f, 174.93f};
		Var0.f_5 = -53446139;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 220:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2289.78f, 362.91f, 174.93f};
		Var0.f_5 = 1333960556;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 221:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2289.86f, 362.88f, 174.93f};
		Var0.f_5 = -41786493;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 222:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2292.01f, 361.89f, 174.93f};
		Var0.f_5 = 1750120734;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 223:
		Var0.f_3 = joaat("prop_fnclink_07gate1");
		Var0 = {1803.94f, 3929.01f, 33.72f};
		Var0.f_5 = 1661506222;
		break;

	case 203:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-348.81f, -47.26f, 49.39f};
		Var0.f_5 = -2116116146;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 204:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-351.26f, -46.41f, 49.39f};
		Var0.f_5 = -74083138;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 224:
		Var0.f_3 = joaat("prop_abat_slide");
		Var0 = {962.9084f, -2105.814f, 34.6432f};
		Var0.f_5 = -1670085357;
		break;
	}
	return Var0;
}

//Position - 0x3019
int func_4(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			return 6;
		}
		if (iParam1 == 1) {
			return 7;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			return 0;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			return 1;
		}
		break;

	case 3:
		if (iParam1 == 0) {
			return 2;
		}
		break;

	case 4:
		if (iParam1 == 0) {
			return 3;
		}
		break;

	case 5:
		if (iParam1 == 0) {
			return 4;
		}
		break;

	case 6:
		if (iParam1 == 0) {
			return 5;
		}
		break;

	case 7:
		if (iParam1 == 0) {
			return 8;
		}
		if (iParam1 == 1) {
			return 9;
		}
		break;

	case 8:
		if (iParam1 == 0) {
			return 10;
		}
		if (iParam1 == 1) {
			return 11;
		}
		break;

	case 9:
		if (iParam1 == 0) {
			return 12;
		}
		if (iParam1 == 1) {
			return 13;
		}
		break;

	case 10:
		if (iParam1 == 0) {
			return 14;
		}
		if (iParam1 == 1) {
			return 15;
		}
		break;

	case 11:
		if (iParam1 == 0) {
			return 16;
		}
		if (iParam1 == 1) {
			return 17;
		}
		break;

	case 12:
		if (iParam1 == 0) {
			return 18;
		}
		if (iParam1 == 1) {
			return 19;
		}
		break;

	case 13:
		if (iParam1 == 0) {
			return 20;
		}
		if (iParam1 == 1) {
			return 21;
		}
		break;

	case 14:
		if (iParam1 == 0) {
			return 22;
		}
		break;

	case 15:
		if (iParam1 == 0) {
			return 23;
		}
		break;

	case 16:
		if (iParam1 == 0) {
			return 24;
		}
		break;

	case 17:
		if (iParam1 == 0) {
			return 25;
		}
		break;

	case 18:
		if (iParam1 == 0) {
			return 26;
		}
		if (iParam1 == 1) {
			return 27;
		}
		break;

	case 19:
		if (iParam1 == 0) {
			return 28;
		}
		if (iParam1 == 1) {
			return 29;
		}
		break;

	case 20:
		if (iParam1 == 0) {
			return 30;
		}
		if (iParam1 == 1) {
			return 31;
		}
		break;

	case 22:
		if (iParam1 == 0) {
			return 32;
		}
		break;

	case 23:
		if (iParam1 == 0) {
			return 33;
		}
		break;

	case 24:
		if (iParam1 == 0) {
			return 34;
		}
		break;

	case 25:
		if (iParam1 == 0) {
			return 35;
		}
		break;

	case 26:
		if (iParam1 == 0) {
			return 36;
		}
		break;

	case 27:
		if (iParam1 == 0) {
			return 37;
		}
		break;

	case 39:
		if (iParam1 == 0) {
			return 54;
		}
		break;

	case 40:
		if (iParam1 == 0) {
			return 55;
		}
		break;

	case 41:
		if (iParam1 == 0) {
			return 56;
		}
		break;

	case 42:
		if (iParam1 == 0) {
			return 58;
		}
		if (iParam1 == 1) {
			return 57;
		}
		break;

	case 43:
		if (iParam1 == 0) {
			return 60;
		}
		if (iParam1 == 1) {
			return 59;
		}
		break;

	case 44:
		if (iParam1 == 0) {
			return 225;
		}
		break;

	case 28:
		if (iParam1 == 0) {
			return 162;
		}
		if (iParam1 == 1) {
			return 163;
		}
		break;

	case 29:
		if (iParam1 == 0) {
			return 165;
		}
		if (iParam1 == 1) {
			return 166;
		}
		break;

	case 30:
		if (iParam1 == 0) {
			return 167;
		}
		if (iParam1 == 1) {
			return 168;
		}
		break;

	case 31:
		if (iParam1 == 0) {
			return 169;
		}
		if (iParam1 == 1) {
			return 170;
		}
		break;

	case 32:
		if (iParam1 == 0) {
			return 171;
		}
		if (iParam1 == 1) {
			return 172;
		}
		break;

	case 33:
		if (iParam1 == 0) {
			return 173;
		}
		if (iParam1 == 1) {
			return 174;
		}
		break;

	case 34:
		if (iParam1 == 0) {
			return 175;
		}
		if (iParam1 == 1) {
			return 176;
		}
		break;

	case 35:
		if (iParam1 == 0) {
			return 177;
		}
		if (iParam1 == 1) {
			return 178;
		}
		break;

	case 36:
		if (iParam1 == 0) {
			return 179;
		}
		if (iParam1 == 1) {
			return 180;
		}
		break;

	case 37:
		if (iParam1 == 0) {
			return 181;
		}
		if (iParam1 == 1) {
			return 182;
		}
		break;

	case 38:
		if (iParam1 == 0) {
			return 183;
		}
		if (iParam1 == 1) {
			return 184;
		}
		break;
	}
	return 226;
}

// Position - 0x349A
bool func_5(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return false;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0x34E4
int func_6(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 < 2) {
		iVar1 = func_7(iParam0, iVar2);
		if (iVar1 != 0) {
			if (object::_does_door_exist(iVar1)) {
				if (!network::network_has_control_of_door(iVar1)) {
					network::network_request_control_of_door(iVar1);
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

// Position - 0x3530
int func_7(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 183249434;
			}
			else if (iParam1 == 1) {
				return 758345384;
			}
		}
		break;

	case 1:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1804701345;
			}
		}
		break;

	case 2:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1403601067;
			}
		}
		break;

	case 3:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -2031139496;
			}
		}
		break;

	case 4:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1796834809;
			}
		}
		break;

	case 5:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 96153298;
			}
		}
		break;

	case 6:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -281080954;
			}
		}
		break;

	case 7:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1069262641;
			}
			else if (iParam1 == 1) {
				return 1968521986;
			}
		}
		break;

	case 8:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -2143706301;
			}
			else if (iParam1 == 1) {
				return -1403421822;
			}
		}
		break;

	case 9:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1950137670;
			}
			else if (iParam1 == 1) {
				return 1226259807;
			}
		}
		break;

	case 10:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1090833557;
			}
			else if (iParam1 == 1) {
				return 897332612;
			}
		}
		break;

	case 11:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1095946640;
			}
			else if (iParam1 == 1) {
				return 801975945;
			}
		}
		break;

	case 12:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -167996547;
			}
			else if (iParam1 == 1) {
				return -1935818563;
			}
		}
		break;

	case 13:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1891185217;
			}
			else if (iParam1 == 1) {
				return 1236591681;
			}
		}
		break;

	case 14:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1980808685;
			}
		}
		break;

	case 15:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1352749757;
			}
		}
		break;

	case 16:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -566554453;
			}
		}
		break;

	case 17:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1284749450;
			}
		}
		break;

	case 18:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 261851994;
			}
			else if (iParam1 == 1) {
				return 217646625;
			}
		}
		break;

	case 19:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1801139578;
			}
			else if (iParam1 == 1) {
				return -2123275866;
			}
		}
		break;

	case 20:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1312689981;
			}
			else if (iParam1 == 1) {
				return -595055661;
			}
		}
		break;

	case 22:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -265260897;
			}
		}
		break;

	case 23:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1284867488;
			}
		}
		break;

	case 24:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 302307081;
			}
		}
		break;

	case 25:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -681886015;
			}
		}
		break;

	case 26:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -2086556500;
			}
		}
		break;

	case 27:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1496386696;
			}
		}
		break;

	case 39:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1871080926;
			}
		}
		else if (iParam1 == 0) {
			return -1871080926;
		}
		break;

	case 40:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1168079979;
			}
		}
		else if (iParam1 == 0) {
			return 1168079979;
		}
		break;

	case 41:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1206354175;
			}
		}
		else if (iParam1 == 0) {
			return 1206354175;
		}
		break;

	case 42:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1200466273;
			}
			else if (iParam1 == 1) {
				return -1038180727;
			}
		}
		else if (iParam1 == 0) {
			return 1200466273;
		}
		else if (iParam1 == 1) {
			return -1038180727;
		}
		break;

	case 43:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -459199009;
			}
			else if (iParam1 == 1) {
				return 1391004277;
			}
		}
		else if (iParam1 == 0) {
			return -459199009;
		}
		else if (iParam1 == 1) {
			return 1391004277;
		}
		break;

	case 44:
		if (network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -288764223;
			}
		}
		else if (iParam1 == 0) {
			return -288764223;
		}
		break;

	case 28:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1071759151;
			}
			else if (iParam1 == 1) {
				return -2119023917;
			}
		}
		break;

	case 29:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1488490473;
			}
			else if (iParam1 == 1) {
				return -511187813;
			}
		}
		break;

	case 30:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -248569395;
			}
			else if (iParam1 == 1) {
				return 989443413;
			}
		}
		break;

	case 31:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 2022251829;
			}
			else if (iParam1 == 1) {
				return 649820567;
			}
		}
		break;

	case 32:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 537455378;
			}
			else if (iParam1 == 1) {
				return 1121431731;
			}
		}
		break;

	case 33:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1437380438;
			}
			else if (iParam1 == 1) {
				return -946336965;
			}
		}
		break;

	case 34:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 1893144650;
			}
			else if (iParam1 == 1) {
				return 435841678;
			}
		}
		break;

	case 35:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return 948508314;
			}
			else if (iParam1 == 1) {
				return -1796714665;
			}
		}
		break;

	case 36:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1155247245;
			}
			else if (iParam1 == 1) {
				return 782482084;
			}
		}
		break;

	case 37:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -1194470801;
			}
			else if (iParam1 == 1) {
				return -2129698061;
			}
		}
		break;

	case 38:
		if (!network::network_is_game_in_progress()) {
			if (iParam1 == 0) {
				return -675817295;
			}
			else if (iParam1 == 1) {
				return 2121442868;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x3CB3
void func_8() {
	func_21(1);
	func_9(&Local_136);
}

// Position - 0x3CC6
void func_9(var *uParam0) {
	int iVar0;

	func_13(&uParam0->f_106);
	func_12(uParam0);
	func_11(&uParam0->f_225);
	func_10(&uParam0->f_173);
	iVar0 = 0;
	while (iVar0 < uParam0->f_431) {
		uParam0->f_431[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_436) {
		uParam0->f_436[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x3D2C
void func_10(var *uParam0) {
	uParam0->f_1 = {0f, 0f, 0f};
	StringCopy(&uParam0->f_7, "", 16);
	uParam0->f_31 = {0f, 0f, 0f};
	uParam0->f_34 = 0f;
	uParam0->f_35 = {0f, 0f, 0f};
	uParam0->f_38 = 0f;
	uParam0->f_39 = {0f, 0f, 0f};
	uParam0->f_42 = {0f, 0f, 0f};
	uParam0->f_45 = {0f, 0f, 0f};
}

// Position - 0x3D7D
void func_11(var *uParam0) {
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
}

// Position - 0x3D98
void func_12(var *uParam0) {
	int iVar0;

	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_98 = 0;
	uParam0->f_9 = 0;
	uParam0->f_11 = 0;
	uParam0->f_87 = 0;
	uParam0->f_12.f_1 = 0;
	uParam0->f_12.f_2 = {0f, 0f, 0f};
	uParam0->f_12.f_5 = 0f;
	uParam0->f_12.f_6 = {0f, 0f, 0f};
	uParam0->f_12.f_9 = 0f;
	uParam0->f_12.f_10 = {0f, 0f, 0f};
	uParam0->f_12.f_13 = 0f;
	uParam0->f_12.f_17 = 0;
	uParam0->f_12.f_14 = 0;
	uParam0->f_30.f_2 = {0f, 0f, 0f};
	uParam0->f_30.f_5 = 0f;
	uParam0->f_30.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		uParam0->f_38[iVar0 /*12*/].f_11 = 0;
		uParam0->f_38[iVar0 /*12*/] = 0;
		iVar0++;
	}
}

// Position - 0x3E5B
void func_13(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	StringCopy(&uParam0->f_11, "", 16);
	uParam0->f_30 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
	uParam0->f_31 = 0;
}

// Position - 0x3ED4
bool func_14(var *uParam0) {
	if (uParam0->f_9) {
		if (func_15(*uParam0, 10, 1)) {
			return true;
		}
		if (uParam0->f_1 == 1) {
			if (func_15(*uParam0, 19, 1)) {
				return true;
			}
		}
		if (!Global_91543.f_16) {
			return true;
		}
		if (Global_69702) {
			if (Global_1312488.f_4) {
				return true;
			}
		}
		else if (uParam0->f_9 && uParam0->f_11 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 82.34222f, -1310.278f, 25.77012f,
													 142.8917f, -1274.154f, 46.51249f, 62f, 0, 1, 0)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x3F86
bool func_15(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_20() == 0) {
			return gameplay::is_bit_set(func_16(func_19(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x3FE6
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

// Position - 0x4019
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

// Position - 0x404D
int func_18() { return Global_1312735; }

// Position - 0x4059
int func_19(int iParam0) {
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

// Position - 0x4320
int func_20() { return Global_25190; }

// Position - 0x432B
void func_21(int iParam0) {
	func_758(1);
	if (Local_136.f_106.f_19) {
		if (func_237()) {
			func_235();
			Global_2443134.f_662.f_33[0] = Local_136.f_460;
			Global_2443134.f_662.f_33[1] = Local_136.f_106.f_3;
			Global_2443134.f_662.f_39 = Local_136.f_106;
			Global_2443134.f_662.f_33[2] = Local_136.f_106.f_1;
			Global_2443134.f_662.f_40 = 1;
		}
	}
	if (Local_136.f_3 != -1) {
		func_233(&Local_136.f_3);
	}
	func_197(&Local_136, iLocal_134);
	func_196(&Local_136.f_38);
	if (Local_136.f_106.f_19) {
		func_171(&Local_136.f_106, 1, 1, 1, 1);
		cam::set_widescreen_borders(0, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		func_170(0, 1, 1, 0);
		func_169(1);
		func_159();
		if (network::network_is_game_in_progress()) {
			if (Global_262145.f_2450) {
				graphics::set_streamed_texture_dict_as_no_longer_needed("MPShops");
			}
		}
		func_156(1, Local_136);
		func_151(Local_136, 0);
		func_150();
		Global_91543.f_1456 = 0;
		if (!Global_69702 && !ped::is_ped_injured(player::player_ped_id())) {
			func_149();
			ped::_0x5AAB586FFEC0FD96(player::player_ped_id());
			ped::_0xF79F9DEF0AADE61A(player::player_ped_id());
			func_33(player::player_ped_id());
		}
		func_29(0);
		func_28();
		Local_740.f_19 = 0;
		func_27(&Local_740, 1);
	}
	if (!ped::is_ped_injured(Local_136.f_12)) {
		if (func_26(0)) {
			ped::set_ped_can_ragdoll_from_player_impact(Local_136.f_12, 1);
		}
		if (Local_136.f_10) {
			if (func_25(iLocal_134) || network::network_is_game_in_progress()) {
			}
			else {
				ped::delete_ped(&Local_136.f_12);
			}
		}
		else if (iParam0) {
			if (func_25(iLocal_134) || network::network_is_game_in_progress()) {
			}
			else {
				ped::delete_ped(&Local_136.f_12);
			}
		}
		else if (func_25(iLocal_134) || network::network_is_game_in_progress()) {
		}
		else {
			ped::set_ped_keep_task(Local_136.f_12, 1);
			entity::set_ped_as_no_longer_needed(&Local_136.f_12);
		}
	}
	else {
		Local_136.f_12 = 0;
	}
	if (Local_136.f_12.f_16) {
		streaming::set_model_as_no_longer_needed(Local_136.f_12.f_1);
		Local_136.f_12.f_16 = 0;
	}
	if (!ped::is_ped_injured(Local_136.f_30)) {
		if (Local_136.f_10) {
			ped::delete_ped(&Local_136.f_30);
		}
		else if (iParam0) {
			ped::delete_ped(&Local_136.f_30);
		}
		else {
			entity::freeze_entity_position(Local_136.f_30, 0);
			ped::set_ped_keep_task(Local_136.f_30, 1);
			entity::set_ped_as_no_longer_needed(&Local_136.f_30);
		}
	}
	else {
		Local_136.f_30 = 0;
	}
	if (Local_136.f_30.f_7) {
		streaming::set_model_as_no_longer_needed(Local_136.f_30.f_1);
		Local_136.f_30.f_7 = 0;
	}
	if (iLocal_738) {
		ped::remove_relationship_group(iLocal_737);
		iLocal_738 = 0;
	}
	func_23();
	gameplay::clear_bit(&Global_69950, 9);
	if (!Global_69702 && !ped::is_ped_injured(player::player_ped_id())) {
		ped::_0x5AAB586FFEC0FD96(player::player_ped_id());
		ped::_0xF79F9DEF0AADE61A(player::player_ped_id());
	}
	if (iParam0) {
		func_22("Resetting script", -1);
		gameplay::set_bit(&Global_91543.f_1308[iLocal_134], 11);
	}
	else {
		func_22("Terminating script", -1);
		gameplay::clear_bit(&Global_91543.f_1308[iLocal_134], 16);
		script::terminate_this_thread();
	}
}

// Position - 0x461F
void func_22(char *sParam0, int iParam1) {
	if (gameplay::is_string_null_or_empty(sParam0)) {
		return;
	}
	if (iParam1 == -1) {
	}
}

// Position - 0x463C
void func_23() {
	func_24();
	if (!gameplay::is_string_null_or_empty(sLocal_782)) {
		streaming::remove_anim_dict(sLocal_782);
	}
}

// Position - 0x465A
void func_24() {
	if (iLocal_784) {
		streaming::remove_anim_dict(sLocal_780);
		streaming::remove_anim_dict(sLocal_781);
	}
}

// Position - 0x4676
bool func_25(int iParam0) {
	if (iParam0 == -1) {
		return false;
	}
	return Global_91543.f_65[iParam0];
}

// Position - 0x4692
bool func_26(int iParam0) {
	if (network::network_is_game_in_progress()) {
		if (network::network_does_entity_exist_with_network_id(Local_99)) {
			if (network::network_has_control_of_network_id(Local_99)) {
				return true;
			}
			else if (iParam0) {
				network::network_request_control_of_network_id(Local_99);
			}
		}
	}
	else {
		return true;
	}
	return false;
}

// Position - 0x46CE
void func_27(var *uParam0, int iParam1) {
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (!uParam0->f_18) {
			iVar12 = 0;
			iVar13 = 0;
			iVar12 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0) {
				(*uParam0)[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar13 = 0;
			while (iVar13 < iVar12) {
				if (iVar0 < *uParam0) {
					if (entity::does_entity_exist(uVar1[iVar13]) && !ped::is_ped_injured(uVar1[iVar13]) &&
						!ped::is_ped_in_any_vehicle(uVar1[iVar13], 0)) {
						if (ped::is_ped_group_member(uVar1[iVar13], player::get_player_group(player::player_id()))) {
							(*uParam0)[iVar0] = uVar1[iVar13];
							uParam0->f_5[iVar0 /*3*/] = {entity::get_entity_coords(uVar1[iVar13], 1)};
							iVar0++;
						}
					}
				}
				iVar13++;
			}
			uParam0->f_18 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0) {
			if (entity::does_entity_exist((*uParam0)[iVar0]) && !ped::is_ped_injured((*uParam0)[iVar0]) &&
				!ped::is_ped_in_any_vehicle((*uParam0)[iVar0], 0)) {
				if (uParam0->f_19) {
					entity::set_entity_visible((*uParam0)[iVar0], 0, 0);
					if (iParam1) {
						entity::set_entity_collision((*uParam0)[iVar0], 0, 0);
						entity::freeze_entity_position((*uParam0)[iVar0], 1);
						entity::set_entity_coords_no_offset((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
				else if (!entity::is_entity_visible((*uParam0)[iVar0])) {
					entity::set_entity_visible((*uParam0)[iVar0], 1, 0);
					if (iParam1) {
						entity::set_entity_collision((*uParam0)[iVar0], 1, 0);
						entity::freeze_entity_position((*uParam0)[iVar0], 0);
						entity::set_entity_coords_no_offset((*uParam0)[iVar0], uParam0->f_5[iVar0 /*3*/], 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x4883
void func_28() {
	int iVar0;

	iVar0 = player::player_ped_id();
	if (entity::does_entity_exist(vLocal_669.z) && !ped::is_ped_injured(vLocal_669.z)) {
		iVar0 = vLocal_669.z;
	}
	if (entity::does_entity_exist(iVar0)) {
		ped::hide_ped_blood_damage_by_zone(iVar0, 1, 0);
		ped::hide_ped_blood_damage_by_zone(iVar0, 0, 0);
		ped::hide_ped_blood_damage_by_zone(iVar0, 4, 0);
		ped::hide_ped_blood_damage_by_zone(iVar0, 5, 0);
		ped::hide_ped_blood_damage_by_zone(iVar0, 2, 0);
		ped::hide_ped_blood_damage_by_zone(iVar0, 3, 0);
	}
}

// Position - 0x48EC
void func_29(int iParam0) {
	if (!iParam0 && Global_89133) {
		Global_88750 = 1;
		if (network::network_is_game_in_progress()) {
			func_30();
		}
	}
	Global_89133 = iParam0;
}

// Position - 0x4919
void func_30() {
	if (!Global_1364282) {
		func_31(139, 1, -1, 1);
		Global_1364281 = network::get_time_offset(network::get_network_time(), Global_262145.f_2410);
	}
}

// Position - 0x4945
void func_31(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (func_32()) {
		iVar0 = Global_2522581[iParam0 /*3*/][func_17(iParam2)];
		if (iVar0 != 0) {
			stats::stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

// Position - 0x4977
bool func_32() {
	return true;
	return false;
}

// Position - 0x4984
void func_33(int iParam0) {
	if (!ped::is_ped_injured(iParam0)) {
		if (Global_69702) {
			func_48(&iParam0, -1, 0, 0);
		}
		else {
			func_34(iParam0);
		}
	}
}

// Position - 0x49AF
void func_34(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	iVar0 = func_46(iParam0);
	if (func_45(iVar0) && !ped::is_ped_injured(iParam0)) {
		ped::clear_ped_decorations(iParam0);
		iVar1 = 0;
		while (iVar1 < 4) {
			iVar2 = 0;
			while (iVar2 < 32) {
				if (gameplay::is_bit_set(Global_101700.f_2095.f_493[iVar0 /*15*/].f_10[iVar1], iVar2)) {
					if (func_35(&Var3, func_44(iVar1, iVar2), func_43(iVar0), iParam0, -1)) {
						ped::_set_ped_decoration(iParam0, Var3.f_4, Var3.f_5);
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

// Position - 0x4A44
bool func_35(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	func_42(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (entity::does_entity_exist(iParam3) && !ped::is_ped_injured(iParam3)) {
		iVar0 = entity::get_entity_model(iParam3);
	}
	switch (iParam2) {
	case 0:
		switch (iParam1) {
		case 0:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
			break;

		case 1:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
			break;

		case 2:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
			break;

		case 3:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
			break;

		case 4:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
			break;

		case 5:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
			break;

		case 6:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
			break;

		case 7:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
			break;

		case 8:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
			break;

		case 9:
			if (func_41() || func_40()) {
				iVar1 = 400;
				if (func_39() && (func_38() || func_37())) {
					iVar1 = 0;
				}
				func_42(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1,
						2);
			}
			break;

		case 10:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
			break;

		case 11:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
			break;

		case 12:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
			break;

		case 13:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
			break;

		case 14:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
			break;

		case 15:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
			break;

		case 16:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
			break;

		case 17:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
			break;

		case 18:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
			break;

		case 19:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
			break;

		case 20:
			func_42(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
			break;

		default: func_36(sParam0, iParam2, iParam1, 21); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
			if (func_41() || func_40()) {
				iVar1 = 450;
				if (func_39() && (func_38() || func_37())) {
					iVar1 = 0;
				}
				func_42(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1,
						0);
			}
			break;

		case 1:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
			break;

		case 2:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
			break;

		case 3:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
			break;

		case 4:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
			break;

		case 5:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
			break;

		case 6:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
			break;

		case 7:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
			break;

		case 8:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
			break;

		case 9:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
			break;

		case 10:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
			break;

		case 11:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
			break;

		case 12:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
			break;

		case 13:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
			break;

		case 14:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
			break;

		case 15:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
			break;

		case 16:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
			break;

		case 17:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
			break;

		case 18:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
			break;

		case 19:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
			break;

		case 20: break;

		case 21:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
			break;

		case 22:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
			break;

		case 23:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
			break;

		case 24:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
			break;

		case 25:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
			break;

		case 26:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
			break;

		case 27:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
			break;

		case 28:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
			break;

		case 29:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
			break;

		case 30:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
			break;

		case 31:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
			break;

		case 32:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
			break;

		case 33:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
			break;

		case 34:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
			break;

		case 35:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
			break;

		case 36:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
			break;

		case 37:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
			break;

		case 38:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
			break;

		case 39:
			func_42(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
			break;

		default: func_36(sParam0, iParam2, iParam1, 40); break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
			break;

		case 1:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
			break;

		case 2:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
			break;

		case 3:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
			break;

		case 4:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
			break;

		case 5:
			if (func_41() || func_40()) {
				iVar1 = 380;
				if (func_39() && (func_38() || func_37())) {
					iVar1 = 0;
				}
				func_42(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1,
						3);
			}
			break;

		case 6:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
			break;

		case 7:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
			break;

		case 8:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
			break;

		case 9:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
			break;

		case 10:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
			break;

		case 11:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
			break;

		case 12:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
			break;

		case 13:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
			break;

		case 14:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
			break;

		case 15:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
			break;

		case 16:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
			break;

		case 17:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
			break;

		case 18:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
			break;

		case 19:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
			break;

		case 20:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
			break;

		case 21:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
			break;

		case 22:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
			break;

		case 23:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
			break;

		case 24:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
			break;

		case 25:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
			break;

		case 26:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
			break;

		case 27:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
			break;

		case 28:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
			break;

		case 29:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
			break;

		case 30:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
			break;

		case 31:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
			break;

		case 32:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
			break;

		case 33:
			func_42(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
			break;

		default: func_36(sParam0, iParam2, iParam1, 34); break;
		}
		break;

	case 3:
	case 4:
		switch (iParam1) {
		case 0:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2,
					system::round(system::to_float(20000) * Global_262145.f_2906), 0);
			break;

		case 1:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2,
					system::round(system::to_float(1400) * Global_262145.f_2907), 2);
			break;

		case 2:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2,
					system::round(system::to_float(9750) * Global_262145.f_2908), 3);
			break;

		case 3:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2,
					system::round(system::to_float(2150) * Global_262145.f_2909), 0);
			break;

		case 4:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2910), 0);
			break;

		case 54:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2,
					system::round(system::to_float(12400) * Global_262145.f_2911), 1);
			break;

		case 5:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2,
					system::round(system::to_float(3500) * Global_262145.f_2912), 0);
			break;

		case 6:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2913), 2);
			break;

		case 55:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2,
					system::round(system::to_float(1350) * Global_262145.f_2914), 1);
			break;

		case 7:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2,
					system::round(system::to_float(1450) * Global_262145.f_2915), 0);
			break;

		case 8:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2,
					system::round(system::to_float(2700) * Global_262145.f_2916), 7);
			break;

		case 9:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2,
					system::round(system::to_float(1200) * Global_262145.f_2917), 0);
			break;

		case 10:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2,
					system::round(system::to_float(1500) * Global_262145.f_2918), 0);
			break;

		case 11:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2,
					system::round(system::to_float(2650) * Global_262145.f_2919), 0);
			break;

		case 56:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2,
					system::round(system::to_float(1900) * Global_262145.f_2920), 1);
			break;

		case 12:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2921), 2);
			break;

		case 57:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2,
					system::round(system::to_float(2400) * Global_262145.f_2922), 1);
			break;

		case 58:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2923), 1);
			break;

		case 59:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2,
					system::round(system::to_float(7400) * Global_262145.f_2924), 1);
			break;

		case 60:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2925), 1);
			break;

		case 17:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2,
					system::round(system::to_float(2400) * Global_262145.f_2930), 2);
			break;

		case 18:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2931), 2);
			break;

		case 19:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2,
					system::round(system::to_float(3600) * Global_262145.f_2932), 2);
			break;

		case 20:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2933), 3);
			break;

		case 21:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2,
					system::round(system::to_float(12500) * Global_262145.f_2934), 3);
			break;

		case 22:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2935), 3);
			break;

		case 23:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2936), 3);
			break;

		case 24:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2937), 3);
			break;

		case 25:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2,
					system::round(system::to_float(3750) * Global_262145.f_2938), 2);
			break;

		case 26:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2,
					system::round(system::to_float(3750) * Global_262145.f_2939), 3);
			break;

		case 27:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2,
					system::round(system::to_float(4800) * Global_262145.f_2940), 3);
			break;

		case 28:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2,
					system::round(system::to_float(3500) * Global_262145.f_2941), 3);
			break;

		case 61:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2,
					system::round(system::to_float(12350) * Global_262145.f_2942), 1);
			break;

		case 62:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2,
					system::round(system::to_float(1900) * Global_262145.f_2943), 1);
			break;

		case 63:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2,
					system::round(system::to_float(4500) * Global_262145.f_2944), 1);
			break;

		case 64:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2,
					system::round(system::to_float(12250) * Global_262145.f_2945), 1);
			break;

		case 65:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2,
					system::round(system::to_float(12300) * Global_262145.f_2946), 1);
			break;

		case 29:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2947), 0);
			break;

		case 30:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2948), 0);
			break;

		case 31:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2949), 0);
			break;

		case 66:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2950), 1);
			break;

		case 32:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2951), 2);
			break;

		case 33:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2,
					system::round(system::to_float(7300) * Global_262145.f_2952), 3);
			break;

		case 34:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2,
					system::round(system::to_float(7250) * Global_262145.f_2953), 2);
			break;

		case 35:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2,
					system::round(system::to_float(11900) * Global_262145.f_2954), 0);
			break;

		case 36:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2,
					system::round(system::to_float(2750) * Global_262145.f_2955), 0);
			break;

		case 37:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2,
					system::round(system::to_float(1750) * Global_262145.f_2956), 0);
			break;

		case 38:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2,
					system::round(system::to_float(7300) * Global_262145.f_2957), 3);
			break;

		case 39:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2,
					system::round(system::to_float(3250) * Global_262145.f_2958), 2);
			break;

		case 40:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2,
					system::round(system::to_float(1000) * Global_262145.f_2959), 0);
			break;

		case 67:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2960), 1);
			break;

		case 41:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2961), 2);
			break;

		case 68:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2962), 1);
			break;

		case 42:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2,
					system::round(system::to_float(5050) * Global_262145.f_2963), 0);
			break;

		case 43:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2,
					system::round(system::to_float(2450) * Global_262145.f_2964), 2);
			break;

		case 44:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2965), 0);
			break;

		case 45:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2966), 0);
			break;

		case 46:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2,
					system::round(system::to_float(12250) * Global_262145.f_2967), 0);
			break;

		case 47:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2,
					system::round(system::to_float(1150) * Global_262145.f_2968), 3);
			break;

		case 48:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2969), 3);
			break;

		case 49:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2,
					system::round(system::to_float(7600) * Global_262145.f_2970), 3);
			break;

		case 50:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2,
					system::round(system::to_float(2600) * Global_262145.f_2971), 2);
			break;

		case 51:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2972), 3);
			break;

		case 52:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2,
					system::round(system::to_float(7450) * Global_262145.f_2973), 3);
			break;

		case 53:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2974), 0);
			break;

		case 69:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2975), 1);
			break;

		case 70:
			func_42(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2976), 2);
			break;
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 86:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 90:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 91:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 124:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 125:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 94:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 95:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 96:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 97:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 98:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 99:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 100:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 101:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 102:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 103:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 104:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 105:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 106:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 107:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 108:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 116:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 117:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 123:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 13:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_42(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2929), 0);
				break;

			case 71:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;

			case 72:
				func_42(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 92:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 94:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 95:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 96:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 97:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 98:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 99:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 100:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 101:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 102:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 103:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 104:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 105:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 106:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 107:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 108:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 116:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 117:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 118:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 119:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 120:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 121:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 122:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 123:
				func_42(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 13:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_42(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129) {
		func_36(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22) {
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

// Position - 0x7A1E
void func_36(var *uParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar0 = iParam2 - iParam3;
	iVar1 = dlc1::_get_num_decorations(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar0, &Var2)) {
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				uParam0->f_11 = iParam2;
				MemCopy(uParam0, {Var2.f_7}, 4);
				uParam0->f_5 = Var2.f_3;
				uParam0->f_4 = Var2.f_2;
				uParam0->f_8 = Var2.f_6;
				uParam0->f_6 = iParam1;
				uParam0->f_7 = Var2.f_4;
				uParam0->f_9 = iParam2 / 32;
				uParam0->f_10 = iParam2 % 32;
				uParam0->f_12 = Var2.f_5;
			}
		}
	}
}

// Position - 0x7AB0
int func_37() {
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

// Position - 0x7C04
int func_38() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (gameplay::is_bit_set(Global_25, 6)) {
		if (gameplay::is_bit_set(Global_25, 2) || gameplay::is_bit_set(Global_25, 4)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 6)) {
			if (gameplay::is_bit_set(iVar0, 2) || gameplay::is_bit_set(iVar0, 4)) {
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
				if (gameplay::is_bit_set(iVar1, 8)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 2) || gameplay::is_bit_set(iVar3, 4)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7CD5
int func_39() {
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
				return 1;
			}
		}
	}
	if (Global_139179 == 2) {
		return 1;
	}
	else if (Global_139179 == 3) {
		return 0;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7D90
int func_40() { return 1; }

// Position - 0x7D99
int func_41() { return 1; }

// Position - 0x7DA2
void func_42(var *uParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			 int iParam7, int iParam8, int iParam9) {
	char cVar0[32];

	uParam0->f_11 = iParam1;
	StringCopy(uParam0, sParam3, 16);
	uParam0->f_4 = gameplay::get_hash_key(sParam4);
	uParam0->f_5 = gameplay::get_hash_key(sParam5);
	uParam0->f_8 = gameplay::get_hash_key(sParam6);
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
	uParam0->f_9 = iParam1 / 32;
	uParam0->f_10 = iParam1 % 32;
	uParam0->f_12 = iParam9;
	if (entity::does_entity_exist(iParam2) && !ped::is_ped_injured(iParam2)) {
		if (uParam0->f_6 == 0 || uParam0->f_6 == 1 || uParam0->f_6 == 2) {
		}
		else if (uParam0->f_6 == 3 || uParam0->f_6 == 4) {
			StringCopy(&cVar0, "", 32);
			if (uParam0->f_11 == 13 || uParam0->f_11 == 14 || uParam0->f_11 == 15 || uParam0->f_11 == 16 ||
				uParam0->f_11 == 71 || uParam0->f_11 == 72) {
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01")) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (gameplay::are_strings_equal(sParam6, "torsoDecal") ||
					 gameplay::are_strings_equal(sParam6, "hairOverlay")) {
				StringCopy(&cVar0, sParam5, 32);
			}
			else {
				if (uParam0->f_11 == 0 || uParam0->f_11 == 1 || uParam0->f_11 == 2 || uParam0->f_11 == 4 ||
					uParam0->f_11 == 3 || uParam0->f_11 == 54 || uParam0->f_11 == 5 || uParam0->f_11 == 6 ||
					uParam0->f_11 == 55 || uParam0->f_11 == 7 || uParam0->f_11 == 8 || uParam0->f_11 == 9 ||
					uParam0->f_11 == 10 || uParam0->f_11 == 11 || uParam0->f_11 == 56 || uParam0->f_11 == 12 ||
					uParam0->f_11 == 57 || uParam0->f_11 == 58 || uParam0->f_11 == 59 || uParam0->f_11 == 60) {
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else {
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01") || uParam0->f_11 == 20) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			uParam0->f_5 = gameplay::get_hash_key(&cVar0);
			if (ped::_get_tattoo_zone(uParam0->f_4, uParam0->f_5) == 7) {
				uParam0->f_11 = -1;
			}
		}
	}
}

// Position - 0x8059
int func_43(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;
	}
	return 0;
}

// Position - 0x8090
int func_44(int iParam0, int iParam1) {
	if (iParam0 < 0 || iParam0 > 3) {
	}
	if (iParam1 < 0 || iParam1 > 31) {
	}
	return iParam0 * 32 + iParam1;
}

// Position - 0x80C2
bool func_45(int iParam0) { return iParam0 < 3; }

// Position - 0x80CE
int func_46(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_47(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x810B
int func_47(int iParam0) {
	if (func_45(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x8135
void func_48(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<9> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;

	if (iParam1 == -1) {
		iParam1 = func_18();
	}
	if (!iParam3) {
		ped::_clear_ped_facial_decorations(*iParam0);
	}
	iVar13 = func_148(*iParam0);
	iVar14 = func_138(*iParam0, 0);
	iVar15 = func_136(*iParam0);
	iVar16 = func_135(*iParam0);
	if (!iParam2) {
		if (func_59(*iParam0)) {
			iParam2 = 1;
		}
	}
	if (iParam2) {
		iVar15 = 1;
	}
	iVar17 = 0;
	while (iVar17 < 127) {
		if (func_53(iVar17, iParam1)) {
			if (func_35(&Var0, iVar17, iVar13, *iParam0, -1)) {
				if (func_50(*iParam0, &Var0, Var0.f_4, Var0.f_8, iVar14, iVar15, iParam2, iVar16)) {
					if (!iParam3) {
						ped::_set_ped_decoration(*iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
		}
		iVar17++;
	}
	if (func_53(123, -1)) {
		if (ped::_get_tattoo_zone(-1719270477, -1824026490) != 7) {
			if (!iParam3) {
				ped::_set_ped_decoration(*iParam0, -1719270477, -1824026490);
			}
		}
	}
	iVar19 = dlc1::_get_num_decorations(iVar13);
	iVar18 = 0;
	while (iVar18 < iVar19) {
		if (dlc1::_0xFF56381874F82086(iVar13, iVar18, &Var20)) {
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				iVar35 = 129 + iVar18;
				if (func_53(iVar35, iParam1)) {
					if (func_50(*iParam0, &Var20.f_7, Var20.f_2, Var20.f_6, iVar14, iVar15, iParam2, iVar16)) {
						if (!iParam3) {
							ped::_set_ped_decoration(*iParam0, Var20.f_2, Var20.f_3);
							func_49(*iParam0, Var20.f_2, Var20.f_3);
						}
					}
				}
			}
		}
		iVar18++;
	}
}

// Position - 0x82AF
void func_49(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x83A4
bool func_50(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6,
			 int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	if (iParam3 == 0) {
		iVar1 = func_52(iVar0, sParam1, iParam3);
		iParam3 = gameplay::get_hash_key(func_51(iVar1));
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
						if (func_53(13, -1)) {
							return false;
						}
						else if (func_53(14, -1)) {
							return false;
						}
						else if (func_53(15, -1)) {
							return false;
						}
						else if (func_53(16, -1)) {
							return false;
						}
						else if (func_53(71, -1)) {
							return false;
						}
						else if (func_53(72, -1)) {
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
						if (func_53(13, -1)) {
							return false;
						}
						else if (func_53(14, -1)) {
							return false;
						}
						else if (func_53(15, -1)) {
							return false;
						}
						else if (func_53(16, -1)) {
							return false;
						}
						else if (func_53(71, -1)) {
							return false;
						}
						else if (func_53(72, -1)) {
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
						if (func_53(13, -1)) {
						}
						else if (func_53(14, -1)) {
							return false;
						}
						else if (func_53(15, -1)) {
							return false;
						}
						else if (func_53(16, -1)) {
						}
						else if (func_53(71, -1)) {
							return false;
						}
						else if (func_53(72, -1)) {
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
					if (func_53(13, -1)) {
					}
					else if (func_53(14, -1)) {
					}
					else if (func_53(15, -1)) {
						return false;
					}
					else if (func_53(16, -1)) {
					}
					else if (func_53(71, -1)) {
					}
					else if (func_53(72, -1)) {
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
						if (func_53(15, -1)) {
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
					if (func_53(13, -1)) {
						return false;
					}
					else if (func_53(14, -1)) {
						return false;
					}
					else if (func_53(15, -1)) {
						return false;
					}
					else if (func_53(16, -1)) {
					}
					else if (func_53(71, -1)) {
					}
					else if (func_53(72, -1)) {
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
						if (func_53(13, -1)) {
						}
						else if (func_53(14, -1)) {
						}
						else if (func_53(15, -1)) {
						}
						else if (func_53(16, -1)) {
						}
						else if (func_53(71, -1)) {
						}
						else if (func_53(72, -1)) {
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

// Position - 0x8AEB
char *func_51(int iParam0) {
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

// Position - 0x912D
int func_52(int iParam0, char *sParam1, int iParam2) {
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

// Position - 0xA15F
bool func_53(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam0 == -1) {
		return false;
	}
	iVar0 = func_55(iParam0, iParam1);
	iVar1 = func_54(iParam0);
	if (iVar1 < 0 || iVar1 >= 32) {
		return false;
	}
	return gameplay::is_bit_set(iVar0, iVar1);
}

// Position - 0xA1A1
int func_54(int iParam0) { return iParam0 % 32; }

// Position - 0xA1AE
int func_55(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_16(func_56(iParam0), iParam1, 0);
	return iVar0;
}

// Position - 0xA1C7
int func_56(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_58(iVar0);
	if (func_20() == 0 || func_57() == 0 || func_20() == 999 && func_57() == 999) {
		switch (iVar1) {
		case 0: return 1043;

		case 1: return 1044;

		case 2: return 1045;

		case 3: return 1046;

		case 4: return 1047;

		case 5: return 1048;

		case 6: return 1482;

		case 7: return 1483;

		case 8: return 1484;

		case 9: return 1485;

		case 10: return 1941;

		case 11: return 1942;

		case 12: return 1943;

		case 13: return 2405;

		case 14: return 2425;

		case 15: return 2428;

		case 16: return 2431;

		case 17: return 2594;

		case 18: return 2597;

		case 19: return 2600;

		case 20: return 3756;

		case 21: return 3759;

		case 22: return 3834;

		case 23: return 3837;

		case 24: return 3840;

		case 25: return 3843;

		case 26: return 5334;

		case 27: return 5337;
		}
	}
	return 6022;
}

// Position - 0xA3B6
int func_57() { return Global_25191; }

// Position - 0xA3C1
int func_58(int iParam0) { return iParam0 / 32; }

// Position - 0xA3CE
bool func_59(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			if (iVar0 > 15) {
				iVar1 = func_64(iParam0, 11, -1);
				if (iVar1 >= 237) {
					iVar2 = func_60(joaat("mp_m_freemode_01"), iVar1, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 310055897, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 606713654, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1831422288, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -838136846, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 655638019, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 83294665, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -697656159, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0)) {
						return true;
					}
				}
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			if (iVar0 > 15) {
				iVar3 = func_64(iParam0, 11, -1);
				if (iVar3 >= 237) {
					iVar4 = func_60(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 201427653, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 967829025, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1266557933, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -979468724, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 970679185, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 83294665, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 382246252, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 198641529, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -398213037, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -306768813, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1148412551, 0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0xA652
int func_60(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iVar19 = iParam1 - func_63(iParam0);
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
		iVar40 = iParam1 - func_61(iParam0, func_62(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_62(iParam2));
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

// Position - 0xA7AE
int func_61(int iParam0, int iParam1) {
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

// Position - 0xAB55
int func_62(int iParam0) {
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

// Position - 0xAC05
int func_63(int iParam0) {
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

// Position - 0xAC66
int func_64(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_72(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_72(iParam0, iParam1, iVar1)) {
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
				return func_67(iParam0, iParam2);
			}
		}
		else {
			return func_65(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0xAD07
int func_65(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_62(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_66(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0xAD67
int func_66(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_62(iParam3);
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

// Position - 0xADEB
int func_67(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_71(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_68(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0xAE31
int func_68(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_71(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_70(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_70(entity::get_entity_model(iParam0), iVar1, 14, 4);
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
					iVar3 += func_69(iParam0, iParam3);
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
	return func_71(iParam3);
}

// Position - 0xAF2D
int func_69(int iParam0, int iParam1) {
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

// Position - 0xB06B
int func_70(int iParam0, int iParam1, int iParam2, int iParam3) {
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
					return func_63(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_62(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_61(iParam0, func_62(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0xB14B
int func_71(int iParam0) {
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

// Position - 0xB1D1
bool func_72(int iParam0, int iParam1, int iParam2) {
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
	Global_69523[1 /*14*/] = {func_88(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar8 = {func_84(iVar0, iParam2)};
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
				if (!func_72(iParam0, iVar4, uVar8[iVar4])) {
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return false;
					if (iVar4 == 13) {
						uVar25 = {func_81(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8) {
							if (!func_72(iParam0, 14, uVar25[iVar5])) {
								iVar6 = 0;
								while (iVar6 <= 19) {
									Global_69523[2 /*14*/] = {func_88(iVar0, 14, iVar6)};
									if (Global_69523[2 /*14*/].f_12 == iVar5) {
										if (func_72(iParam0, 14, iVar6)) {
											if (!func_76(iVar0, iParam2, 14, iVar6, &uVar8, &Global_69523[2 /*14*/])) {
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
						iVar1 = func_65(iParam0, iVar4);
						Global_69523[2 /*14*/] = {func_88(iVar0, iVar4, iVar1)};
						if (!func_76(iVar0, iParam2, iVar4, iVar1, &uVar8, &Global_69523[2 /*14*/])) {
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
			if (func_16(1751, Global_69521, 0) != uVar8[10]) {
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
		uVar36 = {func_81(iVar0, iParam2)};
		iVar35 = 0;
		while (iVar35 <= 8) {
			if (!func_72(iParam0, 14, uVar36[iVar35])) {
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
		if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_62(iParam1)) &&
			Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_62(iParam1))) {
			return true;
		}
		if (iParam1 == 4) {
			if (func_75(iVar0, 11, func_65(iParam0, 11), -1)) {
				if (func_74(iVar0, 4, iParam2, &iVar68)) {
					return func_72(iParam0, 4, iVar68);
				}
			}
			else if (func_73(iVar0, 4, iParam2, &iVar68)) {
				return func_72(iParam0, 4, iVar68);
			}
		}
	}
	return false;
}

// Position - 0xB612
bool func_73(int iParam0, int iParam1, int iParam2, int *iParam3) {
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
				iVar0 = func_60(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (!dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_70(iParam0, iVar3, iParam1, 4);
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

// Position - 0xB6BB
bool func_74(int iParam0, int iParam1, int iParam2, int *iParam3) {
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
				iVar0 = func_60(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_70(iParam0, iVar3, iParam1, 4);
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

// Position - 0xB763
bool func_75(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 11:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 11, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0xB7B6
bool func_76(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
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
		uVar0 = {func_81(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_80(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_79(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1)) {
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
		else if (func_77(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_79(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1)) {
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
		else if (func_77(iParam0, iParam2, iParam3, -1)) {
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
		if (func_79(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_78(iParam0, iParam2, iParam3, -1)) {
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
		else if (func_77(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0xBDBA
bool func_77(int iParam0, int iParam1, int iParam2, int iParam3) {
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
					iParam3 = func_60(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 1, 3), -1842686353, 0);
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
					iParam3 = func_60(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_60(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0xC039
bool func_78(int iParam0, int iParam1, int iParam2, int iParam3) {
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
						iParam3 = func_60(iParam0, iParam2, 1, 3);
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
						iParam3 = func_60(iParam0, iParam2, 1, 4);
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

// Position - 0xC43A
bool func_79(int iParam0, int iParam1, int iParam2, int iParam3) {
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
					iParam3 = func_60(iParam0, iParam2, 14, 3);
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
					iParam3 = func_60(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0xC72D
bool func_80(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xC7C6
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
		case 31: func_83(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_83(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_83(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_83(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_83(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_83(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_83(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_83(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_83(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_83(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_83(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_83(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_83(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_83(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_83(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_83(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_83(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_83(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_83(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_83(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_83(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_83(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_83(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_83(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_83(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_83(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_83(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_83(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_83(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_83(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_83(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_83(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_83(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_83(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_83(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_83(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_83(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_83(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_83(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_83(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_83(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_83(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_83(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_83(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_83(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_83(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_83(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_83(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_83(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_83(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_83(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_83(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_83(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_83(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_83(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_83(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_83(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_83(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_83(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_83(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_83(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_83(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_83(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_83(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_83(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_83(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_83(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_83(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_83(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_83(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_83(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_83(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_83(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_83(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_83(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_83(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_83(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_83(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_83(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_83(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_83(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_83(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_82(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xD0F5
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
						(*iParam0)[vVar16.z] = func_70(iParam1, vVar16.x, 14, iVar0);
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

// Position - 0xD21F
void func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0xD267
struct<17> func_84(int iParam0, int iParam1) {
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
				func_87(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_87(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_87(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_87(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_87(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_87(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_87(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_87(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_87(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_87(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_87(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_87(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_87(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_87(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_87(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_87(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_87(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_87(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_87(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_87(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_87(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_87(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_87(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_87(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_87(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_87(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_87(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_87(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_87(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_87(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_87(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_87(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_87(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_87(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_87(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_87(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_87(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_87(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_87(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_87(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_87(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_87(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_87(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_87(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_87(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_87(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_87(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_87(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_87(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_87(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_87(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_87(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_87(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_87(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_85(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_87(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_87(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_87(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_87(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_87(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_87(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_87(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_87(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_87(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_87(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_87(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_87(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_87(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_87(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_87(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_87(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_87(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_87(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_87(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_87(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_87(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_87(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_87(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_87(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_87(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_87(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_87(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_87(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_87(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_87(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_87(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_87(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_87(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_87(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_87(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_87(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_87(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_87(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_87(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_87(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_87(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_87(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_87(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_87(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_87(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_87(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_87(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_85(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_87(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_87(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_87(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_87(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_87(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_87(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_87(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_87(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_87(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_87(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_87(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_87(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_87(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_87(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_87(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_87(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_87(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_87(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_87(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_87(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_87(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_87(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_87(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_87(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_87(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_87(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_87(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_87(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_87(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_87(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_87(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_87(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_87(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_87(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_87(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_87(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_87(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_87(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_87(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_87(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_87(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_87(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_87(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_87(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_87(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_87(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_87(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_87(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_85(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_87(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_87(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_87(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_87(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_87(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_87(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_87(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_87(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_87(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_87(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_87(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_87(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_87(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_87(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_87(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_87(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_87(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_87(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_87(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_87(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_87(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_87(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_87(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_87(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_87(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_87(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_85(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_87(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_87(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_87(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_87(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_87(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_87(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_87(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_87(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_87(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_87(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_87(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_87(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_87(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_87(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_87(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_87(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_87(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_87(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_87(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_87(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_87(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_87(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_87(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_87(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_87(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_87(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_87(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_87(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_85(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0xF0AF
void func_85(var* uParam0, int iParam1, int iParam2, int iParam3)
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
						(*uParam0)[func_86(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_86(vVar16.z)] = func_70(iParam1, vVar16.x, func_86(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_86(vVar16.z)] = vVar16.y;
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

// Position - 0xF299
int func_86(int iParam0) {
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

// Position - 0xF349
void func_87(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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

// Position - 0xF3BA
struct<14> func_88(int iParam0, int iParam1, int iParam2) {
	func_134();
	if (iParam0 == joaat("mp_m_freemode_01")) {
		func_118(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		func_89(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0xF3F7
void func_89(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 2: func_117(iParam1); break;

	case 11: func_116(iParam1); break;

	case 8: func_112(iParam1); break;

	case 9: func_111(iParam1); break;

	case 3: func_110(iParam1); break;

	case 4: func_109(iParam1); break;

	case 6: func_108(iParam1); break;

	case 1: func_107(iParam1); break;

	case 7: func_106(iParam1); break;

	case 10: func_105(iParam1); break;

	case 14: func_104(iParam1); break;

	case 12: func_103(iParam1); break;

	case 5: func_102(iParam1); break;

	case 0: func_100(iParam1); break;

	case 13: func_90(iParam1); break;
	}
}

// Position - 0xF4E7
void func_90(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 31:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		break;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xF6A2
void func_91(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
	uParam0->f_12 = func_99(iParam8);
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
		if (func_98(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_96(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_96(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_96(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_96(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_96(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_96(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_95(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_95(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_95(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_98(14)) {
				return;
			}
			iVar0 = func_16(func_94(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_16(func_93(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_92(iParam1, uParam0->f_2, &iVar1)) {
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

// Position - 0xFA33
bool func_92(int iParam0, int iParam1, int *iParam2) {
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

// Position - 0xFE38
int func_93(int iParam0, int iParam1) {
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

// Position - 0x10233
int func_94(int iParam0, int iParam1) {
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

// Position - 0x1062E
bool func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
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

// Position - 0x1154C
int func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_97(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_16(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x1158E
bool func_97(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
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

// Position - 0x1277D
bool func_98(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1278B
int func_99(int iParam0) {
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

// Position - 0x1285F
void func_100(int iParam0) {
	int iVar0;

	iVar0 = 0;
	Global_69523[0 /*14*/].f_5 = 4;
	func_101(iVar0, iParam0, 0);
}

// Position - 0x1287D
void func_101(int iParam0, int iParam1, int iParam2) {
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
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_91(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
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
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_62(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_91(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x12AF8
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 9);
		return;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12BF9
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
	iVar10 = 12;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S1", 16);
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S2", 16);
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S3", 16);
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S4", 16);
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S5", 16);
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S6", 16);
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S7", 16);
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S8", 16);
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P1", 16);
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P2", 16);
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P3", 16);
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P4", 16);
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P5", 16);
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P6", 16);
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P7", 16);
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P8", 16);
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P9", 16);
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P10", 16);
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B1", 16);
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B2", 16);
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B3", 16);
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B4", 16);
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B5", 16);
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B6", 16);
		break;

	case 25:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B7", 16);
		break;

	case 26:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B8", 16);
		break;

	case 27:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B9", 16);
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 28);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12ED6
void func_104(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0) {
	case 0:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "HT_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 11:
		StringCopy(&Var2, "HT_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 12:
		StringCopy(&Var2, "HT_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 13:
		StringCopy(&Var2, "HT_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 14:
		StringCopy(&Var2, "HT_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 235;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 15:
		StringCopy(&Var2, "HT_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 16:
		StringCopy(&Var2, "HT_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 17:
		StringCopy(&Var2, "HT_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 18:
		StringCopy(&Var2, "HT_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "HT_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "HT_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 5000;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 21:
		StringCopy(&Var2, "HT_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "HT_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "HT_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "HT_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "HT_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "HT_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 27:
		StringCopy(&Var2, "HT_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 28:
		StringCopy(&Var2, "HT_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 29:
		StringCopy(&Var2, "HT_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "HT_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "HT_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "HT_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "HT_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "HT_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 35:
		StringCopy(&Var2, "HT_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 400;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 36:
		StringCopy(&Var2, "HT_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 37:
		StringCopy(&Var2, "HT_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 375;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 38:
		StringCopy(&Var2, "HT_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 39:
		StringCopy(&Var2, "HT_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 40:
		StringCopy(&Var2, "HT_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 41:
		StringCopy(&Var2, "HT_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 42:
		StringCopy(&Var2, "HT_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 325;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 43:
		StringCopy(&Var2, "HT_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 44:
		StringCopy(&Var2, "HT_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 45:
		StringCopy(&Var2, "HT_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 46:
		StringCopy(&Var2, "HT_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 47:
		StringCopy(&Var2, "HT_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 48:
		StringCopy(&Var2, "HT_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 49:
		StringCopy(&Var2, "HT_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 50:
		StringCopy(&Var2, "HT_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 255;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 51:
		StringCopy(&Var2, "HT_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 360;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 52:
		StringCopy(&Var2, "HT_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 53:
		StringCopy(&Var2, "HT_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 3970;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 54:
		StringCopy(&Var2, "HT_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 55:
		StringCopy(&Var2, "HT_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1355;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 56:
		StringCopy(&Var2, "HT_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 57:
		StringCopy(&Var2, "HT_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 58:
		StringCopy(&Var2, "HT_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 59:
		StringCopy(&Var2, "HT_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 230;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 60:
		StringCopy(&Var2, "HT_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 61:
		StringCopy(&Var2, "HT_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 515;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 62:
		StringCopy(&Var2, "HT_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 545;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 63:
		StringCopy(&Var2, "HT_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 64:
		StringCopy(&Var2, "HT_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 65:
		StringCopy(&Var2, "HT_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 66:
		StringCopy(&Var2, "HT_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 1440;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 67:
		StringCopy(&Var2, "HT_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "HT_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "HT_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "HT_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "HT_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "HT_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "HT_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "HT_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "HT_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 76:
		StringCopy(&Var2, "HT_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 77:
		StringCopy(&Var2, "HT_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 78:
		StringCopy(&Var2, "HT_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 79:
		StringCopy(&Var2, "HT_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 50;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 80:
		StringCopy(&Var2, "HT_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 81:
		StringCopy(&Var2, "HT_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 575;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 82:
		StringCopy(&Var2, "HT_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 605;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 83:
		StringCopy(&Var2, "HT_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "HT_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "HT_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "HT_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "HT_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "HT_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "HT_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "HT_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 285;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 91:
		StringCopy(&Var2, "HT_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "HT_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 2125;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 93:
		StringCopy(&Var2, "HT_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "HT_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "HT_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "HT_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 97:
		StringCopy(&Var2, "HT_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "HT_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "HT_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 100:
		StringCopy(&Var2, "HT_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 101:
		StringCopy(&Var2, "HT_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 102:
		StringCopy(&Var2, "HT_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "HT_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 104:
		StringCopy(&Var2, "HT_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 105:
		StringCopy(&Var2, "HT_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 106:
		StringCopy(&Var2, "HT_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 295;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 107:
		StringCopy(&Var2, "HT_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 108:
		StringCopy(&Var2, "HT_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 109:
		StringCopy(&Var2, "HT_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 110:
		StringCopy(&Var2, "HT_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 855;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 111:
		StringCopy(&Var2, "HT_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1615;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 112:
		StringCopy(&Var2, "HT_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 1130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 113:
		StringCopy(&Var2, "HT_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 165;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 114:
		StringCopy(&Var2, "HT_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 115:
		StringCopy(&Var2, "HT_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 116:
		StringCopy(&Var2, "HT_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 117:
		StringCopy(&Var2, "HT_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 118:
		StringCopy(&Var2, "HT_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 119:
		StringCopy(&Var2, "HT_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 120:
		StringCopy(&Var2, "HT_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 121:
		StringCopy(&Var2, "HT_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 122:
		StringCopy(&Var2, "HT_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 123:
		StringCopy(&Var2, "HT_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 390;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 124:
		StringCopy(&Var2, "HT_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 395;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 125:
		StringCopy(&Var2, "HT_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 126:
		StringCopy(&Var2, "HT_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 425;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 127:
		StringCopy(&Var2, "HT_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 600;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 128:
		StringCopy(&Var2, "HT_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 590;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 129:
		StringCopy(&Var2, "HT_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 130:
		StringCopy(&Var2, "HT_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 555;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 131:
		StringCopy(&Var2, "HE_FMF_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 1060;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 132:
		StringCopy(&Var2, "HE_FMF_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 1400;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 133:
		StringCopy(&Var2, "HE_FMF_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 1315;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 134:
		StringCopy(&Var2, "HE_FMF_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 1230;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 135:
		StringCopy(&Var2, "HE_FMF_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 1145;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 136:
		StringCopy(&Var2, "HE_FMF_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 8450;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 137:
		StringCopy(&Var2, "HE_FMF_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 675;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 138:
		StringCopy(&Var2, "HE_FMF_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 8750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 139:
		StringCopy(&Var2, "HE_FMF_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 975;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 140:
		StringCopy(&Var2, "HE_FMF_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 141:
		StringCopy(&Var2, "HE_FMF_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 865;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 142:
		StringCopy(&Var2, "HE_FMF_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 890;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 143:
		StringCopy(&Var2, "HE_FMF_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 730;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 144:
		StringCopy(&Var2, "HE_FMF_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 650;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 145:
		StringCopy(&Var2, "HE_FMF_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 645;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 146:
		StringCopy(&Var2, "HE_FMF_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 755;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 147:
		StringCopy(&Var2, "HE_FMF_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 13850;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 148:
		StringCopy(&Var2, "HE_FMF_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 2900;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 149:
		StringCopy(&Var2, "HE_FMF_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 2895;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 150:
		StringCopy(&Var2, "HE_FMF_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 12500;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 151:
		StringCopy(&Var2, "HE_FMF_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 15000;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 152:
		StringCopy(&Var2, "HE_FMF_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 14750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 153:
		StringCopy(&Var2, "HE_FMF_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 13150;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 154:
		StringCopy(&Var2, "HE_FMF_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 2925;
		iVar8 = 0;
		iVar11 = 2;
		break;
	}
	switch (iParam0) {
	case 155:
		StringCopy(&Var2, "G_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 156:
		StringCopy(&Var2, "G_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 157:
		StringCopy(&Var2, "G_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 158:
		StringCopy(&Var2, "G_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 159:
		StringCopy(&Var2, "G_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 160:
		StringCopy(&Var2, "G_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 161:
		StringCopy(&Var2, "G_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 162:
		StringCopy(&Var2, "G_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 163:
		StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 164:
		StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 165:
		StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 166:
		StringCopy(&Var2, "G_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 167:
		StringCopy(&Var2, "G_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 168:
		StringCopy(&Var2, "G_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 169:
		StringCopy(&Var2, "G_FMF_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 170:
		StringCopy(&Var2, "G_FMF_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 171:
		StringCopy(&Var2, "G_FMF_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 172:
		StringCopy(&Var2, "G_FMF_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 173:
		StringCopy(&Var2, "G_FMF_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 174:
		StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 970;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 175:
		StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 176:
		StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 177:
		StringCopy(&Var2, "G_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 178:
		StringCopy(&Var2, "G_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 179:
		StringCopy(&Var2, "G_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 180:
		StringCopy(&Var2, "G_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 181:
		StringCopy(&Var2, "G_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 595;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 182:
		StringCopy(&Var2, "G_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 183:
		StringCopy(&Var2, "G_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 545;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 184:
		StringCopy(&Var2, "G_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 590;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 185:
		StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 1125;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 186:
		StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 740;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 187:
		StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 805;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 188:
		StringCopy(&Var2, "G_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 6250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 189:
		StringCopy(&Var2, "G_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 190:
		StringCopy(&Var2, "G_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 3585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 191:
		StringCopy(&Var2, "G_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 4075;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 192:
		StringCopy(&Var2, "G_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 4935;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 193:
		StringCopy(&Var2, "G_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 194:
		StringCopy(&Var2, "G_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 5600;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 195:
		StringCopy(&Var2, "G_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 4790;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 196:
		StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 197:
		StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 198:
		StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 199:
		StringCopy(&Var2, "G_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 2245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 200:
		StringCopy(&Var2, "G_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 201:
		StringCopy(&Var2, "G_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 210;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 202:
		StringCopy(&Var2, "G_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 203:
		StringCopy(&Var2, "G_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 1205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 204:
		StringCopy(&Var2, "G_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 205:
		StringCopy(&Var2, "G_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 2215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 206:
		StringCopy(&Var2, "G_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 207:
		StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 2835;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 208:
		StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 2450;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 209:
		StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 2515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 210:
		StringCopy(&Var2, "G_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 211:
		StringCopy(&Var2, "G_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 212:
		StringCopy(&Var2, "G_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 213:
		StringCopy(&Var2, "G_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 214:
		StringCopy(&Var2, "G_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 215:
		StringCopy(&Var2, "G_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 216:
		StringCopy(&Var2, "G_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 217:
		StringCopy(&Var2, "G_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 218:
		StringCopy(&Var2, "G_FMF_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 219:
		StringCopy(&Var2, "G_FMF_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 220:
		StringCopy(&Var2, "G_FMF_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 221:
		StringCopy(&Var2, "G_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 5000;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 222:
		StringCopy(&Var2, "G_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "G_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 224:
		StringCopy(&Var2, "G_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 225:
		StringCopy(&Var2, "G_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 226:
		StringCopy(&Var2, "G_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 227:
		StringCopy(&Var2, "G_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 228:
		StringCopy(&Var2, "G_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 229:
		StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 2820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 230:
		StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 2435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 231:
		StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 2500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 232:
		StringCopy(&Var2, "G_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 4815;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 233:
		StringCopy(&Var2, "G_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 4795;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 234:
		StringCopy(&Var2, "G_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 235:
		StringCopy(&Var2, "G_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 236:
		StringCopy(&Var2, "G_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 4965;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 237:
		StringCopy(&Var2, "G_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 480;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 238:
		StringCopy(&Var2, "G_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 465;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 239:
		StringCopy(&Var2, "G_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 4320;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 240:
		StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 2390;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 241:
		StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 2005;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 242:
		StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 2070;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 243:
		StringCopy(&Var2, "G_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 244:
		StringCopy(&Var2, "G_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 245:
		StringCopy(&Var2, "G_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 246:
		StringCopy(&Var2, "G_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 247:
		StringCopy(&Var2, "G_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 248:
		StringCopy(&Var2, "G_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 249:
		StringCopy(&Var2, "G_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 250:
		StringCopy(&Var2, "G_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 251:
		StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 252:
		StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 253:
		StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 254:
		StringCopy(&Var2, "G_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 70;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 255:
		StringCopy(&Var2, "G_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 256:
		StringCopy(&Var2, "G_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 257:
		StringCopy(&Var2, "G_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 570;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 258:
		StringCopy(&Var2, "G_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 525;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 259:
		StringCopy(&Var2, "G_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 260:
		StringCopy(&Var2, "G_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 261:
		StringCopy(&Var2, "G_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 262:
		StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 263:
		StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 264:
		StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 265:
		StringCopy(&Var2, "G_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 266:
		StringCopy(&Var2, "G_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 267:
		StringCopy(&Var2, "G_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 268:
		StringCopy(&Var2, "G_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 4275;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 269:
		StringCopy(&Var2, "G_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 270:
		StringCopy(&Var2, "G_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 271:
		StringCopy(&Var2, "G_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 272:
		StringCopy(&Var2, "G_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 273:
		StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 274:
		StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 275:
		StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 276:
		StringCopy(&Var2, "G_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 3660;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 277:
		StringCopy(&Var2, "G_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 4165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 278:
		StringCopy(&Var2, "G_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 3670;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 279:
		StringCopy(&Var2, "G_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 280:
		StringCopy(&Var2, "G_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 3620;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 281:
		StringCopy(&Var2, "G_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 3610;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 282:
		StringCopy(&Var2, "G_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 4140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 283:
		StringCopy(&Var2, "G_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 284:
		StringCopy(&Var2, "G_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 285:
		StringCopy(&Var2, "G_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 286:
		StringCopy(&Var2, "G_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 287:
		StringCopy(&Var2, "G_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 288:
		StringCopy(&Var2, "G_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 289:
		StringCopy(&Var2, "G_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 290:
		StringCopy(&Var2, "G_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 291:
		StringCopy(&Var2, "G_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 292:
		StringCopy(&Var2, "G_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 293:
		StringCopy(&Var2, "G_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 294:
		StringCopy(&Var2, "G_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 295:
		StringCopy(&Var2, "G_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 296:
		StringCopy(&Var2, "G_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 297:
		StringCopy(&Var2, "G_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 298:
		StringCopy(&Var2, "G_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 299:
		StringCopy(&Var2, "G_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 300:
		StringCopy(&Var2, "G_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 301:
		StringCopy(&Var2, "G_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 302:
		StringCopy(&Var2, "G_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 303:
		StringCopy(&Var2, "G_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 304:
		StringCopy(&Var2, "G_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 305:
		StringCopy(&Var2, "G_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 306:
		StringCopy(&Var2, "G_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 307:
		StringCopy(&Var2, "G_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 308:
		StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 1490;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 309:
		StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 1105;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 310:
		StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 1170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 311:
		StringCopy(&Var2, "G_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 312:
		StringCopy(&Var2, "G_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 313:
		StringCopy(&Var2, "G_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 314:
		StringCopy(&Var2, "G_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 315:
		StringCopy(&Var2, "G_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 316:
		StringCopy(&Var2, "G_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 317:
		StringCopy(&Var2, "G_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 318:
		StringCopy(&Var2, "G_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 319:
		StringCopy(&Var2, "W_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 320:
		StringCopy(&Var2, "W_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 321:
		StringCopy(&Var2, "W_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 322:
		StringCopy(&Var2, "W_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 323:
		StringCopy(&Var2, "W_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 825;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 324:
		StringCopy(&Var2, "W_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 325:
		StringCopy(&Var2, "W_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 326:
		StringCopy(&Var2, "W_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;
	}
	if (iVar11 == 1) {
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121) {
			if (iVar12 > 8) {
				iVar12--;
			}
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2043[iVar12] * Global_279980.f_26);
		}
	}
	else if (iVar11 == 2) {
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2164[iVar13] * Global_279980.f_27);
		}
	}
	else if (iVar11 == 3) {
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2189[iVar14] * Global_279980.f_56);
		}
	}
	else if (iVar11 == 4) {
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 10) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2318[iVar15] * Global_279980.f_28);
		}
	}
	if (iParam0 >= 327) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 327);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_26);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_56);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_28);
			}
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x15CAB
void func_105(int iParam0) {
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
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "D_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 2:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 3:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 4:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 5:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 6);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15DAE
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
	iVar10 = 7;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		if (Global_262145.f_4140 != -1) {
			iVar1 = Global_262145.f_4140;
		}
		else {
			iVar1 = 310;
		}
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		if (Global_262145.f_4141 != -1) {
			iVar1 = Global_262145.f_4141;
		}
		else {
			iVar1 = 125;
		}
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		if (Global_262145.f_4142 != -1) {
			iVar1 = Global_262145.f_4142;
		}
		else {
			iVar1 = 145;
		}
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		if (Global_262145.f_4143 != -1) {
			iVar1 = Global_262145.f_4143;
		}
		else {
			iVar1 = 130;
		}
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		if (Global_262145.f_4144 != -1) {
			iVar1 = Global_262145.f_4144;
		}
		else {
			iVar1 = 265;
		}
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		if (Global_262145.f_4145 != -1) {
			iVar1 = Global_262145.f_4145;
		}
		else {
			iVar1 = 280;
		}
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		if (Global_262145.f_4146 != -1) {
			iVar1 = Global_262145.f_4146;
		}
		else {
			iVar1 = 295;
		}
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		if (Global_262145.f_4147 != -1) {
			iVar1 = Global_262145.f_4147;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		if (Global_262145.f_4148 != -1) {
			iVar1 = Global_262145.f_4148;
		}
		else {
			iVar1 = 85;
		}
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		if (Global_262145.f_4149 != -1) {
			iVar1 = Global_262145.f_4149;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		if (Global_262145.f_4150 != -1) {
			iVar1 = Global_262145.f_4150;
		}
		else {
			iVar1 = 105;
		}
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		if (Global_262145.f_4151 != -1) {
			iVar1 = Global_262145.f_4151;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		if (Global_262145.f_4152 != -1) {
			iVar1 = Global_262145.f_4152;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		if (Global_262145.f_4153 != -1) {
			iVar1 = Global_262145.f_4153;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		if (Global_262145.f_4154 != -1) {
			iVar1 = Global_262145.f_4154;
		}
		else {
			iVar1 = 30;
		}
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		if (Global_262145.f_4155 != -1) {
			iVar1 = Global_262145.f_4155;
		}
		else {
			iVar1 = 40;
		}
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		if (Global_262145.f_4156 != -1) {
			iVar1 = Global_262145.f_4156;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 18:
		iVar6 = 3;
		iVar7 = 5;
		if (Global_262145.f_4157 != -1) {
			iVar1 = Global_262145.f_4157;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 2;
		if (Global_262145.f_4158 != -1) {
			iVar1 = Global_262145.f_4158;
		}
		else {
			iVar1 = 355;
		}
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 3;
		if (Global_262145.f_4159 != -1) {
			iVar1 = Global_262145.f_4159;
		}
		else {
			iVar1 = 370;
		}
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 4;
		if (Global_262145.f_4160 != -1) {
			iVar1 = Global_262145.f_4160;
		}
		else {
			iVar1 = 110;
		}
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 5;
		if (Global_262145.f_4161 != -1) {
			iVar1 = Global_262145.f_4161;
		}
		else {
			iVar1 = 160;
		}
		break;

	case 31:
		iVar6 = 6;
		iVar7 = 0;
		if (Global_262145.f_4162 != -1) {
			iVar1 = Global_262145.f_4162;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 1;
		if (Global_262145.f_4163 != -1) {
			iVar1 = Global_262145.f_4163;
		}
		else {
			iVar1 = 190;
		}
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 2;
		if (Global_262145.f_4164 != -1) {
			iVar1 = Global_262145.f_4164;
		}
		else {
			iVar1 = 235;
		}
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 3;
		if (Global_262145.f_4165 != -1) {
			iVar1 = Global_262145.f_4165;
		}
		else {
			iVar1 = 220;
		}
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 4;
		if (Global_262145.f_4166 != -1) {
			iVar1 = Global_262145.f_4166;
		}
		else {
			iVar1 = 250;
		}
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 5;
		if (Global_262145.f_4167 != -1) {
			iVar1 = Global_262145.f_4167;
		}
		else {
			iVar1 = 205;
		}
		break;

	case 37:
		iVar6 = 7;
		iVar7 = 0;
		if (Global_262145.f_4168 != -1) {
			iVar1 = Global_262145.f_4168;
		}
		else {
			iVar1 = 445;
		}
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 1;
		if (Global_262145.f_4169 != -1) {
			iVar1 = Global_262145.f_4169;
		}
		else {
			iVar1 = 175;
		}
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 49:
		iVar6 = 9;
		iVar7 = 0;
		if (Global_262145.f_4170 != -1) {
			iVar1 = Global_262145.f_4170;
		}
		else {
			iVar1 = 340;
		}
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 53:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 55);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_58);
		}
		return;
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_58);
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16588
void func_107(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 960;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 9500;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 975;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 1185;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 15000;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 1115;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 1105;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 25000;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 510;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 530;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 5500;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 535;
		break;

	case 14:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1510;
		break;

	case 15:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1530;
		break;

	case 16:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 14500;
		break;

	case 17:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 13000;
		break;

	case 18:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 8000;
		break;

	case 19:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1265;
		break;

	case 20:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 8500;
		break;

	case 21:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1210;
		break;

	case 22:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2360;
		break;

	case 23:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 22500;
		break;

	case 24:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2375;
		break;

	case 25:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 2485;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 26);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_29);
		}
		return;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2016[iVar11] * Global_279980.f_29);
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1686B
void func_108(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 1765;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 760;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 760;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 765;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 90;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 95;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 100;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 1255;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 1050;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 1895;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 185;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 190;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 115;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 415;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 105;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3530;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2610;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 1295;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 120;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 160;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 160;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 145;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 105;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 115;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 150;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 540;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 460;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 415;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 135;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 140;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 160;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 1025;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 1560;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 120;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 365;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 35;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 2395;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 3675;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 320;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 3875;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2050;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 375;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2105;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 345;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 380;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 340;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 385;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 4135;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 370;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 375;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 385;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 365;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 325;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 325;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 370;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1025;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 400;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 365;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 410;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 4125;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 4365;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 5365;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 6225;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 3755;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 405;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 4115;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 2240;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 3850;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 3110;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 1950;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 455;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 405;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 410;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 415;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 4425;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 65;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 85;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 360;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 175;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 675;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 400;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 340;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 195;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 165;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 1040;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 100;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 205;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 200;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 100;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 1420;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 445;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 435;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 425;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 435;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 425;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 430;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 3215;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 3320;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 440;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 440;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 450;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 450;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 1255;
		break;

	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 750;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 165;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 460;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 195;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 210;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 215;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 220;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 455;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 175;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 790;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 175;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 190;
		break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1759[iVar11] * Global_279980.f_25);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_25);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x17E90
void func_109(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 450;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 4875;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 1760;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 1090;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 2465;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 305;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 290;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 410;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 255;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 255;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 405;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 5000;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 4480;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 4335;
		break;
	}
	switch (iParam0) {
	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 375;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 265;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 275;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 280;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 300;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 265;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 255;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 260;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 225;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 230;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 215;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 650;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 425;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 345;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 110;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 110;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 525;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 535;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 130;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 140;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 520;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 215;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 225;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 215;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 630;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 250;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 260;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 200;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 225;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 230;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 725;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 650;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 230;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 230;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 280;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 330;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 320;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 315;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 535;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 530;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 890;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 440;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 455;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 295;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 155;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 150;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 950;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 580;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 200;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 665;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 780;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 615;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 250;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 495;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 435;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 485;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 380;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 1295;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 1135;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 1425;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1645;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1925;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 2250;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 365;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 360;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 2245;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 2170;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 275;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 300;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 145;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 155;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 155;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 510;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 165;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 465;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 250;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 110;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 470;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 480;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 155;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 275;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 395;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 285;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 560;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 595;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 295;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 230;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 215;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 270;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 295;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 215;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 290;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 230;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 215;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 230;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 350;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 335;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1245[iVar11] * Global_279980.f_23);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_23);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x194F3
void func_110(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 15;
		iVar7 = 0;
		break;
	}
	if (iParam0 >= 16) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 16);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1964C
void func_111(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 11:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 21:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 23:
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 26:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 27:
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 28:
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 29:
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 31:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 32:
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 33:
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 34:
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 4;
		break;
	}
	if (iParam0 >= 36) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 36);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x198CA
void func_112(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "U_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		StringCopy(&Var2, "U_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 225;
		break;

	case 2:
		StringCopy(&Var2, "U_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		StringCopy(&Var2, "U_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 4:
		StringCopy(&Var2, "U_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 5:
		StringCopy(&Var2, "U_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 6:
		StringCopy(&Var2, "U_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 7:
		StringCopy(&Var2, "U_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 8:
		StringCopy(&Var2, "U_FMF_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 9:
		StringCopy(&Var2, "U_FMF_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "U_FMF_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 11:
		StringCopy(&Var2, "U_FMF_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 12:
		StringCopy(&Var2, "U_FMF_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 13:
		StringCopy(&Var2, "U_FMF_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 14:
		StringCopy(&Var2, "U_FMF_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 15:
		StringCopy(&Var2, "U_FMF_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 125;
		break;

	case 16:
		StringCopy(&Var2, "U_FMF_0_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "U_FMF_0_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		StringCopy(&Var2, "U_FMF_0_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 19:
		StringCopy(&Var2, "U_FMF_0_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		StringCopy(&Var2, "U_FMF_0_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 21:
		StringCopy(&Var2, "U_FMF_0_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 22:
		StringCopy(&Var2, "U_FMF_0_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "U_FMF_0_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		StringCopy(&Var2, "U_FMF_0_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "U_FMF_0_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "U_FMF_0_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 27:
		StringCopy(&Var2, "U_FMF_0_11", 16);
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		StringCopy(&Var2, "U_FMF_0_12", 16);
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 29:
		StringCopy(&Var2, "U_FMF_0_13", 16);
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 30:
		StringCopy(&Var2, "U_FMF_0_14", 16);
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 31:
		StringCopy(&Var2, "U_FMF_0_15", 16);
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 125;
		break;

	case 32:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 33:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "U_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "U_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "U_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "U_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "U_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "U_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "U_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "U_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "U_FMF_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "U_FMF_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "U_FMF_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "U_FMF_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "U_FMF_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "U_FMF_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[77]);
		break;

	case 48:
		StringCopy(&Var2, "U_FMF_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[78]);
		break;

	case 49:
		StringCopy(&Var2, "U_FMF_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "U_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[80]);
		break;

	case 51:
		StringCopy(&Var2, "U_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[81]);
		break;

	case 52:
		StringCopy(&Var2, "U_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "U_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "U_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 55:
		StringCopy(&Var2, "U_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 56:
		StringCopy(&Var2, "U_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 57:
		StringCopy(&Var2, "U_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[87]);
		break;

	case 58:
		StringCopy(&Var2, "U_FMF_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 59:
		StringCopy(&Var2, "U_FMF_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 90;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[89]);
		break;

	case 60:
		StringCopy(&Var2, "U_FMF_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "U_FMF_5_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "U_FMF_5_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "U_FMF_5_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "U_FMF_5_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "U_FMF_5_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 67:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 68:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 69:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 70:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 71:
		StringCopy(&Var2, "U_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 90;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[176]);
		break;

	case 72:
		StringCopy(&Var2, "U_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 95;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[177]);
		break;

	case 73:
		StringCopy(&Var2, "U_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 95;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[178]);
		break;

	case 74:
		StringCopy(&Var2, "U_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "U_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "U_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "U_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "U_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "U_FMF_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "U_FMF_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "U_FMF_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[186]);
		break;

	case 82:
		StringCopy(&Var2, "U_FMF_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 65;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[187]);
		break;

	case 83:
		StringCopy(&Var2, "U_FMF_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "U_FMF_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "U_FMF_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "U_FMF_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[191]);
		break;

	case 87:
		StringCopy(&Var2, "U_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "U_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "U_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "U_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "U_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "U_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "U_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "U_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 1560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[199]);
		break;

	case 95:
		StringCopy(&Var2, "U_FMF_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[200]);
		break;

	case 96:
		StringCopy(&Var2, "U_FMF_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[201]);
		break;

	case 97:
		StringCopy(&Var2, "U_FMF_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "U_FMF_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "U_FMF_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 100:
		StringCopy(&Var2, "U_FMF_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 101:
		StringCopy(&Var2, "U_FMF_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 102:
		StringCopy(&Var2, "U_FMF_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "U_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 975;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[208]);
		break;

	case 104:
		StringCopy(&Var2, "U_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 2670;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[209]);
		break;

	case 105:
		StringCopy(&Var2, "U_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[210]);
		break;

	case 106:
		StringCopy(&Var2, "U_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 400;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[211]);
		break;

	case 107:
		StringCopy(&Var2, "U_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 2500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[212]);
		break;

	case 108:
		StringCopy(&Var2, "U_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2060;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[213]);
		break;

	case 109:
		StringCopy(&Var2, "U_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2620;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[214]);
		break;

	case 110:
		StringCopy(&Var2, "U_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[215]);
		break;

	case 111:
		StringCopy(&Var2, "U_FMF_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[216]);
		break;

	case 112:
		StringCopy(&Var2, "U_FMF_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[217]);
		break;

	case 113:
		StringCopy(&Var2, "U_FMF_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[218]);
		break;

	case 114:
		StringCopy(&Var2, "U_FMF_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 2390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[219]);
		break;

	case 115:
		StringCopy(&Var2, "U_FMF_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 2610;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[220]);
		break;

	case 116:
		StringCopy(&Var2, "U_FMF_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1450;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[221]);
		break;

	case 117:
		StringCopy(&Var2, "U_FMF_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 2720;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[222]);
		break;

	case 118:
		StringCopy(&Var2, "U_FMF_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 4995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[223]);
		break;

	case 119:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 120:
		StringCopy(&Var2, "U_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 325;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[240]);
		break;

	case 121:
		StringCopy(&Var2, "U_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 122:
		StringCopy(&Var2, "U_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 123:
		StringCopy(&Var2, "U_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[243]);
		break;

	case 124:
		StringCopy(&Var2, "U_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 125:
		StringCopy(&Var2, "U_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 126:
		StringCopy(&Var2, "U_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 127:
		StringCopy(&Var2, "U_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 128:
		StringCopy(&Var2, "U_FMF_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 129:
		StringCopy(&Var2, "U_FMF_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 130:
		StringCopy(&Var2, "U_FMF_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 450;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[250]);
		break;

	case 131:
		StringCopy(&Var2, "U_FMF_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[251]);
		break;

	case 132:
		StringCopy(&Var2, "U_FMF_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 133:
		StringCopy(&Var2, "U_FMF_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 134:
		StringCopy(&Var2, "U_FMF_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 135:
		StringCopy(&Var2, "U_FMF_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		iVar0 = 1;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 136);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_24);
		}
		return;
	}
	if (iParam0 == 4 || iParam0 == 20) {
		if (func_113(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23) {
		if (func_113(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_1502[7]);
		}
	}
	else if (iParam0 == 9 || iParam0 == 25) {
		if (func_113(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16) {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar11]);
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32) {
		iVar12 = iParam0 - 16;
		if (iVar12 >= 0 && iVar12 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar12]);
		}
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_24);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1AC8E
bool func_113(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (func_115(iParam0) == 6022) {
		return false;
	}
	iVar0 = func_114(iParam0, iParam1);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_54(iVar1));
}

// Position - 0x1ACC0
int func_114(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = func_16(func_115(uParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x1ACD9
int func_115(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_58(iVar0);
	if (func_20() == 0 || func_57() == 0 || func_20() == 999 && func_57() == 999) {
		switch (iVar1) {
		case 0: return 1033;

		case 1: return 1034;

		case 2: return 1035;

		case 3: return 1036;

		case 4: return 1037;

		case 5: return 1497;

		case 6: return 1750;

		case 7: return 1944;

		case 8: return 1945;

		case 9: return 1946;

		case 10: return 1947;

		case 11: return 1948;

		case 12: return 1949;

		case 13: return 2404;

		case 14: return 2424;

		case 15: return 2427;

		case 16: return 2430;

		case 17: return 2593;

		case 18: return 2596;

		case 19: return 2599;

		case 20: return 3755;

		case 21: return 3758;

		case 22: return 3833;

		case 23: return 3836;

		case 24: return 3839;

		case 25: return 3842;

		case 26: return 5333;

		case 27: return 5336;
		}
	}
	return 6022;
}

// Position - 0x1AECB
void func_116(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 225;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 125;
		break;
	}
	switch (iParam0) {
	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 230;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 355;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5000;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2725;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3265;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 3625;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 4220;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 310;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 60;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 295;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 2250;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 275;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 445;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 470;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 95;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 360;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 100;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 60;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 295;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 460;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 1980;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 2110;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 95;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 40;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 375;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 90;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 900;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1000;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1050;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1000;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2975;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 1100;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 1825;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 1750;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1025;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 1075;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 2805;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 2250;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 495;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 525;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 130;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 560;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 295;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 975;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 160;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 100;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 1700;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 380;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 90;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 85;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 215;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 150;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 145;
		break;
	}
	switch (iParam0) {
	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 1560;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 195;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 200;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 975;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 2670;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 480;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 400;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2060;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2620;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 475;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 490;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2280;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 485;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 2390;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 2610;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1450;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 2720;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 4995;
		break;
	}
	switch (iParam0) {
	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 385;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 345;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 430;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 375;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 375;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 360;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 325;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 340;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 435;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 300;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 315;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 415;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 420;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 325;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 450;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 465;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4) {
		if (func_113(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[4] * Global_279980.f_24);
		}
	}
	else if (iParam0 == 7) {
		if (func_113(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_1502[7] * Global_279980.f_24);
		}
	}
	else if (iParam0 == 9) {
		if (func_113(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[9] * Global_279980.f_24);
		}
	}
	else {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar11] * Global_279980.f_24);
		}
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_24);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x1C65B
void func_117(int iParam0) {
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[0]);
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[1]);
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 495;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[2]);
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[3]);
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[4]);
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[5]);
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 440;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[6]);
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 435;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[7]);
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 430;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[8]);
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 425;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[9]);
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 420;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[10]);
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[11]);
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[12]);
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[13]);
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 175;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[14]);
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[15]);
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 295;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[16]);
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 290;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[17]);
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 285;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[18]);
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[19]);
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 275;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[20]);
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 2000;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[21]);
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[22]);
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1990;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[23]);
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1985;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[24]);
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1980;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[25]);
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 1150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[26]);
		break;

	case 31:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[27]);
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1140;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[28]);
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1135;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[29]);
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[30]);
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 550;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[31]);
		break;

	case 36:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 545;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[32]);
		break;

	case 37:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 540;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[33]);
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 535;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[34]);
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 530;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[35]);
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 41:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 580;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[36]);
		break;

	case 42:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 575;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[37]);
		break;

	case 43:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 570;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[38]);
		break;

	case 44:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 565;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[39]);
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[40]);
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 47:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 1100;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[41]);
		break;

	case 48:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 1095;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[42]);
		break;

	case 49:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 1090;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[43]);
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 1085;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[44]);
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 1080;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[45]);
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 53:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 520;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[46]);
		break;

	case 54:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 515;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[47]);
		break;

	case 55:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 510;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[48]);
		break;

	case 56:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 505;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[49]);
		break;

	case 57:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[50]);
		break;

	case 58:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 59:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 60:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 395;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[51]);
		break;

	case 61:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[52]);
		break;

	case 62:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 385;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[53]);
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 380;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[54]);
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[55]);
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 67:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 1050;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[56]);
		break;

	case 68:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 1045;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[57]);
		break;

	case 69:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 1040;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[58]);
		break;

	case 70:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 1035;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[59]);
		break;

	case 71:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 1030;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[60]);
		break;

	case 72:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 73:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 1200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[61]);
		break;

	case 74:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[62]);
		break;

	case 75:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 1190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[63]);
		break;

	case 76:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 1185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[64]);
		break;

	case 77:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[65]);
		break;

	case 78:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 79:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[66]);
		break;

	case 80:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 470;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[67]);
		break;

	case 81:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[68]);
		break;

	case 82:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 460;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[69]);
		break;

	case 83:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 455;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[70]);
		break;

	case 84:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 85:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 950;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[71]);
		break;

	case 86:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 945;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[72]);
		break;

	case 87:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 940;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[73]);
		break;

	case 88:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 935;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[74]);
		break;

	case 89:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 930;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[75]);
		break;

	case 90:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 91:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_101(iVar10, iParam0, 92);
		return;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D52A
void func_118(int iParam0, int iParam1) {
	switch (iParam0) {
	case 2: func_133(iParam1); break;

	case 11: func_132(iParam1); break;

	case 8: func_131(iParam1); break;

	case 9: func_130(iParam1); break;

	case 3: func_129(iParam1); break;

	case 4: func_128(iParam1); break;

	case 6: func_127(iParam1); break;

	case 1: func_126(iParam1); break;

	case 7: func_125(iParam1); break;

	case 10: func_124(iParam1); break;

	case 14: func_123(iParam1); break;

	case 12: func_122(iParam1); break;

	case 5: func_121(iParam1); break;

	case 0: func_120(iParam1); break;

	case 13: func_119(iParam1); break;
	}
}

// Position - 0x1D61A
void func_119(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 31:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		break;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D7E4
void func_120(int iParam0) {
	int iVar0;

	iVar0 = 0;
	Global_69523[0 /*14*/].f_5 = 3;
	func_101(iVar0, iParam0, 0);
}

// Position - 0x1D802
void func_121(int iParam0) {
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 9);
		return;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1D903
void func_122(int iParam0) {
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S1", 16);
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S2", 16);
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S3", 16);
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S4", 16);
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S5", 16);
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S6", 16);
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S7", 16);
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S8", 16);
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S9", 16);
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P1", 16);
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P2", 16);
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P3", 16);
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P4", 16);
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P5", 16);
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P6", 16);
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P7", 16);
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P8", 16);
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B1", 16);
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B2", 16);
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B3", 16);
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B4", 16);
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B5", 16);
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B6", 16);
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B7", 16);
		break;

	case 25:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B8", 16);
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 26);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1DBB2
void func_123(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0) {
	case 0:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "HT_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 11:
		StringCopy(&Var2, "HT_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 12:
		StringCopy(&Var2, "HT_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 13:
		StringCopy(&Var2, "HT_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 14:
		StringCopy(&Var2, "HT_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 235;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 15:
		StringCopy(&Var2, "HT_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 16:
		StringCopy(&Var2, "HT_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 17:
		StringCopy(&Var2, "HT_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 18:
		StringCopy(&Var2, "HT_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "HT_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 20:
		StringCopy(&Var2, "HT_FMM_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 21:
		StringCopy(&Var2, "HT_FMM_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 22:
		StringCopy(&Var2, "HT_FMM_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 320;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 23:
		StringCopy(&Var2, "HT_FMM_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 24:
		StringCopy(&Var2, "HT_FMM_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 245;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 25:
		StringCopy(&Var2, "HT_FMM_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 26:
		StringCopy(&Var2, "HT_FMM_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 27:
		StringCopy(&Var2, "HT_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 28:
		StringCopy(&Var2, "HT_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 29:
		StringCopy(&Var2, "HT_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 30:
		StringCopy(&Var2, "HT_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "HT_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "HT_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "HT_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "HT_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "HT_FMM_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 415;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 36:
		StringCopy(&Var2, "HT_FMM_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 315;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 37:
		StringCopy(&Var2, "HT_FMM_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "HT_FMM_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "HT_FMM_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "HT_FMM_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "HT_FMM_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "HT_FMM_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "HT_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 44:
		StringCopy(&Var2, "HT_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 45:
		StringCopy(&Var2, "HT_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "HT_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "HT_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "HT_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "HT_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "HT_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "HT_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 52:
		StringCopy(&Var2, "HT_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 265;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 53:
		StringCopy(&Var2, "HT_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 54:
		StringCopy(&Var2, "HT_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 55:
		StringCopy(&Var2, "HT_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 570;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 56:
		StringCopy(&Var2, "HT_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 560;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 57:
		StringCopy(&Var2, "HT_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 58:
		StringCopy(&Var2, "HT_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 59:
		StringCopy(&Var2, "HT_FMM_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 260;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 60:
		StringCopy(&Var2, "HT_FMM_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 215;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 61:
		StringCopy(&Var2, "HT_FMM_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 430;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 62:
		StringCopy(&Var2, "HT_FMM_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 63:
		StringCopy(&Var2, "HT_FMM_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 200;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 64:
		StringCopy(&Var2, "HT_FMM_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 65:
		StringCopy(&Var2, "HT_FMM_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 66:
		StringCopy(&Var2, "HT_FMM_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 165;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 67:
		StringCopy(&Var2, "HT_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "HT_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "HT_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "HT_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "HT_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "HT_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "HT_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "HT_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "HT_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "HT_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "HT_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "HT_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "HT_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "HT_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 100;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 81:
		StringCopy(&Var2, "HT_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 82:
		StringCopy(&Var2, "HT_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 83:
		StringCopy(&Var2, "HT_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "HT_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "HT_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "HT_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "HT_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "HT_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 89:
		StringCopy(&Var2, "HT_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "HT_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 91:
		StringCopy(&Var2, "HT_FMM_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "HT_FMM_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "HT_FMM_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "HT_FMM_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "HT_FMM_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "HT_FMM_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 97:
		StringCopy(&Var2, "HT_FMM_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "HT_FMM_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "HT_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 1715;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 100:
		StringCopy(&Var2, "HT_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 3900;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 101:
		StringCopy(&Var2, "HT_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 1550;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 102:
		StringCopy(&Var2, "HT_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "HT_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 4250;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 104:
		StringCopy(&Var2, "HT_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 105:
		StringCopy(&Var2, "HT_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 4460;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 106:
		StringCopy(&Var2, "HT_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 4970;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 107:
		StringCopy(&Var2, "HT_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 290;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 108:
		StringCopy(&Var2, "HT_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 305;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 109:
		StringCopy(&Var2, "HT_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 4170;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 110:
		StringCopy(&Var2, "HT_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 335;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 111:
		StringCopy(&Var2, "HT_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 4940;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 112:
		StringCopy(&Var2, "HT_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 275;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 113:
		StringCopy(&Var2, "HT_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 5000;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 114:
		StringCopy(&Var2, "HT_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 3620;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 115:
		StringCopy(&Var2, "HT_FMM_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 116:
		StringCopy(&Var2, "HT_FMM_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 117:
		StringCopy(&Var2, "HT_FMM_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 118:
		StringCopy(&Var2, "HT_FMM_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 119:
		StringCopy(&Var2, "HT_FMM_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 120:
		StringCopy(&Var2, "HT_FMM_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 121:
		StringCopy(&Var2, "HT_FMM_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 350;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 122:
		StringCopy(&Var2, "HT_FMM_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 123:
		StringCopy(&Var2, "HT_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 365;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 124:
		StringCopy(&Var2, "HT_FMM_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 380;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 125:
		StringCopy(&Var2, "HT_FMM_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 126:
		StringCopy(&Var2, "HT_FMM_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 127:
		StringCopy(&Var2, "HT_FMM_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 600;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 128:
		StringCopy(&Var2, "HT_FMM_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 590;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 129:
		StringCopy(&Var2, "HT_FMM_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 395;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 130:
		StringCopy(&Var2, "HT_FMM_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 555;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 131:
		StringCopy(&Var2, "HE_FMM_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 1060;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 132:
		StringCopy(&Var2, "HE_FMM_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 1400;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 133:
		StringCopy(&Var2, "HE_FMM_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 1315;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 134:
		StringCopy(&Var2, "HE_FMM_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 1230;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 135:
		StringCopy(&Var2, "HE_FMM_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 1145;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 136:
		StringCopy(&Var2, "HE_FMM_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 8450;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 137:
		StringCopy(&Var2, "HE_FMM_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 675;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 138:
		StringCopy(&Var2, "HE_FMM_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 8750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 139:
		StringCopy(&Var2, "HE_FMM_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 975;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 140:
		StringCopy(&Var2, "HE_FMM_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 141:
		StringCopy(&Var2, "HE_FMM_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 865;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 142:
		StringCopy(&Var2, "HE_FMM_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 890;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 143:
		StringCopy(&Var2, "HE_FMM_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 730;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 144:
		StringCopy(&Var2, "HE_FMM_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 650;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 145:
		StringCopy(&Var2, "HE_FMM_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 645;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 146:
		StringCopy(&Var2, "HE_FMM_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 755;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 147:
		StringCopy(&Var2, "HE_FMM_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 13850;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 148:
		StringCopy(&Var2, "HE_FMM_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 2900;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 149:
		StringCopy(&Var2, "HE_FMM_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 2895;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 150:
		StringCopy(&Var2, "HE_FMM_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 12500;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 151:
		StringCopy(&Var2, "HE_FMM_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 15000;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 152:
		StringCopy(&Var2, "HE_FMM_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 14750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 153:
		StringCopy(&Var2, "HE_FMM_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 13150;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 154:
		StringCopy(&Var2, "HE_FMM_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 2925;
		iVar8 = 0;
		iVar11 = 2;
		break;
	}
	switch (iParam0) {
	case 155:
		StringCopy(&Var2, "G_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 156:
		StringCopy(&Var2, "G_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 157:
		StringCopy(&Var2, "G_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 158:
		StringCopy(&Var2, "G_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 159:
		StringCopy(&Var2, "G_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 160:
		StringCopy(&Var2, "G_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 161:
		StringCopy(&Var2, "G_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 162:
		StringCopy(&Var2, "G_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 163:
		StringCopy(&Var2, "G_FMM_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 164:
		StringCopy(&Var2, "G_FMM_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 165:
		StringCopy(&Var2, "G_FMM_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 166:
		StringCopy(&Var2, "G_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 167:
		StringCopy(&Var2, "G_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 168:
		StringCopy(&Var2, "G_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 169:
		StringCopy(&Var2, "G_FMM_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 170:
		StringCopy(&Var2, "G_FMM_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "G_FMM_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 172:
		StringCopy(&Var2, "G_FMM_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 173:
		StringCopy(&Var2, "G_FMM_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 174:
		StringCopy(&Var2, "G_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 175:
		StringCopy(&Var2, "G_FMM_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 176:
		StringCopy(&Var2, "G_FMM_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 380;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 177:
		StringCopy(&Var2, "G_FMM_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 178:
		StringCopy(&Var2, "G_FMM_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 179:
		StringCopy(&Var2, "G_FMM_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 180:
		StringCopy(&Var2, "G_FMM_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 181:
		StringCopy(&Var2, "G_FMM_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 390;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 182:
		StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 950;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 183:
		StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 565;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 184:
		StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 630;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 185:
		StringCopy(&Var2, "G_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 70;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 186:
		StringCopy(&Var2, "G_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 187:
		StringCopy(&Var2, "G_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 188:
		StringCopy(&Var2, "G_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 95;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 189:
		StringCopy(&Var2, "G_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 190:
		StringCopy(&Var2, "G_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 191:
		StringCopy(&Var2, "G_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 192:
		StringCopy(&Var2, "G_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 193:
		StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 194:
		StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 265;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 195:
		StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 330;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 196:
		StringCopy(&Var2, "G_FMM_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 197:
		StringCopy(&Var2, "G_FMM_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 198:
		StringCopy(&Var2, "G_FMM_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 210;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 199:
		StringCopy(&Var2, "G_FMM_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 200:
		StringCopy(&Var2, "G_FMM_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 201:
		StringCopy(&Var2, "G_FMM_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 202:
		StringCopy(&Var2, "G_FMM_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 203:
		StringCopy(&Var2, "G_FMM_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 204:
		StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 205:
		StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 610;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 206:
		StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 675;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 207:
		StringCopy(&Var2, "G_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 4050;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 208:
		StringCopy(&Var2, "G_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 4060;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 209:
		StringCopy(&Var2, "G_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 210:
		StringCopy(&Var2, "G_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 211:
		StringCopy(&Var2, "G_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 212:
		StringCopy(&Var2, "G_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 213:
		StringCopy(&Var2, "G_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 214:
		StringCopy(&Var2, "G_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 215:
		StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 1760;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 216:
		StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 1375;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 217:
		StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 1440;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 218:
		StringCopy(&Var2, "G_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 219:
		StringCopy(&Var2, "G_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 220:
		StringCopy(&Var2, "G_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 221:
		StringCopy(&Var2, "G_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 222:
		StringCopy(&Var2, "G_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "G_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 224:
		StringCopy(&Var2, "G_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 225:
		StringCopy(&Var2, "G_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 226:
		StringCopy(&Var2, "G_FMM_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 227:
		StringCopy(&Var2, "G_FMM_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 228:
		StringCopy(&Var2, "G_FMM_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 229:
		StringCopy(&Var2, "G_FMM_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 230:
		StringCopy(&Var2, "G_FMM_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 231:
		StringCopy(&Var2, "G_FMM_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 1445;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 232:
		StringCopy(&Var2, "G_FMM_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 530;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 233:
		StringCopy(&Var2, "G_FMM_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 234:
		StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 1170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 235:
		StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 785;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 236:
		StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 850;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 237:
		StringCopy(&Var2, "G_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 4260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 238:
		StringCopy(&Var2, "G_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 4310;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 239:
		StringCopy(&Var2, "G_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 4130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 240:
		StringCopy(&Var2, "G_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 241:
		StringCopy(&Var2, "G_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 242:
		StringCopy(&Var2, "G_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 243:
		StringCopy(&Var2, "G_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 244:
		StringCopy(&Var2, "G_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 245:
		StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1885;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 246:
		StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 1500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 247:
		StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 1565;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 248:
		StringCopy(&Var2, "G_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 249:
		StringCopy(&Var2, "G_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 250:
		StringCopy(&Var2, "G_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 251:
		StringCopy(&Var2, "G_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 252:
		StringCopy(&Var2, "G_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 253:
		StringCopy(&Var2, "G_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 4290;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 254:
		StringCopy(&Var2, "G_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 4150;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 255:
		StringCopy(&Var2, "G_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 4295;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 256:
		StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 257:
		StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 258:
		StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 259:
		StringCopy(&Var2, "G_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 6240;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 260:
		StringCopy(&Var2, "G_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 4955;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 261:
		StringCopy(&Var2, "G_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 5590;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 262:
		StringCopy(&Var2, "G_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 4920;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 263:
		StringCopy(&Var2, "G_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 4990;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 264:
		StringCopy(&Var2, "G_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 4780;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 265:
		StringCopy(&Var2, "G_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 4775;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 266:
		StringCopy(&Var2, "G_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 4800;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 267:
		StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 2835;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 268:
		StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 2450;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 269:
		StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 2515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 270:
		StringCopy(&Var2, "G_FMM_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 271:
		StringCopy(&Var2, "G_FMM_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 272:
		StringCopy(&Var2, "G_FMM_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 273:
		StringCopy(&Var2, "G_FMM_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 274:
		StringCopy(&Var2, "G_FMM_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 275:
		StringCopy(&Var2, "G_FMM_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 277:
		StringCopy(&Var2, "G_FMM_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 278:
		StringCopy(&Var2, "G_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 385;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 279:
		StringCopy(&Var2, "G_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 310;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 280:
		StringCopy(&Var2, "G_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 3655;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 281:
		StringCopy(&Var2, "G_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 4055;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 282:
		StringCopy(&Var2, "G_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 3595;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 283:
		StringCopy(&Var2, "G_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 3605;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 284:
		StringCopy(&Var2, "G_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 3645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 285:
		StringCopy(&Var2, "G_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 320;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 286:
		StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 2820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 287:
		StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 2435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 288:
		StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 2500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 289:
		StringCopy(&Var2, "G_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 230;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 290:
		StringCopy(&Var2, "G_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1605;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 291:
		StringCopy(&Var2, "G_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 2230;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 292:
		StringCopy(&Var2, "G_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 293:
		StringCopy(&Var2, "G_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 294:
		StringCopy(&Var2, "G_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2070;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 295:
		StringCopy(&Var2, "G_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 296:
		StringCopy(&Var2, "G_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 1690;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 297:
		StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 2715;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 298:
		StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2330;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 299:
		StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 2395;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 300:
		StringCopy(&Var2, "G_FMM_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 301:
		StringCopy(&Var2, "G_FMM_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 302:
		StringCopy(&Var2, "G_FMM_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 303:
		StringCopy(&Var2, "G_FMM_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 304:
		StringCopy(&Var2, "G_FMM_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 305:
		StringCopy(&Var2, "G_FMM_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 306:
		StringCopy(&Var2, "G_FMM_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 307:
		StringCopy(&Var2, "G_FMM_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 308:
		StringCopy(&Var2, "G_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 309:
		StringCopy(&Var2, "G_FMM_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 310:
		StringCopy(&Var2, "G_FMM_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 311:
		StringCopy(&Var2, "G_FMM_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 95;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 312:
		StringCopy(&Var2, "G_FMM_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 313:
		StringCopy(&Var2, "G_FMM_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 314:
		StringCopy(&Var2, "G_FMM_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 485;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 315:
		StringCopy(&Var2, "G_FMM_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 545;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 316:
		StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 317:
		StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 318:
		StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 319:
		StringCopy(&Var2, "W_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 320:
		StringCopy(&Var2, "W_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 321:
		StringCopy(&Var2, "W_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 322:
		StringCopy(&Var2, "W_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 323:
		StringCopy(&Var2, "W_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 324:
		StringCopy(&Var2, "W_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 695;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 325:
		StringCopy(&Var2, "W_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 326:
		StringCopy(&Var2, "W_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;
	}
	if (iVar11 == 1) {
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121) {
			if (iVar12 > 8) {
				iVar12--;
			}
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_954[iVar12] * Global_279980.f_18);
		}
	}
	else if (iVar11 == 2) {
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1075[iVar13] * Global_279980.f_19);
		}
	}
	else if (iVar11 == 3) {
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1100[iVar14] * Global_279980.f_20);
		}
	}
	else if (iVar11 == 4) {
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 15) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1229[iVar15] * Global_279980.f_21);
		}
	}
	if (iParam0 >= 327) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 327);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_18);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_20);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_21);
			}
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x20970
void func_124(int iParam0) {
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
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "D_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 2:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 3:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 4:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 5:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 6:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 7);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x20A8F
void func_125(int iParam0) {
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 4:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 31:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 39:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 40:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 41:
		iVar6 = 10;
		iVar7 = 0;
		if (Global_262145.f_4171 != -1) {
			iVar1 = Global_262145.f_4171;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 42:
		iVar6 = 10;
		iVar7 = 1;
		if (Global_262145.f_4172 != -1) {
			iVar1 = Global_262145.f_4172;
		}
		else {
			iVar1 = 125;
		}
		break;

	case 43:
		iVar6 = 10;
		iVar7 = 2;
		if (Global_262145.f_4173 != -1) {
			iVar1 = Global_262145.f_4173;
		}
		else {
			iVar1 = 130;
		}
		break;

	case 44:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 49:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 50:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 51:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 52:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 53:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 55:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 56:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 57:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 58:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 59:
		iVar6 = 11;
		iVar7 = 2;
		if (Global_262145.f_4177 != -1) {
			iVar1 = Global_262145.f_4177;
		}
		else {
			iVar1 = 725;
		}
		break;

	case 60:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 61:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 62:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 67:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 12;
		iVar7 = 0;
		if (Global_262145.f_4174 != -1) {
			iVar1 = Global_262145.f_4174;
		}
		else {
			iVar1 = 65;
		}
		break;

	case 74:
		iVar6 = 12;
		iVar7 = 1;
		if (Global_262145.f_4175 != -1) {
			iVar1 = Global_262145.f_4175;
		}
		else {
			iVar1 = 65;
		}
		break;

	case 75:
		iVar6 = 12;
		iVar7 = 2;
		if (Global_262145.f_4176 != -1) {
			iVar1 = Global_262145.f_4176;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 76:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 81:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 82:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 90:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 91:
		iVar6 = 15;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 92);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_57);
		}
		return;
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_57);
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x21385
void func_126(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 960;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 9500;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 975;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 1185;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 15000;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 1115;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 1105;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 25000;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 510;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 530;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 5500;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 535;
		break;

	case 14:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1510;
		break;

	case 15:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1530;
		break;

	case 16:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 14500;
		break;

	case 17:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 13000;
		break;

	case 18:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 8000;
		break;

	case 19:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1265;
		break;

	case 20:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 8500;
		break;

	case 21:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1210;
		break;

	case 22:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2360;
		break;

	case 23:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 22500;
		break;

	case 24:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2375;
		break;

	case 25:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 2485;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 26);
		return;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_927[iVar11] * Global_279980.f_22);
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2163A
void func_127(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 300;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 285;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 165;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 480;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 155;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 350;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 290;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 165;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 165;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 170;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 155;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 165;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 165;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 160;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 205;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 560;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 275;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 300;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 360;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 355;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 310;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 350;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 305;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 280;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 320;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 35;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 65;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 65;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 165;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 165;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 185;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 175;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 185;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 460;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 185;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 190;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 165;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 165;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 185;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 175;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 235;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 445;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 185;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 190;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 175;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 215;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 225;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 230;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 235;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 225;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 225;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 230;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 235;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 215;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 425;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 245;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 225;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 135;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 140;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 115;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 115;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 115;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 500;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 440;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 1090;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 1865;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 490;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 470;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 1795;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 1830;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 455;
		break;
	}
	switch (iParam0) {
	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 455;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 2110;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 380;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 1655;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 415;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 730;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 445;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 425;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 410;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 480;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 485;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 480;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 395;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 495;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 2090;
		break;

	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 450;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 685;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 365;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 465;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 405;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 400;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 440;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 385;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 435;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 375;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 390;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 475;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 430;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 490;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 490;
		break;

	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 615;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 315;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 415;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 425;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 435;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 445;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 640;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 460;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 465;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 745;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 845;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 1420;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 475;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 470;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 1000;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 690;
		break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_670[iVar11] * Global_279980.f_17);
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_17);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x22C75
void func_128(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 335;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 460;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 455;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 470;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 385;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 455;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 2150;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 375;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 2190;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 295;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 2240;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 465;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 1740;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 1415;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 325;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 345;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 355;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 395;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 315;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 265;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 305;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 255;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 235;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 245;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 215;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 1865;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 450;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 415;
		break;

	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 100;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 100;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 90;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 225;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 205;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 215;
		break;

	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 490;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 485;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 485;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 100;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 80;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 95;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 440;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 380;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 80;
		break;

	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 140;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 255;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 325;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 110;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 345;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 745;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 120;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 130;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 140;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 660;
		break;

	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 150;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 75;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 90;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 145;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 155;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 255;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 165;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1150;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1150;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 1210;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 1125;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 1135;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 1145;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 1145;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 845;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 480;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 475;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 460;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 475;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 470;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 100;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 100;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 95;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 105;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 295;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 285;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 275;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 105;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 100;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 95;
		break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_175[iVar11] * Global_279980.f_15);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_15);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x242A7
void func_129(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 15;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 16);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x243FC
void func_130(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 11:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 21:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 23:
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 26:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 27:
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 28:
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 29:
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 31:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 32:
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 33:
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 34:
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 36:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 37:
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 38:
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 39:
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 40:
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 41:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 42:
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 43:
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 44:
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 45:
		iVar6 = 9;
		iVar7 = 4;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 46);
		return;
	}
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x24716
void func_131(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "U_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		StringCopy(&Var2, "U_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 2:
		StringCopy(&Var2, "U_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		StringCopy(&Var2, "U_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 4:
		StringCopy(&Var2, "U_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 5:
		StringCopy(&Var2, "U_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 6:
		StringCopy(&Var2, "U_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "U_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 8:
		StringCopy(&Var2, "U_FMM_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 9:
		StringCopy(&Var2, "U_FMM_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "U_FMM_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "U_FMM_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 12:
		StringCopy(&Var2, "U_FMM_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "U_FMM_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "U_FMM_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "U_FMM_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "U_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 17:
		StringCopy(&Var2, "U_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		StringCopy(&Var2, "U_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "U_FMM_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		StringCopy(&Var2, "U_FMM_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 315;
		break;

	case 21:
		StringCopy(&Var2, "U_FMM_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 22:
		StringCopy(&Var2, "U_FMM_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 23:
		StringCopy(&Var2, "U_FMM_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		StringCopy(&Var2, "U_FMM_1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 205;
		break;

	case 25:
		StringCopy(&Var2, "U_FMM_1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "U_FMM_1_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 27:
		StringCopy(&Var2, "U_FMM_1_11", 16);
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		StringCopy(&Var2, "U_FMM_1_12", 16);
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 29:
		StringCopy(&Var2, "U_FMM_1_13", 16);
		iVar6 = 1;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "U_FMM_1_14", 16);
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 170;
		break;

	case 31:
		StringCopy(&Var2, "U_FMM_1_15", 16);
		iVar6 = 1;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		StringCopy(&Var2, "U_FMM_0_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 33:
		StringCopy(&Var2, "U_FMM_0_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 34:
		StringCopy(&Var2, "U_FMM_0_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 35:
		StringCopy(&Var2, "U_FMM_0_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 36:
		StringCopy(&Var2, "U_FMM_0_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 37:
		StringCopy(&Var2, "U_FMM_0_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 38:
		StringCopy(&Var2, "U_FMM_0_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "U_FMM_0_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 40:
		StringCopy(&Var2, "U_FMM_0_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 41:
		StringCopy(&Var2, "U_FMM_0_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "U_FMM_0_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "U_FMM_0_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 44:
		StringCopy(&Var2, "U_FMM_0_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "U_FMM_0_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "U_FMM_0_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "U_FMM_0_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "SP_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		if (Global_262145.f_4180 != -1) {
			iVar1 = Global_262145.f_4180;
		}
		else {
			iVar1 = 165;
		}
		break;

	case 49:
		StringCopy(&Var2, "SP_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		if (Global_262145.f_4188 != -1) {
			iVar1 = Global_262145.f_4188;
		}
		else {
			iVar1 = 120;
		}
		break;

	case 50:
		StringCopy(&Var2, "SP_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		if (Global_262145.f_4183 != -1) {
			iVar1 = Global_262145.f_4183;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 51:
		StringCopy(&Var2, "SP_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "SP_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "SP_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "SP_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 55:
		StringCopy(&Var2, "SP_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 56:
		StringCopy(&Var2, "SP_FMM_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 57:
		StringCopy(&Var2, "SP_FMM_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 58:
		StringCopy(&Var2, "SP_FMM_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 59:
		StringCopy(&Var2, "SP_FMM_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 60:
		StringCopy(&Var2, "SP_FMM_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SP_FMM_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "SP_FMM_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "SP_FMM_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 64:
		StringCopy(&Var2, "SP_FMM_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		if (Global_262145.f_4180 != -1) {
			iVar1 = Global_262145.f_4180;
		}
		else {
			iVar1 = 165;
		}
		break;

	case 65:
		StringCopy(&Var2, "SP_FMM_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		if (Global_262145.f_4188 != -1) {
			iVar1 = Global_262145.f_4188;
		}
		else {
			iVar1 = 120;
		}
		break;

	case 66:
		StringCopy(&Var2, "SP_FMM_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		if (Global_262145.f_4183 != -1) {
			iVar1 = Global_262145.f_4183;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 67:
		StringCopy(&Var2, "SP_FMM_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "SP_FMM_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "SP_FMM_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "SP_FMM_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "SP_FMM_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "SP_FMM_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "SP_FMM_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "SP_FMM_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "SP_FMM_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "SP_FMM_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "SP_FMM_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "SP_FMM_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "SP_FMM_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "U_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 80;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[80]);
		break;

	case 81:
		StringCopy(&Var2, "U_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[81]);
		break;

	case 82:
		StringCopy(&Var2, "U_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[82]);
		break;

	case 83:
		StringCopy(&Var2, "U_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "U_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "U_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "U_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "U_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 50;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[87]);
		break;

	case 88:
		StringCopy(&Var2, "U_FMM_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "U_FMM_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "U_FMM_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "U_FMM_5_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "U_FMM_5_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "U_FMM_5_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "U_FMM_5_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "U_FMM_5_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		StringCopy(&Var2, "SP_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 97:
		StringCopy(&Var2, "SP_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 415;
		}
		break;

	case 98:
		StringCopy(&Var2, "SP_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		if (Global_262145.f_4179 != -1) {
			iVar1 = Global_262145.f_4179;
		}
		else {
			iVar1 = 440;
		}
		break;

	case 99:
		StringCopy(&Var2, "SP_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 100:
		StringCopy(&Var2, "SP_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 101:
		StringCopy(&Var2, "SP_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 102:
		StringCopy(&Var2, "SP_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 103:
		StringCopy(&Var2, "SP_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 104:
		StringCopy(&Var2, "SP_FMM_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 105:
		StringCopy(&Var2, "SP_FMM_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 106:
		StringCopy(&Var2, "SP_FMM_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 107:
		StringCopy(&Var2, "SP_FMM_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 108:
		StringCopy(&Var2, "SP_FMM_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		if (Global_262145.f_4186 != -1) {
			iVar1 = Global_262145.f_4186;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 109:
		StringCopy(&Var2, "SP_FMM_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		if (Global_262145.f_4181 != -1) {
			iVar1 = Global_262145.f_4181;
		}
		else {
			iVar1 = 750;
		}
		break;

	case 110:
		StringCopy(&Var2, "SP_FMM_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		if (Global_262145.f_4196 != -1) {
			iVar1 = Global_262145.f_4196;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 111:
		StringCopy(&Var2, "SP_FMM_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		if (Global_262145.f_4189 != -1) {
			iVar1 = Global_262145.f_4189;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 112:
		StringCopy(&Var2, "SP_FMM_6_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 113:
		StringCopy(&Var2, "SP_FMM_6_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 415;
		}
		break;

	case 114:
		StringCopy(&Var2, "SP_FMM_6_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		if (Global_262145.f_4179 != -1) {
			iVar1 = Global_262145.f_4179;
		}
		else {
			iVar1 = 440;
		}
		break;

	case 115:
		StringCopy(&Var2, "SP_FMM_6_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 116:
		StringCopy(&Var2, "SP_FMM_6_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 117:
		StringCopy(&Var2, "SP_FMM_6_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 118:
		StringCopy(&Var2, "SP_FMM_6_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 119:
		StringCopy(&Var2, "SP_FMM_6_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 120:
		StringCopy(&Var2, "SP_FMM_6_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 121:
		StringCopy(&Var2, "SP_FMM_6_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 122:
		StringCopy(&Var2, "SP_FMM_6_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 123:
		StringCopy(&Var2, "SP_FMM_6_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 124:
		StringCopy(&Var2, "SP_FMM_6_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		if (Global_262145.f_4186 != -1) {
			iVar1 = Global_262145.f_4186;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 125:
		StringCopy(&Var2, "SP_FMM_6_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		if (Global_262145.f_4181 != -1) {
			iVar1 = Global_262145.f_4181;
		}
		else {
			iVar1 = 750;
		}
		break;

	case 126:
		StringCopy(&Var2, "SP_FMM_6_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		if (Global_262145.f_4196 != -1) {
			iVar1 = Global_262145.f_4196;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 127:
		StringCopy(&Var2, "SP_FMM_6_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		if (Global_262145.f_4189 != -1) {
			iVar1 = Global_262145.f_4189;
		}
		else {
			iVar1 = 435;
		}
		break;
	}
	switch (iParam0) {
	case 128:
		StringCopy(&Var2, "U_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "U_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 130:
		StringCopy(&Var2, "U_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 131:
		StringCopy(&Var2, "U_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 132:
		StringCopy(&Var2, "U_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 133:
		StringCopy(&Var2, "U_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 134:
		StringCopy(&Var2, "U_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 135:
		StringCopy(&Var2, "U_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 136:
		StringCopy(&Var2, "U_FMM_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 137:
		StringCopy(&Var2, "U_FMM_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 138:
		StringCopy(&Var2, "U_FMM_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 139:
		StringCopy(&Var2, "U_FMM_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 140:
		StringCopy(&Var2, "U_FMM_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 141:
		StringCopy(&Var2, "U_FMM_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 142:
		StringCopy(&Var2, "U_FMM_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 143:
		StringCopy(&Var2, "U_FMM_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 144:
		StringCopy(&Var2, "U_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 145:
		StringCopy(&Var2, "U_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 340;
		break;

	case 146:
		StringCopy(&Var2, "U_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 335;
		break;

	case 147:
		StringCopy(&Var2, "U_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 148:
		StringCopy(&Var2, "U_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 345;
		break;

	case 149:
		StringCopy(&Var2, "U_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 550;
		break;

	case 150:
		StringCopy(&Var2, "U_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 151:
		StringCopy(&Var2, "U_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 152:
		StringCopy(&Var2, "U_FMM_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 153:
		StringCopy(&Var2, "U_FMM_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 154:
		StringCopy(&Var2, "U_FMM_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 545;
		break;

	case 155:
		StringCopy(&Var2, "U_FMM_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 156:
		StringCopy(&Var2, "U_FMM_9_12", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 315;
		break;

	case 157:
		StringCopy(&Var2, "U_FMM_9_13", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 520;
		break;

	case 158:
		StringCopy(&Var2, "U_FMM_9_14", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 159:
		StringCopy(&Var2, "U_FMM_9_15", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 160:
		StringCopy(&Var2, "SP_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 161:
		StringCopy(&Var2, "SP_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 162:
		StringCopy(&Var2, "SP_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		if (Global_262145.f_4185 != -1) {
			iVar1 = Global_262145.f_4185;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 163:
		StringCopy(&Var2, "SP_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 164:
		StringCopy(&Var2, "SP_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 165:
		StringCopy(&Var2, "SP_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 395;
		}
		break;

	case 166:
		StringCopy(&Var2, "SP_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		if (Global_262145.f_4184 != -1) {
			iVar1 = Global_262145.f_4184;
		}
		else {
			iVar1 = 500;
		}
		break;

	case 167:
		StringCopy(&Var2, "SP_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 168:
		StringCopy(&Var2, "SP_FMM_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 169:
		StringCopy(&Var2, "SP_FMM_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 170:
		StringCopy(&Var2, "SP_FMM_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 171:
		StringCopy(&Var2, "SP_FMM_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 172:
		StringCopy(&Var2, "SP_FMM_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		if (Global_262145.f_4182 != -1) {
			iVar1 = Global_262145.f_4182;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 173:
		StringCopy(&Var2, "SP_FMM_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		if (Global_262145.f_4197 != -1) {
			iVar1 = Global_262145.f_4197;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 174:
		StringCopy(&Var2, "SP_FMM_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 175:
		StringCopy(&Var2, "SP_FMM_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		if (Global_262145.f_4191 != -1) {
			iVar1 = Global_262145.f_4191;
		}
		else {
			iVar1 = 460;
		}
		break;

	case 176:
		StringCopy(&Var2, "SP_FMM_10_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 177:
		StringCopy(&Var2, "SP_FMM_10_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 178:
		StringCopy(&Var2, "SP_FMM_10_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		if (Global_262145.f_4185 != -1) {
			iVar1 = Global_262145.f_4185;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 179:
		StringCopy(&Var2, "SP_FMM_10_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 180:
		StringCopy(&Var2, "SP_FMM_10_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 181:
		StringCopy(&Var2, "SP_FMM_10_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 395;
		}
		break;

	case 182:
		StringCopy(&Var2, "SP_FMM_10_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		if (Global_262145.f_4184 != -1) {
			iVar1 = Global_262145.f_4184;
		}
		else {
			iVar1 = 500;
		}
		break;

	case 183:
		StringCopy(&Var2, "SP_FMM_10_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 184:
		StringCopy(&Var2, "SP_FMM_10_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 185:
		StringCopy(&Var2, "SP_FMM_10_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 186:
		StringCopy(&Var2, "SP_FMM_10_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 187:
		StringCopy(&Var2, "SP_FMM_10_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 188:
		StringCopy(&Var2, "SP_FMM_10_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		if (Global_262145.f_4182 != -1) {
			iVar1 = Global_262145.f_4182;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 189:
		StringCopy(&Var2, "SP_FMM_10_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		if (Global_262145.f_4197 != -1) {
			iVar1 = Global_262145.f_4197;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 190:
		StringCopy(&Var2, "SP_FMM_10_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 191:
		StringCopy(&Var2, "SP_FMM_10_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		if (Global_262145.f_4191 != -1) {
			iVar1 = Global_262145.f_4191;
		}
		else {
			iVar1 = 460;
		}
		break;
	}
	switch (iParam0) {
	case 192:
		StringCopy(&Var2, "U_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 193:
		StringCopy(&Var2, "U_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 194:
		StringCopy(&Var2, "U_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 695;
		break;

	case 195:
		StringCopy(&Var2, "U_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 196:
		StringCopy(&Var2, "U_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 197:
		StringCopy(&Var2, "U_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 198:
		StringCopy(&Var2, "U_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 199:
		StringCopy(&Var2, "U_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 450;
		break;

	case 200:
		StringCopy(&Var2, "U_FMM_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 201:
		StringCopy(&Var2, "U_FMM_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 202:
		StringCopy(&Var2, "U_FMM_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 1060;
		break;

	case 203:
		StringCopy(&Var2, "U_FMM_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 1040;
		break;

	case 204:
		StringCopy(&Var2, "U_FMM_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 205:
		StringCopy(&Var2, "U_FMM_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 206:
		StringCopy(&Var2, "U_FMM_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 207:
		StringCopy(&Var2, "U_FMM_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 208:
		StringCopy(&Var2, "U_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 209:
		StringCopy(&Var2, "U_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 210:
		StringCopy(&Var2, "U_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 680;
		break;

	case 211:
		StringCopy(&Var2, "U_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 212:
		StringCopy(&Var2, "U_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 213:
		StringCopy(&Var2, "U_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 214:
		StringCopy(&Var2, "U_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 215:
		StringCopy(&Var2, "U_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 216:
		StringCopy(&Var2, "U_FMM_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 217:
		StringCopy(&Var2, "U_FMM_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 218:
		StringCopy(&Var2, "U_FMM_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 219:
		StringCopy(&Var2, "U_FMM_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 220:
		StringCopy(&Var2, "U_FMM_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 221:
		StringCopy(&Var2, "U_FMM_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1065;
		break;

	case 222:
		StringCopy(&Var2, "U_FMM_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "U_FMM_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 224:
		StringCopy(&Var2, "U_FMM_1_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[16]);
		break;

	case 225:
		StringCopy(&Var2, "U_FMM_1_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[17]);
		break;

	case 226:
		StringCopy(&Var2, "U_FMM_1_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 227:
		StringCopy(&Var2, "U_FMM_1_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[19]);
		break;

	case 228:
		StringCopy(&Var2, "U_FMM_1_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 315;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[20]);
		break;

	case 229:
		StringCopy(&Var2, "U_FMM_1_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 215;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[21]);
		break;

	case 230:
		StringCopy(&Var2, "U_FMM_1_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 265;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[22]);
		break;

	case 231:
		StringCopy(&Var2, "U_FMM_1_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[23]);
		break;

	case 232:
		StringCopy(&Var2, "U_FMM_1_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 205;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[24]);
		break;

	case 233:
		StringCopy(&Var2, "U_FMM_1_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 234:
		StringCopy(&Var2, "U_FMM_1_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 235:
		StringCopy(&Var2, "U_FMM_1_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[27]);
		break;

	case 236:
		StringCopy(&Var2, "U_FMM_1_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 55;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[28]);
		break;

	case 237:
		StringCopy(&Var2, "U_FMM_1_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 238:
		StringCopy(&Var2, "U_FMM_1_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[30]);
		break;

	case 239:
		StringCopy(&Var2, "U_FMM_1_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 240:
		StringCopy(&Var2, "U_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 0;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[32]);
		break;
	}
	if (iParam0 == 23 || iParam0 == 231) {
		if (func_113(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_432[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225) {
		if (func_113(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978);
		}
		else {
			iVar1 = system::round(system::to_float(60) * Global_262145.f_432[17]);
		}
	}
	else if (iParam0 == 28 || iParam0 == 236) {
		if (func_113(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977);
		}
		else {
			iVar1 = system::round(system::to_float(55) * Global_262145.f_432[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32) {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar11]);
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48) {
		iVar12 = iParam0 - 32;
		if (iVar12 >= 0 && iVar12 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar12]);
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160) {
		iVar13 = iParam0 - 160 + 124;
		if (iVar13 >= 0 && iVar13 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar13]);
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224) {
		iVar14 = iParam0 - 160 + 188;
		if (iVar14 >= 0 && iVar14 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar14]);
		}
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_16);
	if (iParam0 >= 241) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 241);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_16);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x26C2A
void func_132(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 315;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 205;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 170;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 160;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 205;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 110;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 115;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 150;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 150;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 115;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 140;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 115;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 150;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 275;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 460;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 260;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 2520;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 350;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 3125;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 2485;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 535;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 2945;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 3080;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 2990;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 3750;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 515;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 530;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 2810;
		break;

	case 108:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 109:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 110:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 320;
		break;

	case 111:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 140;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 150;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 140;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 135;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 130;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 130;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 145;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 740;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 790;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 130;
		break;
	}
	switch (iParam0) {
	case 124:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 125:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 128:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 141:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 340;
		break;

	case 142:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 335;
		break;

	case 143:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 345;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 550;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 545;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 315;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 520;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 156:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 505;
		break;

	case 157:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 470;
		break;

	case 158:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 475;
		break;

	case 159:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 173:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 360;
		break;

	case 174:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 2450;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 188:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 189:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 190:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 695;
		break;

	case 191:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 450;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 1060;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 1040;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 205:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 206:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 680;
		break;

	case 207:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 208:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1065;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 220:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 221:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 222:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 440;
		break;

	case 223:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 445;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 440;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 325;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 435;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 440;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 325;
		break;

	case 236:
		iVar6 = 15;
		iVar7 = 0;
		break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23) {
		if (func_113(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_432[23] * Global_279980.f_16);
		}
	}
	else if (iParam0 == 17) {
		if (func_113(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(60) * Global_262145.f_432[17] * Global_279980.f_16);
		}
	}
	else if (iParam0 == 28) {
		if (func_113(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(55) * Global_262145.f_432[28] * Global_279980.f_16);
		}
	}
	else {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar11] * Global_279980.f_16);
		}
	}
	if (iParam0 >= 237) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 237);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_16);
		}
	}
	else {
		func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x281E1
void func_133(int iParam0) {
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
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[0]);
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[1]);
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[2]);
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[3]);
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 175;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[4]);
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[5]);
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 580;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[6]);
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 575;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[7]);
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 570;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[8]);
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 565;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[9]);
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[10]);
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 1100;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[11]);
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 1095;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[12]);
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 1090;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[13]);
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 1085;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[14]);
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 1080;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[15]);
		break;

	case 18:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 520;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[16]);
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 515;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[17]);
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 510;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[18]);
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 505;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[19]);
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[20]);
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 25:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 295;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[21]);
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 290;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[22]);
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 285;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[23]);
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[24]);
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 275;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[25]);
		break;

	case 31:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 950;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[26]);
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 945;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[27]);
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 940;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[28]);
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 935;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[29]);
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 930;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[30]);
		break;

	case 37:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 440;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[31]);
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 435;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[32]);
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 430;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[33]);
		break;

	case 41:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 425;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[34]);
		break;

	case 42:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 420;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[35]);
		break;

	case 43:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 44:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[36]);
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 1145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[37]);
		break;

	case 47:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 1140;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[38]);
		break;

	case 48:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1135;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[39]);
		break;

	case 49:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[40]);
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 395;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[41]);
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[42]);
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 385;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[43]);
		break;

	case 53:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 380;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[44]);
		break;

	case 54:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[45]);
		break;

	case 55:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 56:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 57:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[46]);
		break;

	case 58:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 495;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[47]);
		break;

	case 59:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[48]);
		break;

	case 60:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[49]);
		break;

	case 61:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[50]);
		break;

	case 62:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 1050;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[51]);
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 1045;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[52]);
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 1040;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[53]);
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 1035;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[54]);
		break;

	case 67:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 1030;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[55]);
		break;

	case 68:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 69:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 550;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[56]);
		break;

	case 70:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 545;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[57]);
		break;

	case 71:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 540;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[58]);
		break;

	case 72:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 535;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[59]);
		break;

	case 73:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 530;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[60]);
		break;

	case 74:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 1200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[61]);
		break;

	case 75:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[62]);
		break;

	case 76:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 1190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[63]);
		break;

	case 77:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 1185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[64]);
		break;

	case 78:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[65]);
		break;

	case 79:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 80:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 2000;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[66]);
		break;

	case 81:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 1995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[67]);
		break;

	case 82:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 1990;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[68]);
		break;

	case 83:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 1985;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[69]);
		break;

	case 84:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 1980;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[70]);
		break;

	case 85:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[71]);
		break;

	case 86:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 470;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[72]);
		break;

	case 87:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[73]);
		break;

	case 88:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 460;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[74]);
		break;

	case 89:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 455;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[75]);
		break;

	case 90:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_101(iVar10, iParam0, 91);
		return;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_91(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x29099
void func_134() {
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

// Position - 0x29112
int func_135(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar2 = func_16(1751, -1, 0);
			if (iVar0 > 15) {
				iVar3 = func_64(iParam0, 11, -1);
				if (iVar3 >= 237) {
					iVar4 = func_60(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
						if (iVar2 == 671171671) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			iVar2 = func_16(1751, -1, 0);
			if (iVar0 == 3) {
				if (iVar1 == 14) {
					return 1;
				}
			}
			else if (iVar0 > 15) {
				iVar5 = func_64(iParam0, 11, -1);
				if (iVar5 >= 256) {
					iVar6 = func_60(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						if (iVar2 == 1911627074) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x292B4
int func_136(int iParam0) {
	int iVar0;

	if (network::network_is_activity_session()) {
		iVar0 = Global_1591201[player::player_id() /*602*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4) {
			if (func_137(iVar0) != -1 && func_137(iVar0) != 0) {
				return 1;
			}
		}
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			if (ped::get_ped_drawable_variation(iParam0, 11) == 15) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x29330
int func_137(int iParam0) {
	if (iParam0 <= -1 || iParam0 >= 4) {
		return -1;
	}
	return Global_2443905.f_5859[iParam0];
}

// Position - 0x29358
int func_138(int iParam0, int iParam1) {
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

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14: return 1;

				case 1:
				case 7:
				case 12:
					iVar2 = func_144(joaat("mp_m_freemode_01"), 11, func_64(iParam0, 11, -1), 0);
					if (iVar1 == 1 && iVar2 == 88 || iVar1 == 7 && iVar2 == 89 || iVar1 == 12 && iVar2 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 9: return 1;
				}
				break;

			case 5:
				if (!iParam1) {
					if (func_53(13, -1)) {
						return 1;
					}
					else if (func_53(14, -1)) {
						return 1;
					}
					else if (func_53(15, -1)) {
						return 1;
					}
					else if (func_53(16, -1)) {
						return 1;
					}
					else if (func_53(71, -1)) {
						return 1;
					}
					else if (func_53(72, -1)) {
					}
					else if (func_140(player::player_id(), 1) &&
							 Global_1619421[player::player_id() /*390*/].f_11.f_68.f_21 != 0) {
						return 1;
					}
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar3 = func_64(iParam0, 11, -1);
					if (iVar3 >= 237) {
						iVar4 = func_60(joaat("mp_m_freemode_01"), iVar3, 11, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar5 = func_64(iParam0, 8, -1);
					if (iVar5 >= 241) {
						iVar6 = func_60(joaat("mp_m_freemode_01"), iVar5, 8, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar7 = func_144(joaat("mp_f_freemode_01"), 11, func_64(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar7 == 88 || iVar1 == 4 && iVar7 == 89 || iVar1 == 9 && iVar7 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 0:
				case 1:
				case 2:
				case 3:
				case 4: return 1;
				}
				break;

			case 3:
				switch (iVar1) {
				case 14: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar8 = func_64(iParam0, 11, -1);
					if (iVar8 >= 256) {
						iVar9 = func_60(joaat("mp_f_freemode_01"), iVar8, 11, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar10 = func_144(joaat("mp_f_freemode_01"), 11, func_64(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar10 == 88 || iVar1 == 4 && iVar10 == 89 || iVar1 == 9 && iVar10 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 1:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar11 = func_144(joaat("mp_f_freemode_01"), 11, func_64(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar11 == 88 || iVar1 == 4 && iVar11 == 89 || iVar1 == 9 && iVar11 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar12 = func_64(iParam0, 8, -1);
					if (iVar12 >= 136) {
						iVar13 = func_60(joaat("mp_f_freemode_01"), iVar12, 8, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		if (func_139(iParam0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x29B33
bool func_139(int iParam0) {
	struct<5> Var0;
	bool bVar17;
	int iVar18;
	int iVar19;

	bVar17 = entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	iVar18 = ped::get_ped_drawable_variation(iParam0, 11);
	iVar19 = ped::get_ped_texture_variation(iParam0, 11);
	if (bVar17) {
		dlc1::get_shop_ped_component(103980309, &Var0);
	}
	else {
		dlc1::get_shop_ped_component(-31075674, &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4) {
		return true;
	}
	return false;
}

// Position - 0x29B96
int func_140(int iParam0, int iParam1) { return func_141(iParam0, iParam1, 1); }

// Position - 0x29BA7
int func_141(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_143()) {
		return 0;
	}
	if (!bParam1) {
		if (func_142(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_143() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x29C03
bool func_142(int iParam0, int iParam1) {
	if (iParam0 != func_143()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_143()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x29C52
int func_143() { return -1; }

// Position - 0x29C5B
int func_144(int iParam0, int iParam1, int iParam2, int iParam3) {
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 23) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 41) {
				return 86;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_60(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0)) {
						iVar1 = dlc1::_get_num_forced_components(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1) {
							dlc1::get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10) {
								if (iVar3 != 0 && iVar3 != 1849449579) {
									return func_145(iVar3, 3);
								}
								else {
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_145(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 23) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 33) {
				return 73;
			}
			else if (iParam2 == 35) {
				return 74;
			}
			else if (iParam2 == 37) {
				return 75;
			}
			else if (iParam2 == 39) {
				return 76;
			}
			else if (iParam2 == 36) {
				return 77;
			}
			else if (iParam2 == 40) {
				return 78;
			}
			else if (iParam2 == 43) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 227) {
				return 80;
			}
			else if (iParam2 == 229) {
				return 81;
			}
			else if (iParam2 == 230) {
				return 82;
			}
			else if (iParam2 == 232) {
				return 83;
			}
			else if (iParam2 == 228) {
				return 84;
			}
			else if (iParam2 == 238) {
				return 85;
			}
			else if (iParam2 == 231) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 225) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 236) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 >= 241) {
				iVar6 = func_60(iParam0, iParam2, 8, 3);
				if (iVar6 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						iVar7 = dlc1::_get_num_forced_components(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7) {
							dlc1::get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10) {
								if (iVar9 != 0 && iVar9 != 1849449579) {
									return func_145(iVar9, 3);
								}
								else {
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_145(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 32) {
				return 78;
			}
			else if (iParam2 == 33) {
				return 79;
			}
			else if (iParam2 == 34) {
				return 80;
			}
			else if (iParam2 == 35) {
				return 81;
			}
			else if (iParam2 == 36) {
				return 82;
			}
			else if (iParam2 == 62) {
				return 76;
			}
			else if (iParam2 == 63) {
				return 83;
			}
			else if (iParam2 == 186) {
				return 84;
			}
			else if (iParam2 == 187) {
				return 85;
			}
			else if (iParam2 == 191) {
				return 74;
			}
			else if (iParam2 >= 256) {
				iVar12 = func_60(iParam0, iParam2, 11, 4);
				if (iVar12 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0)) {
						iVar13 = dlc1::_get_num_forced_components(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13) {
							dlc1::get_forced_component(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10) {
								if (iVar15 != 0 && iVar15 != 1849449579) {
									return func_145(iVar15, 4);
								}
								else {
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_145(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 17) {
				return 75;
			}
			else if (iParam2 == 18) {
				return 77;
			}
			else if (iParam2 == 20) {
				if (func_113(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 23) {
				if (func_113(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 25) {
				if (func_113(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 81) {
				return 84;
			}
			else if (iParam2 == 82) {
				return 85;
			}
			else if (iParam2 == 86) {
				return 74;
			}
			else if (iParam2 >= 136) {
				iVar18 = func_60(iParam0, iParam2, 8, 4);
				if (iVar18 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0)) {
						iVar19 = dlc1::_get_num_forced_components(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19) {
							dlc1::get_forced_component(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10) {
								if (iVar21 != 0 && iVar21 != 1849449579) {
									return func_145(iVar21, 4);
								}
								else {
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_145(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

// Position - 0x2A4BB
int func_145(int iParam0, int iParam1) {
	int *iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	if (iParam1 == 3) {
		if (func_147(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	else if (iParam1 == 4) {
		if (func_146(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	iVar2 = dlc1::_get_num_decorations(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar1, &Var3)) {
			if (iParam0 == Var3.f_3) {
				return 129 + iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

// Position - 0x2A52C
bool func_146(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case 497719213: iVar0 = 0; break;

	case -1575660783: iVar0 = 1; break;

	case -720631087: iVar0 = 2; break;

	case 2143620721: iVar0 = 3; break;

	case 2049754822: iVar0 = 4; break;

	case -1293749076: iVar0 = 5; break;

	case -1571403599: iVar0 = 6; break;

	case -711123906: iVar0 = 7; break;

	case 152801037: iVar0 = 8; break;

	case -1324018585: iVar0 = 9; break;

	case -481068829: iVar0 = 10; break;

	case -1486741196: iVar0 = 11; break;

	case 939412564: iVar0 = 12; break;

	case 1187637739: iVar0 = 13; break;

	case -1092669445: iVar0 = 14; break;

	case 1659530389: iVar0 = 15; break;

	case 996857777: iVar0 = 16; break;

	case 817476859: iVar0 = 17; break;

	case -17051268: iVar0 = 18; break;

	case 1293774274: iVar0 = 19; break;

	case 567121699: iVar0 = 20; break;

	case -1179302160: iVar0 = 21; break;

	case -949165473: iVar0 = 22; break;

	case 354975189: iVar0 = 23; break;

	case -489121482: iVar0 = 24; break;

	case -1636954018: iVar0 = 25; break;

	case -1277740240: iVar0 = 26; break;

	case -1047439708: iVar0 = 27; break;

	case -814026121: iVar0 = 28; break;

	case 1732157956: iVar0 = 29; break;

	case 1024282018: iVar0 = 30; break;

	case -2099685063: iVar0 = 31; break;

	case 1483932781: iVar0 = 32; break;

	case 1406925627: iVar0 = 33; break;

	case 698590923: iVar0 = 34; break;

	case 1869001296: iVar0 = 35; break;

	case 1169907450: iVar0 = 36; break;

	case 717727185: iVar0 = 37; break;

	case 1058197095: iVar0 = 38; break;

	case 434115743: iVar0 = 39; break;

	case 665432114: iVar0 = 40; break;

	case 1198780358: iVar0 = 41; break;

	case -2128873857: iVar0 = 42; break;

	case -148547780: iVar0 = 43; break;

	case 1819096318: iVar0 = 44; break;

	case 1051122042: iVar0 = 45; break;

	case -1350495965: iVar0 = 46; break;

	case -150859291: iVar0 = 47; break;

	case -1186193045: iVar0 = 48; break;

	case -1206837515: iVar0 = 49; break;

	case -1513653662: iVar0 = 50; break;

	case -543948331: iVar0 = 51; break;

	case -175559233: iVar0 = 52; break;

	case -131530830: iVar0 = 53; break;

	case -1816086813: iVar0 = 54; break;

	case -2113006722: iVar0 = 55; break;

	case -1101886458: iVar0 = 56; break;

	case -1398740829: iVar0 = 57; break;

	case 1939258347: iVar0 = 58; break;

	case -1004151544: iVar0 = 59; break;

	case -822873436: iVar0 = 60; break;

	case -1445222284: iVar0 = 61; break;

	case -63910623: iVar0 = 62; break;

	case 101834979: iVar0 = 63; break;

	case -673512330: iVar0 = 64; break;

	case -423845319: iVar0 = 65; break;

	case 963561372: iVar0 = 66; break;

	case 1384839636: iVar0 = 67; break;

	case -1712879828: iVar0 = 68; break;

	case -951688727: iVar0 = 69; break;

	case -1132639145: iVar0 = 70; break;

	case -513632731: iVar0 = 71; break;

	case 263680718: iVar0 = 72; break;

	case 36296627: iVar0 = 73; break;

	case 800240324: iVar0 = 74; break;

	case 614243480: iVar0 = 75; break;

	case 1408138043: iVar0 = 76; break;

	case 957564293: iVar0 = 77; break;

	case -1614279399: iVar0 = 78; break;

	case -1451286393: iVar0 = 79; break;

	case -1758069771: iVar0 = 80; break;

	case -1225475222: iVar0 = 81; break;

	case -1992892433: iVar0 = 82; break;

	case -1838157215: iVar0 = 83; break;

	case 1688803028: iVar0 = 84; break;

	case 1844259164: iVar0 = 85; break;

	case 1070943545: iVar0 = 86; break;

	case 1234460855: iVar0 = 87; break;

	case -753798460: iVar0 = 88; break;

	case -1453351072: iVar0 = 89; break;

	case -1308053326: iVar0 = 90; break;

	case -2083859401: iVar0 = 91; break;

	case 1586137527: iVar0 = 92; break;

	case 1884564810: iVar0 = 93; break;

	case 1092964089: iVar0 = 94; break;

	case 1264280421: iVar0 = 95; break;

	case 496601058: iVar0 = 96; break;

	case 861352797: iVar0 = 97; break;

	case 1418328330: iVar0 = 98; break;

	case 1784554566: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 2081736627: iVar0 = 100; break;

	case -1897271971: iVar0 = 101; break;

	case -1666742056: iVar0 = 102; break;

	case -1282165072: iVar0 = 103; break;

	case -1052880379: iVar0 = 104; break;

	case -745474390: iVar0 = 105; break;

	case -515796465: iVar0 = 106; break;

	case -811206225: iVar0 = 107; break;

	case -1586815686: iVar0 = 108; break;

	case -1423429452: iVar0 = 109; break;

	case -1697869815: iVar0 = 110; break;

	case -1470846183: iVar0 = 111; break;

	case 1093884035: iVar0 = 112; break;

	case 861256904: iVar0 = 113; break;

	case 603201029: iVar0 = 114; break;

	case 1991426949: iVar0 = 115; break;

	case -135838228: iVar0 = 116; break;

	case 121616864: iVar0 = 117; break;

	case -834517002: iVar0 = 118; break;

	case -403932342: iVar0 = 119; break;

	case -1179738417: iVar0 = 120; break;

	case -1022250603: iVar0 = 121; break;

	case 558694786: iVar0 = 122; break;

	case 569279177: iVar0 = 123; break;

	case 544309199: iVar0 = 124; break;

	case 1190448341: iVar0 = 125; break;

	case 885139568: iVar0 = 126; break;

	case -1845683606: iVar0 = 127; break;

	case -1555317497: iVar0 = 128; break;

	case 1704673699: iVar0 = 129; break;

	case 1993401358: iVar0 = 130; break;

	case 1227065524: iVar0 = 131; break;

	case -533227790: iVar0 = 132; break;

	case 309459814: iVar0 = 133; break;

	case 77815753: iVar0 = 134; break;

	case -280939203: iVar0 = 135; break;

	case 1246882601: iVar0 = 136; break;

	case 314833986: iVar0 = 137; break;

	case -25635924: iVar0 = 138; break;

	case 351567983: iVar0 = 139; break;

	case -2027428652: iVar0 = 140; break;

	case 962677064: iVar0 = 141; break;

	case -105475497: iVar0 = 142; break;

	case 766835283: iVar0 = 143; break;

	case 471979821: iVar0 = 144; break;

	case 1122542778: iVar0 = 145; break;

	case 815530017: iVar0 = 146; break;

	case 1157900525: iVar0 = 147; break;

	case 859243859: iVar0 = 148; break;

	case 2032013608: iVar0 = 149; break;

	case 1471663700: iVar0 = 150; break;

	case -1679206722: iVar0 = 151; break;

	case -309397848: iVar0 = 152; break;

	case 534666054: iVar0 = 153; break;

	case -769376301: iVar0 = 154; break;

	case 1531057961: iVar0 = 155; break;

	case 1986678137: iVar0 = 156; break;

	case 2142789653: iVar0 = 157; break;

	case 7463306: iVar0 = 158; break;

	case 308053343: iVar0 = 159; break;

	case 753842819: iVar0 = 160; break;

	case 1052794406: iVar0 = 161; break;

	case -695726661: iVar0 = 162; break;

	case -1001821890: iVar0 = 163; break;

	case -1425459522: iVar0 = 164; break;

	case 1412653072: iVar0 = 165; break;

	case 1163510365: iVar0 = 166; break;

	case 933242602: iVar0 = 167; break;

	case -1347021116: iVar0 = 168; break;

	case 1297354841: iVar0 = 169; break;

	case -839806574: iVar0 = 170; break;

	case -542100209: iVar0 = 171; break;

	case 1472218269: iVar0 = 172; break;

	case 1783196079: iVar0 = 173; break;

	case 1007062314: iVar0 = 174; break;

	case -870732522: iVar0 = 175; break;

	case 547542627: iVar0 = 176; break;

	case 863894553: iVar0 = 177; break;

	case -2099242332: iVar0 = 178; break;

	case -1860028632: iVar0 = 179; break;

	case -560967165: iVar0 = 180; break;

	case -59437904: iVar0 = 181; break;

	case 757067269: iVar0 = 182; break;

	case 455625238: iVar0 = 183; break;

	case -1750514914: iVar0 = 184; break;

	case -983982466: iVar0 = 185; break;

	case -232228837: iVar0 = 186; break;

	case 1558269323: iVar0 = 187; break;

	case 2070579873: iVar0 = 188; break;

	case -1203181916: iVar0 = 189; break;

	case -2112587204: iVar0 = 190; break;

	case 1942412705: iVar0 = 191; break;

	case -1846437386: iVar0 = 192; break;

	case 61799795: iVar0 = 193; break;

	case -1388490611: iVar0 = 194; break;

	case -1627212776: iVar0 = 195; break;

	case 1525246127: iVar0 = 196; break;

	case -11341151: iVar0 = 197; break;

	case 516055815: iVar0 = 198; break;

	case -1034642040: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1022637316: iVar0 = 200; break;

	case -1677156418: iVar0 = 201; break;

	case -1130213300: iVar0 = 202; break;

	case 104062694: iVar0 = 203; break;

	case 869579299: iVar0 = 204; break;

	case 1201332655: iVar0 = 205; break;

	case 1028967715: iVar0 = 206; break;

	case -1651634800: iVar0 = 207; break;

	case -892278763: iVar0 = 208; break;

	case -1032005779: iVar0 = 209; break;

	case -255675400: iVar0 = 210; break;

	case 1890137027: iVar0 = 211; break;

	case -406805808: iVar0 = 212; break;

	case -592540500: iVar0 = 213; break;

	case 205417419: iVar0 = 214; break;

	case -2127276619: iVar0 = 215; break;

	case -1362677538: iVar0 = 216; break;

	case -1549722990: iVar0 = 217; break;

	case 3495990: iVar0 = 218; break;

	case -285526590: iVar0 = 219; break;

	case 1907377338: iVar0 = 220; break;

	case 2136399879: iVar0 = 221; break;

	case 1568410532: iVar0 = 222; break;

	case 1068879892: iVar0 = 223; break;

	case -1592750929: iVar0 = 224; break;

	case 772896404: iVar0 = 225; break;

	case -1999229916: iVar0 = 226; break;

	case -744701520: iVar0 = 227; break;

	case -425039925: iVar0 = 228; break;

	case -798409911: iVar0 = 229; break;

	case 1379974898: iVar0 = 230; break;

	case -1681436154: iVar0 = 231; break;

	case -1486919370: iVar0 = 232; break;

	case 2014677667: iVar0 = 233; break;

	case 325697857: iVar0 = 234; break;

	case -1188819501: iVar0 = 235; break;

	case -1765193438: iVar0 = 236; break;

	case -1416269126: iVar0 = 237; break;

	case -2111365154: iVar0 = 238; break;

	case -1880573087: iVar0 = 239; break;

	case 1421296887: iVar0 = 240; break;

	case 1655562468: iVar0 = 241; break;

	case 946048080: iVar0 = 242; break;

	case 1188768063: iVar0 = 243; break;

	case 498456313: iVar0 = 244; break;

	case 323007907: iVar0 = 245; break;

	case -1325371100: iVar0 = 246; break;

	case -829313978: iVar0 = 247; break;

	case -530624543: iVar0 = 248; break;

	case -299046020: iVar0 = 249; break;

	case 1812260650: iVar0 = 250; break;

	case 2043511487: iVar0 = 251; break;

	case -1753235933: iVar0 = 252; break;

	case -1525589690: iVar0 = 253; break;

	case 31003408: iVar0 = 254; break;

	case -1864998224: iVar0 = 255; break;

	case -2140814897: iVar0 = 256; break;

	case 223468453: iVar0 = 257; break;

	case -83970305: iVar0 = 258; break;

	case -406843262: iVar0 = 259; break;

	case -954740942: iVar0 = 260; break;

	case -1675526854: iVar0 = 261; break;

	case 2111717556: iVar0 = 262; break;

	case -415395003: iVar0 = 263; break;

	case 427521984: iVar0 = 264; break;

	case 1570178485: iVar0 = 265; break;

	case -1619850916: iVar0 = 266; break;

	case -713067148: iVar0 = 267; break;

	case 946477614: iVar0 = 268; break;

	case -1423343701: iVar0 = 269; break;

	case 445931457: iVar0 = 270; break;

	case 678558588: iVar0 = 271; break;

	case -854631987: iVar0 = 272; break;

	case -1707871209: iVar0 = 273; break;

	case 1675446188: iVar0 = 274; break;

	case 1911627074: iVar0 = 275; break;

	case -607391498: iVar0 = 276; break;

	case -1544625218: iVar0 = 277; break;

	case 1185175875: iVar0 = 278; break;

	case 155591269: iVar0 = 279; break;

	case -1057958846: iVar0 = 280; break;

	case -1853795495: iVar0 = 281; break;

	case -1860485560: iVar0 = 282; break;

	case 499288642: iVar0 = 283; break;

	case -7887054: iVar0 = 284; break;

	case -1553041502: iVar0 = 285; break;

	case -1080591445: iVar0 = 286; break;

	case -741060436: iVar0 = 287; break;

	case 645634644: iVar0 = 288; break;

	case -1096728771: iVar0 = 289; break;

	case 503268386: iVar0 = 290; break;

	case 109804153: iVar0 = 291; break;

	case 1410910279: iVar0 = 292; break;

	case 1501700194: iVar0 = 293; break;

	case -1793199216: iVar0 = 294; break;

	case 1405944575: iVar0 = 295; break;

	case 1731382556: iVar0 = 296; break;

	case 1743809026: iVar0 = 297; break;

	case 1589237530: iVar0 = 298; break;

	case -1558441108: iVar0 = 299; break;
	}
	switch (iParam0) {
	case 793815980: iVar0 = 303; break;

	case 87277824: iVar0 = 304; break;

	case 1305470790: iVar0 = 305; break;

	case 252924758: iVar0 = 306; break;

	case 1043745875: iVar0 = 307; break;

	case 24304530: iVar0 = 308; break;

	case 582246031: iVar0 = 309; break;

	case 1840225396: iVar0 = 310; break;

	case -47863515: iVar0 = 311; break;

	case 26968202: iVar0 = 312; break;

	case 1720638120: iVar0 = 313; break;

	case 1372737856: iVar0 = 314; break;

	case -675719916: iVar0 = 315; break;

	case -610888268: iVar0 = 316; break;

	case -129698248: iVar0 = 317; break;

	case 1060644905: iVar0 = 318; break;

	case 776078819: iVar0 = 319; break;

	case -1069464482: iVar0 = 320; break;

	case -1342875239: iVar0 = 321; break;

	case 1967892405: iVar0 = 322; break;

	case 642864781: iVar0 = 323; break;

	case 1270860039: iVar0 = 324; break;

	case -1290780406: iVar0 = 325; break;

	case 1127641545: iVar0 = 326; break;

	case -1221948530: iVar0 = 327; break;

	case 1954153055: iVar0 = 328; break;

	case 543727307: iVar0 = 329; break;

	case -1806626643: iVar0 = 330; break;

	case 1146362323: iVar0 = 331; break;

	case -1918158051: iVar0 = 332; break;

	case -1835082731: iVar0 = 333; break;

	case 1935907419: iVar0 = 334; break;

	case 961997868: iVar0 = 335; break;

	case -415246024: iVar0 = 336; break;

	case -2003529037: iVar0 = 337; break;

	case -1272951326: iVar0 = 338; break;

	case 837851491: iVar0 = 339; break;

	case -64649653: iVar0 = 340; break;

	case 1997623301: iVar0 = 341; break;

	case 1177835340: iVar0 = 342; break;

	case -1261787835: iVar0 = 343; break;

	case -965491494: iVar0 = 344; break;

	case 939374190: iVar0 = 345; break;

	case 149461503: iVar0 = 346; break;

	case -1117498985: iVar0 = 347; break;

	case 1184468662: iVar0 = 348; break;

	case -772488648: iVar0 = 349; break;

	case -1399171334: iVar0 = 350; break;

	case -963164512: iVar0 = 351; break;

	case -1284517669: iVar0 = 352; break;

	case 1613773443: iVar0 = 353; break;

	case 1963092516: iVar0 = 354; break;

	case -878642668: iVar0 = 355; break;

	case -1618544925: iVar0 = 356; break;

	case 1185417232: iVar0 = 357; break;

	case -1649044153: iVar0 = 358; break;

	case -1293956525: iVar0 = 359; break;

	case -84085370: iVar0 = 360; break;

	case -943861479: iVar0 = 361; break;

	case -1355455834: iVar0 = 362; break;

	case 711764191: iVar0 = 363; break;

	case 41616632: iVar0 = 364; break;

	case -2053984264: iVar0 = 365; break;

	case -522832741: iVar0 = 366; break;

	case 711940316: iVar0 = 367; break;

	case -1512107004: iVar0 = 368; break;

	case -273305505: iVar0 = 369; break;

	case -779122930: iVar0 = 370; break;

	case 565678099: iVar0 = 371; break;

	case 2130135469: iVar0 = 372; break;

	case 2142072717: iVar0 = 373; break;

	case -636638153: iVar0 = 374; break;

	case 289539239: iVar0 = 375; break;

	case -1040822561: iVar0 = 376; break;

	case 217486581: iVar0 = 377; break;

	case -2147244302: iVar0 = 378; break;

	case 830186237: iVar0 = 379; break;

	case -1902384566: iVar0 = 380; break;

	case 1471583453: iVar0 = 381; break;

	case 2007332931: iVar0 = 382; break;

	case 1104156493: iVar0 = 383; break;

	case 616400258: iVar0 = 384; break;

	case 511243162: iVar0 = 385; break;

	case -477451680: iVar0 = 386; break;

	case 743616295: iVar0 = 387; break;

	case 712215816: iVar0 = 388; break;

	case 1475570942: iVar0 = 389; break;

	case -1768978416: iVar0 = 390; break;

	case -2139711822: iVar0 = 391; break;

	case -1509236263: iVar0 = 392; break;

	case -1143383459: iVar0 = 393; break;

	case -1690206781: iVar0 = 394; break;

	case 1947095236: iVar0 = 395; break;

	case 300333876: iVar0 = 396; break;

	case 37732721: iVar0 = 397; break;

	case 959183706: iVar0 = 398; break;

	case -1542393224: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 874488242: iVar0 = 400; break;

	case 1389335000: iVar0 = 401; break;

	case -366075547: iVar0 = 402; break;

	case -1125431584: iVar0 = 403; break;

	case -2000068963: iVar0 = 404; break;

	case 1497445248: iVar0 = 405; break;

	case 1989766704: iVar0 = 406; break;

	case -2086401979: iVar0 = 407; break;

	case -1846467361: iVar0 = 408; break;

	case -1325458477: iVar0 = 409; break;

	case -566725051: iVar0 = 410; break;

	case -787850263: iVar0 = 411; break;

	case -1885021085: iVar0 = 412; break;

	case 979307144: iVar0 = 413; break;

	case -473732439: iVar0 = 414; break;

	case 2062186390: iVar0 = 415; break;

	case -60867780: iVar0 = 416; break;

	case 926967912: iVar0 = 417; break;

	case -1886278590: iVar0 = 418; break;

	case -1314959708: iVar0 = 419; break;

	case -1696774529: iVar0 = 420; break;

	case -356446484: iVar0 = 421; break;

	case 857810380: iVar0 = 422; break;

	case -629676646: iVar0 = 423; break;

	case -1879530481: iVar0 = 424; break;

	case -1265847311: iVar0 = 425; break;

	case 32094424: iVar0 = 426; break;

	case 1969286744: iVar0 = 427; break;

	case 560620683: iVar0 = 428; break;

	case -148312642: iVar0 = 429; break;

	case -578277428: iVar0 = 430; break;

	case -718909970: iVar0 = 431; break;

	case -859026859: iVar0 = 432; break;

	case -839897805: iVar0 = 433; break;

	case 1676439910: iVar0 = 434; break;

	case -294157184: iVar0 = 435; break;

	case -1222200221: iVar0 = 436; break;

	case 874532672: iVar0 = 437; break;

	case -135929055: iVar0 = 438; break;

	case 1654917353: iVar0 = 439; break;

	case -13131391: iVar0 = 440; break;

	case 154845196: iVar0 = 441; break;

	case -1147884322: iVar0 = 442; break;

	case 291693311: iVar0 = 443; break;

	case -1401933531: iVar0 = 444; break;

	case 1820267020: iVar0 = 445; break;

	case 2134488961: iVar0 = 446; break;

	case -1861952745: iVar0 = 447; break;

	case 994458405: iVar0 = 448; break;

	case -1931715008: iVar0 = 449; break;

	case 1308745884: iVar0 = 450; break;

	case -1322955084: iVar0 = 451; break;

	case -816658183: iVar0 = 452; break;

	case -988307698: iVar0 = 453; break;

	case -1341411308: iVar0 = 454; break;

	case 1865570599: iVar0 = 455; break;

	case -549458010: iVar0 = 456; break;

	case -1328545177: iVar0 = 457; break;

	case -1361353619: iVar0 = 458; break;

	case 1103253806: iVar0 = 459; break;

	case -24183456: iVar0 = 460; break;

	case 436214104: iVar0 = 461; break;

	case 2072615278: iVar0 = 462; break;

	case -1131891426: iVar0 = 463; break;

	case 1392085456: iVar0 = 464; break;

	case 2035895234: iVar0 = 465; break;

	case 368784798: iVar0 = 466; break;

	case 1398938833: iVar0 = 467; break;

	case 1250040566: iVar0 = 468; break;

	case 2133228190: iVar0 = 469; break;

	case 675551540: iVar0 = 470; break;

	case -1826137848: iVar0 = 471; break;

	case -144105601: iVar0 = 472; break;

	case -748983650: iVar0 = 473; break;

	case 630291027: iVar0 = 474; break;

	case 293950434: iVar0 = 475; break;

	case 1857352111: iVar0 = 476; break;

	case -777671131: iVar0 = 477; break;

	case 221602924: iVar0 = 478; break;

	case 2039295216: iVar0 = 479; break;

	case 1800147054: iVar0 = 480; break;

	case -2019505897: iVar0 = 481; break;

	case 1647997020: iVar0 = 482; break;

	case -1405854945: iVar0 = 483; break;

	case -1171294997: iVar0 = 484; break;

	case -77076350: iVar0 = 485; break;

	case 775569873: iVar0 = 486; break;

	case 330569485: iVar0 = 487; break;

	case -1549217620: iVar0 = 488; break;

	case 1674429052: iVar0 = 489; break;

	case -254669596: iVar0 = 490; break;

	case 1802602254: iVar0 = 491; break;

	case -941072260: iVar0 = 492; break;

	case -1844749517: iVar0 = 493; break;

	case 82745424: iVar0 = 494; break;

	case -673460083: iVar0 = 495; break;

	case -99954496: iVar0 = 496; break;

	case 2078163456: iVar0 = 497; break;

	case 1362343227: iVar0 = 498; break;

	case 1176005743: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1504557219: iVar0 = 500; break;

	case 367912881: iVar0 = 501; break;

	case -836343280: iVar0 = 502; break;

	case -46521805: iVar0 = 503; break;

	case -743048780: iVar0 = 504; break;

	case 1294865118: iVar0 = 505; break;

	case -1479686374: iVar0 = 506; break;

	case 256017193: iVar0 = 507; break;

	case 1232443120: iVar0 = 508; break;

	case -803282271: iVar0 = 509; break;

	case 1788600442: iVar0 = 510; break;

	case 1439605343: iVar0 = 511; break;

	case -1094679264: iVar0 = 512; break;

	case 1230482241: iVar0 = 513; break;

	case 2054714291: iVar0 = 514; break;

	case 192117676: iVar0 = 515; break;

	case -2071204405: iVar0 = 516; break;

	case -1618181476: iVar0 = 517; break;

	case -1408253665: iVar0 = 518; break;

	case -134185391: iVar0 = 519; break;

	case -785783411: iVar0 = 520; break;

	case -633466710: iVar0 = 521; break;

	case -2072487372: iVar0 = 522; break;

	case 1211025296: iVar0 = 523; break;

	case 742659337: iVar0 = 524; break;

	case 1365533160: iVar0 = 525; break;

	case 1213205618: iVar0 = 526; break;

	case -164052103: iVar0 = 527; break;

	case -1306490297: iVar0 = 528; break;

	case -994802645: iVar0 = 529; break;

	case 637406209: iVar0 = 530; break;

	case -170855031: iVar0 = 531; break;

	case 1333098305: iVar0 = 532; break;

	case 119103934: iVar0 = 533; break;

	case -141369051: iVar0 = 534; break;

	case -593355218: iVar0 = 535; break;

	case 316832763: iVar0 = 536; break;

	case -393713544: iVar0 = 537; break;

	case -1876234625: iVar0 = 538; break;

	case -1453082334: iVar0 = 539; break;

	case -1397705983: iVar0 = 540; break;

	case -1278086171: iVar0 = 541; break;

	case -1510892268: iVar0 = 542; break;

	case 204876084: iVar0 = 543; break;

	case -988359492: iVar0 = 544; break;

	case 975745281: iVar0 = 545; break;

	case 591099372: iVar0 = 546; break;

	case -1014948306: iVar0 = 547; break;

	case -1866439788: iVar0 = 548; break;

	case -1265767186: iVar0 = 549; break;

	case 2070931859: iVar0 = 550; break;

	case 413611416: iVar0 = 551; break;

	case 765001063: iVar0 = 552; break;

	case -686624622: iVar0 = 553; break;

	case -937548349: iVar0 = 554; break;

	case 212584159: iVar0 = 555; break;

	case -328340062: iVar0 = 556; break;

	case 1657725123: iVar0 = 557; break;

	case -1517964336: iVar0 = 558; break;

	case -785490239: iVar0 = 559; break;

	case -11769229: iVar0 = 560; break;

	case 745912106: iVar0 = 561; break;

	case -2064265098: iVar0 = 562; break;

	case -1515892875: iVar0 = 563; break;

	case 1368234729: iVar0 = 564; break;

	case 1960230923: iVar0 = 565; break;

	case -860169810: iVar0 = 566; break;

	case -177882114: iVar0 = 567; break;

	case 661384509: iVar0 = 568; break;

	case 1221860095: iVar0 = 569; break;

	case 698192473: iVar0 = 570; break;

	case -817251083: iVar0 = 571; break;

	case -1108876323: iVar0 = 572; break;

	case 1274482696: iVar0 = 573; break;

	case 468009056: iVar0 = 574; break;

	case 2063732427: iVar0 = 575; break;

	case -764016411: iVar0 = 576; break;

	case -1530816149: iVar0 = 577; break;

	case 1189996018: iVar0 = 578; break;

	case -210110115: iVar0 = 579; break;

	case -207110256: iVar0 = 580; break;

	case 1801308144: iVar0 = 581; break;

	case 320631086: iVar0 = 582; break;

	case 1022560466: iVar0 = 583; break;

	case -952946041: iVar0 = 584; break;

	case 1321460664: iVar0 = 585; break;

	case -781625914: iVar0 = 586; break;

	case -1522247835: iVar0 = 587; break;

	case -1531245231: iVar0 = 588; break;

	case -1070472994: iVar0 = 589; break;

	case -2113341060: iVar0 = 590; break;

	case 965047293: iVar0 = 591; break;

	case 2114285045: iVar0 = 592; break;

	case -1635032213: iVar0 = 593; break;

	case 1310864345: iVar0 = 594; break;

	case -973977633: iVar0 = 595; break;

	case -1439643329: iVar0 = 596; break;

	case 434150104: iVar0 = 597; break;

	case 1243301688: iVar0 = 598; break;

	case -1233567982: iVar0 = 599; break;
	}
	switch (iParam0) {
	case 1262886680: iVar0 = 600; break;

	case 283135569: iVar0 = 601; break;

	case -548917969: iVar0 = 602; break;

	case 153465812: iVar0 = 603; break;

	case 1916093085: iVar0 = 604; break;

	case -701486200: iVar0 = 605; break;

	case 1951718630: iVar0 = 606; break;

	case -1981978861: iVar0 = 607; break;

	case -1998094267: iVar0 = 608; break;

	case -718445629: iVar0 = 609; break;

	case -35697399: iVar0 = 610; break;

	case -899081349: iVar0 = 611; break;

	case 1123547916: iVar0 = 612; break;

	case -1139893782: iVar0 = 613; break;

	case 1446511785: iVar0 = 614; break;

	case 1234256191: iVar0 = 615; break;

	case 413901048: iVar0 = 616; break;

	case 1527450164: iVar0 = 617; break;

	case -1786525476: iVar0 = 618; break;

	case 1439516635: iVar0 = 619; break;

	case 733800794: iVar0 = 620; break;

	case -399223540: iVar0 = 621; break;

	case -1894392230: iVar0 = 622; break;

	case 229993415: iVar0 = 623; break;

	case -620189683: iVar0 = 624; break;

	case 1846617794: iVar0 = 625; break;

	case -1142479347: iVar0 = 626; break;

	case -512960025: iVar0 = 627; break;

	case -759812557: iVar0 = 628; break;

	case 468661890: iVar0 = 629; break;

	case 1907925586: iVar0 = 630; break;

	case 646243571: iVar0 = 631; break;

	case 1953935161: iVar0 = 632; break;

	case 874867224: iVar0 = 633; break;

	case 1344008898: iVar0 = 634; break;

	case 1297781304: iVar0 = 635; break;

	case 1977233252: iVar0 = 636; break;

	case -194410344: iVar0 = 637; break;

	case 392012609: iVar0 = 638; break;

	case 705148450: iVar0 = 639; break;

	case 1677522529: iVar0 = 640; break;

	case -1362677538: iVar0 = 641; break;

	case 863458948: iVar0 = 642; break;

	case 9874621: iVar0 = 643; break;

	case 1809338990: iVar0 = 644; break;

	case -346939959: iVar0 = 645; break;

	case -934753544: iVar0 = 646; break;

	case 1604986209: iVar0 = 647; break;

	case -1514700421: iVar0 = 648; break;

	case 1177361060: iVar0 = 649; break;

	case -937529288: iVar0 = 650; break;

	case 547723644: iVar0 = 651; break;

	case 1750314531: iVar0 = 652; break;

	case -988332613: iVar0 = 653; break;

	case 80720443: iVar0 = 654; break;

	case -1220194634: iVar0 = 655; break;

	case -925735153: iVar0 = 656; break;

	case -1403745446: iVar0 = 657; break;

	case -1084626028: iVar0 = 658; break;

	case 2060572320: iVar0 = 659; break;

	case 1064377095: iVar0 = 660; break;

	case -1985597576: iVar0 = 661; break;

	case -2003189104: iVar0 = 662; break;

	case 1452329956: iVar0 = 663; break;

	case 1928573506: iVar0 = 664; break;

	case -185753722: iVar0 = 665; break;

	case -1580916109: iVar0 = 666; break;

	case -1077059973: iVar0 = 667; break;

	case 131755133: iVar0 = 668; break;

	case -253351038: iVar0 = 669; break;

	case 1332845224: iVar0 = 670; break;

	case -685051870: iVar0 = 671; break;

	case 2122847199: iVar0 = 672; break;

	case -149940744: iVar0 = 673; break;

	case -147741130: iVar0 = 674; break;

	case 302211868: iVar0 = 675; break;

	case -1361568592: iVar0 = 676; break;

	case -156600218: iVar0 = 677; break;

	case 1592739450: iVar0 = 678; break;

	case -633744004: iVar0 = 679; break;

	case -1467745952: iVar0 = 680; break;

	case 1129961041: iVar0 = 681; break;

	case -1221180772: iVar0 = 682; break;

	case 1957517559: iVar0 = 683; break;

	case -335233377: iVar0 = 684; break;

	case 2146762380: iVar0 = 685; break;

	case 427236107: iVar0 = 686; break;

	case -49636427: iVar0 = 687; break;

	case 1988133312: iVar0 = 688; break;

	case 40044091: iVar0 = 689; break;

	case -1189893809: iVar0 = 690; break;

	case 1182549017: iVar0 = 691; break;

	case 1403255481: iVar0 = 692; break;

	case 821579887: iVar0 = 693; break;

	case 1975948161: iVar0 = 694; break;

	case -953362234: iVar0 = 695; break;

	case 1521494915: iVar0 = 696; break;

	case 84635211: iVar0 = 697; break;

	case 2074655231: iVar0 = 698; break;

	case 1742494019: iVar0 = 699; break;
	}
	switch (iParam0) {
	case 1841934566: iVar0 = 700; break;

	case 1648222412: iVar0 = 701; break;

	case 1019312748: iVar0 = 702; break;

	case -1218730541: iVar0 = 703; break;

	case -88186884: iVar0 = 704; break;

	case 1428588096: iVar0 = 705; break;

	case -1788493673: iVar0 = 706; break;

	case -241894528: iVar0 = 707; break;

	case -1425414573: iVar0 = 708; break;

	case 1797163947: iVar0 = 709; break;

	case 823191231: iVar0 = 710; break;

	case 894133321: iVar0 = 711; break;

	case 1889485313: iVar0 = 712; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x2CBCF
bool func_147(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case -1917324065: iVar0 = 0; break;

	case 1056297333: iVar0 = 1; break;

	case 494620709: iVar0 = 2; break;

	case 800453786: iVar0 = 3; break;

	case -1082736975: iVar0 = 4; break;

	case -754981437: iVar0 = 5; break;

	case -1801855538: iVar0 = 6; break;

	case 459313194: iVar0 = 7; break;

	case 2007087579: iVar0 = 8; break;

	case 1987172386: iVar0 = 9; break;

	case 1801787829: iVar0 = 10; break;

	case -221624488: iVar0 = 11; break;

	case 25158851: iVar0 = 12; break;

	case 472458130: iVar0 = 13; break;

	case 164352862: iVar0 = 14; break;

	case -904148779: iVar0 = 15; break;

	case -694439771: iVar0 = 16; break;

	case -1469590466: iVar0 = 17; break;

	case -1511207100: iVar0 = 18; break;

	case -1352670678: iVar0 = 19; break;

	case -1960273476: iVar0 = 20; break;

	case -1657389609: iVar0 = 21; break;

	case 1826839858: iVar0 = 22; break;

	case 1989701788: iVar0 = 23; break;

	case 1213109257: iVar0 = 24; break;

	case 607407061: iVar0 = 25; break;

	case 875031480: iVar0 = 26; break;

	case 1487418552: iVar0 = 27; break;

	case 264053475: iVar0 = 28; break;

	case 99094329: iVar0 = 29; break;

	case -244193715: iVar0 = 30; break;

	case -540785934: iVar0 = 31; break;

	case -694833003: iVar0 = 32; break;

	case -852058665: iVar0 = 33; break;

	case -1512648940: iVar0 = 34; break;

	case -761354077: iVar0 = 35; break;

	case 1560551467: iVar0 = 36; break;

	case 827974775: iVar0 = 37; break;

	case 1595162603: iVar0 = 38; break;

	case 709663738: iVar0 = 39; break;

	case 990002533: iVar0 = 40; break;

	case 1860213958: iVar0 = 41; break;

	case 2119318441: iVar0 = 42; break;

	case -1953737187: iVar0 = 43; break;

	case 193320466: iVar0 = 44; break;

	case 1936646403: iVar0 = 45; break;

	case -1126042648: iVar0 = 46; break;

	case -1125022512: iVar0 = 47; break;

	case -1304369017: iVar0 = 48; break;

	case -2018143375: iVar0 = 49; break;

	case 224730392: iVar0 = 50; break;

	case 439629494: iVar0 = 51; break;

	case 736778786: iVar0 = 52; break;

	case 1048444745: iVar0 = 53; break;

	case 1988816738: iVar0 = 54; break;

	case 2140603469: iVar0 = 55; break;

	case 214245031: iVar0 = 56; break;

	case 1006238992: iVar0 = 57; break;

	case 689952604: iVar0 = 58; break;

	case -681528353: iVar0 = 59; break;

	case 1157448359: iVar0 = 60; break;

	case 43105745: iVar0 = 61; break;

	case -270395278: iVar0 = 62; break;

	case 505181414: iVar0 = 63; break;

	case 254662409: iVar0 = 64; break;

	case -982924414: iVar0 = 65; break;

	case -1156010272: iVar0 = 66; break;

	case 1885313391: iVar0 = 67; break;

	case -694786597: iVar0 = 68; break;

	case -1950199756: iVar0 = 69; break;

	case 384168721: iVar0 = 70; break;

	case -369452741: iVar0 = 71; break;

	case -89113946: iVar0 = 72; break;

	case 1836261422: iVar0 = 73; break;

	case -1004417654: iVar0 = 74; break;

	case -754095263: iVar0 = 75; break;

	case -1210698509: iVar0 = 76; break;

	case 1332405298: iVar0 = 77; break;

	case 552929095: iVar0 = 78; break;

	case 861154309: iVar0 = 79; break;

	case -1653801207: iVar0 = 80; break;

	case -87213624: iVar0 = 81; break;

	case 1285643631: iVar0 = 82; break;

	case 523240077: iVar0 = 83; break;

	case 823174734: iVar0 = 84; break;

	case -1248612522: iVar0 = 85; break;

	case 123359970: iVar0 = 86; break;

	case 369684543: iVar0 = 87; break;

	case -337142787: iVar0 = 88; break;

	case 1395583642: iVar0 = 89; break;

	case 1782520810: iVar0 = 90; break;

	case -660506451: iVar0 = 91; break;

	case -1092860637: iVar0 = 92; break;

	case 524387820: iVar0 = 93; break;

	case -1829180023: iVar0 = 94; break;

	case 2091368679: iVar0 = 95; break;

	case 1851597906: iVar0 = 96; break;

	case -434629734: iVar0 = 97; break;

	case 1415278623: iVar0 = 98; break;

	case 1252285617: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 893595891: iVar0 = 100; break;

	case 423819507: iVar0 = 101; break;

	case -1433887872: iVar0 = 102; break;

	case -464613621: iVar0 = 103; break;

	case -301227387: iVar0 = 104; break;

	case -701762906: iVar0 = 105; break;

	case -890282963: iVar0 = 106; break;

	case -1188251480: iVar0 = 107; break;

	case 258827560: iVar0 = 108; break;

	case 965649655: iVar0 = 109; break;

	case 718800778: iVar0 = 110; break;

	case 1959959422: iVar0 = 111; break;

	case 1200177388: iVar0 = 112; break;

	case -1874439579: iVar0 = 113; break;

	case -1679505893: iVar0 = 114; break;

	case -1976229188: iVar0 = 115; break;

	case 2037875009: iVar0 = 116; break;

	case -235146664: iVar0 = 117; break;

	case -441853516: iVar0 = 118; break;

	case -664221443: iVar0 = 119; break;

	case -371627042: iVar0 = 120; break;

	case -1266220742: iVar0 = 121; break;

	case -968055611: iVar0 = 122; break;

	case 248100286: iVar0 = 123; break;

	case 551606764: iVar0 = 124; break;

	case 1805971315: iVar0 = 125; break;

	case -43642121: iVar0 = 126; break;

	case 1172251624: iVar0 = 127; break;

	case 1471989667: iVar0 = 128; break;

	case -2124702788: iVar0 = 129; break;

	case -1826734271: iVar0 = 130; break;

	case -900452940: iVar0 = 131; break;

	case -292194762: iVar0 = 132; break;

	case 637166847: iVar0 = 133; break;

	case -1204844181: iVar0 = 134; break;

	case 324779970: iVar0 = 135; break;

	case 329039940: iVar0 = 136; break;

	case 1854928425: iVar0 = 137; break;

	case 13179549: iVar0 = 138; break;

	case 1899823455: iVar0 = 139; break;

	case -2090490448: iVar0 = 140; break;

	case -1801467868: iVar0 = 141; break;

	case 953986562: iVar0 = 142; break;

	case 585335312: iVar0 = 143; break;

	case 489617063: iVar0 = 144; break;

	case 210195800: iVar0 = 145; break;

	case 1843402776: iVar0 = 146; break;

	case -1600520821: iVar0 = 147; break;

	case 1399087889: iVar0 = 148; break;

	case 1169344430: iVar0 = 149; break;

	case -2028647818: iVar0 = 150; break;

	case -1335845620: iVar0 = 151; break;

	case -1450406320: iVar0 = 152; break;

	case -1209849091: iVar0 = 153; break;

	case 2065609077: iVar0 = 154; break;

	case -664245241: iVar0 = 155; break;

	case 1676130538: iVar0 = 156; break;

	case -1730534702: iVar0 = 157; break;

	case -1767432596: iVar0 = 158; break;

	case -2016105604: iVar0 = 159; break;

	case 1971947238: iVar0 = 160; break;

	case -362811247: iVar0 = 161; break;

	case -668087251: iVar0 = 162; break;

	case -821282326: iVar0 = 163; break;

	case -1083467095: iVar0 = 164; break;

	case 550067555: iVar0 = 165; break;

	case 1439221609: iVar0 = 166; break;

	case 67412954: iVar0 = 167; break;

	case -1999360357: iVar0 = 168; break;

	case 1461537582: iVar0 = 169; break;

	case -1828273408: iVar0 = 170; break;

	case -1319239762: iVar0 = 171; break;

	case -1234400821: iVar0 = 172; break;

	case -992303449: iVar0 = 173; break;

	case -638398249: iVar0 = 174; break;

	case -41543683: iVar0 = 175; break;

	case -1934903018: iVar0 = 176; break;

	case 2132090345: iVar0 = 177; break;

	case 1751052413: iVar0 = 178; break;

	case 1519604966: iVar0 = 179; break;

	case -1964624525: iVar0 = 180; break;

	case 2006191823: iVar0 = 181; break;

	case 1633280603: iVar0 = 182; break;

	case 632918673: iVar0 = 183; break;

	case -190040148: iVar0 = 184; break;

	case 42936837: iVar0 = 185; break;

	case -1458541976: iVar0 = 186; break;

	case -606014753: iVar0 = 187; break;

	case -613376371: iVar0 = 188; break;

	case -446291501: iVar0 = 189; break;

	case 739308497: iVar0 = 190; break;

	case 495343292: iVar0 = 191; break;

	case -1686711653: iVar0 = 192; break;

	case 1187457341: iVar0 = 193; break;

	case 956403122: iVar0 = 194; break;

	case 1647042566: iVar0 = 195; break;

	case -461478743: iVar0 = 196; break;

	case -1883325653: iVar0 = 197; break;

	case -2114248796: iVar0 = 198; break;

	case 314228205: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1503775674: iVar0 = 200; break;

	case 1862399610: iVar0 = 201; break;

	case 708472048: iVar0 = 202; break;

	case -1207367545: iVar0 = 203; break;

	case 111650251: iVar0 = 204; break;

	case -28941494: iVar0 = 205; break;

	case -1827173138: iVar0 = 206; break;

	case -520681423: iVar0 = 207; break;

	case -209343154: iVar0 = 208; break;

	case -293579471: iVar0 = 209; break;

	case 20871853: iVar0 = 210; break;

	case -89823344: iVar0 = 211; break;

	case -1820191335: iVar0 = 212; break;

	case -1588547274: iVar0 = 213; break;

	case -1224287070: iVar0 = 214; break;

	case -994150383: iVar0 = 215; break;

	case -869824793: iVar0 = 216; break;

	case -633330920: iVar0 = 217; break;

	case -308131364: iVar0 = 218; break;

	case -38278649: iVar0 = 219; break;

	case 555692245: iVar0 = 220; break;

	case 929455459: iVar0 = 221; break;

	case -2092436411: iVar0 = 222; break;

	case 1904300216: iVar0 = 223; break;

	case -1599361268: iVar0 = 224; break;

	case -1897002095: iVar0 = 225; break;

	case -1011813098: iVar0 = 226; break;

	case -1316794181: iVar0 = 227; break;

	case -416105443: iVar0 = 228; break;

	case -47978497: iVar0 = 229; break;

	case -358202620: iVar0 = 230; break;

	case 547139312: iVar0 = 231; break;

	case 1124688073: iVar0 = 232; break;

	case 888521890: iVar0 = 233; break;

	case 665823766: iVar0 = 234; break;

	case 427888057: iVar0 = 235; break;

	case 1121411181: iVar0 = 236; break;

	case 890225886: iVar0 = 237; break;

	case 651012186: iVar0 = 238; break;

	case 422776101: iVar0 = 239; break;

	case 1630543134: iVar0 = 240; break;

	case -1945668916: iVar0 = 241; break;

	case -627999265: iVar0 = 242; break;

	case 1682346315: iVar0 = 243; break;

	case 1021952654: iVar0 = 244; break;

	case 1319396867: iVar0 = 245; break;

	case 560794517: iVar0 = 246; break;

	case 858697496: iVar0 = 247; break;

	case -30981230: iVar0 = 248; break;

	case -328032215: iVar0 = 249; break;

	case -1451681225: iVar0 = 250; break;

	case 267904819: iVar0 = 251; break;

	case 1570178485: iVar0 = 252; break;

	case -1619850916: iVar0 = 253; break;

	case -713067148: iVar0 = 254; break;

	case 946477614: iVar0 = 255; break;

	case -1423343701: iVar0 = 256; break;

	case 445931457: iVar0 = 257; break;

	case 678558588: iVar0 = 258; break;

	case -854631987: iVar0 = 259; break;

	case -1707871209: iVar0 = 260; break;

	case -863391184: iVar0 = 261; break;

	case 671171671: iVar0 = 262; break;

	case 904519720: iVar0 = 263; break;

	case 670952414: iVar0 = 264; break;

	case -282875325: iVar0 = 265; break;

	case 2079623104: iVar0 = 266; break;

	case 1088443427: iVar0 = 267; break;

	case 200001600: iVar0 = 268; break;

	case 1620729159: iVar0 = 269; break;

	case -1713274238: iVar0 = 270; break;

	case -1571590969: iVar0 = 271; break;

	case -457639374: iVar0 = 272; break;

	case 64160805: iVar0 = 273; break;

	case 1015325203: iVar0 = 274; break;

	case -1951778967: iVar0 = 275; break;

	case 1836042304: iVar0 = 276; break;

	case -421094621: iVar0 = 277; break;

	case 641062099: iVar0 = 278; break;

	case 597454468: iVar0 = 279; break;

	case 713758205: iVar0 = 280; break;

	case 1042267708: iVar0 = 281; break;

	case -637951661: iVar0 = 282; break;

	case 195911857: iVar0 = 283; break;

	case 903988957: iVar0 = 284; break;

	case 1068170761: iVar0 = 285; break;

	case -619065384: iVar0 = 286; break;

	case -497085955: iVar0 = 287; break;

	case 1138369002: iVar0 = 288; break;

	case -1957731308: iVar0 = 289; break;

	case -2063712125: iVar0 = 290; break;

	case 1773674262: iVar0 = 291; break;

	case 1027059614: iVar0 = 292; break;

	case 1366782677: iVar0 = 293; break;

	case 216134256: iVar0 = 294; break;

	case 810154442: iVar0 = 295; break;

	case 77285961: iVar0 = 296; break;

	case 1617489838: iVar0 = 297; break;

	case 1697138602: iVar0 = 298; break;

	case 711811694: iVar0 = 299; break;
	}
	switch (iParam0) {
	case -895106351: iVar0 = 300; break;

	case 875367934: iVar0 = 301; break;

	case -979867160: iVar0 = 302; break;

	case -1233816942: iVar0 = 303; break;

	case -866958715: iVar0 = 304; break;

	case -1303573005: iVar0 = 305; break;

	case 2085207152: iVar0 = 306; break;

	case 857137150: iVar0 = 307; break;

	case 535952639: iVar0 = 308; break;

	case -1974657401: iVar0 = 309; break;

	case 129909013: iVar0 = 310; break;

	case -1499060170: iVar0 = 311; break;

	case 412032123: iVar0 = 312; break;

	case 915049044: iVar0 = 313; break;

	case 456478679: iVar0 = 314; break;

	case 907364848: iVar0 = 315; break;

	case -1783721060: iVar0 = 316; break;

	case -1008363280: iVar0 = 317; break;

	case 1429817922: iVar0 = 318; break;

	case -938326281: iVar0 = 319; break;

	case -1073925235: iVar0 = 320; break;

	case 1498524677: iVar0 = 321; break;

	case 1525596308: iVar0 = 322; break;

	case 1232639216: iVar0 = 323; break;

	case 956061600: iVar0 = 324; break;

	case 816551665: iVar0 = 325; break;

	case 2049704410: iVar0 = 326; break;

	case -796818724: iVar0 = 327; break;

	case 1775476370: iVar0 = 328; break;

	case 266230635: iVar0 = 329; break;

	case -588549683: iVar0 = 330; break;

	case 464027076: iVar0 = 331; break;

	case 2122049260: iVar0 = 332; break;

	case 1049130700: iVar0 = 333; break;

	case -116952560: iVar0 = 334; break;

	case 1424723115: iVar0 = 335; break;

	case -1007272003: iVar0 = 336; break;

	case -644829701: iVar0 = 337; break;

	case -2103222497: iVar0 = 338; break;

	case -1589795073: iVar0 = 339; break;

	case -1689668067: iVar0 = 340; break;

	case -189814108: iVar0 = 341; break;

	case -1595292141: iVar0 = 342; break;

	case -1540940714: iVar0 = 343; break;

	case -2136471172: iVar0 = 344; break;

	case -666892434: iVar0 = 345; break;

	case -1001125323: iVar0 = 346; break;

	case 904104464: iVar0 = 347; break;

	case 690016265: iVar0 = 348; break;

	case 38190590: iVar0 = 349; break;

	case 2119761078: iVar0 = 350; break;

	case -1213131712: iVar0 = 351; break;

	case 990079224: iVar0 = 352; break;

	case -905045993: iVar0 = 353; break;

	case 2104378143: iVar0 = 354; break;

	case -666631800: iVar0 = 355; break;

	case 549954933: iVar0 = 356; break;

	case 1830069972: iVar0 = 357; break;

	case 859320876: iVar0 = 358; break;

	case -552358316: iVar0 = 359; break;

	case 1522216340: iVar0 = 360; break;

	case -1783296601: iVar0 = 361; break;

	case 283995288: iVar0 = 362; break;

	case -975534410: iVar0 = 363; break;

	case -2088194624: iVar0 = 364; break;

	case 1744801848: iVar0 = 365; break;

	case -481389646: iVar0 = 366; break;

	case -1781363036: iVar0 = 367; break;

	case 496009839: iVar0 = 368; break;

	case -667608820: iVar0 = 369; break;

	case 460475899: iVar0 = 370; break;

	case 1491168919: iVar0 = 371; break;

	case -1611478806: iVar0 = 372; break;

	case 523495612: iVar0 = 373; break;

	case -78008273: iVar0 = 374; break;

	case -762375847: iVar0 = 375; break;

	case 331482129: iVar0 = 376; break;

	case -2083628050: iVar0 = 377; break;

	case -468800117: iVar0 = 378; break;

	case 724819757: iVar0 = 379; break;

	case -1058761348: iVar0 = 380; break;

	case -546178212: iVar0 = 381; break;

	case -118052734: iVar0 = 382; break;

	case 1654466691: iVar0 = 383; break;

	case -1077553649: iVar0 = 384; break;

	case -886092159: iVar0 = 385; break;

	case -1406331536: iVar0 = 386; break;

	case -1968934850: iVar0 = 387; break;

	case 3741245: iVar0 = 388; break;

	case 1387838298: iVar0 = 389; break;

	case -1941058219: iVar0 = 390; break;

	case 955033120: iVar0 = 391; break;

	case 677119231: iVar0 = 392; break;

	case -1616214916: iVar0 = 393; break;

	case -841195297: iVar0 = 394; break;

	case -909289279: iVar0 = 395; break;

	case -239567341: iVar0 = 396; break;

	case -613592707: iVar0 = 397; break;

	case -988568374: iVar0 = 398; break;

	case -1090807654: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 534771589: iVar0 = 400; break;

	case -1340139519: iVar0 = 401; break;

	case -849980761: iVar0 = 402; break;

	case -551553478: iVar0 = 403; break;

	case 386581472: iVar0 = 404; break;

	case 1466454525: iVar0 = 405; break;

	case 283190173: iVar0 = 406; break;

	case 1528527015: iVar0 = 407; break;

	case -1690029966: iVar0 = 408; break;

	case -1685994466: iVar0 = 409; break;

	case 255166927: iVar0 = 410; break;

	case -271257487: iVar0 = 411; break;

	case 1885215284: iVar0 = 412; break;

	case -1935156988: iVar0 = 413; break;

	case 1061465906: iVar0 = 414; break;

	case -871031729: iVar0 = 415; break;

	case -101171485: iVar0 = 416; break;

	case -1590298770: iVar0 = 417; break;

	case 303441856: iVar0 = 418; break;

	case -2049689650: iVar0 = 419; break;

	case 788520303: iVar0 = 420; break;

	case -859861445: iVar0 = 421; break;

	case 1045897298: iVar0 = 422; break;

	case 116964921: iVar0 = 423; break;

	case -1502257606: iVar0 = 424; break;

	case -546150284: iVar0 = 425; break;

	case -357466888: iVar0 = 426; break;

	case 718674880: iVar0 = 427; break;

	case -1529401172: iVar0 = 428; break;

	case 2088037441: iVar0 = 429; break;

	case 2048866271: iVar0 = 430; break;

	case -1565431690: iVar0 = 431; break;

	case -1528465573: iVar0 = 432; break;

	case 401532197: iVar0 = 433; break;

	case 826974918: iVar0 = 434; break;

	case -676067408: iVar0 = 435; break;

	case 1877289089: iVar0 = 436; break;

	case 859380017: iVar0 = 437; break;

	case 233098354: iVar0 = 438; break;

	case 566101858: iVar0 = 439; break;

	case 529460830: iVar0 = 440; break;

	case -1833118141: iVar0 = 441; break;

	case 422823598: iVar0 = 442; break;

	case 1450358661: iVar0 = 443; break;

	case 741089893: iVar0 = 444; break;

	case 1289848370: iVar0 = 445; break;

	case 616166430: iVar0 = 446; break;

	case 1489225316: iVar0 = 447; break;

	case 753969632: iVar0 = 448; break;

	case -1182831168: iVar0 = 449; break;

	case 1545103753: iVar0 = 450; break;

	case 2090080808: iVar0 = 451; break;

	case 903606896: iVar0 = 452; break;

	case 26759391: iVar0 = 453; break;

	case 1651885364: iVar0 = 454; break;

	case 729529407: iVar0 = 455; break;

	case 528802126: iVar0 = 456; break;

	case -1468003071: iVar0 = 457; break;

	case 1683696787: iVar0 = 458; break;

	case -726859160: iVar0 = 459; break;

	case 1209899578: iVar0 = 460; break;

	case 930604285: iVar0 = 461; break;

	case -308584186: iVar0 = 462; break;

	case -64129874: iVar0 = 463; break;

	case -1431204514: iVar0 = 464; break;

	case -1133334304: iVar0 = 465; break;

	case -1809784771: iVar0 = 466; break;

	case -1576934998: iVar0 = 467; break;

	case -1570929684: iVar0 = 468; break;

	case 1976578151: iVar0 = 469; break;

	case -441419962: iVar0 = 470; break;

	case -841238543: iVar0 = 471; break;

	case 1644315794: iVar0 = 472; break;

	case 1964334039: iVar0 = 473; break;

	case -1168614925: iVar0 = 474; break;

	case -56760095: iVar0 = 475; break;

	case -1006202521: iVar0 = 476; break;

	case -1834049539: iVar0 = 477; break;

	case -2060372580: iVar0 = 478; break;

	case 1057304170: iVar0 = 479; break;

	case 1421572640: iVar0 = 480; break;

	case 481259621: iVar0 = 481; break;

	case 1227497670: iVar0 = 482; break;

	case 319276780: iVar0 = 483; break;

	case 2070827921: iVar0 = 484; break;

	case 1433629991: iVar0 = 485; break;

	case -1712994650: iVar0 = 486; break;

	case 2125094286: iVar0 = 487; break;

	case 712298404: iVar0 = 488; break;

	case 1998072324: iVar0 = 489; break;

	case 1249206960: iVar0 = 490; break;

	case -621355603: iVar0 = 491; break;

	case 1570835960: iVar0 = 492; break;

	case -1254202543: iVar0 = 493; break;

	case -956136061: iVar0 = 494; break;

	case -1925480683: iVar0 = 495; break;

	case 220143168: iVar0 = 496; break;

	case -1021851577: iVar0 = 497; break;

	case -773345516: iVar0 = 498; break;

	case 1091795205: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1159824040: iVar0 = 500; break;

	case 1448723789: iVar0 = 501; break;

	case -488127340: iVar0 = 502; break;

	case -1964967283: iVar0 = 503; break;

	case -1635180127: iVar0 = 504; break;

	case -10501563: iVar0 = 505; break;

	case 933419071: iVar0 = 506; break;

	case 1362374839: iVar0 = 507; break;

	case 488078687: iVar0 = 508; break;

	case -1869054624: iVar0 = 509; break;

	case -1817642831: iVar0 = 510; break;

	case 482472119: iVar0 = 511; break;

	case -1736839817: iVar0 = 512; break;

	case 415527077: iVar0 = 513; break;

	case -907440189: iVar0 = 514; break;

	case -2099454789: iVar0 = 515; break;

	case -1719543542: iVar0 = 516; break;

	case 1848661824: iVar0 = 517; break;

	case -2018029706: iVar0 = 518; break;

	case -717212544: iVar0 = 519; break;

	case -594210450: iVar0 = 520; break;

	case 1520437442: iVar0 = 521; break;

	case 374349467: iVar0 = 522; break;

	case 1533123503: iVar0 = 523; break;

	case -1832780872: iVar0 = 524; break;

	case 130721536: iVar0 = 525; break;

	case 195356001: iVar0 = 526; break;

	case -556915722: iVar0 = 527; break;

	case -1930562696: iVar0 = 528; break;

	case 941227127: iVar0 = 529; break;

	case -842699589: iVar0 = 530; break;

	case 1654019571: iVar0 = 531; break;

	case 224191803: iVar0 = 532; break;

	case -1996796255: iVar0 = 533; break;

	case -1850715440: iVar0 = 534; break;

	case 1603163718: iVar0 = 535; break;

	case 1567227108: iVar0 = 536; break;

	case -1630649997: iVar0 = 537; break;

	case -25727072: iVar0 = 538; break;

	case -1363418653: iVar0 = 539; break;

	case 1878229535: iVar0 = 540; break;

	case 1531050226: iVar0 = 541; break;

	case 1246243345: iVar0 = 542; break;

	case 463561930: iVar0 = 543; break;

	case 1431846777: iVar0 = 544; break;

	case -460168116: iVar0 = 545; break;

	case -2015343582: iVar0 = 546; break;

	case 2051301469: iVar0 = 547; break;

	case 1887452986: iVar0 = 548; break;

	case -1551331969: iVar0 = 549; break;

	case 682382693: iVar0 = 550; break;

	case 765481743: iVar0 = 551; break;

	case 1094179010: iVar0 = 552; break;

	case 1906582382: iVar0 = 553; break;

	case 1923135102: iVar0 = 554; break;

	case -964908188: iVar0 = 555; break;

	case -1145896773: iVar0 = 556; break;

	case -776248682: iVar0 = 557; break;

	case 872613482: iVar0 = 558; break;

	case 1049060638: iVar0 = 559; break;

	case -927135334: iVar0 = 560; break;

	case -445820043: iVar0 = 561; break;

	case 1610045630: iVar0 = 562; break;

	case -1070800165: iVar0 = 563; break;

	case -589592162: iVar0 = 564; break;

	case 1723966869: iVar0 = 565; break;

	case 402539085: iVar0 = 566; break;

	case 873283678: iVar0 = 567; break;

	case -883161109: iVar0 = 568; break;

	case -1764919154: iVar0 = 569; break;

	case -2050352513: iVar0 = 570; break;

	case 1114188021: iVar0 = 571; break;

	case 1798282399: iVar0 = 572; break;

	case 1944820428: iVar0 = 573; break;

	case 100210893: iVar0 = 574; break;

	case -1699022511: iVar0 = 575; break;

	case 466917406: iVar0 = 576; break;

	case -349746245: iVar0 = 577; break;

	case 715904570: iVar0 = 578; break;

	case 281777035: iVar0 = 579; break;

	case 1511283406: iVar0 = 580; break;

	case -241337647: iVar0 = 581; break;

	case 748393780: iVar0 = 582; break;

	case 709511536: iVar0 = 583; break;

	case -652535466: iVar0 = 584; break;

	case -1148900842: iVar0 = 585; break;

	case -271863310: iVar0 = 586; break;

	case 35654857: iVar0 = 587; break;

	case 1894813304: iVar0 = 588; break;

	case 1184660438: iVar0 = 589; break;

	case -1461750963: iVar0 = 590; break;

	case 769964545: iVar0 = 591; break;

	case 1424500982: iVar0 = 592; break;

	case -1810785185: iVar0 = 593; break;

	case 837990279: iVar0 = 594; break;

	case -1357788003: iVar0 = 595; break;

	case -8210327: iVar0 = 596; break;

	case 1186553524: iVar0 = 597; break;

	case 1174934203: iVar0 = 598; break;

	case -984449089: iVar0 = 599; break;
	}
	switch (iParam0) {
	case -49570837: iVar0 = 600; break;

	case -1680371785: iVar0 = 601; break;

	case -1850912390: iVar0 = 602; break;

	case -1740038087: iVar0 = 603; break;

	case -619541947: iVar0 = 604; break;

	case 294240494: iVar0 = 605; break;

	case -765542196: iVar0 = 606; break;

	case -1420662645: iVar0 = 607; break;

	case 331918356: iVar0 = 608; break;

	case 204953755: iVar0 = 609; break;

	case 1764172461: iVar0 = 610; break;

	case 1462870109: iVar0 = 611; break;

	case -2071014467: iVar0 = 612; break;

	case 478439238: iVar0 = 613; break;

	case 796489219: iVar0 = 614; break;

	case 843279688: iVar0 = 615; break;

	case 1752551314: iVar0 = 616; break;

	case 735155845: iVar0 = 617; break;

	case 1863251462: iVar0 = 618; break;

	case -2142058763: iVar0 = 619; break;

	case -207591105: iVar0 = 620; break;

	case -932813887: iVar0 = 621; break;

	case -313503199: iVar0 = 622; break;

	case 718936417: iVar0 = 623; break;

	case -1107649605: iVar0 = 624; break;

	case 39090475: iVar0 = 625; break;

	case 1628251208: iVar0 = 626; break;

	case -311245907: iVar0 = 627; break;

	case -942031335: iVar0 = 628; break;

	case -1285040537: iVar0 = 629; break;

	case -606706891: iVar0 = 630; break;

	case -1719095858: iVar0 = 631; break;

	case 1725502681: iVar0 = 632; break;

	case 609583888: iVar0 = 633; break;

	case -1172383155: iVar0 = 634; break;

	case -3492404: iVar0 = 635; break;

	case -1006004645: iVar0 = 636; break;

	case -1937311482: iVar0 = 637; break;

	case -2065604094: iVar0 = 638; break;

	case 2028818254: iVar0 = 639; break;

	case 1624012067: iVar0 = 640; break;

	case -1877817141: iVar0 = 641; break;

	case -911576192: iVar0 = 642; break;

	case -2038013276: iVar0 = 643; break;

	case -901986542: iVar0 = 644; break;

	case 1792492176: iVar0 = 645; break;

	case -86485329: iVar0 = 646; break;

	case -1083434268: iVar0 = 647; break;

	case 613606704: iVar0 = 648; break;

	case -394853815: iVar0 = 649; break;

	case -1103127620: iVar0 = 650; break;

	case -1565650506: iVar0 = 651; break;

	case 1845793118: iVar0 = 652; break;

	case 105835401: iVar0 = 653; break;

	case 874268443: iVar0 = 654; break;

	case 2088424900: iVar0 = 655; break;

	case -786732051: iVar0 = 656; break;

	case 2054090970: iVar0 = 657; break;

	case 1878368697: iVar0 = 658; break;

	case 569662133: iVar0 = 659; break;

	case -792802958: iVar0 = 660; break;

	case 2006001399: iVar0 = 661; break;

	case 1785762805: iVar0 = 662; break;

	case 737220320: iVar0 = 663; break;

	case 1396060544: iVar0 = 664; break;

	case -1964728736: iVar0 = 665; break;

	case 1593302778: iVar0 = 666; break;

	case 84849272: iVar0 = 667; break;

	case -402776165: iVar0 = 668; break;

	case -221660734: iVar0 = 669; break;

	case 1648112645: iVar0 = 670; break;

	case 2066668749: iVar0 = 671; break;

	case -4424163: iVar0 = 672; break;

	case -173288591: iVar0 = 673; break;

	case 253771760: iVar0 = 674; break;

	case -1431574022: iVar0 = 675; break;

	case 959314664: iVar0 = 676; break;

	case 1670479428: iVar0 = 677; break;

	case 1779534675: iVar0 = 678; break;

	case -1268204471: iVar0 = 679; break;

	case -1937668252: iVar0 = 680; break;

	case -192802570: iVar0 = 681; break;

	case 1200380295: iVar0 = 682; break;

	case -644503216: iVar0 = 683; break;

	case 496410473: iVar0 = 684; break;

	case 462780886: iVar0 = 685; break;

	case 211198653: iVar0 = 686; break;

	case -504012739: iVar0 = 687; break;

	case 34276608: iVar0 = 688; break;

	case -2088223199: iVar0 = 689; break;

	case 2056773549: iVar0 = 690; break;

	case 962023066: iVar0 = 691; break;

	case 893288510: iVar0 = 692; break;

	case 1963590204: iVar0 = 693; break;

	case 919272855: iVar0 = 694; break;

	case 413754974: iVar0 = 695; break;

	case -1862916472: iVar0 = 696; break;

	case -1184732039: iVar0 = 697; break;

	case -143503455: iVar0 = 698; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x2F150
int func_148(int iParam0) {
	switch (entity::get_entity_model(iParam0)) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	case joaat("mp_m_freemode_01"): return 3;

	case joaat("mp_f_freemode_01"): return 4;
	}
	return 0;
}

// Position - 0x2F1A5
void func_149() {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id()) && Local_136.f_526) {
		iVar0 = 0;
		while (iVar0 < 12) {
			if (iVar0 != 0) {
				ped::set_ped_component_variation(player::player_ped_id(), iVar0, Local_136.f_461.f_13[iVar0],
												 Local_136.f_461[iVar0], Local_136.f_461.f_26[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9) {
			if (Local_136.f_461.f_39[iVar0] != -1) {
				ped::set_ped_prop_index(player::player_ped_id(), iVar0, Local_136.f_461.f_39[iVar0],
										Local_136.f_461.f_49[iVar0], network::network_is_game_in_progress());
			}
			else {
				ped::clear_ped_prop(player::player_ped_id(), iVar0);
			}
			iVar0++;
		}
	}
}

// Position - 0x2F258
void func_150() {
	if (vLocal_669.x) {
		streaming::set_model_as_no_longer_needed(vLocal_669.y);
		vLocal_669.x = 0;
	}
	if (entity::does_entity_exist(vLocal_669.z)) {
		ped::delete_ped(&vLocal_669.f_2);
	}
	if (entity::does_entity_exist(Global_2593195)) {
		ped::delete_ped(&Global_2593195);
	}
}

// Position - 0x2F29B
void func_151(int iParam0, int iParam1) {
	char cVar0[64];
	struct<13> Var16;
	var uVar29;

	StringCopy(&cVar0, func_155(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar0) == -1487683087) {
		if (network::network_is_game_in_progress() && func_5(player::player_id(), 0, 1) && func_153() &&
			network::_network_player_is_in_clan()) {
			Var16 = {func_152(player::player_id())};
			if (network::network_clan_player_is_active(&Var16) &&
				network::network_clan_player_get_desc(&uVar29, 35, &Var16)) {
				network::_0x113E6E3E50E286B0(uVar29);
			}
		}
	}
	else if (gameplay::get_hash_key(&cVar0) != 0) {
		graphics::set_streamed_texture_dict_as_no_longer_needed(&cVar0);
	}
}

// Position - 0x2F323
struct<13> func_152(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

//Position - 0x2F33A
int func_153()
{
	struct<13> Var0;

	if (player::is_player_online()) {
		if (network::network_is_signed_online() && network::network_is_signed_in() && network::_0x67A5589628E0CFF6()) {
			Var0 = {func_154()};
			if (network::_network_player_is_in_clan() && network::network_clan_player_is_active(&Var0)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2F382
struct<13> func_154() {
	struct<13> Var0;

	network::network_get_local_handle(&Var0, 13);
	return Var0;
}

// Position - 0x2F397
char *
func_155(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return "ShopUI_Title_HighEndSalon";

	case 1:
	case 4:
	case 6: return "ShopUI_Title_Barber";

	case 2: return "ShopUI_Title_Barber2";

	case 3: return "ShopUI_Title_Barber3";

	case 5: return "ShopUI_Title_Barber4";

	case 7:
	case 8:
	case 10:
	case 11:
	case 13: return "ShopUI_Title_LowEndFashion";

	case 9:
	case 12: return "ShopUI_Title_LowEndFashion2";

	case 14:
	case 15:
	case 16:
	case 17: return "ShopUI_Title_MidFashion";

	case 18:
	case 19:
	case 20: return "ShopUI_Title_HighEndFashion";

	case 21: return "ShopUI_Title_Movie_Masks";

	case 22: return "ShopUI_Title_Tattoos";

	case 23:
	case 24: return "ShopUI_Title_Tattoos2";

	case 25: return "ShopUI_Title_Tattoos3";

	case 26: return "ShopUI_Title_Tattoos4";

	case 27: return "ShopUI_Title_Tattoos5";

	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38: return "ShopUI_Title_GunClub";

	case 39:
	case 40:
	case 41:
	case 43: return "ShopUI_Title_Carmod";

	case 42: return "ShopUI_Title_Carmod2";

	case 44: return "ShopUI_Title_Supermod";

	case 45:
		switch (iParam1) {
		case 4:
		case 5: return "ShopUI_Title_ClubhouseMod";
		}
		return "ShopUI_Title_IE_ModGarage";
	}
	return "";
}

// Position - 0x2F5A2
void func_156(int iParam0, int iParam1) {
	int iVar0;

	if (!func_158(&iVar0, 0, iParam1)) {
		return;
	}
	if (Global_17290.f_7899) {
		ui::reset_hud_component_values(15);
		Global_17290.f_7899 = 0;
	}
	ui::_0x55598D21339CB998(0f);
	if (Global_17290.f_5498[iVar0]) {
		ui::clear_additional_text(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (iParam0) {
		func_157(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x2F660
void func_157(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x2F689
int func_158(int *iParam0, int iParam1, int iParam2) {
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1) {
		if (network::network_is_game_in_progress() && network::network_get_this_script_is_network_script()) {
			iParam2 = network::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, script::get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = gameplay::get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6) {
		if (Global_17290.f_5591[iVar17] == iVar16) {
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0) {
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1) {
		if (iVar18 != -1) {
			Global_17290.f_5591[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

// Position - 0x2F726
void func_159() {
	cam::set_widescreen_borders(0, -1);
	func_168();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		weapon::hide_ped_weapon_for_scripted_cutscene(player::player_ped_id(), 0);
		if (!Global_69702) {
			player::set_everyone_ignore_player(player::player_id(), 0);
			ped::clear_facial_idle_anim_override(player::player_ped_id());
		}
	}
	Global_93002 = 0;
	func_160(0, 1, 1, 0);
}

// Position - 0x2F773
void func_160(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_167(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_166()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_170(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_167(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_170(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_164(player::player_id()) &&
				!func_162(player::player_id(), 0) && !func_161()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_164(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x2F88C
bool func_161() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x2F8A9
bool func_162(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_163(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x2F8F4
int func_163(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_18();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x2F935
int func_164(int iParam0) {
	if (func_162(iParam0, 0)) {
		return 1;
	}
	if (func_165()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x2F977
bool func_165() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x2F988
int func_166() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x2F9AF
void func_167(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x2F9D2
void func_168() {
	if (Global_91543.f_5 && Global_91543.f_6 == gameplay::get_hash_key(script::get_this_script_name())) {
		ui::clear_help(1);
		Global_91543.f_5 = 0;
	}
}

// Position - 0x2FA03
void func_169(int iParam0) {
	if (iParam0) {
		if (Global_69702) {
			if (network::network_is_in_mp_cutscene()) {
				network::network_set_in_mp_cutscene(0, 0);
			}
		}
	}
}

// Position - 0x2FA24
int func_170(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && iParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x2FA57
void func_171(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (Global_69702) {
		func_186();
	}
	if (func_185(1)) {
		if (uParam0->f_19) {
		}
		if (Global_69702) {
			if (iParam3) {
				if (!func_183()) {
				}
				else if (!func_182() && !func_237() && !streaming::is_new_load_scene_active()) {
					if (!iParam4) {
						func_177(player::player_id(), 1, 8388608);
					}
					else {
						func_177(player::player_id(), 1, 0);
					}
				}
				else if (!iParam4) {
					func_177(player::player_id(), 0, 8454656);
				}
				else {
					func_177(player::player_id(), 0, 66048);
				}
			}
		}
		else {
			player::set_player_control(player::player_id(), 1, 0);
		}
		ai::task_clear_look_at(player::player_ped_id());
		entity::set_entity_visible(player::player_ped_id(), 1, 0);
	}
	if (iParam2) {
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
	}
	if (iParam1) {
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	}
	uParam0->f_30 = 1;
	uParam0->f_28 = gameplay::get_game_timer();
	if (network::network_is_game_in_progress()) {
		uParam0->f_29 = network::get_network_time();
	}
	if (Global_69702) {
		func_174();
		func_172();
	}
	if (uParam0->f_33 != 0 || !gameplay::is_string_null_or_empty(&uParam0->f_34)) {
		StringCopy(&uParam0->f_34, "", 16);
		uParam0->f_33 = 0;
	}
	if (network::network_is_game_in_progress() && network::network_is_in_tutorial_session() && uParam0->f_32 != 0) {
		if (!network::_0x35F0B98A8387274D()) {
			network::network_end_tutorial_session();
			uParam0->f_32 = 0;
		}
	}
}

// Position - 0x2FBB6
void func_172() {
	if (!Global_1312567) {
		return;
	}
	func_173();
}

// Position - 0x2FBCD
void func_173() {
	Global_1312567 = 0;
	StringCopy(&Global_1312567.f_1, "", 24);
	Global_1312567.f_7 = 0;
}

// Position - 0x2FBEC
void func_174() {
	func_176(1);
	func_175(4, 0, -1);
	func_175(6, 0, -1);
	func_175(7, 0, -1);
	func_175(3, 0, -1);
	func_175(1, 0, -1);
	func_175(2, 0, -1);
	func_175(11, 0, -1);
	func_175(13, 0, -1);
	func_175(14, 0, -1);
	func_175(16, 0, -1);
}

// Position - 0x2FC43
void func_175(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case 5:
		if (iParam2 > -1) {
			Global_1353070.f_137[iParam2] = iParam1;
		}
		break;

	default:
		if (iParam1) {
			gameplay::set_bit(&Global_1353070.f_1013, iParam0);
		}
		else {
			gameplay::clear_bit(&Global_1353070.f_1013, iParam0);
		}
		break;
	}
}

// Position - 0x2FC92
void func_176(int iParam0) { Global_2494199.f_4393 = iParam0; }

// Position - 0x2FCA3
void func_177(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;

	if (iParam1) {
		if (script::_get_no_loading_screen()) {
			script::set_no_loading_screen(0);
		}
	}
	if (!network::network_is_game_in_progress()) {
		iVar0 = iParam2;
		player::set_player_control(iParam0, iParam1, iVar0);
	}
	else {
		bVar1 = (iParam2 & 2) != false;
		bVar2 = (iParam2 & 4) != false;
		bVar3 = (iParam2 & 8) != false;
		bVar4 = (iParam2 & 16) != false;
		bVar5 = (iParam2 & 32) != false;
		bVar6 = (iParam2 & 64) != false;
		bVar7 = (iParam2 & 128) != false;
		bVar8 = (iParam2 & 256) != false;
		bVar9 = (iParam2 & 512) != false;
		bVar10 = (iParam2 & 1024) != false;
		bVar11 = (iParam2 & 2048) != false;
		bVar12 = (iParam2 & 4096) != false;
		bVar13 = (iParam2 & 8192) != false;
		bVar14 = (iParam2 & 16384) != false;
		iVar15 = (iParam2 & 32768) != 0;
		iVar16 = (iParam2 & 65536) != 0;
		bVar17 = (iParam2 & 131072) != false;
		bVar18 = (iParam2 & 262144) != false;
		bVar19 = (iParam2 & 524288) != false;
		bVar20 = (iParam2 & 1048576) != false;
		bVar21 = (iParam2 & 2097152) != false;
		bVar22 = (iParam2 & 4194304) != false;
		bVar23 = (iParam2 & 8388608) != false;
		if (!func_183()) {
			bVar24 = false;
			if (iParam1 == 1) {
				bVar24 = true;
			}
			if (iVar15 == 0 && !bVar20) {
				bVar24 = true;
			}
			if (bVar9 == 1) {
				bVar24 = true;
			}
			if (bVar24) {
				return;
			}
		}
		if (bVar17) {
		}
		if (network::network_is_player_active(iParam0) && player::is_player_playing(iParam0)) {
			iVar25 = player::get_player_ped(iParam0);
			if (!bVar19) {
				if (bVar18 && iParam1 == 0 && network::network_is_game_in_progress()) {
					network::fade_out_local_player(1);
				}
				else {
					entity::set_entity_visible(iVar25, !bVar13, 0);
				}
				if (!bVar13) {
					if (network::network_is_game_in_progress() && !bVar18) {
						network::fade_out_local_player(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (iParam1) {
				if (!func_181(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, 1, 0);
					}
				}
				if (!entity::is_entity_attached(iVar25)) {
					if (!bVar20) {
						entity::freeze_entity_position(iVar25, 0);
					}
					entity::_set_entity_register(iVar25, 1);
				}
				else if (!bVar20) {
					entity::freeze_entity_position(iVar25, 0);
				}
				ped::set_ped_can_be_targetted(iVar25, 1);
				player::set_player_invincible(iParam0, 0);
				ped::_0x4668D80430D6C299(iVar25);
				ped::set_ped_can_ragdoll(iVar25, 1);
				func_180();
				func_179();
				if (player::is_player_teleport_active()) {
					if (!bVar22) {
					}
				}
				if (streaming::is_new_load_scene_active()) {
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23) {
					bVar2 = true;
				}
			}
			else {
				if (!func_181(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, !bVar14, 0);
					}
					if (!entity::is_entity_attached(iVar25)) {
						if (!bVar20) {
							entity::freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15) {
							entity::_set_entity_register(iVar25, 1);
						}
					}
					if (func_178(Global_1633501.f_107548)) {
						entity::freeze_entity_position(iVar25, 1);
					}
				}
				if (bVar9) {
					player::set_player_invincible(iParam0, 0);
				}
				else {
					player::set_player_invincible(iParam0, 1);
				}
				ped::set_ped_can_be_targetted(iVar25, iVar16);
				if (bVar2) {
					if (!ped::is_ped_fatally_injured(iVar25) && !ped::is_ped_in_any_vehicle(iVar25, 0)) {
						ai::clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1) {
				iVar26 |= 2;
			}
			if (bVar2) {
				iVar26 |= 4;
			}
			if (bVar3) {
				iVar26 |= 8;
			}
			if (bVar4) {
				iVar26 |= 16;
			}
			if (bVar5) {
				iVar26 |= 32;
			}
			if (bVar6) {
				iVar26 |= 64;
			}
			if (bVar7) {
				iVar26 |= 128;
			}
			if (bVar8) {
				iVar26 |= 256;
			}
			if (bVar9) {
				iVar26 |= 512;
			}
			if (bVar10) {
				iVar26 |= 1024;
			}
			if (bVar11) {
				iVar26 |= 2048;
			}
			if (bVar12) {
				iVar26 |= 4096;
			}
			player::set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

// Position - 0x3005C
bool func_178(int iParam0) { return iParam0 == 17; }

// Position - 0x30069
void func_179() {
	struct<2> Var0;

	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404994.f_2220 = {Var0};
}

// Position - 0x300A6
void func_180() {
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[player::player_id() /*358*/].f_210 = 0;
}

// Position - 0x300DC
int func_181(int iParam0) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 1)) {
		return 1;
	}
	else {
		iVar0 = ai::get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3010D
bool func_182() { return gameplay::is_bit_set(Global_2443134, 2); }

// Position - 0x3011E
int func_183() {
	if (func_184() == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x30133
int func_184() { return Global_1312466.f_18; }

// Position - 0x30141
bool func_185(int iParam0) {
	if (Global_69702) {
		return func_5(player::player_id(), iParam0, !func_822(1));
	}
	return !ped::is_ped_injured(player::player_ped_id());
}

// Position - 0x3016F
void func_186() {
	if (Global_1312416.f_1 == 1) {
		func_187(0);
		Global_1312416.f_1 = 0;
		Global_1619421[player::player_id() /*390*/].f_9 = 0;
	}
}

// Position - 0x3019B
void func_187(int iParam0) {
	if (func_195()) {
		if (iParam0 == 1) {
			if (Global_2494199.f_4257 == -1) {
				Global_2494199.f_4257 = 60000;
			}
			func_194(&Global_2494199.f_4255, 0, 0);
			if (Global_2494199.f_4260 == -1) {
				Global_2494199.f_4260 = 10000;
			}
			func_194(&Global_2494199.f_4258, 0, 0);
		}
		else {
			Global_1312416 = 0;
			func_193(1);
		}
		if (!network::network_is_activity_session() && !func_192() && !func_188(player::player_id())) {
			Global_979731 = 0;
		}
		Global_1619421[player::player_id() /*390*/].f_8 = 0;
	}
}

// Position - 0x30235
int func_188(int iParam0) {
	if (func_189(iParam0, 1)) {
		if (Global_1591201[iParam0 /*602*/] != 6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x30259
bool func_189(int iParam0, int iParam1) {
	if (iParam1) {
		if (func_190(iParam0)) {
			return true;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1) {
		return false;
	}
	return true;
}

// Position - 0x30285
bool func_190(int iParam0) { return func_191(iParam0); }

// Position - 0x30293
var func_191(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_13.f_1, 0); }

// Position - 0x302AD
bool func_192() { return Global_2443134.f_718; }

// Position - 0x302BC
void func_193(int iParam0) {
	if (network::network_is_game_in_progress()) {
		if (!func_195()) {
			if (func_5(player::player_id(), 1, 0)) {
				ped::set_ped_can_be_dragged_out(player::player_ped_id(), 1);
				ped::set_ped_config_flag(player::player_ped_id(), 342, 0);
				ped::set_ped_config_flag(player::player_ped_id(), 122, 0);
			}
			player::set_player_vehicle_defense_modifier(player::player_id(), 1f);
			network::_0x1B857666604B1A74(0);
			network::network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1) {
				Global_1312416.f_2 = 0;
				if (iParam0) {
					network::use_player_colour_instead_of_team_colour(0, 0);
				}
			}
		}
		else {
			if (func_5(player::player_id(), 1, 1)) {
				ped::set_ped_can_be_dragged_out(player::player_ped_id(), 0);
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				ped::set_ped_config_flag(player::player_ped_id(), 342, 1);
				ped::set_ped_config_flag(player::player_ped_id(), 122, 1);
				player::set_player_vehicle_defense_modifier(player::player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1) {
					network::use_player_colour_instead_of_team_colour(1, 0);
				}
			}
			network::_0x1B857666604B1A74(1);
			network::network_set_friendly_fire_option(0);
		}
	}
}

// Position - 0x303B5
void func_194(var *uParam0, int iParam1, int iParam2) {
	if (network::network_is_game_in_progress() && !iParam1) {
		if (!iParam2) {
			*uParam0 = network::get_network_time();
		}
		else {
			*uParam0 = network::_0x89023FBBF9200E9F();
		}
	}
	else {
		*uParam0 = gameplay::get_game_timer();
	}
	uParam0->f_1 = 1;
}

// Position - 0x303F2
bool func_195() { return Global_1312416; }

// Position - 0x303FE
void func_196(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (cam::does_cam_exist((*uParam0)[iVar0 /*12*/])) {
			cam::destroy_cam((*uParam0)[iVar0 /*12*/], 0);
		}
		iVar0++;
	}
}

// Position - 0x30434
void func_197(var *uParam0, int iParam1) {
	if (*uParam0 == iParam1 && uParam0->f_7) {
		func_22("Unable to lock shop doors as player is inside the shop.", -1);
	}
	else {
		func_208(iParam1, 1, 0);
	}
	func_207(iParam1, 0);
	func_206(iParam1, 0);
	func_205(iParam1, 1, 1);
	func_205(iParam1, 10, 1);
	func_205(iParam1, 11, 1);
	func_205(iParam1, 12, 1);
	func_205(iParam1, 13, 1);
	func_205(iParam1, 22, 1);
	func_205(iParam1, 25, 1);
	if (uParam0->f_1 == 1) {
		func_205(iParam1, 19, 1);
	}
	if (!func_819(iParam1)) {
		func_22("Letting shop controller know to relaunch when in range.", -1);
		func_203(iParam1, 17, 1);
	}
	func_202(iParam1);
	func_199(iParam1);
	func_198(player::player_id(), iParam1);
	func_168();
	if (func_25(iParam1)) {
		if (entity::does_entity_exist(uParam0->f_12) && !ped::is_ped_injured(uParam0->f_12)) {
			if (!network::network_is_game_in_progress() || network::network_has_control_of_entity(uParam0->f_12)) {
				ped::set_ped_keep_task(uParam0->f_12, 1);
			}
		}
	}
	else {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			ped::clear_facial_idle_anim_override(player::player_ped_id());
		}
		if (func_809(uParam0, iParam1)) {
			if (entity::does_entity_exist(uParam0->f_12)) {
				ped::delete_ped(&uParam0->f_12);
			}
		}
		else if (entity::does_entity_exist(uParam0->f_12)) {
			entity::set_ped_as_no_longer_needed(&uParam0->f_12);
		}
	}
}

// Position - 0x30581
void func_198(int iParam0, int iParam1) {
	if (iParam1 == -1) {
	}
	if (network::network_is_game_in_progress()) {
		if (Global_1591201[iParam0 /*602*/].f_199) {
			Global_1591201[iParam0 /*602*/].f_199 = 0;
			Global_1591201[iParam0 /*602*/].f_200 = 0;
		}
	}
}

// Position - 0x305BC
void func_199(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4) {
		func_200(iParam0, iVar0);
		iVar0++;
	}
}

// Position - 0x305DE
void func_200(int iParam0, int iParam1) {
	if (iParam0 != -1 && iParam1 != 0) {
		if (Global_91543.f_305[func_201(iParam0) /*5*/][iParam1] == 2) {
			Global_91543.f_305[func_201(iParam0) /*5*/][iParam1] = 4;
		}
		else {
			Global_91543.f_305[func_201(iParam0) /*5*/][iParam1] = 0;
		}
		if (Global_91543.f_341[func_201(iParam0)] == iParam1) {
			Global_91543.f_341[func_201(iParam0)] = 0;
		}
	}
}

// Position - 0x3065C
int func_201(int iParam0) {
	switch (iParam0) {
	case 39: return 1;

	case 40: return 2;

	case 41: return 3;

	case 42: return 4;

	case 43: return 5;

	case 44: return 6;
	}
	return 0;
}

// Position - 0x306BA
void func_202(int iParam0) {
	Global_91543.f_160[iParam0] = 1;
	Global_91543.f_159 = 1;
}

// Position - 0x306D4
void func_203(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_20() == 0) {
			iVar0 = func_16(func_19(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_204(func_19(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x3073D
void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_17(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x3076D
void func_205(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_20() == 0) {
			iVar0 = func_16(func_19(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_204(func_19(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x307D6
void func_206(int iParam0, int iParam1) {
	if (iParam1) {
		player::set_all_random_peds_flee_this_frame(player::player_id());
		if (!func_15(iParam0, 6, 1)) {
			func_203(iParam0, 6, 1);
			Global_91543.f_304++;
			if (!network::network_is_game_in_progress()) {
				player::force_cleanup(8);
			}
		}
	}
	else if (func_15(iParam0, 6, 1)) {
		func_205(iParam0, 6, 1);
		if (Global_91543.f_304 > 0) {
			Global_91543.f_304--;
		}
		brain::_0x6D6840CEE8845831("act_cinema");
	}
}

// Position - 0x30856
void func_207(int iParam0, int iParam1) {
	if (iParam1) {
		Global_91543.f_388 = iParam0;
		if (!func_15(iParam0, 5, 1)) {
			func_203(iParam0, 5, 1);
			func_202(iParam0);
			Global_91543.f_303++;
		}
	}
	else if (func_15(iParam0, 5, 1)) {
		func_205(iParam0, 5, 1);
		func_202(iParam0);
		if (Global_91543.f_303 > 0) {
			Global_91543.f_303--;
		}
	}
}

// Position - 0x308CD
void func_208(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (network::network_is_game_in_progress()) {
		return;
	}
	if (iParam1) {
		iVar0 = 1;
	}
	else {
		iVar0 = 0;
	}
	if (iParam2) {
		if (iParam1) {
			iVar0 = 4;
		}
		else {
			iVar0 = 3;
		}
	}
	iVar1 = func_4(iParam0, 0);
	if (iVar1 != 226) {
		func_209(iVar1, iVar0);
	}
	iVar1 = func_4(iParam0, 1);
	if (iVar1 != 226) {
		func_209(iVar1, iVar0);
	}
}

// Position - 0x30930
void func_209(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 != 226) {
		if (Global_69702) {
			iVar0 = Global_2433125.f_74[iParam0];
		}
		else {
			iVar0 = Global_101700.f_6220[iParam0];
		}
		if (iVar0 != iParam1 || gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2) {
				gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
				Global_32041[iParam0] = iParam1;
			}
			else if (Global_69702) {
				Global_2433125.f_74[iParam0] = iParam1;
			}
			else {
				Global_101700.f_6220[iParam0] = iParam1;
			}
			gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			func_211(iParam0);
			if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
				func_210(iParam0);
			}
		}
	}
}

// Position - 0x30A29
void func_210(int iParam0) {
	if (!gameplay::is_bit_set(Global_32512.f_228[iParam0 / 32], iParam0 % 23)) {
		gameplay::set_bit(&Global_32512.f_228[iParam0 / 32], iParam0 % 23);
		Global_32512[Global_32512.f_227] = iParam0;
		Global_32512.f_227++;
	}
}

// Position - 0x30A77
void func_211(int iParam0) {
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_232()) {
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	Var0 = {func_3(iParam0)};
	if (gameplay::is_bit_set(Var0.f_4, 2)) {
		func_218(iParam0, &Var0);
	}
	if (!object::_does_door_exist(Var0.f_5)) {
		if (cutscene::is_cutscene_playing()) {
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = gameplay::get_distance_between_coords(Var0, entity::get_entity_coords(player::player_ped_id(), 1), 1);
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] == 2 && fVar10 > 210f) {
		gameplay::clear_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
		Global_31587[iParam0] = 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) == 0) {
		if (gameplay::is_bit_set(Global_31814[iParam0 / 32], iParam0 % 32)) {
			if (fVar10 < 25f) {
				if (Global_91543.f_301 == 0) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						Global_91543.f_301 = interior::get_interior_from_entity(player::player_ped_id());
					}
				}
				iVar11 = Global_91543.f_301;
				iVar12 = interior::get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0) {
					gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
					Global_32041[iParam0] = 3;
					gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
				}
			}
			gameplay::clear_bit(&Global_31814[iParam0 / 32], iParam0 % 32);
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32)) {
		iVar9 = Global_32041[iParam0];
	}
	else if (gameplay::is_bit_set(Var0.f_4, 0)) {
		if (Global_101700.f_8044) {
			iVar9 = func_215(iParam0);
		}
		else {
			iVar9 = 0;
		}
		if (func_98(14)) {
			iVar9 = 0;
		}
	}
	else if (gameplay::is_bit_set(Var0.f_4, 1) &&
			 script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_solomon")) == 0) {
		if (func_212()) {
			iVar9 = 0;
		}
		else {
			iVar9 = 1;
		}
	}
	else {
		iVar9 = Global_101700.f_6220[iParam0];
	}
	if (Global_32268[iParam0] != iVar9) {
		bVar7 = true;
	}
	if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
		if (!gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) ||
			Global_31587[iParam0] == 0 && Global_32041[iParam0] != 2) {
			bVar7 = true;
		}
	}
	if (bVar7) {
		if (!Global_31568) {
		}
		else {
			if (!object::_does_door_exist(Var0.f_5)) {
				object::add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9) {
			case 1:
				if (gameplay::is_bit_set(Var0.f_4, 3)) {
					bVar13 = true;
				}
				else if (fVar10 > 3f || gameplay::absf(object::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f) {
					iVar14 = interior::get_interior_from_entity(player::player_ped_id());
					iVar15 = interior::get_interior_at_coords(Var0);
					if (iVar14 != iVar15 || iVar14 == 0) {
						bVar13 = true;
					}
				}
				if (bVar13) {
					if (Var0.f_6 != 0f) {
						object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
				}
				break;

			case 4:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 2:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 0:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 3:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
				bVar8 = true;
				break;

			case 5:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 6:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			default:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;
			}
		}
		if (bVar8) {
			gameplay::clear_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			Global_32268[iParam0] = iVar9;
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] != 2) {
		gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
		func_210(iParam0);
		if (Global_31587[iParam0] < 2) {
			Global_31587[iParam0]++;
		}
	}
}

// Position - 0x30F5A
bool func_212() {
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return false;
	}
	switch (func_213()) {
	case 0:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;

	case 1:
		if (Global_101700.f_8044.f_99.f_58[66]) {
			return true;
		}
		break;

	case 2:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x30FD9
int func_213() {
	func_214();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x30FF2
void func_214() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_47(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_46(player::player_ped_id());
			if (func_45(iVar0) && (!func_98(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_45(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x310EF
int func_215(int iParam0) {
	int iVar0;

	iVar0 = func_213();
	if (func_216(iParam0)) {
		return 1;
	}
	if (iParam0 == 49) {
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0) || gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_45(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
	}
	switch (iParam0) {
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
		if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[0], 0)) {
				return 0;
			}
		}
		if (func_45(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[0], iVar0)) {
				if (iParam0 != 40) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		break;

	case 47:
	case 48:
	case 49:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0)) {
				return 0;
			}
		}
		if (func_45(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
		break;

	case 50:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_45(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[6], iVar0)) {
				return 0;
			}
		}
		break;

	case 51:
	case 52:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[2], 0)) {
				return 0;
			}
			if (func_45(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[2], iVar0)) {
					return 0;
				}
			}
		}
		else if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
				return 0;
			}
			if (func_45(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[1], iVar0)) {
					return 0;
				}
			}
		}
		break;

	case 53:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[3], 0)) {
				return 0;
			}
		}
		if (func_45(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[3], iVar0)) {
				return 0;
			}
		}
		break;

	default: return 0;
	}
	return 1;
}

// Position - 0x31344
bool func_216(int iParam0) {
	int iVar0;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				iVar0 = entity::get_entity_model(func_217(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)));
				switch (iVar0) {
				case joaat("utillitruck"):
				case joaat("monster"): return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x313B0
var func_217(var uParam0) { return uParam0; }

// Position - 0x313BA
void func_218(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	if (!gameplay::is_bit_set(uParam1->f_4, 2)) {
		return;
	}
	iVar0 = func_221();
	iVar1 = func_220(iVar0);
	switch (iParam0) {
	case 133:
	case 134:
	case 201:
	case 202:
		if (func_219(iParam0)) {
			if (iVar1 < 19) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 19) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 199:
	case 200:
	case 203:
	case 204:
		if (func_219(iParam0)) {
			if (iVar1 < 18) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 18) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 141:
	case 142:
		if (func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0 &&
				!Global_101700.f_8044.f_99.f_58[4]) {
				if (iVar1 < 21) {
					if (iVar1 >= 7) {
						Global_101700.f_6220[iParam0] = 0;
						object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
					}
				}
				else {
					return;
				}
			}
			else if (!Global_101700.f_8044.f_99.f_58[4]) {
				Global_101700.f_6220[iParam0] = 0;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (Global_101700.f_8044.f_99.f_58[4]) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				 script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0) {
			if (iVar1 >= 21) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
		}
		break;

	case 145:
	case 146:
	case 143:
	case 144:
		if (func_219(iParam0)) {
			if (iVar1 < 20) {
				if (iVar1 >= 9) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 20) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 9) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 147:
	case 148:
		if (!func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 152:
	case 153:
	case 154:
	case 155:
	case 156:
	case 157:
		if (!func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) > 0) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 158:
	case 159:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_219(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 160:
	case 161:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("omega2")) == 0) {
			if (!func_219(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 70:
	case 71:
	case 72:
		if (!func_219(iParam0) &&
			script::_get_number_of_instances_of_script_with_name_hash(Global_82612[26 /*34*/].f_6) == 0) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else {
			return;
		}
		break;

	case 101:
	case 102:
	case 103:
	case 104:
		if (!func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[43 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 190:
	case 191:
		if (!func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 193:
		if (!func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[93 /*34*/].f_6) > 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 198:
		if (!func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 80:
		if (!func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[8 /*34*/].f_6) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(Global_82612[10 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 205:
	case 206:
		if (!func_219(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[47 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 207:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_219(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 208:
	case 209:
	case 211:
	case 210:
	case 212:
	case 213:
	case 214:
	case 215:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[48 /*34*/].f_6) == 0) {
			if (!func_219(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 99:
	case 100:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[39 /*34*/].f_6) == 0) {
			if (!func_219(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 216:
		if (!func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 217:
	case 218:
		if (!func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 219:
	case 220:
	case 221:
	case 222:
		if (func_219(iParam0)) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;
	}
}

// Position - 0x31D55
bool func_219(int iParam0) {
	struct<7> Var0;
	int iVar7;

	Var0 = {func_3(iParam0)};
	iVar7 = object::_0x160AA1B32F6139B8(Var0.f_5);
	return iVar7 == 1 || iVar7 == 4 || iVar7 == 2;
}

// Position - 0x31D89
int func_220(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x31D9C
var func_221() {
	int *iVar0;

	func_231(&iVar0, time::get_clock_seconds());
	func_230(&iVar0, time::get_clock_minutes());
	func_229(&iVar0, time::get_clock_hours());
	func_224(&iVar0, time::get_clock_day_of_month());
	func_223(&iVar0, time::get_clock_month());
	func_222(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x31DE2
void func_222(int *iParam0, int iParam1) {
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

// Position - 0x31E68
void func_223(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*iParam0 -= (*iParam0 & 15);
	*iParam0 |= iParam1;
}

// Position - 0x31E9B
void func_224(int *iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_228(*iParam0);
	iVar1 = func_226(*iParam0);
	if (iParam1 < 1 || iParam1 > func_225(iVar0, iVar1)) {
		return;
	}
	*iParam0 -= (*iParam0 & 496);
	*iParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x31EEC
int func_225(int iParam0, int iParam1) {
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

// Position - 0x31F8E
var func_226(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_227(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x31FB3
int func_227(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x31FCA
int func_228(int iParam0) { return iParam0 & 15; }

// Position - 0x31FD7
void func_229(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*iParam0 -= (*iParam0 & 15872);
	*iParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x32011
void func_230(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 1032192);
	*iParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x3204C
void func_231(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 66060288);
	*iParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x32088
int func_232() {
	if ((func_20() == -1 || func_20() == 999) && func_57() != 0) {
		return 1;
	}
	return 0;
}

// Position - 0x320B8
void func_233(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_234(*iParam0);
	if (iVar0 == -1) {
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

// Position - 0x3210F
int func_234(int iParam0) {
	int iVar0;

	if (iParam0 < 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x3214A
void func_235() {
	Global_2443134.f_662.f_28 = 1;
	Global_2443134.f_662.f_32 = 0;
	Global_2443134.f_662.f_31 = gameplay::get_hash_key(script::get_this_script_name());
	func_236(&Global_2443134.f_662.f_29);
}

// Position - 0x32184
void func_236(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0x32191
bool func_237() { return Global_2443134.f_662.f_5; }

// Position - 0x321A2
void func_238() {
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (func_822(1)) {
		if (func_5(player::player_id(), 0, 1)) {
			func_692();
			func_691();
		}
		else if (!func_690()) {
			func_691();
		}
		return;
	}
	controls::_disable_input_group(2);
	controls::_disable_input_group(0);
	func_666(&Local_136, &Local_136.f_106, -1);
	if (network::network_is_game_in_progress() && entity::does_entity_exist(Local_136.f_12) &&
		!ped::is_ped_injured(Local_136.f_12)) {
		network::set_entity_visible_in_cutscene(Local_136.f_12, 1, 1);
	}
	if (Local_136.f_106.f_31 > 0 && Local_136.f_106.f_31 < 6) {
		func_663(0, 1, 1);
		ui::_0x25F87B30C382FCA7();
	}
	func_659();
	bVar7 = false;
	switch (Local_136.f_106.f_31) {
	case 0:
		Local_740.f_19 = 0;
		Local_740.f_18 = 0;
		if (func_185(1)) {
			Local_136.f_106.f_19 = 1;
			audio::request_script_audio_bank("HUD_TATTOO_SHOP", 0, -1);
			if (func_657("TAT_MNU", Local_136, 1) && func_656(Local_136, 0) && func_653() && func_652()) {
				if (!Global_69702) {
					func_512(1);
				}
				Local_136.f_106.f_31 = 1;
			}
		}
		break;

	case 1:
		if (network::network_is_game_in_progress() && !func_509(60, -1, -1)) {
			func_508(60, 1, -1, 1);
		}
		gameplay::set_bit(&Global_69950, 9);
		func_29(1);
		func_500(&Local_136.f_106, 0);
		func_499(0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
		if (network::network_is_game_in_progress()) {
			ui::_0xC2D15BEF167E27BC();
			ui::set_multiplayer_bank_cash();
		}
		if (vehicle::is_any_vehicle_near_point(Local_136.f_173.f_31, 3f) && !Global_69702) {
			func_496(&Local_136);
		}
		if (!ped::is_ped_injured(Local_136.f_12)) {
			vVar4 = {entity::get_entity_coords(Local_136.f_12, 1)};
			Local_136.f_173.f_31.f_2 = vVar4.z;
		}
		if (!Global_69702) {
			ai::clear_ped_tasks(player::player_ped_id());
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (vVar0.x < Local_136.f_173.f_31 - 0.1f || vVar0.x > Local_136.f_173.f_31 + 0.1f ||
				vVar0.y < Local_136.f_173.f_31.f_1 - 0.1f || vVar0.y > Local_136.f_173.f_31.f_1 + 0.1f) {
				entity::set_entity_coords_no_offset(player::player_ped_id(), Local_136.f_173.f_31, 0, 0, 1);
				gameplay::clear_area_of_objects(Local_136.f_173.f_31, 1.1f, 0);
			}
			fVar3 = entity::get_entity_heading(player::player_ped_id());
			if (fVar3 < Local_136.f_173.f_34 - 2f || fVar3 > Local_136.f_173.f_34 + 2f) {
				entity::set_entity_heading(player::player_ped_id(), Local_136.f_173.f_34);
			}
			ped::force_ped_motion_state(player::player_ped_id(), -1871534317, 0, 0, 0);
			ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
			cam::_disable_first_person_cam_this_frame();
			Local_740.f_19 = 1;
		}
		if (entity::does_entity_exist(vLocal_669.z)) {
			entity::set_entity_visible(vLocal_669.z, 1, 0);
		}
		vLocal_762 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		if (entity::does_entity_exist(vLocal_669.z)) {
			if (!ped::is_ped_injured(vLocal_669.z)) {
				vLocal_762 = {entity::get_entity_coords(vLocal_669.z, 1)};
			}
		}
		if (iLocal_135 != 22) {
			if (entity::does_entity_exist(Local_136.f_12)) {
				if (!ped::is_ped_injured(Local_136.f_12)) {
					vVar0 = {entity::get_entity_coords(Local_136.f_12, 1)};
					if (vVar0.x < Local_136.f_12.f_2 - 0.1f || vVar0.x > Local_136.f_12.f_2 + 0.1f ||
						vVar0.y < Local_136.f_12.f_2.f_1 - 0.1f || vVar0.y > Local_136.f_12.f_2.f_1 + 0.1f) {
						ai::clear_ped_tasks(Local_136.f_12);
						entity::set_entity_coords_no_offset(Local_136.f_12, Local_136.f_12.f_2, 0, 0, 1);
						if (iLocal_135 == 22) {
							entity::set_entity_heading(Local_136.f_12, Local_136.f_12.f_5);
						}
						else {
							entity::set_entity_heading(Local_136.f_12, Local_136.f_12.f_5 - 180f);
						}
						ped::_0x2208438012482A1A(Local_136.f_12, 0, 0);
						ai::task_look_at_entity(Local_136.f_12, player::player_ped_id(), -1, 2048, 4);
					}
				}
			}
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		func_495(&Local_136, 1f);
		Local_136.f_106.f_5 = 0;
		Local_136.f_106.f_1 = 0;
		Local_136.f_106.f_3 = 0;
		Local_136.f_106.f_4 = 0;
		Local_136.f_106.f_10 = 0;
		Local_136.f_106.f_16 = 0;
		StringCopy(&Local_136.f_106.f_11, "", 16);
		iLocal_810 = 0;
		Local_136.f_106.f_17 = 0;
		if (iLocal_800) {
			Local_136.f_106.f_3 = Global_2443134.f_662.f_33[1];
			if (Global_2443134.f_662.f_40) {
				Local_136.f_106.f_5 = 1;
				Local_136.f_460 = Global_2443134.f_662.f_33[0];
				Local_136.f_106.f_1 = Global_2443134.f_662.f_33[2];
				Global_2443134.f_662.f_40 = 0;
				Local_136.f_106.f_17 = 1;
				iLocal_800 = 0;
			}
		}
		func_475(&bVar7);
		func_267(&bVar7);
		func_266();
		func_260();
		if (!Global_69702 && !ped::is_ped_injured(player::player_ped_id())) {
			ped::_0x5AAB586FFEC0FD96(player::player_ped_id());
			ped::_0xF79F9DEF0AADE61A(player::player_ped_id());
			func_259();
		}
		Local_136.f_106.f_31 = 2;
		break;

	case 2:
		func_267(&bVar7);
		func_260();
		func_257();
		if (!ped::is_ped_injured(player::player_ped_id())) {
			ped::set_ped_reset_flag(player::player_ped_id(), 200, 1);
		}
		break;

	case 6:
		if (!iLocal_761) {
			Global_91543.f_1456 = 0;
			if (!Global_69702 && !ped::is_ped_injured(player::player_ped_id())) {
				func_149();
				ped::_0x5AAB586FFEC0FD96(player::player_ped_id());
				ped::_0xF79F9DEF0AADE61A(player::player_ped_id());
			}
			Local_136.f_106.f_31 = 7;
		}
		else {
			func_267(&bVar7);
		}
		break;

	case 7:
		if (network::network_is_game_in_progress()) {
			ui::_0x95CF81BD06EE1887();
			ui::remove_multiplayer_bank_cash();
		}
		func_256(&Local_136.f_38);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		func_171(&Local_136.f_106, 1, 1, 1, 1);
		func_169(1);
		func_159();
		func_156(1, Local_136);
		func_151(Local_136, 0);
		audio::release_script_audio_bank();
		func_150();
		Local_740.f_19 = 0;
		if (Global_2590768) {
			if (Global_69702) {
				func_254(32, func_255(1, 1));
			}
		}
		if (Global_69702) {
			iVar8 = func_65(player::player_ped_id(), 11);
			func_246(player::player_ped_id(), 11, iVar8, 0, 0);
			if (Local_136.f_527 != -1) {
				func_244(Local_136.f_527, 1, -1);
			}
		}
		func_33(player::player_ped_id());
		func_28();
		func_29(0);
		gameplay::clear_bit(&Global_69950, 9);
		Local_136.f_106.f_19 = 0;
		Local_136.f_11 = 3;
		break;

	case 8:
		if (network::network_is_game_in_progress()) {
			ui::_0x95CF81BD06EE1887();
			ui::remove_multiplayer_bank_cash();
		}
		func_256(&Local_136.f_38);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		func_170(0, 1, 1, 0);
		func_171(&Local_136.f_106, 1, 1, 1, 1);
		Global_91543.f_1456 = 0;
		if (!Global_69702 && !ped::is_ped_injured(player::player_ped_id())) {
			func_149();
			ped::_0x5AAB586FFEC0FD96(player::player_ped_id());
			ped::_0xF79F9DEF0AADE61A(player::player_ped_id());
		}
		func_169(1);
		func_159();
		func_156(1, Local_136);
		func_151(Local_136, 0);
		audio::release_script_audio_bank();
		Local_740.f_19 = 0;
		func_150();
		if (Global_69702) {
			iVar9 = func_65(player::player_ped_id(), 11);
			func_246(player::player_ped_id(), 11, iVar9, 0, 0);
			if (Local_136.f_527 != -1) {
				func_244(Local_136.f_527, 1, -1);
			}
		}
		func_33(player::player_ped_id());
		func_29(0);
		func_28();
		if (Global_2590768) {
			if (Global_69702) {
				func_254(32, func_255(1, 1));
			}
		}
		gameplay::clear_bit(&Global_69950, 9);
		Local_136.f_106.f_19 = 0;
		Local_136.f_11 = 3;
		break;
	}
	if (iLocal_802) {
		iVar10 = player::player_ped_id();
		if (entity::does_entity_exist(vLocal_669.z) && !ped::is_ped_injured(vLocal_669.z)) {
			iVar10 = vLocal_669.z;
		}
		func_512(0);
		if (network::network_is_game_in_progress()) {
			func_242(iVar10, Local_136.f_460, 0, -1, 0);
		}
		else {
			func_33(iVar10);
		}
		func_239(iVar10, Local_136.f_460);
		iLocal_802 = 0;
	}
	if (bVar7) {
		iLocal_802 = 1;
	}
	func_27(&Local_740, 1);
}

// Position - 0x3295D
void func_239(int iParam0, int iParam1) {
	int iVar0;
	struct<6> Var1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 != -1) {
			iVar0 = func_148(iParam0);
			if (func_35(&Var1, iParam1, iVar0, iParam0, -1)) {
				if (!func_240(iParam1)) {
					ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					func_49(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

// Position - 0x329B3
bool func_240(int iParam0) {
	if (Global_69702) {
		return func_53(iParam0, -1);
	}
	else {
		return func_241(func_213(), iParam0);
	}
	return false;
}

// Position - 0x329DD
bool func_241(int iParam0, int iParam1) {
	struct<11> Var0;

	if (func_45(iParam0)) {
		if (func_35(&Var0, iParam1, func_43(iParam0), 0, -1)) {
			return gameplay::is_bit_set(Global_101700.f_2095.f_493[iParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
		}
	}
	return false;
}

// Position - 0x32A23
void func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	struct<12> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam3 == -1) {
		iParam3 = func_18();
	}
	ped::_clear_ped_facial_decorations(iParam0);
	iVar0 = entity::get_entity_model(iParam0);
	iVar14 = func_148(iParam0);
	func_35(&Var1, iParam1, iVar14, iParam0, -1);
	iVar15 = func_52(iVar0, &Var1, Var1.f_8);
	iVar17 = 0;
	iVar18 = func_136(iParam0);
	iVar19 = func_135(iParam0);
	iVar16 = 0;
	while (iVar16 < 127) {
		if (func_35(&Var1, iVar16, iVar14, iParam0, -1)) {
			if (func_53(Var1.f_11, iParam3)) {
				iVar20 = func_52(iVar0, &Var1, Var1.f_8);
				iVar17 = 0;
				if (iVar15 != -1 && iVar20 != -1) {
					if (Var1.f_11 != iParam1) {
						if (func_243(iVar20, iVar15)) {
							iVar17 = 1;
							if (iParam2) {
								func_244(Var1.f_11, 0, -1);
							}
						}
					}
				}
				if (!iVar17 && func_50(iParam0, &Var1, Var1.f_4, Var1.f_8, 0, iVar18, iParam4, iVar19)) {
					ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
		iVar16++;
	}
	if (network::network_is_game_in_progress()) {
		if (func_53(123, -1)) {
			if (ped::_get_tattoo_zone(-1719270477, -1824026490) != 7) {
				ped::_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar38 = dlc1::_get_num_decorations(iVar14);
		iVar37 = 0;
		while (iVar37 < iVar38) {
			if (dlc1::_0xFF56381874F82086(iVar14, iVar37, &Var21)) {
				if (!dlc1::_is_dlc_data_empty(Var21)) {
					iVar36 = 129 + iVar37;
					if (func_53(iVar36, iParam3)) {
						iVar39 = func_52(iVar0, &Var21.f_7, Var21.f_6);
						iVar17 = 0;
						if (iVar15 != -1 && iVar39 != -1) {
							if (iVar36 != iParam1) {
								if (Var21.f_6 != 0) {
									if (func_243(iVar39, iVar15)) {
										iVar17 = 1;
										if (iParam2) {
											func_244(iVar36, 0, -1);
										}
									}
								}
							}
						}
						if (!iVar17 && func_50(iParam0, &Var21.f_7, Var21.f_2, Var21.f_6, 0, iVar18, iParam4, iVar19)) {
							ped::_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_49(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar37++;
		}
	}
}

// Position - 0x32C27
bool func_243(int iParam0, int iParam1) {
	if (iParam0 == iParam1) {
		return true;
	}
	if (iParam0 == -1 || iParam1 == -1) {
		return false;
	}
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 2:
		switch (iParam1) {
		case 0:
		case 1:
		case 3:
		case 4:
		case 5:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 3:
		switch (iParam1) {
		case 0:
		case 1:
		case 2:
		case 5:
		case 11: return true;

		default:
		}
		break;

	case 4:
		switch (iParam1) {
		case 0:
		case 1:
		case 2:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 5:
		switch (iParam1) {
		case 0:
		case 1:
		case 2:
		case 3: return true;

		default:
		}
		break;

	case 6:
		switch (iParam1) {
		case 0:
		case 1:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 7:
		switch (iParam1) {
		case 0:
		case 1:
		case 6:
		case 8:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 8:
		switch (iParam1) {
		case 0:
		case 1:
		case 6:
		case 7:
		case 10:
		case 11:
		case 27: return true;

		default:
		}
		break;

	case 9:
		switch (iParam1) {
		case 0:
		case 1:
		case 6: return true;

		default:
		}
		break;

	case 10:
		switch (iParam1) {
		case 0:
		case 6:
		case 8:
		case 27: return true;

		default:
		}
		break;

	case 11:
		switch (iParam1) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
		case 8:
		case 27: return true;

		default:
		}
		break;

	case 12:
		switch (iParam1) {
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 13:
		switch (iParam1) {
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 14:
		switch (iParam1) {
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 15:
		switch (iParam1) {
		case 12:
		case 13:
		case 14:
		case 17:
		case 23: return true;

		default:
		}
		break;

	case 16:
		switch (iParam1) {
		case 12:
		case 13:
		case 14:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 17:
		switch (iParam1) {
		case 12:
		case 13:
		case 14:
		case 15: return true;

		default:
		}
		break;

	case 18:
		switch (iParam1) {
		case 12:
		case 13:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 19:
		switch (iParam1) {
		case 12:
		case 13:
		case 18:
		case 19:
		case 20:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 20:
		switch (iParam1) {
		case 12:
		case 13:
		case 18:
		case 19:
		case 20:
		case 22:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 21:
		switch (iParam1) {
		case 12:
		case 13:
		case 18:
		case 21: return true;

		default:
		}
		break;

	case 22:
		switch (iParam1) {
		case 12:
		case 18:
		case 20:
		case 22:
		case 27: return true;

		default:
		}
		break;

	case 23:
		switch (iParam1) {
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 18:
		case 19:
		case 20:
		case 23:
		case 27: return true;

		default:
		}
		break;

	case 24:
		switch (iParam1) {
		case 24: return true;

		default:
		}
		break;

	case 25:
		switch (iParam1) {
		case 25: return true;

		default:
		}
		break;

	case 26:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36: return true;

		default:
		}
		break;

	case 27:
		switch (iParam1) {
		case 27:
		case 26:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 0:
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 8:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 16:
		case 18:
		case 19:
		case 20:
		case 22:
		case 23: return true;

		default:
		}
		break;

	case 28:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32: return true;

		default:
		}
		break;

	case 29:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 29: return true;

		default:
		}
		break;

	case 30:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 30:
		case 31:
		case 32: return true;

		default:
		}
		break;

	case 31:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 30:
		case 31: return true;

		default:
		}
		break;

	case 32:
		switch (iParam1) {
		case 26:
		case 27:
		case 28:
		case 30:
		case 32: return true;

		default:
		}
		break;

	case 33:
		switch (iParam1) {
		case 26:
		case 27:
		case 33:
		case 34:
		case 35:
		case 36: return true;

		default:
		}
		break;

	case 34:
		switch (iParam1) {
		case 26:
		case 27:
		case 33:
		case 34: return true;

		default:
		}
		break;

	case 35:
		switch (iParam1) {
		case 26:
		case 27:
		case 33:
		case 35: return true;

		default:
		}
		break;

	case 36:
		switch (iParam1) {
		case 26:
		case 27:
		case 33:
		case 36: return true;

		default:
		}
		break;

	case 37:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44: return true;

		default:
		}
		break;

	case 38:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 40:
		case 42:
		case 44:
		case 47:
		case 48:
		case 49:
		case 50: return true;

		default:
		}
		break;

	case 39:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 47:
		case 54:
		case 55:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53: return true;

		default:
		}
		break;

	case 40:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 44: return true;

		default:
		}
		break;

	case 41:
		switch (iParam1) {
		case 39:
		case 37:
		case 40:
		case 41: return true;

		default:
		}
		break;

	case 42:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 42:
		case 43:
		case 44: return true;

		default:
		}
		break;

	case 43:
		switch (iParam1) {
		case 39:
		case 37:
		case 42:
		case 43: return true;

		default:
		}
		break;

	case 44:
		switch (iParam1) {
		case 37:
		case 38:
		case 39:
		case 40:
		case 42:
		case 44: return true;

		default:
		}
		break;

	case 45:
		switch (iParam1) {
		case 45: return true;

		default:
		}
		break;

	case 46:
		switch (iParam1) {
		case 46: return true;

		default:
		}
		break;

	case 47:
		switch (iParam1) {
		case 38:
		case 39:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55: return true;

		default:
		}
		break;

	case 48:
		switch (iParam1) {
		case 38:
		case 39:
		case 47:
		case 48:
		case 49:
		case 50:
		case 54:
		case 55: return true;

		default:
		}
		break;

	case 49:
		switch (iParam1) {
		case 38:
		case 39:
		case 47:
		case 48:
		case 49:
		case 54: return true;

		default:
		}
		break;

	case 50:
		switch (iParam1) {
		case 38:
		case 39:
		case 47:
		case 48:
		case 50:
		case 55: return true;

		default:
		}
		break;

	case 51:
		switch (iParam1) {
		case 39:
		case 47:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55: return true;

		default:
		}
		break;

	case 52:
		switch (iParam1) {
		case 39:
		case 47:
		case 51:
		case 52:
		case 54: return true;

		default:
		}
		break;

	case 53:
		switch (iParam1) {
		case 39:
		case 47:
		case 51:
		case 53:
		case 55: return true;

		default:
		}
		break;

	case 54:
		switch (iParam1) {
		case 39:
		case 47:
		case 51:
		case 52:
		case 48:
		case 49: return true;

		default:
		}
		break;

	case 55:
		switch (iParam1) {
		case 39:
		case 47:
		case 51:
		case 53:
		case 48:
		case 50: return true;

		default:
		}
		break;

	case 56:
		switch (iParam1) {
		case 56: return true;

		default:
		}
		break;

	case 57:
		switch (iParam1) {
		case 57: return true;

		default:
		}
		break;

	case 58:
		switch (iParam1) {
		case 58: return true;

		default:
		}
		break;

	case 59:
		switch (iParam1) {
		case 59:
		case 61:
		case 63: return true;

		default:
		}
		break;

	case 60:
		switch (iParam1) {
		case 60: return true;

		default:
		}
		break;

	case 61:
		switch (iParam1) {
		case 59:
		case 61:
		case 62: return true;

		default:
		}
		break;

	case 62:
		switch (iParam1) {
		case 61:
		case 62: return true;

		default:
		}
		break;

	case 63:
		switch (iParam1) {
		case 59:
		case 63:
		case 64: return true;

		default:
		}
		break;

	case 64:
		switch (iParam1) {
		case 63:
		case 64: return true;

		default:
		}
		break;

	case 65:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80: return true;

		default:
		}
		break;

	case 66:
		switch (iParam1) {
		case 65:
		case 66:
		case 68:
		case 69:
		case 71:
		case 72:
		case 73:
		case 74:
		case 76:
		case 77:
		case 78:
		case 79: return true;

		default:
		}
		break;

	case 67:
		switch (iParam1) {
		case 65:
		case 67:
		case 68:
		case 70:
		case 71:
		case 72:
		case 73:
		case 75:
		case 76:
		case 77:
		case 79:
		case 80: return true;

		default:
		}
		break;

	case 68:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 78: return true;

		default:
		}
		break;

	case 69:
		switch (iParam1) {
		case 65:
		case 66:
		case 68:
		case 69:
		case 71:
		case 72:
		case 78: return true;

		default:
		}
		break;

	case 70:
		switch (iParam1) {
		case 65:
		case 67:
		case 68:
		case 70:
		case 71:
		case 72: return true;

		default:
		}
		break;

	case 71:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71: return true;

		default:
		}
		break;

	case 72:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 72: return true;

		default:
		}
		break;

	case 73:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80: return true;

		default:
		}
		break;

	case 74:
		switch (iParam1) {
		case 65:
		case 66:
		case 73:
		case 74:
		case 76:
		case 77:
		case 78:
		case 79: return true;

		default:
		}
		break;

	case 75:
		switch (iParam1) {
		case 65:
		case 67:
		case 73:
		case 75:
		case 76:
		case 77:
		case 79:
		case 80: return true;

		default:
		}
		break;

	case 76:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 80: return true;

		default:
		}
		break;

	case 77:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 73:
		case 74:
		case 75:
		case 77:
		case 80: return true;

		default:
		}
		break;

	case 78:
		switch (iParam1) {
		case 65:
		case 66:
		case 68:
		case 69:
		case 73:
		case 74:
		case 78: return true;

		default:
		}
		break;

	case 79:
		switch (iParam1) {
		case 65:
		case 66:
		case 67:
		case 73:
		case 74:
		case 75:
		case 79: return true;

		default:
		}
		break;

	case 80:
		switch (iParam1) {
		case 65:
		case 67:
		case 73:
		case 75:
		case 76:
		case 77:
		case 80: return true;

		default:
		}
		break;

	case 81:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96: return true;

		default:
		}
		break;

	case 82:
		switch (iParam1) {
		case 81:
		case 82:
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
		case 92:
		case 93:
		case 94:
		case 95: return true;

		default:
		}
		break;

	case 83:
		switch (iParam1) {
		case 81:
		case 83:
		case 84:
		case 86:
		case 87:
		case 88:
		case 89:
		case 91:
		case 92:
		case 93:
		case 95:
		case 96: return true;

		default:
		}
		break;

	case 84:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 94: return true;

		default:
		}
		break;

	case 85:
		switch (iParam1) {
		case 81:
		case 82:
		case 84:
		case 85:
		case 87:
		case 88:
		case 94: return true;

		default:
		}
		break;

	case 86:
		switch (iParam1) {
		case 81:
		case 83:
		case 84:
		case 86:
		case 87:
		case 88: return true;

		default:
		}
		break;

	case 87:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87: return true;

		default:
		}
		break;

	case 88:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 88: return true;

		default:
		}
		break;

	case 89:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96: return true;

		default:
		}
		break;

	case 90:
		switch (iParam1) {
		case 81:
		case 82:
		case 89:
		case 90:
		case 92:
		case 93:
		case 94:
		case 95: return true;

		default:
		}
		break;

	case 91:
		switch (iParam1) {
		case 81:
		case 83:
		case 89:
		case 91:
		case 92:
		case 93:
		case 95:
		case 96: return true;

		default:
		}
		break;

	case 92:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 89:
		case 90:
		case 91:
		case 92:
		case 96: return true;

		default:
		}
		break;

	case 93:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 89:
		case 90:
		case 91:
		case 93:
		case 96: return true;

		default:
		}
		break;

	case 94:
		switch (iParam1) {
		case 81:
		case 82:
		case 84:
		case 85:
		case 89:
		case 90:
		case 94: return true;

		default:
		}
		break;

	case 95:
		switch (iParam1) {
		case 81:
		case 82:
		case 83:
		case 89:
		case 90:
		case 91:
		case 95: return true;

		default:
		}
		break;

	case 96:
		switch (iParam1) {
		case 81:
		case 83:
		case 89:
		case 91:
		case 92:
		case 93:
		case 96: return true;

		default:
		}
		break;

	case 97:
		switch (iParam1) {
		case 97: return true;

		default:
		}
		break;

	case 98:
		switch (iParam1) {
		case 98: return true;

		default:
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x34455
void func_244(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		if (!func_53(iParam0, iParam2)) {
			func_245(iParam0, 1, iParam2);
		}
	}
	else if (func_53(iParam0, iParam2)) {
		func_245(iParam0, 0, iParam2);
	}
}

// Position - 0x3448E
void func_245(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_55(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1) {
		if (iParam1) {
			gameplay::set_bit(&iVar0, func_54(iVar1));
		}
		else {
			gameplay::clear_bit(&iVar0, func_54(iVar1));
		}
		func_204(func_56(iParam0), iVar0, iParam2, 1, 0);
	}
}

// Position - 0x344DD
void func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ped::is_ped_injured(iParam0)) {
		if (func_59(iParam0)) {
			return;
		}
		if (iParam1 == 11 || iParam1 == 8) {
			iVar0 = entity::get_entity_model(iParam0);
			if (iParam1 == 11) {
				if (func_253(iVar0, iParam2)) {
					iParam1 = 8;
					iParam2 = func_65(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8) {
				iVar1 = func_65(iParam0, 11);
				if (!func_253(iVar0, iVar1)) {
					return;
				}
			}
			func_252(gameplay::get_hash_key("torsoDecal"), iParam0);
			if (iParam1 == 11) {
				if (!func_248(iVar0, iParam2, 13) && !func_248(iVar0, iParam2, 14) && !func_248(iVar0, iParam2, 15) &&
					!func_248(iVar0, iParam2, 16) && !func_248(iVar0, iParam2, 71) && !func_248(iVar0, iParam2, 72)) {
					func_252(gameplay::get_hash_key("crewLogo"), iParam0);
				}
			}
			iVar2 = func_144(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1) {
				if (iParam3 == 1) {
					func_247(iParam0, iVar2, 0);
				}
				else {
					func_244(iVar2, 1, Global_69521);
				}
			}
		}
	}
}

// Position - 0x3460B
void func_247(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<6> Var1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 != -1) {
			iVar0 = func_148(iParam0);
			if (!func_53(iParam1, -1) || iParam2) {
				if (func_35(&Var1, iParam1, iVar0, iParam0, -1)) {
					ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					func_49(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

// Position - 0x3466A
int func_248(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_253(iParam0, iParam1)) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237) {
				iVar1 = func_60(iParam0, iParam1, 11, 3);
				iVar0 = func_251(iVar1);
			}
			if (iVar1 != -1 && func_250(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && func_249(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar1, -497440475, 0)) {
				return 0;
			}
			if (iVar1 == -1198378836 || iVar1 == 968798999 || iVar1 == 1283250323) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 124 && iParam1 <= 139 ||
				iVar0 == 0 || iVar0 == 1 || iVar0 == 8) {
				if (iParam2 == 15) {
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14) {
					if (func_144(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar0 == 5) {
				if (iParam2 == 16 || iParam2 == 71 || iParam2 == 72) {
					return 1;
				}
			}
			else if (iParam1 >= 140 && iParam1 <= 155 || iVar0 == 9) {
				if (iParam2 == 13 || iParam2 == 15) {
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256) {
				iVar3 = func_60(iParam0, iParam1, 11, 4);
				iVar2 = func_251(iVar3);
			}
			if (iVar3 != -1 && func_250(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && func_249(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar3, -497440475, 0)) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iVar2 == 0) {
				if (iParam2 == 13 || iParam2 == 15) {
					if (func_144(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 32 && iParam1 <= 47 || iVar2 == 2) {
				if (iParam2 == 13 || iParam2 == 16) {
					if (func_144(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 64 && iParam1 <= 79 || iVar2 == 4) {
				if (iParam2 == 13) {
					return 1;
				}
				if (iParam2 == 15) {
					if (iVar2 != 4 || !dlc1::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0)) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar2 == 5) {
				if (iParam2 == 13) {
					return 1;
				}
			}
			else if (iParam1 >= 144 && iParam1 <= 159 || iVar2 == 9) {
				if (iParam2 == 14) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x349DB
int func_249(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1834446747, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -939525357, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1469891622, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -502321359, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -792359778, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1922736331, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1685128312, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -296738547, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x34B1F
int func_250(int iParam0, int iParam1) {
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

// Position - 0x34C63
int func_251(int iParam0) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0)) {
		iVar0 = 15;
	}
	return iVar0;
}

// Position - 0x34DC5
void func_252(int iParam0, int iParam1) {
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;

	if (!ped::is_ped_injured(iParam1)) {
		iVar13 = func_148(iParam1);
		if (iParam0 != 0) {
			if (iVar13 == 3 || iVar13 == 4) {
				if (iParam0 == 1019352240) {
					func_244(13, 0, Global_69521);
					func_244(14, 0, Global_69521);
					func_244(15, 0, Global_69521);
					func_244(16, 0, Global_69521);
					func_244(71, 0, Global_69521);
					func_244(72, 0, Global_69521);
					return;
				}
				else if (iParam0 == 277073536) {
					if (iVar13 == 3) {
						func_244(73, 0, Global_69521);
						func_244(74, 0, Global_69521);
						func_244(75, 0, Global_69521);
						func_244(76, 0, Global_69521);
						func_244(77, 0, Global_69521);
						func_244(78, 0, Global_69521);
						func_244(79, 0, Global_69521);
						func_244(80, 0, Global_69521);
						func_244(81, 0, Global_69521);
						func_244(82, 0, Global_69521);
						func_244(83, 0, Global_69521);
						func_244(84, 0, Global_69521);
						func_244(85, 0, Global_69521);
						func_244(86, 0, Global_69521);
						func_244(90, 0, Global_69521);
						func_244(91, 0, Global_69521);
						func_244(124, 0, Global_69521);
						func_244(125, 0, Global_69521);
						func_244(87, 0, Global_69521);
						func_244(88, 0, Global_69521);
						func_244(89, 0, Global_69521);
						iVar15 = dlc1::_get_num_decorations(3);
						iVar14 = 0;
						while (iVar14 < iVar15) {
							if (dlc1::_0xFF56381874F82086(3, iVar14, &Var16)) {
								if (Var16.f_6 == 277073536) {
									func_244(129 + iVar14, 0, Global_69521);
								}
							}
							iVar14++;
						}
					}
					else {
						func_244(73, 0, Global_69521);
						func_244(74, 0, Global_69521);
						func_244(75, 0, Global_69521);
						func_244(76, 0, Global_69521);
						func_244(77, 0, Global_69521);
						func_244(78, 0, Global_69521);
						func_244(79, 0, Global_69521);
						func_244(80, 0, Global_69521);
						func_244(81, 0, Global_69521);
						func_244(82, 0, Global_69521);
						func_244(83, 0, Global_69521);
						func_244(84, 0, Global_69521);
						func_244(85, 0, Global_69521);
						func_244(92, 0, Global_69521);
						func_244(87, 0, Global_69521);
						func_244(88, 0, Global_69521);
						func_244(89, 0, Global_69521);
						iVar32 = dlc1::_get_num_decorations(4);
						iVar31 = 0;
						while (iVar31 < iVar32) {
							if (dlc1::_0xFF56381874F82086(4, iVar31, &Var33)) {
								if (Var33.f_6 == 277073536) {
									func_244(129 + iVar31, 0, Global_69521);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355) {
					if (iVar13 == 3) {
						func_244(93, 0, Global_69521);
						func_244(94, 0, Global_69521);
						func_244(95, 0, Global_69521);
						func_244(96, 0, Global_69521);
						func_244(97, 0, Global_69521);
						func_244(98, 0, Global_69521);
						func_244(99, 0, Global_69521);
						func_244(100, 0, Global_69521);
						func_244(101, 0, Global_69521);
						func_244(102, 0, Global_69521);
						func_244(103, 0, Global_69521);
						func_244(104, 0, Global_69521);
						func_244(105, 0, Global_69521);
						func_244(106, 0, Global_69521);
						func_244(107, 0, Global_69521);
						func_244(108, 0, Global_69521);
						func_244(109, 0, Global_69521);
						func_244(110, 0, Global_69521);
						func_244(111, 0, Global_69521);
						func_244(112, 0, Global_69521);
						func_244(113, 0, Global_69521);
						func_244(114, 0, Global_69521);
						func_244(115, 0, Global_69521);
						func_244(116, 0, Global_69521);
						func_244(117, 0, Global_69521);
						func_244(123, 0, Global_69521);
						iVar49 = dlc1::_get_num_decorations(3);
						iVar48 = 0;
						while (iVar48 < iVar49) {
							if (dlc1::_0xFF56381874F82086(3, iVar48, &Var50)) {
								if (Var50.f_6 == 2140335355) {
									func_244(129 + iVar48, 0, Global_69521);
								}
							}
							iVar48++;
						}
					}
					else {
						func_244(93, 0, Global_69521);
						func_244(94, 0, Global_69521);
						func_244(95, 0, Global_69521);
						func_244(96, 0, Global_69521);
						func_244(97, 0, Global_69521);
						func_244(98, 0, Global_69521);
						func_244(99, 0, Global_69521);
						func_244(100, 0, Global_69521);
						func_244(101, 0, Global_69521);
						func_244(102, 0, Global_69521);
						func_244(103, 0, Global_69521);
						func_244(104, 0, Global_69521);
						func_244(105, 0, Global_69521);
						func_244(106, 0, Global_69521);
						func_244(107, 0, Global_69521);
						func_244(108, 0, Global_69521);
						func_244(109, 0, Global_69521);
						func_244(110, 0, Global_69521);
						func_244(111, 0, Global_69521);
						func_244(112, 0, Global_69521);
						func_244(113, 0, Global_69521);
						func_244(114, 0, Global_69521);
						func_244(115, 0, Global_69521);
						func_244(116, 0, Global_69521);
						func_244(117, 0, Global_69521);
						func_244(118, 0, Global_69521);
						func_244(119, 0, Global_69521);
						func_244(120, 0, Global_69521);
						func_244(121, 0, Global_69521);
						func_244(122, 0, Global_69521);
						func_244(123, 0, Global_69521);
						iVar66 = dlc1::_get_num_decorations(4);
						iVar65 = 0;
						while (iVar65 < iVar66) {
							if (dlc1::_0xFF56381874F82086(4, iVar65, &Var67)) {
								if (Var67.f_6 == 2140335355) {
									func_244(129 + iVar65, 0, Global_69521);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127) {
				if (func_35(&Var0, iVar82, iVar13, iParam1, -1)) {
					if (Var0.f_8 == iParam0) {
						func_244(Var0.f_11, 0, Global_69521);
					}
				}
				iVar82++;
			}
		}
	}
}

// Position - 0x353C2
bool func_253(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 48 && iParam1 < 64 || iParam1 >= 64 && iParam1 < 80 || iParam1 >= 96 && iParam1 < 108 ||
			iParam1 >= 108 && iParam1 < 124 || iParam1 >= 156 && iParam1 < 172 ||
			iParam1 >= 237 && dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam1, 11, 3), -1393156190, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 96 && iParam1 < 112 || iParam1 >= 112 && iParam1 < 128 ||
			iParam1 >= 128 && iParam1 < 144 || iParam1 >= 160 && iParam1 < 176 ||
			iParam1 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(func_60(iParam0, iParam1, 11, 4), -1393156190, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x35503
void func_254(int iParam0, int iParam1) {
	vector3 vVar0;

	vVar0.x = 2;
	vVar0.y = player::player_id();
	vVar0.z = iParam0;
	if (iParam1 != 0) {
		script::trigger_script_event(1, &vVar0, 3, iParam1);
	}
}

// Position - 0x35531
int func_255(int iParam0, int iParam1) {
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32) {
		iVar2 = player::int_to_playerindex(iVar1);
		if (func_5(iVar2, 0, 0)) {
			if (iVar2 != player::player_id() || iParam0) {
				if (iParam1) {
					gameplay::set_bit(&uVar0, iVar1);
				}
				else if (!func_162(iVar2, 0)) {
					gameplay::set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

// Position - 0x35596
void func_256(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (cam::does_cam_exist((*uParam0)[iVar0 /*12*/])) {
			cam::set_cam_active((*uParam0)[iVar0 /*12*/], 0);
		}
		iVar0++;
	}
}

// Position - 0x355CC
void func_257() {
	int iVar0;
	int iVar1;
	int *iVar2;
	struct<9> Var3;
	int iVar16;
	int iVar17;
	char *sVar18;
	char *sVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<4> Var23;
	float fVar27;
	struct<4> Var28;
	char cVar32[16];
	int iVar36;
	struct<6> Var37;

	if (!network::network_is_game_in_progress()) {
		return;
	}
	iVar0 = 0;
	iVar1 = 7;
	iVar2 = -1;
	func_258(Local_136.f_106.f_3, &iVar1, &iVar2, 0, 0);
	if (iVar1 == 2 || iVar1 == 3) {
		iVar16 = func_148(player::player_ped_id());
		if (func_35(&Var3, Local_136.f_460, iVar16, player::player_ped_id(), -1)) {
			iVar17 = func_52(entity::get_entity_model(player::player_ped_id()), &Var3, Var3.f_8);
			if (iVar17 == 5 || iVar17 == 9 || iVar17 == 3) {
				iVar0 = 1;
			}
			if (iVar17 == 17 || iVar17 == 21 || iVar17 == 15) {
				iVar0 = 2;
			}
		}
	}
	if (iVar0 != iLocal_838) {
		if (!streaming::does_anim_dict_exist(sLocal_783)) {
			return;
		}
		streaming::request_anim_dict(sLocal_783);
		if (!streaming::has_anim_dict_loaded(sLocal_783)) {
			return;
		}
		sVar18 = "";
		sVar19 = "";
		switch (iVar0) {
		case 0:
			switch (iLocal_838) {
			case 1: sVar18 = "LEFT_ARM_OUTRO"; break;

			case 2: sVar18 = "RIGHT_ARM_OUTRO"; break;
			}
			sVar19 = "";
			break;

		case 1:
			switch (iLocal_838) {
			case 0: sVar18 = "LEFT_ARM_INTRO"; break;

			case 2: sVar18 = "LEFT_ARM_INTRO"; break;
			}
			sVar19 = "LEFT_ARM_BASE";
			break;

		case 2:
			switch (iLocal_838) {
			case 0: sVar18 = "RIGHT_ARM_INTRO"; break;

			case 1: sVar18 = "RIGHT_ARM_INTRO"; break;
			}
			sVar19 = "RIGHT_ARM_BASE";
			break;
		}
		if (!gameplay::is_string_null_or_empty(sVar18)) {
			if (!gameplay::are_strings_equal(&Local_839, sVar18)) {
				fVar20 = 4f;
				fVar21 = -2f;
				ai::task_play_anim(vLocal_669.z, sLocal_783, sVar18, fVar20, fVar21, -1, 2, 0, 0, 0, 0);
				StringCopy(&Local_839, sVar18, 16);
			}
			else if (entity::is_entity_playing_anim(vLocal_669.z, sLocal_783, sVar18, 3)) {
				fVar22 = entity::get_entity_anim_current_time(vLocal_669.z, sLocal_783, sVar18);
				if (fVar22 >= 0.95f) {
					if (!gameplay::is_string_null_or_empty(sVar19)) {
						ai::task_play_anim(vLocal_669.z, sLocal_783, sVar19, 8f, -8f, -1, 1, 0, 0, 0, 0);
					}
					else {
						ai::clear_ped_tasks(vLocal_669.z);
						streaming::remove_anim_dict(sLocal_783);
					}
					StringCopy(&Local_839, sVar19, 16);
					iLocal_838 = iVar0;
				}
			}
		}
	}
	else if (!gameplay::is_string_null_or_empty(&Local_839)) {
		if (entity::is_entity_playing_anim(vLocal_669.z, sLocal_783, &Local_839, 3)) {
			Var23 = {Local_839};
			fVar27 = entity::get_entity_anim_current_time(vLocal_669.z, sLocal_783, &Var23);
			iVar36 = ui::get_length_of_literal_string(&Var23) - ui::get_length_of_literal_string("_INTRO");
			StringCopy(&cVar32, ui::_get_text_substring(&Var23, iVar36, ui::get_length_of_literal_string(&Var23)), 16);
			if (gameplay::are_strings_equal(&cVar32, "_INTRO")) {
				StringCopy(&Var28, ui::_get_text_substring(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f && iLocal_838 == 0) {
					if (iVar1 == 2 || gameplay::are_strings_equal(&Var28, "LEFT_ARM")) {
						iLocal_838 = 1;
					}
					else if (iVar1 == 3 || gameplay::are_strings_equal(&Var28, "RIGHT_ARM")) {
						iLocal_838 = 2;
					}
				}
			}
			else if (gameplay::are_strings_equal(&cVar32, "_OUTRO")) {
				StringCopy(&Var28, ui::_get_text_substring(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f && iLocal_838 != 0) {
					iLocal_838 = 0;
				}
			}
			else {
				iVar36 = ui::get_length_of_literal_string(&Var23) - ui::get_length_of_literal_string("_BASE");
				StringCopy(&cVar32, ui::_get_text_substring(&Var23, iVar36, ui::get_length_of_literal_string(&Var23)),
						   16);
				if (!gameplay::are_strings_equal(&cVar32, "_BASE")) {
					iVar36 = ui::get_length_of_literal_string(&Var23) - ui::get_length_of_literal_string("_IDLE_A");
					StringCopy(&cVar32,
							   ui::_get_text_substring(&Var23, iVar36, ui::get_length_of_literal_string(&Var23)), 16);
				}
				StringCopy(&Var28, ui::_get_text_substring(&Var23, 0, iVar36), 16);
				if (fVar27 >= 0.95f) {
					MemCopy(&Var37, {Var28}, 6);
					if (!gameplay::are_strings_equal(&cVar32, "_BASE")) {
						StringConCat(&Var37, "_BASE", 24);
					}
					else {
						switch (gameplay::get_random_int_in_range(0, 3)) {
						case 0: StringConCat(&Var37, "_IDLE_A", 24); break;

						case 1: StringConCat(&Var37, "_IDLE_B", 24); break;

						case 2: StringConCat(&Var37, "_IDLE_C", 24); break;
						}
					}
					MemCopy(&Local_839, {Var37}, 4);
					ai::task_play_anim(vLocal_669.z, sLocal_783, &Var37, 8f, -8f, -1, 1, 0, 0, 0, 0);
				}
			}
		}
	}
}

// Position - 0x35A00
bool func_258(int iParam0, int *iParam1, int *iParam2, int iParam3, int iParam4) {
	*iParam1 = 7;
	*iParam2 = -1;
	switch (iParam0) {
	case 0:
		*iParam1 = 0;
		*iParam2 = 0;
		return true;

	case 1:
		if (!network::network_is_game_in_progress()) {
			return iParam4;
		}
		*iParam1 = 0;
		*iParam2 = 1;
		return true;

	case 2:
		if (!network::network_is_game_in_progress()) {
			return iParam4;
		}
		*iParam1 = 0;
		*iParam2 = 2;
		return true;

	case 3: *iParam1 = 1; return true;

	case 4: *iParam1 = 2; return true;

	case 5: *iParam1 = 3; return true;

	case 6: *iParam1 = 4; return true;

	case 7: *iParam1 = 5; return true;
	}
	if (!iParam3) {
	}
	return false;
}

// Position - 0x35ACC
void func_259() {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id()) && Local_136.f_526) {
		iVar0 = 0;
		while (iVar0 < 12) {
			if (iVar0 != 0) {
				ped::_0x39D55A620FCB6A3A(player::player_ped_id(), iVar0, Local_136.f_461.f_13[iVar0],
										 Local_136.f_461[iVar0]);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 9) {
			if (Local_136.f_461.f_39[iVar0] != -1) {
				ped::_is_ped_prop_valid(player::player_ped_id(), iVar0, Local_136.f_461.f_39[iVar0],
										Local_136.f_461.f_49[iVar0]);
			}
			iVar0++;
		}
	}
}

// Position - 0x35B65
void func_260() {
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int *iVar5;
	vector3 vVar6;
	var *uVar9;
	var *uVar10;
	int iVar11;
	int iVar12;
	struct<13> Var13;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	vector3 vVar30;
	float fVar33;

	bVar0 = !ui::is_pause_menu_active() && Local_136.f_106.f_31 != 6 && !player::is_system_ui_being_displayed() &&
			!ui::is_warning_message_active() && !Global_91543.f_1361;
	if (!bVar0) {
		return;
	}
	vVar1 = {-0.1f, 1.3129f, 0.5072f};
	iVar4 = 7;
	iVar5 = -1;
	func_258(Local_136.f_106.f_3, &iVar4, &iVar5, 0, 0);
	switch (iVar4) {
	case 4: vVar1 = {vVar1 + Vector(-0.8058f, 0f, 0f)}; break;

	case 5: vVar1 = {vVar1 + Vector(-0.8058f, 0f, 0f)}; break;
	}
	vVar6 = {vLocal_765};
	switch (iVar4) {
	case 4: vVar6 = {vVar6 + Vector(-0.8058f, 0f, 0f)}; break;

	case 5: vVar6 = {vVar6 + Vector(-0.8058f, 0f, 0f)}; break;
	}
	if (!cam::does_cam_exist(Local_136.f_38[0 /*12*/])) {
		Local_136.f_38[0 /*12*/] = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!cam::is_cam_active(Local_136.f_38[0 /*12*/])) {
		Local_136.f_38[0 /*12*/].f_7 = 52f;
		fLocal_771 = 0f;
		fLocal_772 = 0f;
		if (!ped::is_ped_injured(player::player_ped_id())) {
			Local_136.f_38[0 /*12*/].f_4.f_2 = entity::get_entity_heading(player::player_ped_id()) - 0f;
		}
		if (entity::does_entity_exist(vLocal_669.z)) {
			if (!ped::is_ped_injured(vLocal_669.z)) {
				Local_136.f_38[0 /*12*/].f_4.f_2 = entity::get_entity_heading(vLocal_669.z) - 0f;
			}
		}
		while (Local_136.f_38[0 /*12*/].f_4.f_2 < -180f) {
			Local_136.f_38[0 /*12*/].f_4.f_2 += 360f;
		}
		while (Local_136.f_38[0 /*12*/].f_4.f_2 > 180f) {
			Local_136.f_38[0 /*12*/].f_4.f_2 -= 360f;
		}
		fLocal_775 = Local_136.f_38[0 /*12*/].f_4.f_2;
		Local_136.f_38[0 /*12*/].f_1 = {
			object::_get_object_offset_from_coords(vLocal_762, Local_136.f_38[0 /*12*/].f_4.f_2, vVar1)};
		Local_136.f_38[0 /*12*/].f_11 = 0;
		vLocal_765 = {vLocal_762 + Vector(0.25f, 0f, 0f)};
		vLocal_768 = {vLocal_765};
	}
	else {
		vLocal_768 = {vLocal_768 + vVar6 - vLocal_768 * FtoV(0.25f)};
	}
	if (fLocal_772 == 0f || fLocal_772 == 1f) {
		func_265(&uVar9, &uVar10, &iVar11, &iVar12, 0);
		if (iVar11 < 32 && iVar11 > -32 && iVar12 < 32 && iVar12 > -32) {
			if (iVar11 < 32 && iVar11 > -32) {
				iVar11 = 0;
			}
			else if (iVar11 < 0) {
				iVar11 -= 32;
			}
			else {
				iVar11 += 32;
			}
			if (iVar12 < 32 && iVar12 > -32) {
				iVar12 = 0;
			}
			else if (iVar12 < 0) {
				iVar12 -= 32;
			}
			else {
				iVar12 += 32;
			}
		}
		iVar11 *= -1;
		if (controls::is_look_inverted()) {
			iVar12 *= -1;
		}
		if (controls::_is_input_disabled(2)) {
			if (func_264(1, -1, 1)) {
				Local_136.f_38[0 /*12*/].f_4.f_2 -= Global_2594048 * 400f;
			}
		}
		else {
			Local_136.f_38[0 /*12*/].f_4.f_2 += IntToFloat(iVar11) * 0.05f;
		}
	}
	while (Local_136.f_38[0 /*12*/].f_4.f_2 < -180f) {
		Local_136.f_38[0 /*12*/].f_4.f_2 += 360f;
	}
	while (Local_136.f_38[0 /*12*/].f_4.f_2 > 180f) {
		Local_136.f_38[0 /*12*/].f_4.f_2 -= 360f;
	}
	while (fLocal_773 < -180f) {
		fLocal_773 += 360f;
	}
	while (fLocal_773 > 180f) {
		fLocal_773 -= 360f;
	}
	iVar26 = func_148(player::player_ped_id());
	if (iVar4 == 0 || iVar4 == 2 || iVar4 == 3 || network::network_is_game_in_progress()) {
		if (func_35(&Var13, Local_136.f_460, iVar26, player::player_ped_id(), -1)) {
			if (!network::network_is_game_in_progress()) {
				if (!iLocal_776) {
					if (Var13.f_12 == 1) {
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							if (!network::network_is_game_in_progress()) {
								fLocal_774 = entity::get_entity_heading(player::player_ped_id()) - 190f;
							}
							else if (entity::does_entity_exist(vLocal_669.z)) {
								if (!ped::is_ped_injured(vLocal_669.z)) {
									fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 190f;
								}
							}
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_776 = 1;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_262(fLocal_773, fLocal_774, fLocal_772);
						}
					}
					else if (fLocal_772 != 0f && fLocal_772 != 1f) {
						fLocal_772 = 1f;
						iLocal_776 = 1;
					}
				}
				else if (Var13.f_12 != 1) {
					if (fLocal_772 == 1f) {
						fLocal_773 = fLocal_775;
						fLocal_774 = Local_136.f_38[0 /*12*/].f_4.f_2;
					}
					fLocal_772 -= 0.05f;
					if (fLocal_772 <= 0f) {
						fLocal_772 = 0f;
						iLocal_776 = 0;
					}
					else {
						Local_136.f_38[0 /*12*/].f_4.f_2 = func_262(fLocal_773, fLocal_774, fLocal_772);
					}
				}
				else if (fLocal_772 != 0f && fLocal_772 != 1f) {
					fLocal_772 = 0f;
					iLocal_776 = 0;
				}
			}
			else {
				if (iVar26 == 4) {
					if (Var13.f_12 == 4) {
						Var13.f_12 = 2;
					}
					if (Var13.f_12 == 6) {
						Var13.f_12 = 3;
					}
					iVar27 = Var13.f_12;
					switch (gameplay::get_hash_key(&Var13)) {
					case 1334929540: iVar27 = 1; break;

					case -1745115353: iVar27 = 1; break;

					case -1636967950: iVar27 = 1; break;

					case -652292269: iVar27 = 1; break;

					case -440373586: iVar27 = 1; break;

					case -1035884623: iVar27 = 1; break;

					case 1289632992: iVar27 = 1; break;

					case -1780827729: iVar27 = 1; break;

					case 214410819: iVar27 = 1; break;

					case 332555747: iVar27 = 1; break;

					case 61892743: iVar27 = 1; break;

					case -1514257748: iVar27 = 1; break;

					case -1364624791: iVar27 = 1; break;

					case 1549424756: iVar27 = 1; break;

					case 1915520024: iVar27 = 0; break;

					case 74131599: iVar27 = 2; break;

					case 363383562: iVar27 = 1; break;

					case 1093030262: iVar27 = 3; break;

					case 1332632858: iVar27 = 1; break;

					case -569087776: iVar27 = 3; break;

					case -1282504117: iVar27 = 0; break;

					case 1824417551: iVar27 = 3; break;

					case 391708136: iVar27 = 2; break;

					case 747545215: iVar27 = 2; break;

					case 1097124907: iVar27 = 3; break;

					case -1478763187: iVar27 = 1; break;

					case -1350521631: iVar27 = 2; break;

					case -716244867: iVar27 = 1; break;

					case 22777707: iVar27 = 0; break;

					case 1142887665: iVar27 = 0; break;

					case -880004050: iVar27 = 3; break;

					case -33154131: iVar27 = 3; break;

					case -955835485: iVar27 = 1; break;

					case -1881592504: iVar27 = 0; break;

					case 497993745: iVar27 = 0; break;

					case 799173624: iVar27 = 1; break;

					case -2098342992: iVar27 = 1; break;
					}
					if (iVar27 != Var13.f_12) {
						Var13.f_12 = iVar27;
					}
				}
				else if (iVar26 == 3) {
					if (Var13.f_12 == 4 || Var13.f_12 == 5) {
						Var13.f_12 = 2;
					}
					if (Var13.f_12 == 6 || Var13.f_12 == 7) {
						Var13.f_12 = 3;
					}
					iVar28 = Var13.f_12;
					switch (gameplay::get_hash_key(&Var13)) {
					case -1570115700: iVar28 = 1; break;

					case -1745115353: iVar28 = 1; break;

					case -2027116220: iVar28 = 1; break;

					case -1636967950: iVar28 = 1; break;

					case -2132107540: iVar28 = 1; break;

					case -652292269: iVar28 = 1; break;

					case 1464947154: iVar28 = 1; break;

					case -440373586: iVar28 = 1; break;

					case -1035884623: iVar28 = 1; break;

					case 1289632992: iVar28 = 1; break;

					case -1780827729: iVar28 = 1; break;

					case 214410819: iVar28 = 1; break;

					case 332555747: iVar28 = 1; break;

					case 1824417551: iVar28 = 3; break;

					case 979630098: iVar28 = 3; break;

					case 211688583: iVar28 = 2; break;

					case 1343791995: iVar28 = 1; break;

					case -2124501642: iVar28 = 1; break;

					case -1514257748: iVar28 = 1; break;

					case -1364624791: iVar28 = 1; break;

					case 1549424756: iVar28 = 1; break;

					case 363383562: iVar28 = 1; break;

					case 1093030262: iVar28 = 3; break;

					case 1332632858: iVar28 = 1; break;

					case -1388618285: iVar28 = 0; break;

					case -275651969: iVar28 = 1; break;

					case -1478763187: iVar28 = 1; break;

					case 1142887665: iVar28 = 0; break;

					case 22777707: iVar28 = 0; break;

					case -1350521631: iVar28 = 2; break;

					case -716244867: iVar28 = 1; break;

					case -880004050: iVar28 = 3; break;

					case -33154131: iVar28 = 3; break;

					case 799173624: iVar28 = 1; break;

					case -1256283855: iVar28 = 0; break;
					}
					if (iVar28 != Var13.f_12) {
						Var13.f_12 = iVar28;
					}
				}
				if (fLocal_772 == 0f) {
					iLocal_779 = 0;
					iLocal_778 = Var13.f_12;
				}
				else if (fLocal_772 == 1f) {
				}
				else if (iLocal_777 != Var13.f_12) {
					iLocal_778 = Var13.f_12;
				}
				else if (!iLocal_779) {
					iLocal_777 = iLocal_778;
					fLocal_772 = 0f;
					iLocal_779 = 1;
				}
				switch (iLocal_777) {
				case 0:
					switch (Var13.f_12) {
					case 0:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 0f;
						}
						if (fLocal_772 != 0f || iLocal_779) {
							fLocal_772 += 0.05f;
							if (fLocal_772 >= 1f) {
								fLocal_772 = 0f;
								iLocal_777 = Var13.f_12;
							}
							else {
								Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
							}
						}
						break;

					case 1:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 190f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 2:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 310f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 3:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 70f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					default: break;
					}
					break;

				case 1:
					switch (Var13.f_12) {
					case 0:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 0f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 1:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 190f;
						}
						if (fLocal_772 != 0f || iLocal_779) {
							fLocal_772 += 0.05f;
							if (fLocal_772 >= 1f) {
								fLocal_772 = 0f;
								iLocal_777 = Var13.f_12;
							}
							else {
								Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
							}
						}
						break;

					case 2:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 310f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 3:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 70f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					default: break;
					}
					break;

				case 2:
					switch (Var13.f_12) {
					case 0:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 0f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 1:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 190f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 2:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 310f;
						}
						if (fLocal_772 != 0f || iLocal_779) {
							fLocal_772 += 0.05f;
							if (fLocal_772 >= 1f) {
								fLocal_772 = 0f;
								iLocal_777 = Var13.f_12;
							}
							else {
								Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
							}
						}
						break;

					case 3:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 70f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					default: break;
					}
					break;

				case 3:
					switch (Var13.f_12) {
					case 0:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 0f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 1:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 190f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 2:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 310f;
						}
						fLocal_772 += 0.05f;
						if (fLocal_772 >= 1f) {
							fLocal_772 = 1f;
							iLocal_777 = Var13.f_12;
						}
						else {
							Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
						}
						break;

					case 3:
						if (fLocal_772 == 0f) {
							fLocal_773 = Local_136.f_38[0 /*12*/].f_4.f_2;
							fLocal_774 = entity::get_entity_heading(vLocal_669.z) - 70f;
						}
						if (fLocal_772 != 0f || iLocal_779) {
							fLocal_772 += 0.05f;
							if (fLocal_772 >= 1f) {
								fLocal_772 = 0f;
								iLocal_777 = Var13.f_12;
							}
							else {
								Local_136.f_38[0 /*12*/].f_4.f_2 = func_261(fLocal_773, fLocal_774, fLocal_772);
							}
						}
						break;

					default: break;
					}
					break;

				default:
					if (iLocal_777 == -1) {
						switch (Var13.f_12) {
						case 0: iLocal_777 = 1; break;

						case 1: iLocal_777 = 0; break;

						case 2: iLocal_777 = 3; break;

						case 3: iLocal_777 = 2; break;

						default: break;
						}
					}
					else {
						switch (Var13.f_12) {
						case 0: break;

						case 1: break;

						case 2: break;

						case 3: break;

						default: break;
						}
					}
					break;
				}
			}
		}
	}
	else {
		iLocal_779 = 0;
		fLocal_772 = 0f;
		iLocal_776 = 0;
		iLocal_777 = 0;
		iLocal_778 = Var13.f_12;
	}
	fVar29 = 34f;
	switch (iVar4) {
	case 4: fVar29 = 38f; break;

	case 5: fVar29 = 38f; break;

	case 3: fVar29 = 36f; break;

	case 2: fVar29 = 36f; break;

	case 1: fVar29 = 30f; break;
	}
	if (controls::_is_input_disabled(2)) {
		if (controls::is_control_just_released(2, iLocal_828)) {
			iLocal_829 = !iLocal_829;
		}
	}
	else {
		iLocal_829 = 0;
	}
	if (controls::is_control_pressed(2, iLocal_828) || iLocal_829) {
		if (fLocal_771 < 1f) {
			fLocal_771 += 0.05f;
		}
		if (fLocal_771 > 1f) {
			fLocal_771 = 1f;
		}
	}
	else {
		if (fLocal_771 > 0f) {
			fLocal_771 -= 0.05f;
		}
		if (fLocal_771 < 0f) {
			fLocal_771 = 0f;
		}
	}
	vVar30 = {object::_get_object_offset_from_coords(vLocal_762, Local_136.f_38[0 /*12*/].f_4.f_2, vVar1)};
	Local_136.f_38[0 /*12*/].f_1 = vVar30.x;
	Local_136.f_38[0 /*12*/].f_1.f_1 = vVar30.y;
	Local_136.f_38[0 /*12*/].f_1.f_2 += (vVar30.z - Local_136.f_38[0 /*12*/].f_1.f_2) * 0.25f;
	if (fLocal_771 != 0f) {
		if (iVar4 == 1) {
			fVar33 = 0.07f;
			Local_136.f_38[0 /*12*/].f_1.f_2 =
				func_262(Local_136.f_38[0 /*12*/].f_1.f_2, Local_136.f_38[0 /*12*/].f_1.f_2 + fVar33, fLocal_771);
			vLocal_768.z = func_262(vLocal_768.z, vLocal_768.z + fVar33, fLocal_771);
		}
		Local_136.f_38[0 /*12*/].f_7 = func_262(52f, fVar29, fLocal_771);
	}
	cam::set_cam_coord(Local_136.f_38[0 /*12*/], Local_136.f_38[0 /*12*/].f_1);
	cam::set_cam_fov(Local_136.f_38[0 /*12*/], Local_136.f_38[0 /*12*/].f_7);
	cam::point_cam_at_coord(Local_136.f_38[0 /*12*/], vLocal_768);
	cam::set_cam_near_clip(Local_136.f_38[0 /*12*/], 0.7f);
	if (!Local_136.f_38[0 /*12*/].f_11) {
		cam::set_cam_active(Local_136.f_38[0 /*12*/], 1);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		Local_136.f_38[0 /*12*/].f_11 = 1;
		func_170(1, 1, 1, 0);
	}
}

// Position - 0x36F3E
float func_261(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > 360f) {
		fParam0 -= 360f;
	}
	else if (fParam0 < 0f) {
		fParam0 += 360f;
	}
	if (fParam1 > fParam0 + 180f) {
		fParam1 -= 360f;
	}
	else if (fParam1 < fParam0 - 180f) {
		fParam1 += 360f;
	}
	return func_262(fParam0, fParam1, fParam2);
}

// Position - 0x36FAC
float func_262(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	fVar0 = (1f - system::cos(func_263(fParam2 * 3.141593f))) * 0.5f;
	return fParam0 * (1f - fVar0) + fParam1 * fVar0;
}

// Position - 0x36FDB
float func_263(float fParam0) { return fParam0 * 57.29578f; }

// Position - 0x36FEB
bool func_264(int iParam0, int iParam1, int iParam2) {
	if (!controls::_is_input_disabled(2)) {
		return false;
	}
	if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
		return false;
	}
	if (iParam2) {
		ui::_show_cursor_this_frame();
	}
	if (Global_2594050 == -6) {
		ui::_set_cursor_sprite(4);
		if (iParam0 && controls::is_control_pressed(2, 237)) {
			return true;
		}
		else {
			Global_2594050 = -1;
			return false;
		}
	}
	if (Global_2594050 > -1 || Global_2594050 == -3 || Global_2594050 == -2 || ui::_0x3D9ACB1EB139E702()) {
		ui::_set_cursor_sprite(1);
		return false;
	}
	if (Global_2594050 == -1 && iParam0) {
		if (controls::is_control_pressed(2, 237)) {
			ui::_set_cursor_sprite(4);
			Global_2594050 = -6;
			return true;
		}
		else {
			ui::_set_cursor_sprite(3);
			return false;
		}
	}
	ui::_set_cursor_sprite(1);
	return false;
}

// Position - 0x370CB
void func_265(var *uParam0, var *uParam1, var *uParam2, var *uParam3, int iParam4) {
	*uParam0 = system::floor(controls::get_control_normal(2, 218) * 127f);
	*uParam1 = system::floor(controls::get_control_normal(2, 219) * 127f);
	*uParam2 = system::floor(controls::get_control_normal(2, 220) * 127f);
	*uParam3 = system::floor(controls::get_control_normal(2, 221) * 127f);
	if (iParam4) {
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f) {
			*uParam0 = system::floor(controls::get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = system::floor(controls::get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f) {
			*uParam2 = system::floor(controls::get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = system::floor(controls::get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

// Position - 0x371A0
void func_266() {
	if (gameplay::is_pc_version()) {
		controls::_set_cursor_location(0.325f, 0.3f);
	}
}

// Position - 0x371BE
void func_267(int *iParam0) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var *uVar4;
	var *uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	struct<9> Var12;
	var *uVar25;
	int iVar29;
	int iVar30;
	char cVar31[16];
	float fVar35;
	float *fVar36;

	iVar0 = player::player_ped_id();
	if (entity::does_entity_exist(vLocal_669.z) && !ped::is_ped_injured(vLocal_669.z)) {
		iVar0 = vLocal_669.z;
	}
	if (network::network_is_game_in_progress() && entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
		if (network::network_player_has_headset(player::player_id())) {
			if (network::network_is_player_talking(player::player_id())) {
				ped::set_ped_reset_flag(iVar0, 302, 1);
			}
		}
	}
	bVar1 = false;
	if (iLocal_801) {
		bVar1 = true;
		iLocal_801 = 0;
	}
	if (controls::_is_input_disabled(2)) {
		iLocal_828 = 209;
	}
	else {
		iLocal_828 = 207;
	}
	if (controls::_0x6CD79468A1E595C6(2)) {
		iLocal_760 = 1;
	}
	func_474(&Local_136.f_395, 300);
	func_265(&iVar2, &iVar3, &uVar4, &uVar5, 0);
	if (Local_136.f_106.f_10 != 0) {
		if (system::timera() > 200 || iVar3 > -64 && iVar3 < 64 && iVar2 > -64 && iVar2 < 64) {
			Local_136.f_106.f_10 = 0;
		}
		else {
			iVar2 = 0;
			iVar3 = 0;
		}
	}
	iVar6 = controls::is_control_just_pressed(2, 201);
	bVar7 = controls::is_control_just_pressed(2, 202) | controls::is_disabled_control_just_pressed(2, 202);
	if (iVar6 || bVar7) {
		Local_136.f_395.f_8 = 0;
		Local_136.f_395.f_9 = 0;
	}
	bVar8 = iVar3 < -64 || controls::is_control_just_pressed(2, 188) ||
			controls::is_control_pressed(2, 188) && Local_136.f_395.f_8;
	bVar9 = iVar3 > 64 || controls::is_control_just_pressed(2, 187) ||
			controls::is_control_pressed(2, 187) && Local_136.f_395.f_9;
	bVar10 = iVar3 < -64 || iVar3 > 64;
	bVar11 = !ui::is_pause_menu_active() && Local_136.f_106.f_31 != 1 && Local_136.f_106.f_31 != 6 &&
			 !player::is_system_ui_being_displayed() && !ui::is_warning_message_active() && !Global_91543.f_1361 &&
			 !bVar1;
	if (network::_network_is_text_chat_active()) {
		iVar6 = 0;
		bVar7 = false;
		bVar8 = false;
		bVar9 = false;
		bVar10 = false;
	}
	func_473();
	if (func_472(&uLocal_830)) {
	}
	else if (bVar11 || Local_136.f_106.f_25) {
		if (gameplay::is_pc_version() && bVar11 && !network::_network_is_text_chat_active()) {
			func_469(0, 0, 0, 1);
		}
		switch (Local_136.f_106.f_5) {
		case 0:
			if (gameplay::is_pc_version()) {
				if (func_468()) {
					if (Global_2594050 == Local_136.f_106.f_3) {
						iVar6 = 1;
					}
					else {
						Local_136.f_106.f_3 = Global_2594050;
						func_467(Local_136.f_106.f_3, 1, 1);
						audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
						Local_136.f_395.f_8 = 0;
						Local_136.f_395.f_9 = 0;
					}
				}
				if (func_466()) {
					bVar7 = true;
					Local_136.f_395.f_8 = 0;
					Local_136.f_395.f_9 = 0;
				}
				if (func_465(Local_136.f_395.f_8, 0, 0)) {
					bVar8 = true;
				}
				if (func_464(Local_136.f_395.f_9, 0, 0)) {
					bVar9 = true;
				}
			}
			if (bVar8) {
				if (func_463(&Local_136.f_106.f_3, 1)) {
					func_467(Local_136.f_106.f_3, 1, 1);
				}
				if (bVar10) {
					system::settimera(0);
					Local_136.f_106.f_10 = 1;
				}
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
				Local_136.f_395.f_8 = 0;
				Local_136.f_395.f_4 = 0;
				Local_136.f_395.f_20 = gameplay::get_game_timer();
				if (network::network_is_game_in_progress()) {
					Local_136.f_395.f_24 = network::get_network_time();
				}
			}
			else if (bVar9) {
				if (func_461(&Local_136.f_106.f_3, 1)) {
					func_467(Local_136.f_106.f_3, 1, 1);
				}
				if (bVar10) {
					system::settimera(0);
					Local_136.f_106.f_10 = 1;
				}
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
				Local_136.f_395.f_9 = 0;
				Local_136.f_395.f_4 = 0;
				Local_136.f_395.f_20 = gameplay::get_game_timer();
				if (network::network_is_game_in_progress()) {
					Local_136.f_395.f_24 = network::get_network_time();
				}
			}
			else if (iVar6) {
				if (Local_136.f_106.f_3 != -1) {
					Local_136.f_106.f_5++;
					StringCopy(&Local_136.f_106.f_11, "", 16);
					iLocal_810 = 0;
					bVar1 = true;
					*iParam0 = 1;
				}
				audio::play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
			}
			else if (bVar7) {
				Local_136.f_106.f_31 = 6;
				iLocal_829 = 0;
				audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
			}
			break;

		case 1:
			if (!func_459(Local_136.f_460) && func_458(Local_136.f_460, "")) {
				func_451(Local_136.f_460, 1);
				Local_136.f_106.f_17 = 1;
				iLocal_799 = 1;
			}
			if (gameplay::is_pc_version() && bVar11) {
				if (func_468()) {
					if (Global_2594050 == Local_136.f_106.f_1) {
						iVar6 = 1;
					}
					else {
						if (func_450(&Local_136.f_460)) {
							Local_136.f_106.f_1 = Global_2594050;
							*iParam0 = 1;
							iLocal_760 = 1;
							func_467(Local_136.f_106.f_1, 1, 1);
							Local_136.f_106.f_2 = func_449();
							if (func_448() > 1) {
								audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
							}
						}
						if (iLocal_799 == 1) {
							bVar1 = true;
							iLocal_799 = 0;
						}
					}
				}
				if (func_466()) {
					bVar7 = true;
				}
				if (func_465(Local_136.f_395.f_8, 0, 0)) {
					bVar8 = true;
				}
				if (func_464(Local_136.f_395.f_9, 0, 0)) {
					bVar9 = true;
				}
			}
			if (iVar6 || Local_136.f_106.f_25) {
				if (Local_136.f_460 != -1) {
					if (!func_240(Local_136.f_460)) {
						if (!func_458(Local_136.f_460, "")) {
							audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
							func_447("TAT_LOCK", 4000, 0);
						}
						else if (func_387() && !Local_136.f_106.f_25) {
							audio::play_sound_frontend(-1, "Tattooing_Oneshot", "TATTOOIST_SOUNDS", 1);
							audio::play_sound_frontend(-1, "PURCHASE", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
							func_386(Local_136.f_460);
							if (Global_69702) {
								func_244(Local_136.f_460, 1, -1);
								func_385(Local_136.f_460, 1, -1);
							}
							else {
								func_384(func_213(), Local_136.f_460, 1);
							}
							if (network::network_is_game_in_progress()) {
								if (func_383()) {
									func_22("HUMAN CANVAS", -1);
									func_382(21, 1, -1);
								}
								func_380();
							}
							if (network::network_is_game_in_progress()) {
								func_242(iVar0, Local_136.f_460, 1, -1, 0);
							}
							else {
								func_33(iVar0);
							}
							Global_2590768 = 1;
							iLocal_827 = 0;
							if (iVar0 != player::player_ped_id()) {
								if (network::network_is_game_in_progress()) {
									func_242(player::player_ped_id(), Local_136.f_460, 1, -1, 0);
								}
								else {
									func_33(player::player_ped_id());
								}
							}
							func_379(&Local_136.f_225, 2, 2);
							if (network::network_is_game_in_progress() && Local_136.f_460 >= 129) {
								StringCopy(&Local_136.f_106.f_11, "TAT_BUYDLC", 16);
								iLocal_810 = 1;
							}
							else {
								StringCopy(&Local_136.f_106.f_11, "TAT_BUY", 16);
								iLocal_810 = 0;
							}
							Local_136.f_106.f_17 = 1;
							iLocal_801 = 1;
							iLocal_799 = 0;
						}
						else if (!Local_136.f_106.f_25) {
							if (!gameplay::is_string_null_or_empty(&Local_811)) {
								audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								func_447("TAT_LOCK", 4000, 0);
							}
							else if (Local_136.f_106.f_24) {
								audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								func_447("TAT_LOCK", 4000, 0);
							}
							else if (Global_2590762) {
								audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								func_447("TAT_LCKPC", 4000, 0);
							}
							else {
								audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
								func_447("TAT_AFF", 4000, 0);
								func_377(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
										 gameplay::get_hash_key(func_378(Local_136, 0)));
								func_375(0, 10, 3);
							}
						}
					}
					else {
						if (Global_69702) {
							func_244(Local_136.f_460, 0, -1);
						}
						else {
							func_384(func_213(), Local_136.f_460, 0);
						}
						audio::play_sound_frontend(-1, "Tattooing_Oneshot_Remove", "TATTOOIST_SOUNDS", 1);
						func_33(iVar0);
						Global_2590768 = 1;
						iLocal_827 = 0;
						if (iVar0 != player::player_ped_id()) {
							func_33(player::player_ped_id());
						}
						if (network::network_is_game_in_progress() && Local_136.f_460 >= 129) {
							StringCopy(&Local_136.f_106.f_11, "TAT_REMDLC", 16);
							iLocal_810 = 1;
						}
						else {
							StringCopy(&Local_136.f_106.f_11, "TAT_REM", 16);
							iLocal_810 = 0;
						}
						Local_136.f_106.f_17 = 1;
						bVar1 = true;
					}
				}
				iLocal_829 = 0;
			}
			else if (bVar9) {
				if (func_373(Local_136.f_460, &Local_136.f_460, &Local_136.f_106.f_1, 1)) {
					*iParam0 = 1;
					iLocal_760 = 1;
					func_467(Local_136.f_106.f_1, 1, 1);
					Local_136.f_106.f_2 = func_449();
					if (func_448() > 1) {
						audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
					}
				}
				if (bVar10) {
					system::settimera(0);
					Local_136.f_106.f_10 = 1;
				}
				if (iLocal_799 == 1) {
					bVar1 = true;
					iLocal_799 = 0;
				}
				Local_136.f_395.f_9 = 0;
				Local_136.f_395.f_4 = 0;
				Local_136.f_395.f_20 = gameplay::get_game_timer();
				if (network::network_is_game_in_progress()) {
					Local_136.f_395.f_24 = network::get_network_time();
				}
			}
			else if (bVar8) {
				if (func_371(Local_136.f_460, &Local_136.f_460, &Local_136.f_106.f_1, 1)) {
					*iParam0 = 1;
					iLocal_760 = 1;
					func_467(Local_136.f_106.f_1, 1, 1);
					Local_136.f_106.f_2 = func_449();
					if (func_448() > 1) {
						audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
					}
				}
				if (bVar10) {
					system::settimera(0);
					Local_136.f_106.f_10 = 1;
				}
				if (iLocal_799 == 1) {
					bVar1 = true;
					iLocal_799 = 0;
				}
				Local_136.f_395.f_8 = 0;
				Local_136.f_395.f_4 = 0;
				Local_136.f_395.f_20 = gameplay::get_game_timer();
				if (network::network_is_game_in_progress()) {
					Local_136.f_395.f_24 = network::get_network_time();
				}
			}
			else if (bVar7) {
				bVar1 = true;
				Local_136.f_460 = -1;
				func_512(0);
				func_33(iVar0);
				if (iVar0 != player::player_ped_id()) {
					func_33(player::player_ped_id());
				}
				audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_TATTOO_SHOP_SOUNDSET", 1);
				fLocal_772 = 0f;
				Local_136.f_106.f_17 = 1;
				Local_136.f_106.f_5--;
			}
			break;
		}
	}
	if (bVar1) {
		if (!iLocal_801) {
			func_475(iParam0);
		}
	}
	func_331();
	ui::show_hud_component_this_frame(3);
	ui::show_hud_component_this_frame(4);
	ui::show_hud_component_this_frame(5);
	ui::show_hud_component_this_frame(13);
	if (network::network_is_game_in_progress() && Local_136.f_106.f_31 == 6) {
		ui::_0x95CF81BD06EE1887();
		ui::remove_multiplayer_bank_cash();
	}
	if (iLocal_760) {
		func_330(-1);
		if (Local_136.f_106.f_5 == 0) {
			if (Local_136.f_106.f_3 != -1) {
				func_329(201, "ITEM_SELECT", -1, 0);
			}
			func_329(202, "ITEM_BACK", -1, 0);
			if (Local_136.f_106.f_3 != -1) {
			}
			func_326(&uLocal_830);
			func_325(21, "ITEM_MOV_CAM", -1);
			func_329(iLocal_828, "ITEM_ZOOM", -1, 0);
		}
		else if (Local_136.f_106.f_5 == 1) {
			if (Local_136.f_106.f_1 != -1) {
				if (func_240(Local_136.f_460)) {
					func_329(201, "ITEM_REM", -1, 0);
				}
				else if (network::network_is_game_in_progress() && func_324(Local_136.f_460, -1)) {
					func_329(201, "ITEM_SELECT", -1, 0);
				}
				else {
					func_329(201, "ITEM_BUY", -1, 0);
				}
			}
			func_329(202, "ITEM_BACK", -1, 0);
			if (Local_136.f_106.f_1 != -1) {
			}
			func_326(&uLocal_830);
			func_325(21, "ITEM_MOV_CAM", -1);
			func_329(iLocal_828, "ITEM_ZOOM", -1, 0);
		}
		iLocal_760 = 0;
	}
	if (network::network_is_game_in_progress()) {
		if (Local_136.f_106.f_5 != 0) {
			func_35(&Var12, Local_136.f_460, func_148(iVar0), iVar0, -1);
			func_323(&uVar25);
			if (gameplay::get_hash_key(&uVar25) == 0) {
				if (Local_136.f_460 >= 129) {
					if (Var12.f_8 == 1261643197 || Var12.f_8 == -737856380) {
						func_447("BB_PACK_HEADTAT", 0, 0);
					}
					else if (func_322(&Var12)) {
						func_447("TAT_LCKCREW", 0, 0);
					}
					else if (!gameplay::is_string_null_or_empty(func_321(&Var12, 0))) {
						if (func_320(&Var12)) {
							func_447("SHOP_DLC_PACK", 0, 0);
							func_319(func_321(&Var12, 0));
						}
						else if (func_318(&Var12)) {
							func_447("SHOP_DLC_PACK3", 0, 0);
							func_319(func_321(&Var12, 0));
						}
						else if (func_317(&Var12)) {
							func_447("SHOP_DLC_PACK4", 0, 0);
							func_319(func_321(&Var12, 0));
						}
						else if (func_316(&Var12)) {
							func_447("SHOP_DLC_PACK6", 0, 0);
							func_319(func_321(&Var12, 0));
						}
						else if (func_315(&Var12)) {
							func_447("SHOP_DLC_PACK7", 0, 0);
						}
						else {
							func_447("SHOP_DLC_PACK2", 0, 0);
							func_319(func_321(&Var12, 1));
						}
					}
				}
			}
			if (!func_458(Local_136.f_460, "")) {
			}
			else {
				iVar29 = 7;
				iVar30 = -1;
				func_258(Local_136.f_106.f_3, &iVar29, &iVar30, 0, 0);
				StringCopy(&cVar31, "", 16);
				func_314(&cVar31);
				if (gameplay::get_hash_key(&cVar31) == 0 && func_313(Local_136.f_460, &Var12, iVar29, iVar30)) {
					func_312("TAT_SALE", 0, 0);
				}
			}
		}
	}
	if (func_296(&uLocal_830)) {
	}
	else {
		func_274(1, Local_136, 1, 0, 1, -1082130432, 0, 0);
	}
	if (network::network_is_game_in_progress()) {
		if (Global_262145.f_2450) {
			if (graphics::has_streamed_texture_dict_loaded("MPShops")) {
				if (func_268(29, 1, 1, &fVar35, &fVar36, 0)) {
					graphics::_set_screen_draw_position(76, 84);
					graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
					graphics::draw_sprite("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_17289, fVar36,
										  0f, 255, 255, 255, 255, 0);
					graphics::_screen_draw_position_end();
				}
			}
		}
	}
}

// Position - 0x37EB2
bool func_268(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_273(iParam0), 64);
	StringCopy(&cVar16, func_271(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_270()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_270()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_269(iParam0) / fVar34;
		vVar37.y *= func_269(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.f_1 / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return true;
	}
	return false;
}

// Position - 0x38065
float func_269(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0x38104
bool func_270() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0x38136
var func_271(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_152(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_272(&uVar3);
			}
		}
		else {
			return func_272(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0x3856B
var func_272(var uParam0) { return uParam0; }

// Position - 0x38575
char *func_273(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_152(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_272(&uVar0);
		}
		else {
			return func_272(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0x385EA
void func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6,
			  int iParam7) {
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float *fVar36;
	vector3 vVar37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int *iVar46;
	int *iVar47;
	int *iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;

	if (!func_158(&iVar0, 0, iParam1)) {
		return;
	}
	if (iVar0 == -1) {
	}
	if (!func_293(0, iParam6)) {
		return;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290) {
		if (func_268(29, 1, 1, &fVar35, &fVar36, iParam7)) {
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 += 0f;
		}
		else {
			Global_17290 = 0;
		}
	}
	if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
		fVar58 = Global_17288;
	}
	else {
		fVar58 = Global_17288 + fVar56 + 0.034722f + 0f;
	}
	if (fParam5 == -1f) {
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (iParam7) {
		graphics::_get_active_screen_resolution(&iVar59, &iVar60);
		fVar62 = graphics::_get_aspect_ratio(0);
		if (func_270()) {
			iVar59 = system::round(system::to_float(iVar60) * fVar62);
		}
		fVar63 = system::to_float(iVar59) / system::to_float(iVar60);
		fVar61 = fVar63 / fVar62;
		if (func_270()) {
			fVar61 = 1f;
		}
		iVar59 = system::round(system::to_float(iVar59) / fVar61);
		iVar60 = system::round(system::to_float(iVar60) / fVar61);
	}
	else {
		graphics::get_screen_resolution(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2) {
		if (iVar5 == 1 && Global_17290.f_5598) {
			if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
				fVar49 = Global_17288;
			}
			else {
				if (Global_17290) {
					StringCopy(&cVar64, func_273(29), 64);
					StringCopy(&cVar80, func_271(29, 1), 64);
					if (gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
						func_292(Global_17287, Global_17288, fParam5, fVar56 - 0f, 0, 0, 0, 255);
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fVar57, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
					else {
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fParam5, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
				}
				if (Global_17290.f_7869) {
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_292(Global_17287, Global_17288 + fVar56, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17288 + fVar56 + 0.034722f + 0f;
				if (gameplay::get_hash_key(&Global_17290.f_1) != 0) {
					func_291();
					ui::begin_text_command_display_text(&Global_17290.f_1);
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68) {
						if (Global_17290.f_5[iVar14] == 2) {
							ui::add_text_component_integer(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3) {
							ui::add_text_component_float(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6) {
							ui::add_text_component_substring_text_label(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						iVar14++;
					}
					ui::end_text_command_display_text(Global_17287 + 0.00390625f, Global_17288 + fVar56 + 0.00416664f,
													  0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095) {
					if (Global_17290.f_5604 != 0) {
						func_291();
						func_289(Global_17287 + fParam5 - 0.00390625f -
									 func_290("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603),
								 Global_17288 + fVar56 + 0.00416664f, "CM_ITEM_COUNT", Global_17290.f_5604,
								 Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879) {
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else {
				ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088) {
				if (iVar6 >= 0) {
					if (Global_17290.f_5355[iVar6]) {
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605) {
							fVar49 += 0.00277776f;
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 += fVar55;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3) {
				if (iVar9 <= 1) {
					fVar55 = 0.034722f;
					fVar49 += fVar55;
					iVar9++;
					if (Global_17290.f_5088 <= 1) {
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
								  fVar96 + (fVar49 - fVar96) * 0.5f - 0.00138888f, fParam5, fVar49 - fVar96, 0f, 255,
								  255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095) {
				if (Global_17290.f_7884) {
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_292(Global_17287, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {graphics::get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar61;
				vVar37.y *= 0.5f / fVar61;
				if (Global_17290.f_7897) {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else {
					ui::get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17287 + fParam5 * 0.5f,
									  fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar61,
									  vVar37.y / 720f * fVar61, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (gameplay::get_hash_key(&Global_17290.f_4562) != 0 && Global_17290.f_4636 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_17290.f_4638 != 0) {
					func_268(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_288(fVar41);
				ui::_begin_text_command_line_count(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_292(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_288(fVar41);
				ui::begin_text_command_display_text(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17290.f_4638 != 0) {
					func_268(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_287(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_273(Global_17290.f_4638), func_271(Global_17290.f_4638, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17290.f_4636 > 0) {
					if (gameplay::get_game_timer() - Global_17290.f_4637 > Global_17290.f_4636) {
						StringCopy(&Global_17290.f_4562, "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (gameplay::get_hash_key(&Global_2593974.f_21) != 0 && Global_2593974.f_65 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_2593974.f_67 != 0) {
					func_268(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_288(fVar41);
				ui::_begin_text_command_line_count(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_292(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_288(fVar41);
				ui::begin_text_command_display_text(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2593974.f_67 != 0) {
					func_268(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_287(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_273(Global_2593974.f_67), func_271(Global_2593974.f_67, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2593974.f_65 > 0) {
					if (gameplay::get_game_timer() - Global_2593974.f_66 > Global_2593974.f_65) {
						StringCopy(&Global_2593974.f_21, "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_282(iVar59, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			graphics::_set_screen_draw_position(76, 84);
			graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598) {
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599) {
				iVar97 = Global_17290.f_5602 - 1;
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97) {
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f) {
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599) {
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else {
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095) {
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6) {
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6]) {
						iVar12++;
					}
					fVar34 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = Global_17287 + 0.0046875f;
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if (bVar31 && iVar5 == 1 && bVar32) {
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891) {
						ui::get_hud_colour(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else {
						ui::get_hud_colour(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					graphics::draw_sprite("CommonMenu", "Gradient_Nav", Global_17287 + fParam5 * 0.5f,
										  fVar58 + fVar99 + 0.00277776f * IntToFloat(iVar12) + fVar55 * 0.5f, fParam5,
										  fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97) {
					func_280(bVar31, 1, 0, 0, 0, 0, 0);
					ui::begin_text_command_display_text("DFLT_MNU_OPT");
					ui::end_text_command_display_text(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else {
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096) {
						if (gameplay::is_bit_set(Global_17290.f_4959[iVar6], iVar8) ||
							Global_17290.f_4926[iVar8] == 5) {
							if (Global_17290.f_5599) {
								iVar19 = Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8];
								iVar20 = Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8];
								iVar21 = Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8];
								iVar22 = Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8];
								iVar23 = Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8];
							}
							else {
								Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8] = iVar19;
								Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8] = iVar20;
								Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8] = iVar21;
								Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8] = iVar22;
								Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8] = iVar23;
							}
							iVar104 = 0;
							iVar54 = 0;
							if (Global_17290.f_5878[0] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[0]) {
									iVar54 = 1;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[1]) {
									iVar54 = 1;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f) {
								fVar33 = Global_17287 + 0.0046875f + Global_17290.f_4932[iVar8];
							}
							if (iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f &&
								fVar33 < Global_17290.f_4932[iVar8 + 1]) {
								fVar45 = Global_17290.f_4932[iVar8 + 1] - fVar33;
							}
							else {
								fVar45 = Global_17287 + Global_17289 - 0.0046875f - fVar33;
							}
							if (Global_17290.f_4945[iVar8] && Global_17290.f_5741 && bVar31) {
								bVar52 = true;
							}
							else {
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8]) {
							case 0: break;

							case 1:
								iVar24 = iVar19;
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										fVar42 = 0f;
										fVar43 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											iVar50 = 0;
											iVar51 = 0;
											iVar14 = 0;
											while (iVar14 < 4) {
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
													Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
													iVar51 = 1;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
													iVar50 = 1;
												}
												iVar14++;
											}
											func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
													 iVar54, iVar104, iVar51, iVar50);
											ui::_begin_text_command_width(&Global_17290.f_73[iVar24 /*6*/]);
										}
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_integer(
														Global_17290.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																				 Global_17290.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
												iVar28++;
											}
											iVar14++;
										}
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											fVar42 = ui::_end_text_command_get_width(1);
										}
										if (iVar28 > 0) {
											iVar14 = 0;
											while (iVar14 < iVar28) {
												if (func_268(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar43 += fVar35;
													if (iVar14 > 0) {
														fVar43 -= 0.00078125f * 4f;
													}
													if (Global_17290.f_4433[iVar22 + iVar14] == 2 ||
														Global_17290.f_4433[iVar22 + iVar14] == 48) {
														fVar43 -= 0.00078125f * 5f;
													}
												}
												iVar14++;
											}
										}
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - (fVar42 + fVar43) + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - (fVar42 + fVar43) * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
										Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
										fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_268(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_268(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(26), func_271(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_268(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_268(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(27), func_271(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar30 = 0;
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										iVar50 = 0;
										iVar51 = 0;
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
												Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar51 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												iVar50 = 1;
											}
											iVar14++;
										}
										func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, iVar51, iVar50);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_279(bVar31);
										}
										ui::begin_text_command_display_text(&Global_17290.f_73[iVar24 /*6*/]);
									}
									iVar14 = 0;
									while (iVar14 < 4) {
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 1;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 8;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 5;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 6;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 7;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 9;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_integer(Global_17290.f_3918[iVar20 + iVar26]);
											}
											iVar26++;
											iVar30 = 2;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																			 Global_17290.f_4304[iVar21 + iVar27]);
											}
											iVar27++;
											iVar30 = 3;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
											if (Global_17290.f_4433[iVar22 + iVar28] == 2 ||
												Global_17290.f_4433[iVar22 + iVar28] == 48) {
												if (func_268(Global_17290.f_4433[iVar22 + iVar28], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_268(Global_17290.f_4433[iVar22 + iVar28], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_287(Global_17290.f_4433[iVar22 + iVar28], bVar31, &iVar46,
																 &iVar47, &iVar48);
														if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_273(Global_17290.f_4433[iVar22 + iVar28]),
																func_271(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_273(Global_17290.f_4433[iVar22 + iVar28]),
																func_271(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														fVar41 += 0.00078125f * 3f;
													}
												}
											}
											iVar28++;
											iVar30 = 4;
										}
										iVar14++;
									}
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2) {
											ui::end_text_command_display_text(fVar33 + fVar41 + 0.00078125f * 7f,
																			  fVar34, 0);
										}
										else {
											ui::end_text_command_display_text(fVar33 + fVar41, fVar34, 0);
										}
									}
									if (iVar28 > 0) {
										fVar41 += 6f * 0.00078125f;
										iVar14 = 0;
										while (iVar14 < iVar28) {
											if (Global_17290.f_4433[iVar22 + iVar14] != 2 &&
												Global_17290.f_4433[iVar22 + iVar14] != 48) {
												if (func_268(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_268(Global_17290.f_4433[iVar22 + iVar14], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_287(Global_17290.f_4433[iVar22 + iVar14], bVar31, &iVar46,
																 &iVar47, &iVar48);
														if (Global_17290.f_4433[iVar22 + iVar14] == 30) {
															graphics::draw_sprite(
																func_273(Global_17290.f_4433[iVar22 + iVar14]),
																func_271(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																Global_17287 + fVar35 * 0.5f,
																fVar34 + 0.00277776f + fVar36 * 0.5f -
																	0.00078125f * 11f,
																fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_273(Global_17290.f_4433[iVar22 + iVar14]),
																func_271(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 8f +
																	0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_273(Global_17290.f_4433[iVar22 + iVar14]),
																func_271(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 12f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
													}
													fVar41 += 12f * 0.00078125f;
												}
											}
											iVar14++;
										}
									}
								}
								bVar40 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4) {
									if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
										iVar20++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
										iVar21++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
										iVar22++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
										iVar23++;
									}
									iVar14++;
								}
								break;

							case 2:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_279(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_integer(Global_17290.f_3918[iVar20]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_268(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_268(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(26), func_271(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_268(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_268(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(27), func_271(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54,
											 0, 0, 0);
									func_278(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
								}
								bVar40 = true;
								iVar20++;
								break;

							case 3:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_279(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_float(Global_17290.f_4175[iVar21],
																	 Global_17290.f_4304[iVar21]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_268(26, 1, 0, &fVar35, &fVar36, 0)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_268(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(26), func_271(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_268(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_268(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_287(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_273(27), func_271(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_280(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54,
											 0, 0, 0);
									func_277(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_4175[iVar21],
											 Global_17290.f_4304[iVar21]);
								}
								bVar40 = true;
								iVar21++;
								break;

							case 4:
								if (iVar5 == 1 && bVar32) {
									if (func_268(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, iParam7)) {
										if (!Global_17290.f_5599) {
											fVar43 = fVar35;
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17290.f_4953[iVar8] == 0) {
												fVar41 += (fVar45 - fVar33) * 0.5f - fVar43 * 0.5f;
											}
											Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
											Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
										}
										else {
											fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
											fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
										}
										if (bVar52) {
											if (func_268(26, 1, 0, &fVar35, &fVar36, iParam7)) {
												if (Global_17290.f_4953[iVar8] == 2) {
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_268(26, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_287(26, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_273(26), func_271(26, 1),
																		  fVar33 + fVar41 + fVar44,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_268(27, 1, 0, &fVar35, &fVar36, iParam7)) {
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_268(27, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_287(27, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_273(27), func_271(27, 1),
																		  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										if (func_268(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36,
													 iParam7)) {
											func_287(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
											graphics::draw_sprite(func_273(Global_17290.f_4433[iVar22]),
																  func_271(Global_17290.f_4433[iVar22], bVar31),
																  fVar33 + fVar41 + fVar35 * 0.5f,
																  fVar34 - 0.00277776f + fVar55 * 0.5f,
																  fVar35 * func_276(Global_17290.f_4433[iVar22]),
																  fVar36 * func_276(Global_17290.f_4433[iVar22]), 0f,
																  iVar46, iVar47, iVar48, 255, 0);
										}
									}
								}
								bVar40 = true;
								iVar22++;
								break;

							case 5: bVar40 = true; break;
							}
							if (Global_17290.f_4926[iVar8] == 5) {
								if (Global_17290.f_4938[iVar8] > 0.05f) {
									fVar33 += Global_17290.f_4938[iVar8];
								}
								else {
									fVar33 += 0.05f;
								}
							}
							else {
								fVar33 += Global_17290.f_4938[iVar8];
								if (Global_17290.f_4945[iVar8]) {
									if (func_268(26, 1, 1, &fVar35, &fVar36, iParam7)) {
										fVar33 -= fVar35;
									}
								}
							}
						}
						else {
							fVar33 += Global_17290.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (bVar40) {
					if (bVar32) {
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6]) {
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar98 += Global_17290.f_5612[iVar6];
						}
						else {
							fVar98 += 0.034722f;
						}
					}
					if (!Global_17290.f_5598) {
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6]) {
							if (bVar31) {
								Global_17290.f_5604 = 0;
							}
						}
						else {
							iVar11++;
							if (bVar31) {
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598) {
				Global_17290.f_5600 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12);
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599) {
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = gameplay::get_game_timer();
	ui::_0x55598D21339CB998(Global_17290.f_5743);
	if (!Global_17290.f_7864) {
		func_659();
	}
	Global_17290.f_7864 = 0;
	if (iParam2) {
		ui::hide_hud_component_this_frame(10);
	}
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(8);
	if (iParam0) {
		func_275(1);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x3B14E
void func_275(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0x3B15F
float func_276(int iParam0) {
	switch (iParam0) {
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 39:
	case 40:
	case 38:
	case 50:
	case 43:
	case 44:
	case 45: return 0.85f;
	}
	return 1f;
}

// Position - 0x3B1CE
void func_277(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x3B1ED
void func_278(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x3B20B
void func_279(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam0) {
		ui::get_hud_colour(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, 255);
}

// Position - 0x3B251
void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam2) {
		if (iParam3) {
			func_281(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if (iVar0 < 20 && iVar1 < 20 && iVar2 < 20) {
				if (iParam0 == 0) {
					ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if (iVar0 > 230 && iVar1 > 230 && iVar2 > 230) {
				if (iParam0) {
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			ui::set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1) {
			if (iParam0) {
				ui::get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else {
				ui::get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0) {
			ui::set_text_colour(155, 155, 155, 255);
		}
		else {
			ui::set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1) {
		if (iParam0) {
			ui::set_text_colour(0, 0, 0, system::floor(255f * 0.8f));
		}
		else {
			ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0) {
		ui::set_text_colour(155, 155, 155, 255);
	}
	else {
		ui::set_text_colour(155, 155, 155, 255);
	}
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_justification(1);
	if (iParam5) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(4);
	}
	else if (iParam6) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(6);
	}
	else {
		ui::set_text_font(0);
	}
	ui::set_text_wrap(0f, 1f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x3B3FF
void func_281(int iParam0, int *iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		*iParam1 = 8;
		*iParam2 = 8;
		*iParam3 = 8;
		break;

	case 1:
		*iParam1 = 37;
		*iParam2 = 37;
		*iParam3 = 39;
		break;

	case 22:
		*iParam1 = 140;
		*iParam2 = 146;
		*iParam3 = 154;
		break;

	case 23:
		*iParam1 = 91;
		*iParam2 = 93;
		*iParam3 = 94;
		break;

	case 6:
		*iParam1 = 81;
		*iParam2 = 84;
		*iParam3 = 89;
		break;

	case 111:
		*iParam1 = 240;
		*iParam2 = 240;
		*iParam3 = 240;
		break;

	case 28:
		*iParam1 = 150;
		*iParam2 = 8;
		*iParam3 = 0;
		break;

	case 34:
		*iParam1 = 38;
		*iParam2 = 3;
		*iParam3 = 6;
		break;

	case 88:
		*iParam1 = 245;
		*iParam2 = 137;
		*iParam3 = 15;
		break;

	case 45:
		*iParam1 = 74;
		*iParam2 = 22;
		*iParam3 = 7;
		break;

	case 56:
		*iParam1 = 45;
		*iParam2 = 58;
		*iParam3 = 53;
		break;

	case 58:
		*iParam1 = 71;
		*iParam2 = 120;
		*iParam3 = 60;
		break;

	case 54:
		*iParam1 = 77;
		*iParam2 = 98;
		*iParam3 = 104;
		break;

	case 73:
		*iParam1 = 14;
		*iParam2 = 49;
		*iParam3 = 109;
		break;

	case 68:
		*iParam1 = 22;
		*iParam2 = 34;
		*iParam3 = 72;
		break;

	case 140:
		*iParam1 = 0;
		*iParam2 = 174;
		*iParam3 = 239;
		break;

	case 131:
		*iParam1 = 255;
		*iParam2 = 183;
		*iParam3 = 0;
		break;

	case 90:
		*iParam1 = 142;
		*iParam2 = 140;
		*iParam3 = 70;
		break;

	case 97:
		*iParam1 = 156;
		*iParam2 = 141;
		*iParam3 = 113;
		break;

	case 89:
		*iParam1 = 145;
		*iParam2 = 115;
		*iParam3 = 71;
		break;

	case 105:
		*iParam1 = 98;
		*iParam2 = 68;
		*iParam3 = 40;
		break;

	case 100:
		*iParam1 = 124;
		*iParam2 = 27;
		*iParam3 = 68;
		break;

	case 99:
		*iParam1 = 114;
		*iParam2 = 42;
		*iParam3 = 63;
		break;

	case 136:
		*iParam1 = 246;
		*iParam2 = 151;
		*iParam3 = 153;
		break;

	case 49:
		*iParam1 = 32;
		*iParam2 = 32;
		*iParam3 = 44;
		break;

	case 146:
		*iParam1 = 26;
		*iParam2 = 1;
		*iParam3 = 23;
		break;

	default:
		*iParam1 = 255;
		*iParam2 = 255;
		*iParam3 = 255;
		break;
	}
}

// Position - 0x3B689
void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7,
			  int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_158(&iVar0, 0, iParam1)) {
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_293(iParam4, iParam8)) {
		return;
	}
	if (func_285()) {
		return;
	}
	if (network::_network_is_text_chat_active()) {
		return;
	}
	if (iParam7 == 0) {
		if (func_162(player::player_id(), 0)) {
			return;
		}
	}
	if (gameplay::is_pc_version()) {
		if (gameplay::update_onscreen_keyboard() == 0 || network::_network_is_text_chat_active()) {
			return;
		}
	}
	if (Global_17290.f_4639 != 0) {
		if (controls::_0x6CD79468A1E595C6(2)) {
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (Global_17290.f_4896[iVar1] != 353) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::get_control_instructional_button(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::_0x80C2FD58D720C801(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640) {
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			graphics::_push_scaleform_movie_function_parameter_float(1f - Global_17290.f_4951 / 100f);
			graphics::_pop_scaleform_movie_function_void();
			if (gameplay::is_pc_version()) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (gameplay::get_hash_key(&Global_17290.f_4834[iVar1 /*4*/]) != gameplay::get_hash_key("PREV")) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					func_284(&Global_17290.f_4641[iVar1 /*16*/]);
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && gameplay::get_hash_key(&Global_17290.f_4834[iVar2 /*4*/]) ==
											 gameplay::get_hash_key("PREV")) {
						func_284(&Global_17290.f_4641[iVar2 /*16*/]);
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1) {
						func_283(&Global_17290.f_4834[iVar1 /*4*/]);
					}
					else {
						graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
						if (iParam5) {
							ui::add_text_component_substring_time(iParam2, 70);
						}
						else {
							ui::add_text_component_integer(iParam2);
						}
						graphics::end_text_command_scaleform_string();
					}
					if (gameplay::is_pc_version()) {
						if (Global_17290.f_4896[iVar1] != 353 && gameplay::is_bit_set(Global_17290.f_4922, iVar1)) {
							graphics::_push_scaleform_movie_function_parameter_bool(1);
							graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4896[iVar1]);
						}
						else {
							graphics::_push_scaleform_movie_function_parameter_bool(0);
							graphics::_push_scaleform_movie_function_parameter_int(353);
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (gameplay::get_hash_key(&Global_2593974.f_16) != gameplay::get_hash_key("")) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4639);
				func_284(&Global_2593974);
				if (Global_2593974.f_20 == -1) {
					func_283(&Global_2593974.f_16);
				}
				else {
					graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(80);
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952) {
				graphics::_push_scaleform_movie_function_parameter_int(1);
			}
			else {
				graphics::_push_scaleform_movie_function_parameter_int(0);
			}
			graphics::_pop_scaleform_movie_function_void();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639) {
			if (Global_17290.f_4883[iVar1] != -1) {
				if (iParam2 > 0) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/],
															 "OVERRIDE_RESPAWN_TEXT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1) {
			if (iParam2 > 0) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				graphics::_push_scaleform_movie_function_parameter_int(iVar1);
				graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
				if (iParam5) {
					ui::add_text_component_substring_time(iParam2, 70);
				}
				else {
					ui::add_text_component_integer(iParam2);
				}
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		graphics::_set_screen_draw_position(76, 66);
		graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
		if (bParam6) {
			if (!Global_17290.f_7899) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899) {
			ui::reset_hud_component_values(15);
			Global_17290.f_7899 = 0;
		}
		graphics::_screen_draw_position_end();
		if (Global_17290.f_4925) {
			graphics::_set_screen_draw_position(82, 66);
			graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
			graphics::draw_scaleform_movie(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924,
										   1f, 1f, 255, 255, 255, 255, 0);
			graphics::_screen_draw_position_end();
		}
		else {
			graphics::draw_scaleform_movie_fullscreen(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0x3BB64
void func_283(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x3BB76
void func_284(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x3BB84
bool func_285() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_286()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x3BBF2
bool func_286() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x3BC0C
void func_287(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	var uVar0;

	ui::get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0) {
	case 28:
		*iParam2 = 194;
		*iParam3 = 80;
		*iParam4 = 80;
		break;

	case 15:
	case 4:
	case 16:
	case 26:
	case 27:
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 50:
	case 39:
	case 40:
	case 38:
	case 43:
	case 44:
	case 45:
	case 49:
		if (iParam1) {
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x3BCCC
void func_288(float fParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_leading(2);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(fParam0, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x3BD2B
void func_289(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x3BD4E
float func_290(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_291();
	ui::_begin_text_command_width(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x3BD90
void func_291() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874) {
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(Global_17287 + 0.0046875f, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x3BE1A
void func_292(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	graphics::draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6,
						iParam7, 0);
}

// Position - 0x3BE49
int func_293(int iParam0, bool bParam1) {
	if (Global_2433125.f_1385.f_688 != 0) {
		return 1;
	}
	if (!cam::is_screen_faded_in() || func_295(8, -1) && func_294() != 64 ||
		ui::get_pause_menu_state() != 0 && !bParam1 || streaming::is_player_switch_in_progress() && !iParam0 ||
		network::_0x2EAC52B4019E2782() || Global_69962 || Global_17290.f_7898 || ui::is_warning_message_active() ||
		Global_91543.f_1361) {
		return 0;
	}
	return 1;
}

// Position - 0x3BEE6
int func_294() { return Global_1315168; }

// Position - 0x3BEF2
var func_295(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x3BF2D
bool func_296(var *uParam0) {
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *iVar7;
	int iVar8;
	int iVar9;

	if (uParam0->f_1) {
		if (*uParam0 == 0) {
			*uParam0++;
		}
		else if (*uParam0 == 1) {
			bVar0 = false;
			bVar1 = false;
			bVar2 = false;
			bVar3 = false;
			if (func_311()) {
				if (network::network_is_signed_online()) {
					if (network::network_is_activity_session()) {
						iVar4 = 2;
						ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar4, 0, 0, -1, 0, 0, 1);
						if (controls::is_control_just_pressed(2, 201)) {
							bVar1 = true;
						}
					}
					else if (!network::_0x59328EB08C5CEB2B()) {
						iVar5 = 2;
						if (gameplay::is_durango_version()) {
							ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "HUD_STORE_PERMISSIONS", iVar5, 0, 0, -1,
													   0, 0, 1);
						}
						else {
							ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "HUD_PERM", iVar5, 0, 0, -1, 0, 0, 1);
						}
						if (controls::is_control_just_pressed(2, 201)) {
							bVar1 = true;
						}
					}
					else if (!network::_0x883D79C4071E18B3()) {
						iVar6 = 2;
						ui::_set_warning_message_2("GLOBAL_ALERT_DEFAULT", "STORE_UNAVAIL", iVar6, 0, 0, -1, 0, 0, 1);
						if (controls::is_control_just_pressed(2, 201)) {
							bVar1 = true;
						}
					}
					else {
						bVar0 = true;
					}
				}
				else {
					bVar2 = true;
				}
			}
			else {
				bVar3 = true;
			}
			if (bVar3) {
				*uParam0 = 0;
				uParam0->f_1 = 0;
				uParam0->f_5 = 1;
			}
			else if (bVar2) {
				*uParam0 = 3;
			}
			else if (bVar0) {
				if (network::network_is_game_in_progress()) {
					Global_2453931 = 1;
					Global_2453932 = 1;
				}
				audio::play_sound_frontend(-1, "NAV", "HUD_AMMO_SHOP_SOUNDSET", 1);
				network::_0xFAE628F1E9ADB239(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
											 gameplay::get_hash_key(func_378(uParam0->f_6, 0)));
				network::_0x58C21165F6545892("", "", func_309(uParam0->f_6));
				*uParam0++;
			}
			else if (bVar1) {
				*uParam0++;
			}
		}
		else if (*uParam0 == 2) {
			if (!network::_0x2EAC52B4019E2782()) {
				*uParam0 = 0;
				uParam0->f_1 = 0;
			}
		}
		else if (*uParam0 == 3) {
			if (func_297(&iVar7, 1)) {
				if (network::network_is_signed_online()) {
					*uParam0 = 4;
				}
				else {
					*uParam0 = 2;
				}
			}
		}
		else if (*uParam0 == 4) {
			if (network::network_is_signed_online()) {
				if (network::_0x1D4DC17C38FEAFF0()) {
					if (network::network_is_game_in_progress()) {
						Global_2453931 = 1;
						Global_2453932 = 1;
					}
					if (network::_0x883D79C4071E18B3()) {
						network::_0xFAE628F1E9ADB239(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
													 gameplay::get_hash_key(func_378(uParam0->f_6, 0)));
						network::_0x58C21165F6545892("", "", func_309(uParam0->f_6));
					}
					*uParam0 = 2;
				}
			}
			else {
				*uParam0 = 2;
			}
		}
		return true;
	}
	else if (uParam0->f_4 && !func_311() && !network::network_is_game_in_progress() || uParam0->f_5) {
		uParam0->f_5 = 1;
		iVar8 = 2;
		ui::_set_warning_message_2("PM_INF_QMFT", "STORE_CON_ONL", iVar8, 0, 0, -1, 0, 0, 1);
		if (controls::is_control_pressed(2, 201)) {
			uParam0->f_4 = func_311();
			uParam0->f_5 = 0;
		}
		return true;
	}
	else if (uParam0->f_2 && !network::network_is_signed_online() && !network::network_is_game_in_progress() ||
			 uParam0->f_3) {
		uParam0->f_3 = 1;
		iVar9 = 2;
		ui::_set_warning_message_2("PM_INF_QMFT", "STORE_SGN_ONL2", iVar9, 0, 0, -1, 0, 0, 1);
		if (controls::is_control_pressed(2, 201)) {
			uParam0->f_2 = network::network_is_signed_online();
			uParam0->f_3 = 0;
		}
		return true;
	}
	return false;
}

// Position - 0x3C239
bool func_297(int *iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	if (Global_1840922.f_2 + 5 < gameplay::get_frame_count() && Global_1840922.f_2 > 0) {
		func_236(&Global_1840922);
		func_236(&Global_1840922.f_49);
		*iParam0 = 0;
		Global_1840922.f_2 = 0;
		func_308(0);
	}
	Global_1840922.f_2 = gameplay::get_frame_count();
	iVar1 = -1;
	if (gameplay::is_orbis_version()) {
		if (network::_0xBD545D44CCE70597() == 0) {
			iVar1 = network::_0x74FB3E29E6D10FA9();
		}
	}
	if (gameplay::is_orbis_version() && (iVar1 == 4 || iVar1 == 2 || iVar1 == 1 || iVar1 == 5) ||
		!func_306() && network::network_is_signed_online()) {
		if (network::_0x8D11E61A4ABF49CC()) {
			func_303(&Global_1840922.f_3, func_305(&Global_1840922.f_3));
			if (!gameplay::is_bit_set(*iParam0, 4)) {
				gameplay::set_bit(iParam0, 4);
				StringCopy(&Global_1840922.f_3.f_1, "", 64);
				func_301(&Global_1840922.f_3, 0);
			}
		}
		else {
			if (iVar1 == 4) {
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 2) {
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 1) {
				ui::_set_warning_message_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (iVar1 == 5) {
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
			}
			else if (!func_306()) {
				ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1);
			}
			if (!gameplay::is_bit_set(*iParam0, 0)) {
				if (!controls::is_control_pressed(2, 201)) {
					gameplay::set_bit(iParam0, 0);
				}
			}
			else if (controls::is_control_just_released(2, 201)) {
				func_236(&Global_1840922.f_49);
				func_236(&Global_1840922);
				*iParam0 = 0;
				Global_1840922.f_2 = 0;
				func_308(0);
				return true;
			}
		}
	}
	else {
		func_303(&Global_1840922.f_3, func_305(&Global_1840922.f_3));
		if (func_300(&Global_1840922.f_49) && !func_298(&Global_1840922.f_49, 2000, 1) &&
			!network::network_is_signed_online()) {
			gameplay::set_bit(iParam0, 3);
			StringCopy(&Global_1840922.f_3.f_1, "", 64);
			func_301(&Global_1840922.f_3, 0);
		}
		else if (!gameplay::is_bit_set(*iParam0, 3)) {
			if (!gameplay::is_bit_set(*iParam0, 1)) {
				player::display_system_signin_ui(0);
				gameplay::set_bit(iParam0, 1);
				StringCopy(&Global_1840922.f_3.f_1, "", 64);
				func_301(&Global_1840922.f_3, 0);
			}
		}
		if (func_300(&Global_1840922)) {
			if (!func_298(&Global_1840922, 4000, 1)) {
				iVar2 = 1;
			}
		}
		if (!iVar2) {
			if (iParam1) {
				if (!network::network_is_signed_online()) {
					if (network::network_is_cable_connected()) {
						ui::_set_warning_message_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
					}
					else {
						ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
					}
					if (!player::is_system_ui_being_displayed()) {
						if (!gameplay::is_bit_set(*iParam0, 0)) {
							if (!controls::is_control_pressed(2, 201)) {
								gameplay::set_bit(iParam0, 0);
							}
						}
						else if (controls::is_control_just_released(2, 201)) {
							func_236(&Global_1840922);
							*iParam0 = 0;
							Global_1840922.f_2 = 0;
							func_308(0);
							return true;
						}
					}
				}
				else {
					func_236(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_308(0);
					return true;
				}
			}
			else if (gameplay::is_bit_set(*iParam0, 3)) {
				if (network::network_is_cable_connected()) {
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else {
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!gameplay::is_bit_set(*iParam0, 0)) {
					if (!controls::is_control_pressed(2, 201)) {
						gameplay::set_bit(iParam0, 0);
					}
				}
				else if (controls::is_control_just_released(2, 201)) {
					func_236(&Global_1840922.f_49);
					func_236(&Global_1840922);
					*iParam0 = 0;
					Global_1840922.f_2 = 0;
					func_308(0);
					return true;
				}
			}
			else {
				if (network::network_is_cable_connected()) {
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1);
				}
				else {
					ui::_set_warning_message_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1);
				}
				if (!player::is_system_ui_being_displayed()) {
					if (!gameplay::is_bit_set(*iParam0, 0)) {
						if (!controls::is_control_pressed(2, 201)) {
							gameplay::set_bit(iParam0, 0);
						}
					}
					else if (controls::is_control_just_released(2, 201)) {
						func_236(&Global_1840922.f_49);
						func_236(&Global_1840922);
						*iParam0 = 0;
						Global_1840922.f_2 = 0;
						func_308(0);
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x3C6A2
bool func_298(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return true;
	}
	func_299(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			return true;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		return true;
	}
	return false;
}

// Position - 0x3C700
void func_299(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !iParam1) {
			if (!iParam2) {
				*uParam0 = network::get_network_time();
			}
			else {
				*uParam0 = network::_0x89023FBBF9200E9F();
			}
		}
		else {
			*uParam0 = gameplay::get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

// Position - 0x3C745
bool func_300(var *uParam0) { return uParam0->f_1; }

// Position - 0x3C751
void func_301(var *uParam0, int iParam1) {
	func_302(uParam0);
	if (iParam1) {
		func_308(0);
	}
	uParam0->f_35 = 1;
}

// Position - 0x3C76E
void func_302(var *uParam0) {
	struct<46> Var0;

	Var0.f_41 = 1;
	*uParam0 = {Var0};
}

// Position - 0x3C789
void func_303(int *iParam0, int iParam1) {
	if (iParam1 == 1) {
		*iParam0 = 0;
		func_304(iParam0);
	}
	if (*iParam0 == 0) {
		if (iParam0->f_36) {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::add_text_component_integer(iParam0->f_33);
			ui::add_text_component_integer(iParam0->f_34);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		else if (iParam0->f_37) {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::add_text_component_integer(iParam0->f_33);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		else if (iParam0->f_39) {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::add_text_component_substring_player_name(&iParam0->f_17);
			ui::add_text_component_integer(iParam0->f_33);
			ui::add_text_component_integer(iParam0->f_34);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		else if (iParam0->f_38) {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::add_text_component_substring_player_name(&iParam0->f_17);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		else if (iParam0->f_40) {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::add_text_component_substring_time(iParam0->f_33, 70);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		else {
			ui::_set_loading_prompt_text_entry(&iParam0->f_1);
			ui::_show_loading_prompt(iParam0->f_41);
		}
		*iParam0 = 1;
	}
	if (*iParam0 == 1) {
	}
}

// Position - 0x3C887
void func_304(int *iParam0) { iParam0->f_35 = 0; }

// Position - 0x3C894
int func_305(var *uParam0) { return uParam0->f_35; }

// Position - 0x3C8A0
int func_306() {
	if (func_307()) {
		return 0;
	}
	if (network::network_is_cloud_available() == 0) {
		return 0;
	}
	return 1;
}

// Position - 0x3C8C0
bool func_307() { return Global_2453019; }

// Position - 0x3C8CC
void func_308(int iParam0) {
	ui::_remove_loading_prompt();
	if (iParam0) {
		ui::_0xC65AB383CD91DF98();
	}
}

// Position - 0x3C8E1
int func_309(int iParam0) {
	switch (func_310(iParam0)) {
	case 4: return 10;

	case 1: return 8;

	case 3: return 7;

	case 0: return 9;

	case 2: return 11;

	case 5: return 12;
	}
	return 0;
}

// Position - 0x3C948
int func_310(int iParam0) {
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

// Position - 0x3CBBB
bool func_311() { return network::network_is_cable_connected(); }

// Position - 0x3CBC7
void func_312(char *sParam0, int iParam1, int iParam2) {
	int iVar0;

	StringCopy(&Global_2593974.f_21, sParam0, 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = iParam1;
	Global_2593974.f_66 = gameplay::get_game_timer();
	Global_2593974.f_67 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x3CC2C
int func_313(int iParam0, char *sParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;

	if (!network::network_is_game_in_progress()) {
		return 0;
	}
	if (Global_262145.f_12960) {
		return 1;
	}
	if (iParam2 == 0) {
		switch (iParam3) {
		case -1: return 0;

		case 0:
			if (Global_262145.f_12961) {
				return 1;
			}
			break;

		case 1:
			if (Global_262145.f_12962) {
				return 1;
			}
			break;

		case 2:
			if (Global_262145.f_12963) {
				return 1;
			}
			break;
		}
	}
	else {
		if (iParam3 != -1) {
		}
		switch (iParam2) {
		case 1:
			if (Global_262145.f_12964) {
				return 1;
			}
			break;

		case 2:
			if (Global_262145.f_12965) {
				return 1;
			}
			break;

		case 3:
			if (Global_262145.f_12966) {
				return 1;
			}
			break;

		case 4:
			if (Global_262145.f_12967) {
				return 1;
			}
			break;

		case 5:
			if (Global_262145.f_12968) {
				return 1;
			}
			break;
		}
	}
	iVar1 = gameplay::get_hash_key(sParam1);
	iVar0 = 0;
	while (iVar0 < Global_262145.f_12969) {
		if (Global_262145.f_12969[iVar0] != 0) {
			if (iVar1 == Global_262145.f_12969[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3CD74
void func_314(char[4] cParam0) { *cParam0 = {Global_2593974.f_21}; }

// Position - 0x3CD88
bool func_315(char *sParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return true;
	}
	iVar0 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar0) {
	case -1647080257:
	case -1635032722: return true;
	}
	iVar0 = gameplay::get_hash_key(sParam0);
	switch (iVar0) {
	case 1174717920:
	case 935831910:
	case 716312379:
	case -1690636213:
	case 484275090:
	case 245552925:
	case 7912137:
	case -228516198:
	case -1323361481:
	case 534607938:
	case 278944200:
	case -152361378:
	case 1387912810:
	case 873636124:
	case 641729911:
	case -1737561645:
	case 395339800:
	case 165072037:
	case 2109485850:
	case 1851888741:
	case -1238981638:
	case -1478883487:
	case -646157659:
	case -885600742:
	case -295955352:
	case 1481173056:
	case 310369455:
	case -37965015:
	case 118605023:
	case 360407474: return true;
	}
	return false;
}

// Position - 0x3CE90
bool func_316(char *sParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return true;
	}
	iVar0 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar0) {
	case -2115296325:
	case -1917727053: return true;

	case 1310830821:
	case -2080815574: return true;

	case 1264005900:
	case -2124002991: return true;

	case -845498475: return true;

	case 1585373207: return true;

	case -32105449:
	case -723723000: return true;

	case -2100506294: return true;

	case 982652206:
	case 1960353061: return true;

	case 911341914:
	case -1177833238: return true;

	case -33829882:
	case -2114785687: return true;
	}
	return false;
}

// Position - 0x3CF67
bool func_317(char *sParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return true;
	}
	iVar0 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar0) {
	case -680965302:
	case 436097115:
	case 927511879: return true;
	}
	return false;
}

// Position - 0x3CFAB
bool func_318(char *sParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return true;
	}
	iVar0 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar0) {
	case 2070857446: return true;
	}
	if (gameplay::are_strings_equal(sParam0, "CC_MKUP_33")) {
		return true;
	}
	return false;
}

// Position - 0x3CFF4
void func_319(char *sParam0) {
	if (Global_17290.f_4635 >= 3 || Global_17290.f_4632 >= 4) {
		return;
	}
	Global_17290.f_4566[Global_17290.f_4632] = 1;
	Global_17290.f_4632++;
	StringCopy(&Global_17290.f_4583[Global_17290.f_4635 /*16*/], sParam0, 64);
	Global_17290.f_4635++;
}

// Position - 0x3D055
bool func_320(char *sParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return true;
	}
	if (ui::get_length_of_literal_string(sParam0) < 6) {
		return true;
	}
	iVar0 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar0) {
	case -272077744:
	case -217636000: return true;

	case -291739204:
	case -1724452987: return false;

	case -680965302:
	case 436097115:
	case 927511879: return false;

	case -1376583914: return true;

	case 753969907: return false;

	case -1461214493:
	case 469261390:
	case 1454369070: return false;

	case 2070857446: return false;

	case 790660019: return false;

	case -1899372144: return false;

	case -1497129317: return false;

	case 1759048931: return false;

	case 2009248638:
	case -434342601: return false;

	case 1974808259:
	case -1053480147: return false;

	case -1647080257:
	case -1635032722: return false;

	case -2115296325:
	case -1917727053: return false;

	case 1310830821:
	case -2080815574: return false;

	case 1264005900:
	case -2124002991: return false;

	case -845498475: return false;

	case 111238245: return true;

	case 1585373207: return false;

	case -32105449:
	case -723723000: return false;

	case -2100506294: return false;

	case 982652206:
	case 1960353061: return false;

	case 911341914:
	case -1177833238: return false;

	case -33829882:
	case -2114785687: return false;
	}
	if (gameplay::are_strings_equal(sParam0, "CC_MKUP_33")) {
		return false;
	}
	if (gameplay::are_strings_equal(sParam0, "CC_MKUP_42") || gameplay::are_strings_equal(sParam0, "CC_MKUP_43") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_44") || gameplay::are_strings_equal(sParam0, "CC_MKUP_45") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_46") || gameplay::are_strings_equal(sParam0, "CC_MKUP_47") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_48") || gameplay::are_strings_equal(sParam0, "CC_MKUP_49") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_50") || gameplay::are_strings_equal(sParam0, "CC_MKUP_51") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_52") || gameplay::are_strings_equal(sParam0, "CC_MKUP_53") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_54") || gameplay::are_strings_equal(sParam0, "CC_MKUP_55") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_56") || gameplay::are_strings_equal(sParam0, "CC_MKUP_57") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_58") || gameplay::are_strings_equal(sParam0, "CC_MKUP_59") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_60") || gameplay::are_strings_equal(sParam0, "CC_MKUP_61") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_62") || gameplay::are_strings_equal(sParam0, "CC_MKUP_63") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_64") || gameplay::are_strings_equal(sParam0, "CC_MKUP_65") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_66") || gameplay::are_strings_equal(sParam0, "CC_MKUP_67") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_68") || gameplay::are_strings_equal(sParam0, "CC_MKUP_69") ||
		gameplay::are_strings_equal(sParam0, "CC_MKUP_70") || gameplay::are_strings_equal(sParam0, "CC_MKUP_71")) {
		return false;
	}
	return true;
}

// Position - 0x3D425
char *func_321(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return "";
	}
	if (ui::get_length_of_literal_string(sParam0) < 6) {
		return "";
	}
	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = gameplay::get_hash_key(ui::_get_text_substring(sParam0, 0, 6));
	switch (iVar1) {
	case -272077744:
	case -217636000: return "SHOP_CONTENT_1";

	case -291739204:
	case -1724452987: return "SHOP_CONTENT_2";

	case -680965302:
	case 436097115:
	case 927511879:
		if (!iParam1) {
			return "SHOP_CONTENT_3";
		}
		else {
			return "SHOP_CONTENT_3b";
		}
		break;

	case -1376583914: return "SHOP_CONTENT_4";

	case 753969907: return "SHOP_CONTENT_5";

	case -1461214493:
	case 469261390:
	case 1454369070:
		if (!iParam1) {
			return "SHOP_CONTENT_6";
		}
		else {
			return "SHOP_CONTENT_6b";
		}
		break;

	case -1497129317:
		if (!iParam1) {
			return "SHOP_CONTENT_7";
		}
		else {
			return "SHOP_CONTENT_7b";
		}
		break;

	case 2070857446:
		if (!iParam1) {
			return "SHOP_CONTENT_8";
		}
		else {
			return "SHOP_CONTENT_8b";
		}
		break;

	case 790660019: return "SHOP_CONTENT_9";

	case -1899372144:
		if (!iParam1) {
			return "SHOP_CONTENT_10";
		}
		else {
			return "SHOP_CONTENT_10b";
		}
		break;

	case 2009248638:
	case -434342601:
		if (iVar0 == -1357324997 || iVar0 == 64652989 || iVar0 == 1023408391 || iVar0 == 513852309 ||
			iVar0 == 799565220 || iVar0 == -1823527696) {
			return "SHOP_CONTENT_14";
		}
		return "SHOP_CONTENT_12";

	case 1759048931:
		switch (iVar0) {
		case -1351684992:
		case -1657386993:
		case -1946409573:
		case -170362538:
		case -726555483:
		case -372257055:
		case -114397794:
		case -1749374280: return "";
		}
		return "SHOP_CONTENT_13";

	case 1974808259:
	case -1053480147: return "SHOP_CONTENT_14";

	case -2115296325:
	case -1917727053: return "SHOP_CONTENT_15";

	case -1647080257:
	case -1635032722: return "SHOP_CONTENT_16";

	case -32105449:
	case -723723000: return "SHOP_CONTENT_17";

	case 1310830821:
	case -2080815574: return "SHOP_CONTENT_18";

	case 1264005900:
	case -2124002991:
		if (iVar0 == -273286091 || iVar0 == 1363073245) {
			return "";
		}
		return "SHOP_CONTENT_19";

	case -845498475: return "SHOP_CONTENT_26";

	case 1585373207: return "SHOP_CONTENT_21";

	case -2100506294: return "SHOP_CONTENT_22";

	case 982652206:
	case 1960353061: return "SHOP_CONTENT_23";

	case 911341914:
	case -1177833238: return "SHOP_CONTENT_24";

	case -33829882:
	case -2114785687: return "SHOP_CONTENT_25";
	}
	if (gameplay::are_strings_equal(sParam0, "CC_M_HS_16") || gameplay::are_strings_equal(sParam0, "CC_M_HS_17") ||
		gameplay::are_strings_equal(sParam0, "CC_F_HS_17") || gameplay::are_strings_equal(sParam0, "CC_F_HS_16")) {
		return "SHOP_CONTENT_1";
	}
	else if (gameplay::are_strings_equal(sParam0, "CC_M_HS_18") || gameplay::are_strings_equal(sParam0, "CC_M_HS_19") ||
			 gameplay::are_strings_equal(sParam0, "CC_F_HS_18") || gameplay::are_strings_equal(sParam0, "CC_F_HS_19")) {
		return "SHOP_CONTENT_2";
	}
	else if (gameplay::are_strings_equal(sParam0, "CC_F_HS_23")) {
		return "SHOP_CONTENT_4";
	}
	else if (gameplay::are_strings_equal(sParam0, "CC_M_HS_20") || gameplay::are_strings_equal(sParam0, "CC_M_HS_21") ||
			 gameplay::are_strings_equal(sParam0, "CC_F_HS_20") || gameplay::are_strings_equal(sParam0, "CC_F_HS_21")) {
		if (!iParam1) {
			return "SHOP_CONTENT_6";
		}
		else {
			return "SHOP_CONTENT_6b";
		}
	}
	else if (gameplay::are_strings_equal(sParam0, "CC_M_HS_22") || gameplay::are_strings_equal(sParam0, "CC_F_HS_22") ||
			 gameplay::are_strings_equal(sParam0, "CC_MKUP_33")) {
		if (!iParam1) {
			return "SHOP_CONTENT_8";
		}
		else {
			return "SHOP_CONTENT_8b";
		}
	}
	iVar1 = gameplay::get_hash_key(sParam0);
	switch (iVar1) {
	case 1174717920:
	case 935831910:
	case 716312379:
	case -1690636213:
	case 484275090:
	case 245552925:
	case 7912137:
	case -228516198:
	case -1323361481:
	case 534607938:
	case 278944200:
	case -152361378:
	case 1387912810:
	case 873636124:
	case 641729911:
	case -1737561645:
	case 395339800:
	case 165072037:
	case 2109485850:
	case 1851888741:
	case -1238981638:
	case -1478883487:
	case -646157659:
	case -885600742:
	case -295955352:
	case 1481173056:
	case 310369455:
	case -37965015:
	case 118605023:
	case 360407474: return "SHOP_CONTENT_16";
	}
	return "";
}

// Position - 0x3D960
bool func_322(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (gameplay::are_strings_equal(sParam0, "TAT_BUS_012") ||
			gameplay::are_strings_equal(sParam0, "TAT_BUS_013") ||
			gameplay::are_strings_equal(sParam0, "TAT_BUS_F_014") ||
			gameplay::are_strings_equal(sParam0, "TAT_BUS_F_015")) {
			return true;
		}
	}
	return false;
}

// Position - 0x3D9B4
void func_323(var *uParam0) { *uParam0 = {Global_17290.f_4562}; }

// Position - 0x3D9C8
bool func_324(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 480) {
		iVar1 = iParam0;
		iVar0 = 3112 + iVar1;
	}
	else {
		iVar1 = iParam0 - 480;
		iVar0 = 6029 + iVar1;
	}
	return func_509(iVar0, iParam1, -1);
}

// Position - 0x3DA00
void func_325(int iParam0, char *sParam1, int iParam2) {
	char *sVar0;

	sVar0 = controls::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	gameplay::clear_bit(&Global_17290.f_4922, Global_17290.f_4639);
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = 353;
	Global_17290.f_4909[Global_17290.f_4639] = iParam0;
	Global_17290.f_4639++;
}

// Position - 0x3DAB0
void func_326(var *uParam0) {
	int iVar0;

	if (network::network_is_game_in_progress() && !Global_91543.f_1457) {
		iVar0 = 0;
		switch (func_310(uParam0->f_6)) {
		case 4:
		case 5:
			if (Global_262145.f_16758 || func_328(uParam0->f_6, uParam0->f_7)) {
				iVar0 = 1;
			}
			break;

		case 0: iVar0 = Global_262145.f_16759; break;

		case 2: iVar0 = Global_262145.f_16760; break;

		case 3: iVar0 = Global_262145.f_16761; break;

		case 1: iVar0 = Global_262145.f_16762; break;
		}
		if (!iVar0) {
			if (gameplay::is_orbis_version()) {
				func_327(204, "ITEM_PSSTORE", -1);
			}
			else if (gameplay::is_durango_version()) {
				func_327(204, "ITEM_MARKET", -1);
			}
			else if (gameplay::is_pc_version()) {
				func_329(204, "ITEM_STORE", -1, 0);
			}
		}
		uParam0->f_2 = network::network_is_signed_online();
		uParam0->f_4 = func_311();
	}
}

// Position - 0x3DBA5
void func_327(int iParam0, char *sParam1, int iParam2) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	gameplay::clear_bit(&Global_17290.f_4922, Global_17290.f_4639);
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0x3DC54
int func_328(int iParam0, int iParam1) {
	if (iParam0 == 45) {
		if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3DC83
void func_329(int iParam0, char *sParam1, int iParam2, int iParam3) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	if (!iParam3) {
		gameplay::set_bit(&Global_17290.f_4922, Global_17290.f_4639);
	}
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0x3DD38
void func_330(int iParam0) {
	int iVar0;
	int iVar1;

	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17290.f_4922 = 0;
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	if (gameplay::is_pc_version()) {
		if (!func_158(&iVar1, 0, iParam0)) {
			return;
		}
		graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x3DDE0
void func_331() {
	var *uVar0;
	int iVar4;
	int iVar5;
	var *uVar6;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar27;
	char *sVar28;
	int iVar44;
	char *sVar45;
	var *uVar58;
	char *sVar62;
	var *uVar66;
	int iVar70;
	int iVar71;
	char cVar72[16];

	if (Local_136.f_106.f_31 == 6) {
	}
	else if (Local_136.f_106.f_5 == 0) {
		func_323(&uVar0);
		if (gameplay::get_hash_key(&uVar0) == 0) {
			if (Local_136.f_106.f_3 != -1) {
				iVar4 = 7;
				iVar5 = -1;
				func_258(Local_136.f_106.f_3, &iVar4, &iVar5, 0, 0);
				if (!func_362(iVar4, iVar5)) {
					func_447("TAT_UNLOCK_M", 0, 0);
				}
			}
		}
	}
	else if (!func_458(Local_136.f_460, "")) {
		func_323(&uVar6);
		if (gameplay::get_hash_key(&uVar6) == 0) {
			if (network::network_is_game_in_progress()) {
				switch (Local_136.f_460) {
				case 13:
				case 14:
				case 15:
				case 16:
					if (func_361(player::player_id())) {
						func_447("TAT_CREW", 0, 0);
					}
					else {
						func_447("TAT_CREWT", 0, 0);
					}
					func_360(32);
					break;

				case 9: func_447("TAT_RANK1", 0, 0); break;

				case 10: func_447("TAT_RANK2", 0, 0); break;

				case 11: func_447("TAT_RANK3", 0, 0); break;

				case 0: func_447("TAT_RHB", 0, 0); break;

				case 1: func_447("TAT_RDM", 0, 0); break;

				case 2: func_447("TAT_RGR", 0, 0); break;

				case 3: func_447("TAT_RHU", 0, 0); break;

				case 4: func_447("TAT_RFM", 0, 0); break;

				case 54: func_447("TAT_RAL", 0, 0); break;

				case 5: func_447("TAT_RBH", 0, 0); break;

				case 6: func_447("TAT_RWR", 0, 0); break;

				case 55: func_447("TAT_RSU", 0, 0); break;

				case 7: func_447("TAT_RRK", 0, 0); break;

				case 8: func_447("TAT_RRD", 0, 0); break;

				case 56: func_447("TAT_RKC", 0, 0); break;

				case 12: func_447("TAT_RTC", 0, 0); break;

				case 57: func_447("TAT_HU1", 0, 0); break;

				case 58: func_447("TAT_HU2", 0, 0); break;

				case 59: func_447("TAT_HU3", 0, 0); break;

				case 60: func_447("TAT_HU4", 0, 0); break;

				case 34:
				case 45:
				case 65:
				case 48:
				case 49:
				case 46:
				case 25: func_447(func_359(Local_136.f_460, func_148(player::player_ped_id())), 0, 0); break;

				default:
					if (func_35(&Var14, Local_136.f_460, func_148(player::player_ped_id()), player::player_ped_id(),
								-1)) {
						Var10 = {Var14};
					}
					if (func_322(&Var10)) {
						if (func_361(player::player_id())) {
							func_447("TAT_CREW", 0, 0);
						}
						else {
							func_447("TAT_CREWT", 0, 0);
						}
						func_360(32);
					}
					else {
						bVar27 = false;
						if (network::network_is_game_in_progress() && func_357()) {
							func_356(&sVar28, Var10, entity::get_entity_model(player::player_ped_id()), 2, 0, 0, -1, -1,
									 0);
							if (!mobile::_network_shop_is_item_unlocked(&sVar28)) {
								bVar27 = true;
							}
						}
						if (bVar27) {
							func_447("TAT_LCKPC", 0, 0);
						}
						else {
							iVar44 = func_355(Local_136.f_460);
							if (iVar44 > 0) {
								func_447("TAT_UNLOCK", 0, 0);
								func_360(iVar44);
							}
							else {
								func_447("TAT_UNLOCK", 0, 0);
							}
						}
					}
					break;
				}
			}
		}
	}
	else if (func_35(&sVar45, Local_136.f_460, func_148(player::player_ped_id()), player::player_ped_id(), -1)) {
		if (!func_459(Local_136.f_460)) {
			func_323(&uVar58);
			if (gameplay::get_hash_key(&uVar58) == 0) {
				if (network::network_is_game_in_progress() && Local_136.f_460 >= 129 && !func_322(&sVar45)) {
					if (func_354(&sVar45, &sVar62)) {
						func_447(&sVar62, 4000, 0);
					}
					else if (func_320(&sVar45)) {
						func_447("SHOP_UNLOCKDLC", 4000, 0);
						func_319(func_321(&sVar45, 0));
					}
					else if (func_318(&sVar45)) {
						func_447("SHOP_UNLOCKDLC3", 4000, 0);
						func_319(func_321(&sVar45, 0));
					}
					else if (func_317(&sVar45)) {
						func_447("SHOP_UNLOCKDLC4", 4000, 0);
						func_319(func_321(&sVar45, 0));
					}
					else if (func_316(&sVar45)) {
						func_447("SHOP_UNLOCKDLC6", 4000, 0);
						func_319(func_321(&sVar45, 0));
					}
					else if (func_315(&sVar45)) {
						func_447("SHOP_UNLOCKDLC7", 4000, 0);
					}
					else {
						func_447("SHOP_UNLOCKDLC2", 4000, 0);
						func_319(func_321(&sVar45, 1));
					}
				}
				else {
					func_447("TAT_UNLOCK_N", 4000, 0);
				}
			}
		}
		else if (func_332() != 0) {
			func_323(&uVar66);
			if (gameplay::get_hash_key(&uVar66) == 0) {
				func_447("TAT_DISC", 0, 0);
				func_360(func_332());
			}
		}
		iVar70 = 7;
		iVar71 = -1;
		func_258(Local_136.f_106.f_3, &iVar70, &iVar71, 0, 0);
		StringCopy(&cVar72, "", 16);
		func_314(&cVar72);
		if (gameplay::get_hash_key(&cVar72) == 0 && func_313(Local_136.f_460, &sVar45, iVar70, iVar71)) {
			func_312("TAT_SALE", 0, 0);
		}
	}
}

// Position - 0x3E309
int func_332() {
	int iVar0;

	iVar0 = 0;
	if (network::network_is_game_in_progress()) {
		if (func_333()) {
			iVar0 += Global_262145.f_121;
		}
	}
	return iVar0;
}

// Position - 0x3E32F
bool func_333() {
	int iVar0;
	int iVar1;
	float fVar2;

	if (gameplay::is_pc_version()) {
		return false;
	}
	if (func_351()) {
		if (func_337()) {
			iVar0 = func_335();
			iVar1 = func_334();
			fVar2 = system::to_float(iVar1) / system::to_float(iVar0) * 100f;
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3E38D
int func_334() {
	int iVar0;

	iVar0 += Global_1363164;
	iVar0 += Global_1363167;
	return iVar0;
}

// Position - 0x3E3A9
int func_335() {
	int iVar0;

	iVar0 += Global_1363165;
	iVar0 += Global_1363166;
	iVar0 += Global_1363164;
	iVar0 += Global_1363167;
	iVar0 += Global_1363169;
	iVar0 += Global_1363168;
	iVar0 += func_336(joaat("mpply_exploits"));
	iVar0 += func_336(joaat("mpply_vc_annoyingme"));
	iVar0 += func_336(joaat("mpply_vc_hate"));
	iVar0 += func_336(joaat("mpply_bad_crew_name"));
	iVar0 += func_336(joaat("mpply_bad_crew_motto"));
	iVar0 += func_336(joaat("mpply_bad_crew_status"));
	iVar0 += func_336(joaat("mpply_bad_crew_emblem"));
	iVar0 += func_336(joaat("mpply_playermade_title"));
	iVar0 += func_336(joaat("mpply_playermade_desc"));
	return iVar0;
}

// Position - 0x3E467
int func_336(int iParam0) {
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x3E485
bool func_337() {
	struct<7> Var0;
	struct<7> Var7;

	time::get_posix_time(&Var0, &Var0.f_1, &Var0.f_2, &Var0.f_3, &Var0.f_4, &Var0.f_5);
	Var7 = {func_350(joaat("mpply_started_mp"))};
	if (func_338(Var7, Var0, 7)) {
		return true;
	}
	return false;
}

// Position - 0x3E4C9
bool func_338(struct<7> Param0, struct<7> Param7, int iParam14) {
	int iVar0;
	int iVar1;

	iVar0 = func_348(Param7);
	iVar1 = func_344(Param0, iParam14);
	if (iVar1 == -15) {
		return false;
	}
	if (func_339(iVar0, iVar1) == 1) {
		return true;
	}
	return false;
}

// Position - 0x3E504
int func_339(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_343(iParam1) || !func_343(iParam0)) {
		return 1;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_342(iParam0);
	iVar1 = func_342(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_341(iParam0);
	iVar1 = func_341(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	return 0;
}

// Position - 0x3E610
int func_340(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x3E623
int func_341(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x3E636
int func_342(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x3E648
int func_343(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_340(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_341(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_220(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_226(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_342(iParam0);
	if (iVar5 < 1 || iVar5 > func_225(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x3E724
var func_344(struct<7> Param0, int iParam7) {
	var uVar0;
	int *iVar1;
	var uVar2;

	if (func_347(Param0) == 0) {
		uVar0 = func_348(Param0);
		iVar1 = uVar0;
		func_345(&iVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0) {
			iVar1 = uVar0;
		}
		return iVar1;
	}
	return uVar2;
}

// Position - 0x3E764
void func_345(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_226(*iParam0);
	iVar1 = func_228(*iParam0);
	iVar2 = func_342(*iParam0);
	iVar3 = func_220(*iParam0);
	iVar4 = func_341(*iParam0);
	iVar5 = func_340(*iParam0);
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
	iVar6 = func_225(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_225(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_346(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x3E8E6
void func_346(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_231(iParam0, iParam1);
	func_230(iParam0, iParam2);
	func_229(iParam0, iParam3);
	func_223(iParam0, iParam5);
	func_224(iParam0, iParam4);
	func_222(iParam0, iParam6);
}

// Position - 0x3E91E
int func_347(struct<7> Param0) {
	if (Param0 == 0 && Param0.f_1 == 0 && Param0.f_2 == 0 && Param0.f_3 == 0 && Param0.f_4 == 0 && Param0.f_5 == 0 &&
		Param0.f_6 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x3E974
var func_348(struct<6> Param0, var uParam6) {
	int *iVar0;

	if (Param0 > 0) {
		func_222(&iVar0, Param0);
	}
	if (Param0.f_1 > 0) {
		func_223(&iVar0, func_349(Param0.f_1));
	}
	if (Param0.f_2 > 0) {
		func_224(&iVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0) {
		func_229(&iVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0) {
		func_230(&iVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0) {
		func_231(&iVar0, Param0.f_5);
	}
	return iVar0;
}

// Position - 0x3E9EA
int func_349(int iParam0) {
	if (iParam0 < 1) {
		return 0;
	}
	if (iParam0 > 12) {
		return 0;
	}
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

	case 10: return 9;

	case 11: return 10;

	case 12: return 11;
	}
	return 0;
}

// Position - 0x3EAAF
struct<7> func_350(int iParam0) {
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;

	uVar0 = iParam0;
	if (stats::stat_get_date(uVar0, &Var8, 7, -1)) {
		return Var8;
	}
	return Var1;
}

//Position - 0x3EAD3
bool func_351()
{
	if (func_353() && func_352(0)) {
		return true;
	}
	return false;
}

// Position - 0x3EAF1
var func_352(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x3EB01
var func_353() { return func_352(func_18() + 1); }

// Position - 0x3EB13
bool func_354(char *sParam0, char *sParam1) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return false;
	}
	iVar0 = gameplay::get_hash_key(sParam0);
	StringCopy(sParam1, "", 16);
	switch (iVar0) {
	case -254743660:
	case -504148519:
	case -1729856159:
	case 531303152:
	case 1629732254:
	case 1924108767:
	case 603600547:
	case -1599080941: StringCopy(sParam1, "CLO_BRAND_TOUR", 16); break;

	case 1450518601:
	case 2141256344:
	case 1658831126:
	case 1322653955:
	case 919562486:
	case -586304140:
	case -1923085975:
	case 2139123114:
	case 865261012:
	case 1448778591:
	case 1207107220:
	case 1601088919:
	case 721191542:
	case 1563125459:
	case -2011579213:
	case -278754493:
	case 563376038:
	case 184369784:
	case 841619717:
	case 1164164984:
	case -1911729970:
	case 2067639087:
	case -910964710:
	case -604410715: StringCopy(sParam1, "CLO_BRAND_EVENT", 16); break;

	case -902522358:
	case -1534144833:
	case 1380690490:
	case -2130638940:
	case -1362631887:
	case 1809800545:
	case 430455028:
	case 1181454970:
	case 1982755327:
	case 69307871:
	case -256272621:
	case 511406742:
	case 340024872:
	case 902799678:
	case 892927531:
	case 528208561:
	case 1376106436:
	case 979339384:
	case 1284254933:
	case 920453495:
	case 1762846178:
	case -1787216206:
	case 2141655822:
	case -1307117587:
	case -438549866:
	case -481739408:
	case 1672986187:
	case 1376066278:
	case 14294258:
	case -963172243:
	case 372688811:
	case 1810625300:
	case 1237692104:
	case 259176995:
	case 1529631125:
	case -2114412811:
	case -1876083874:
	case -1770895384:
	case -163970345:
	case 133408330:
	case 1508723288:
	case 1815342821:
	case -929851004:
	case 375141656:
	case 604491887:
	case 1941532625:
	case 27069338:
	case 1330358006:
	case 1559839313:
	case 1402285957:
	case 1634061094:
	case -1354340630:
	case 1976347623:
	case 1736380236:
	case -478935244:
	case -856958428: StringCopy(sParam1, "CLO_BRAND_EVENT", 16); break;

	case -418887148:
	case 366454706:
	case 60687167:
	case 775182443:
	case -1375807486:
	case -591383164:
	case -897412855:
	case -111219007:
	case -1351208589:
	case -2078483775:
	case -1998855105:
	case 1466433880:
	case 1849569028:
	case 992299215:
	case 674833163:
	case -1016433282:
	case -1649792514:
	case -506088876:
	case -736684329:
	case -1771791505:
	case -2009137368:
	case -1463271370:
	case -1694522203:
	case 1057298604:
	case 1897856223:
	case 1653104562:
	case 196653588:
	case -32827719:
	case 389105925:
	case -914477664: StringCopy(sParam1, "CLO_BRAND_EVENT", 16); break;

	case -914040210:
	case 416383996:
	case 868524699:
	case 649692093:
	case -2141407486:
	case -1975203118:
	case -206758447:
	case -248209:
	case 1364777211:
	case 1668775224:
	case -1527054226:
	case -1196120095:
	case 160909733:
	case -2111578974:
	case -891228645:
	case 1588663741:
	case -1162359411:
	case -1467143880:
	case 1569493816:
	case -884445522:
	case -232178577:
	case -512582910:
	case -1767373458: StringCopy(sParam1, "CLO_BRAND_AWARD", 16); break;

	case 1363073245:
	case -273286091: StringCopy(sParam1, "CLO_BRAND_EXCL", 16); break;

	case -150388564:
	case -1086023379: StringCopy(sParam1, "CLO_BRAND_DCTL", 16); break;
	}
	return !gameplay::is_string_null_or_empty(sParam1);
}

// Position - 0x3EEF8
int func_355(int iParam0) {
	switch (iParam0) {
	case 17:
	case 19:
	case 22:
	case 27:
	case 62:
	case 63:
	case 29:
	case 30:
	case 33:
	case 68:
	case 47:
	case 51: return 0;

	case 18: return 3;

	case 35: return 12;

	case 20: return 15;

	case 32: return 18;

	case 70: return 21;

	case 23: return 24;

	case 37: return 27;

	case 61: return 30;

	case 21: return 33;

	case 36: return 36;

	case 67: return 39;

	case 38: return 42;

	case 40: return 45;

	case 41: return 48;

	case 28: return 51;

	case 69: return 84;

	case 43: return 54;

	case 42: return 57;

	case 26: return 6;

	case 39: return 60;

	case 64: return 63;

	case 50: return 66;

	case 53: return 69;

	case 31: return 72;

	case 52: return 75;

	case 44: return 78;

	case 24: return 81;

	case 66: return 9;
	}
	return 0;
}

// Position - 0x3F0DD
void func_356(char *sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11) {
	switch (gameplay::get_hash_key(&cParam1)) {
	case 64715401:
	case -2016195117: StringCopy(&cParam1, "GSA_TYPE_R", 16); break;

	case -414529079:
	case -1253005183: StringCopy(&cParam1, "GSA_TYPE_C", 16); break;

	case 336264847:
	case -1119195824: StringCopy(&cParam1, "GSA_TYPE_RO", 16); break;

	case 531395379:
	case -672224483: StringCopy(&cParam1, "GSA_TYPE_CH", 16); break;

	case 1034118160:
	case 600999375: StringCopy(&cParam1, "GSA_TYPE_G", 16); break;

	case -218834291:
	case -859056265: StringCopy(&cParam1, "GSA_TYPE_B", 16); break;

	case 1779531303:
	case 82051787: StringCopy(&cParam1, "GSA_TYPE_FW", 16); break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6) {
	case 0:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_HA_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 1:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_CL_", 64);
		if (iParam7 == 12) {
			StringConCat(sParam0, "OUTFIT_", 64);
		}
		StringConCat(sParam0, &cParam1, 64);
		if (iParam9 != -1) {
			StringConCat(sParam0, "_n", 64);
			StringIntConCat(sParam0, iParam9, 64);
		}
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 2:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_TA_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 3:
		StringConCat(sParam0, "WP_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 4:
		if (iParam5 == Global_68114) {
			StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		}
		else if (iParam5 == 0) {
			StringConCat(sParam0, "VEM_", 64);
			if (iParam7 == 24 || iParam7 == 25) {
				if (iParam9 == 1) {
					StringConCat(sParam0, "COLOUR_1_", 64);
				}
				else if (iParam9 == 2) {
					StringConCat(sParam0, "COLOUR_2_", 64);
				}
				else if (iParam9 == 3) {
					StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
				}
				if (iParam10 == 5) {
					StringConCat(sParam0, "MCT_CHROME_", 64);
				}
				else if (iParam10 == 1) {
					StringConCat(sParam0, "MCT_CLASSIC_", 64);
				}
				else if (iParam10 == 0) {
					StringConCat(sParam0, "MCT_METALLIC_", 64);
				}
				else if (iParam10 == 4) {
					StringConCat(sParam0, "MCT_METALS_", 64);
				}
				else if (iParam10 == 3) {
					StringConCat(sParam0, "MCT_MATTE_", 64);
				}
				else if (iParam10 == 2) {
					StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
				}
				else if (iParam10 == 6) {
					StringConCat(sParam0, "MCT_NONE_", 64);
				}
				iParam9 = -1;
			}
			else if (iParam7 == 38) {
				StringConCat(sParam0, "COLOUR_5_", 64);
			}
			else if (iParam7 == 65) {
				StringConCat(sParam0, "COLOUR_6_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1) {
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		else if (iParam7 == 22) {
			StringCopy(&cParam1, vehicle::get_display_name_from_vehicle_model(iParam5), 16);
			if (gameplay::is_string_null_or_empty(&cParam1) || gameplay::get_hash_key(&cParam1) == -515263000) {
				return;
			}
			StringConCat(sParam0, "VEM_INSURANCE_", 64);
			StringConCat(sParam0, &cParam1, 64);
			if (!iParam11) {
				switch (iParam5) {
				case joaat("dubsta2"):
				case joaat("cavalcade2"):
				case joaat("mesa2"):
				case joaat("rapidgt2"):
				case joaat("emperor2"): StringConCat(sParam0, "2", 64); break;

				case joaat("mesa3"):
				case joaat("emperor3"):
				case joaat("burrito3"):
				case joaat("mule3"): StringConCat(sParam0, "3", 64); break;

				case joaat("tornado4"): StringConCat(sParam0, "4", 64); break;
				}
			}
		}
		else if (iParam7 == 40) {
			if (iParam5 == joaat("fcr2")) {
				StringCopy(&cParam1, "FCR2", 16);
			}
			else if (iParam5 == joaat("diablous2")) {
				StringCopy(&cParam1, "DIABLOUS2", 16);
			}
			else if (iParam5 == joaat("comet3")) {
				StringCopy(&cParam1, "COMET3", 16);
			}
			else {
				StringCopy(&cParam1, vehicle::get_display_name_from_vehicle_model(iParam5), 16);
				if (gameplay::is_string_null_or_empty(&cParam1)) {
					return;
				}
			}
			StringConCat(sParam0, "VEU_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t0_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		else {
			StringConCat(sParam0, "VE_", 64);
			StringConCat(sParam0, &cParam1, 64);
			if (!iParam11) {
				switch (iParam5) {
				case joaat("dubsta2"):
				case joaat("cavalcade2"):
				case joaat("mesa2"):
				case joaat("rapidgt2"):
				case joaat("emperor2"): StringConCat(sParam0, "2", 64); break;

				case joaat("mesa3"):
				case joaat("emperor3"):
				case joaat("burrito3"):
				case joaat("mule3"): StringConCat(sParam0, "3", 64); break;

				case joaat("tornado4"): StringConCat(sParam0, "4", 64); break;
				}
			}
			if (iParam9 != -1) {
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		break;
	}
}

// Position - 0x3F612
bool func_357() {
	if (network::network_is_game_in_progress() && func_358()) {
		return true;
	}
	return false;
}

// Position - 0x3F62F
bool func_358() {
	if (gameplay::is_pc_version()) {
		return true;
	}
	return false;
}

// Position - 0x3F643
char *func_359(int iParam0, int iParam1) {
	char *sVar0;

	sVar0 = "";
	if (iParam0 == iParam0) {
	}
	if (iParam1 == iParam1) {
	}
	switch (iParam0) {
	case 7: return "TAT_FM_REVENKIL_D";

	case 6: return "TAT_FM_RECHOLD_d";

	case 8: return "TAT_FM_KIL3RACE_D";

	case 5: return "TAT_FM_KILb_D";

	case 0: return "TAT_FM_HEADBANG_D";

	case 12: return "TAT_RACE50_D";

	case 2: return "TAT_CLEAROUT_D";

	case 9: return "TAT_FM_RANK1_D";

	case 10: return "TAT_FM_RANK2_D";

	case 11: return "TAT_FM_RANK3_D";

	case 4: return "TAT_FM_HUST_D";

	case 1: return "TAT_FM_SLAY_D";

	case 54: return "TAT_FM_EVERMODE1_D";

	case 3: return "TAT_FM_ARVANTAKE_D";

	case 56: return "TAT_CHEATER_D";

	case 13: return "TAT_CRANKA_D";

	case 14: return "TAT_CRANKB_D";

	case 15: return "TAT_CRANKC_D";

	case 16: return "TAT_CRANKD_D";

	case 89: return "TAT_FM_ROCKSTAR_D";

	case 88: return "TAT_FM_BELLE_D";

	case 87: return "TAT_FM_REDSKULL_D";

	case 55: return "TAT_FM_MODDED_D";
	}
	switch (iParam0) {
	case 17: return "TAT_RANK10_D";

	case 18: return "TAT_RANK20_D";

	case 19: return "TAT_RANK20_D";

	case 20: return "TAT_RANK10_D";

	case 21: return "TAT_RANK20_D";

	case 22: return "TAT_RANK10_D";

	case 23: return "TAT_RANK10_D";

	case 24: return "TAT_RANK20_D";

	case 25: return "TAT_TAT9U";

	case 26: return "TAT_RANK20_D";

	case 27: return "TAT_RANK20_D";

	case 28: return "TAT_RANK10_D";

	case 61: return "TAT_RANK10_D";

	case 62: return "TAT_RANK10_D";

	case 63: return "TAT_RANK10_D";

	case 64: return "TAT_RANK10_D";

	case 65: return "TAT_TAT17U";

	case 29: return "TAT_RANK10_D";

	case 30: return "TAT_RANK10_D";

	case 31: return "TAT_RANK10_D";

	case 66: return "TAT_RANK20_D";

	case 32: return "TAT_RANK20_D";

	case 33: return "TAT_RANK20_D";

	case 34: return "TAT_TAT24U";

	case 35: return "TAT_RANK20_D";

	case 36: return "TAT_RANK20_D";

	case 37: return "TAT_RANK20_D";

	case 38: return "TAT_RANK20_D";

	case 39: return "TAT_RANK20_D";

	case 40: return "TAT_RANK20_D";

	case 67: return "TAT_RANK20_D";

	case 41: return "TAT_RANK20_D";

	case 68: return "TAT_RANK20_D";

	case 42: return "TAT_RANK20_D";

	case 43: return "TAT_RANK20_D";

	case 44: return "TAT_RANK20_D";

	case 45: return "TAT_TAT37U";

	case 46: return "TAT_TAT38U";

	case 47: return "TAT_RANK20_D";

	case 48: return "TAT_TAT40U";

	case 49: return "TAT_TAT41U";

	case 50: return "TAT_RANK20_D";

	case 51: return "TAT_RANK20_D";

	case 52: return "TAT_RANK20_D";

	case 53: return "TAT_RANK20_D";

	case 69: return "TAT_RANK20_D";

	case 57: return "TAT_HOLDUP1V_D";

	case 58: return "TAT_HOLDUP5V_D";

	case 59: return "TAT_HOLDUP10V_D";

	case 60: return "TAT_HOLDUP20V_D";
	}
	return sVar0;
}

// Position - 0x3FAFE
void func_360(int iParam0) {
	if (Global_17290.f_4633 >= 3 || Global_17290.f_4632 >= 4) {
		return;
	}
	Global_17290.f_4566[Global_17290.f_4632] = 2;
	Global_17290.f_4632++;
	Global_17290.f_4571[Global_17290.f_4633] = iParam0;
	Global_17290.f_4633++;
}

// Position - 0x3FB5D
bool func_361(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 22); }

// Position - 0x3FB76
int func_362(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<8> Var20;
	int iVar35;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar15 = entity::get_entity_model(player::player_ped_id());
		iVar16 = func_148(player::player_ped_id());
		if (network::network_is_game_in_progress()) {
			iVar19 = dlc1::_get_num_decorations(iVar16);
			iVar18 = 0;
			while (iVar18 < iVar19) {
				if (dlc1::_0xFF56381874F82086(iVar16, iVar18, &Var20) && !func_368(Var20.f_2, Var20.f_3) &&
					Var20.f_6 != 2140335355 && Var20.f_6 != 277073536) {
					if (!dlc1::_is_dlc_data_empty(Var20)) {
						if (ped::_get_tattoo_zone(Var20.f_2, Var20.f_3) == iParam0 &&
							func_367(iVar15, &Var20.f_7, Var20.f_6, iParam0, iParam1)) {
							iVar35 = 129 + iVar18;
							if (!func_366(iVar35, iVar16) && func_365(iVar35, iVar16) && !func_459(iVar35)) {
								return 0;
							}
						}
					}
				}
				iVar18++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			iVar1 = 0;
			while (iVar1 < 32) {
				iVar17 = func_44(iVar0, iVar1);
				if (func_35(&Var2, func_44(iVar0, iVar1), iVar16, player::player_ped_id(), -1)) {
					if (!func_366(iVar17, iVar16) && !func_365(iVar17, iVar16) && Var2.f_8 != 2140335355 &&
						Var2.f_8 != 277073536) {
						if (func_363(Var2.f_11) && !func_459(Var2.f_11)) {
							if (ped::_get_tattoo_zone(Var2.f_4, Var2.f_5) == iParam0 &&
								func_367(iVar15, &Var2, Var2.f_8, iParam0, iParam1)) {
								return 0;
							}
						}
					}
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return 1;
}

// Position - 0x3FD24
bool func_363(int iParam0) {
	if (network::network_is_game_in_progress() && iParam0 >= 129) {
		return true;
	}
	if (network::network_is_game_in_progress()) {
		return func_113(iParam0, -1);
	}
	else {
		return func_364(func_213(), iParam0);
	}
	return false;
}

// Position - 0x3FD63
int func_364(int iParam0, int iParam1) {
	struct<11> Var0;

	if (func_45(iParam0)) {
		if (iParam0 == 0) {
			if (iParam1 >= 21) {
				return 1;
			}
		}
		else if (iParam0 == 1) {
			if (iParam1 >= 40) {
				return 1;
			}
		}
		else if (iParam0 == 2) {
			if (iParam1 >= 34) {
				return 1;
			}
		}
		if (func_35(&Var0, iParam1, func_43(iParam0), 0, -1)) {
			return gameplay::is_bit_set(Global_101700.f_2095.f_493[iParam0 /*15*/][Var0.f_9], Var0.f_10);
		}
	}
	return 0;
}

// Position - 0x3FDE0
int func_365(int iParam0, int iParam1) {
	return (iParam1 == 3 || iParam1 == 4) && iParam0 >= 129;
	if (iParam1 == iParam1 && iParam0 == iParam0) {
	}
	return 0;
}

// Position - 0x3FE16
int func_366(int iParam0, int iParam1) {
	switch (iParam1) {
	case 3:
	case 4:
		switch (iParam0) {
		case 13:
		case 14:
		case 15:
		case 16:
		case 71:
		case 72: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x3FE67
int func_367(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam3 == 7) {
		return 0;
	}
	if (iParam3 == 0) {
		if (iParam4 == -1) {
			return 0;
		}
		if (!network::network_is_game_in_progress()) {
			if (iParam4 == 0) {
				return 1;
			}
			return 0;
		}
		iVar0 = func_52(iParam0, sParam1, iParam2);
		switch (iVar0) {
		case -1: return 0;

		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			if (iParam4 == 0) {
				return 1;
			}
			return 0;

		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
			if (iParam4 == 1) {
				return 1;
			}
			return 0;

		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 45:
		case 46:
			if (iParam4 == 2) {
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (iParam4 != -1) {
		return 0;
	}
	return 1;
}

// Position - 0x3FFB8
int func_368(int iParam0, int iParam1) {
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	switch (iParam0) {
	case -240234547:
		switch (iParam1) {
		case 769964545:
		case 1916093085:
			if (func_509(9366, -1, -1)) {
				return 0;
			}
			if (iParam1 == 769964545) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1424500982:
		case -701486200:
			if (func_509(9367, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1424500982) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1810785185:
		case 1951718630:
			if (func_509(9369, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1810785185) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 837990279:
		case -1981978861:
			if (func_509(9368, -1, -1)) {
				return 0;
			}
			if (iParam1 == 837990279) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1752551314:
		case 468661890:
			if (func_509(9365, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1752551314) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 735155845:
		case 1907925586:
			if (func_509(9364, -1, -1)) {
				return 0;
			}
			if (iParam1 == 735155845) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1863251462:
		case 646243571:
			if (func_509(9363, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1863251462) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -2142058763:
		case 1953935161:
			if (func_509(9362, -1, -1)) {
				return 0;
			}
			if (iParam1 == -2142058763) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -207591105:
		case 874867224:
			if (func_509(9370, -1, -1)) {
				return 0;
			}
			if (iParam1 == -207591105) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -932813887:
		case 1344008898:
			if (func_509(9371, -1, -1)) {
				return 0;
			}
			if (iParam1 == -932813887) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -313503199:
		case 1297781304:
			if (func_509(9372, -1, -1)) {
				return 0;
			}
			if (iParam1 == -313503199) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 718936417:
		case 1977233252:
			if (func_509(9373, -1, -1)) {
				return 0;
			}
			if (iParam1 == 718936417) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1107649605:
		case -194410344:
			if (func_509(9374, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1107649605) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 39090475:
		case 392012609:
			if (func_509(9384, -1, -1)) {
				return 0;
			}
			if (iParam1 == 39090475) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1628251208:
		case 705148450:
			if (func_509(9385, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1628251208) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;
		}
		break;

	case -1194930348:
		switch (iParam1) {
		case -621355603:
		case -46521805:
			if (func_509(7551, -1, -1) || func_16(3761, -1, 0) >= Global_262145.f_14428) {
				return 0;
			}
			if (iParam1 == -621355603) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1006202521:
		case -1549217620:
			if (func_509(7467, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1006202521) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1834049539:
		case 1674429052:
			if (func_509(7468, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1834049539) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -2060372580:
		case -254669596:
			if (func_509(7469, -1, -1)) {
				return 0;
			}
			if (iParam1 == -2060372580) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1057304170:
		case 1802602254:
			if (func_509(7470, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1057304170) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1421572640:
		case -941072260:
			if (func_509(7471, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1421572640) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 481259621:
		case -1844749517:
			if (func_509(7472, -1, -1)) {
				return 0;
			}
			if (iParam1 == 481259621) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1227497670:
		case 82745424:
			if (func_509(7473, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1227497670) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 319276780:
		case -673460083:
			if (func_509(7474, -1, -1)) {
				return 0;
			}
			if (iParam1 == 319276780) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 2070827921:
		case -99954496:
			if (func_509(7475, -1, -1)) {
				return 0;
			}
			if (iParam1 == 2070827921) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1433629991:
		case 2078163456:
			if (func_509(7476, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1433629991) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1712994650:
		case 1362343227:
			if (func_509(7477, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1712994650) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 2125094286:
		case 1176005743:
			if (func_509(7478, -1, -1)) {
				return 0;
			}
			if (iParam1 == 2125094286) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 712298404:
		case -1504557219:
			if (func_509(7479, -1, -1)) {
				return 0;
			}
			if (iParam1 == 712298404) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1998072324:
		case 367912881:
			if (func_509(7480, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1998072324) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1249206960:
		case -836343280:
			if (func_509(7481, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1249206960) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;
		}
		break;

	case -1907832850:
		switch (iParam1) {
		case 2062186390:
		case 283190173:
			if (func_509(4260, -1, -1)) {
				return 0;
			}
			if (iParam1 == 283190173) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -60867780:
		case 1528527015:
			if (func_509(4257, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1528527015) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 926967912:
		case -1690029966:
			if (func_509(4269, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1690029966) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1886278590:
		case -1685994466:
			if (func_509(4261, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1685994466) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1314959708:
		case 255166927:
			if (func_509(4259, -1, -1)) {
				return 0;
			}
			if (iParam1 == 255166927) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1696774529:
		case -271257487:
			if (func_509(4268, -1, -1)) {
				return 0;
			}
			if (iParam1 == -271257487) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -356446484:
		case 1885215284:
			if (func_509(4265, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1885215284) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 857810380:
		case -1935156988:
			if (func_509(4258, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1935156988) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -629676646:
		case 1061465906:
			if (func_509(4264, -1, -1)) {
				return 0;
			}
			if (iParam1 == 1061465906) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1879530481:
		case -871031729:
			if (func_509(4267, -1, -1)) {
				return 0;
			}
			if (iParam1 == -871031729) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case -1265847311:
		case -101171485:
			if (func_509(4262, -1, -1)) {
				return 0;
			}
			if (iParam1 == -101171485) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 32094424:
		case -1590298770:
			if (func_509(4263, -1, -1)) {
				return 0;
			}
			if (iParam1 == -1590298770) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;

		case 1969286744:
		case 303441856:
			if (func_509(4266, -1, -1)) {
				return 0;
			}
			if (iParam1 == 303441856) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;
		}
		break;

	case 62137527:
		switch (iParam1) {
		case 386581472:
		case 1466454525:
			if (func_16(2913, -1, 0) > 0) {
				return 0;
			}
			return !func_113(func_145(iParam1, 3), -1);

		case 979307144:
		case -473732439:
			if (func_16(2913, -1, 0) > 0) {
				return 0;
			}
			return !func_113(func_145(iParam1, 4), -1);
		}
		break;

	case -1542189594:
		switch (iParam1) {
		case -2049689650:
		case 560620683:
			if (func_509(113, -1, -1)) {
				return 0;
			}
			if (iParam1 == -2049689650) {
				return !func_113(func_145(iParam1, 3), -1);
			}
			else {
				return !func_113(func_145(iParam1, 4), -1);
			}
			break;
		}
		break;

	case -777275782:
		switch (iParam1) {
		case -627999265:
		case 1682346315:
		case 1021952654:
		case 1319396867:
		case 560794517:
		case 858697496:
		case -30981230:
		case -328032215:
		case -1451681225:
		case 267904819:
			if (iParam1 == -627999265) {
				if (func_509(3770, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 1682346315) {
				if (func_509(3771, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 1021952654) {
				if (func_509(3772, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 1319396867) {
				if (func_509(3773, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 560794517) {
				if (func_509(3774, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 858697496) {
				if (func_509(3775, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -30981230) {
				if (func_509(3776, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -328032215) {
				if (func_509(3777, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -1451681225) {
				if (func_509(3778, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 267904819) {
				if (func_509(3779, -1, -1)) {
					return 0;
				}
			}
			return !func_113(func_145(iParam1, 3), -1);

		case -1864998224:
		case -2140814897:
		case 223468453:
		case -83970305:
		case -406843262:
		case -954740942:
		case -1675526854:
		case 2111717556:
		case -415395003:
		case 427521984:
			if (iParam1 == -1864998224) {
				if (func_509(3770, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -2140814897) {
				if (func_509(3771, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 223468453) {
				if (func_509(3772, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -83970305) {
				if (func_509(3773, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -406843262) {
				if (func_509(3774, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -954740942) {
				if (func_509(3775, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -1675526854) {
				if (func_509(3776, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 2111717556) {
				if (func_509(3777, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == -415395003) {
				if (func_509(3778, -1, -1)) {
					return 0;
				}
			}
			else if (iParam1 == 427521984) {
				if (func_509(3779, -1, -1)) {
					return 0;
				}
			}
			return !func_113(func_145(iParam1, 4), -1);

		case -863391184:
		case 671171671:
		case 1675446188:
		case 1911627074:
			if (func_509(3765, -1, -1) && func_509(3766, -1, -1) && func_509(3767, -1, -1) && func_509(3768, -1, -1) &&
				func_509(3769, -1, -1)) {
				return 0;
			}
			return 1;
		}
		break;

	case 243848076:
		switch (iParam1) {
		case 632918673:
		case 1525246127: return !func_509(3593, -1, -1);
		}
		break;

	case -1398869298:
		switch (iParam1) {
		case 1443536758:
		case 1333229624:
		case -1665422117:
		case 1100930183:
		case -1595008258:
		case 94055115:
		case -627896761:
		case 1873477305: return 1;

		case 196632624:
		case -1644428107:
		case 1108198688:
		case 810099095: return 1;

		case 300677115:
		case 262692161:
		case -1684141219:
		case 390655118:
		case -479442624:
		case -542924311:
		case 1696910411:
		case -1259058037: return 1;

		case 1980445908:
		case -1882429354:
		case -1235341889:
		case -1544517404: return 1;

		case -1450406320:
		case 1412653072: return !func_370(152, -1) && !func_509(9440, -1, -1);

		case 210195800:
		case 7463306: return !func_370(151, -1) && !func_509(9430, -1, -1);

		case 953986562: return !func_113(func_145(iParam1, 3), -1) && !func_509(9426, -1, -1);

		case 585335312: return !func_113(func_145(iParam1, 3), -1) && !func_509(9427, -1, -1);

		case 489617063: return !func_113(func_145(iParam1, 3), -1) && !func_509(9428, -1, -1);

		case 1843402776: return !func_113(func_145(iParam1, 3), -1) && !func_509(9431, -1, -1);

		case -1600520821: return !func_113(func_145(iParam1, 3), -1) && !func_509(9432, -1, -1);

		case 1399087889: return !func_113(func_145(iParam1, 3), -1) && !func_509(9433, -1, -1);

		case 1169344430: return !func_113(func_145(iParam1, 3), -1) && !func_509(9439, -1, -1);

		case -2028647818: return !func_113(func_145(iParam1, 3), -1) && !func_509(9434, -1, -1);

		case -1335845620: return !func_113(func_145(iParam1, 3), -1) && !func_509(9435, -1, -1);

		case -1209849091: return !func_113(func_145(iParam1, 3), -1) && !func_509(9436, -1, -1);

		case 2065609077: return !func_113(func_145(iParam1, 3), -1) && !func_509(9429, -1, -1);

		case -664245241: return !func_113(func_145(iParam1, 3), -1) && !func_509(9437, -1, -1);

		case 1531057961: return !func_113(func_145(iParam1, 4), -1) && !func_509(9426, -1, -1);

		case 1986678137: return !func_113(func_145(iParam1, 4), -1) && !func_509(9427, -1, -1);

		case 2142789653: return !func_113(func_145(iParam1, 4), -1) && !func_509(9428, -1, -1);

		case 308053343: return !func_113(func_145(iParam1, 4), -1) && !func_509(9431, -1, -1);

		case 753842819: return !func_113(func_145(iParam1, 4), -1) && !func_509(9432, -1, -1);

		case 1052794406: return !func_113(func_145(iParam1, 4), -1) && !func_509(9433, -1, -1);

		case -695726661: return !func_113(func_145(iParam1, 4), -1) && !func_509(9439, -1, -1);

		case -1001821890: return !func_113(func_145(iParam1, 4), -1) && !func_509(9434, -1, -1);

		case -1425459522: return !func_113(func_145(iParam1, 4), -1) && !func_509(9435, -1, -1);

		case 1163510365: return !func_113(func_145(iParam1, 4), -1) && !func_509(9436, -1, -1);

		case 933242602: return !func_113(func_145(iParam1, 4), -1) && !func_509(9429, -1, -1);

		case -1347021116: return !func_113(func_145(iParam1, 4), -1) && !func_509(9437, -1, -1);

		case 1676130538:
		case -1730534702:
		case -1767432596:
		case 1297354841:
		case -839806574:
		case -542100209: return !func_369();
		}
		break;

	case -1684351737:
		switch (iParam1) {
		case -190040148:
		case -11341151: return !func_509(3608, -1, -1);
		}
		break;

	case -1677471575:
		switch (iParam1) {
		case 42936837:
		case 516055815: return !func_509(3615, -1, -1) && !func_509(9438, -1, -1);
		}
		break;

	case -1056335443:
		if (iParam1 == -963164512) {
			return 1;
		}
		switch (iParam1) {
		case 670952414:
		case -1544625218: return !func_509(3783, -1, -1);

		case -282875325:
		case 1185175875: return !func_509(3784, -1, -1);

		case 2079623104:
		case 155591269: return !func_509(3785, -1, -1);

		case 1088443427:
		case -1057958846: return !func_509(3786, -1, -1);

		case 200001600:
		case -1853795495: return !func_509(3787, -1, -1);

		case 1620729159:
		case -1860485560: return !func_509(3788, -1, -1);

		case -1713274238:
		case 499288642: return !func_509(3789, -1, -1);

		case -1571590969:
		case -7887054: return !func_509(3790, -1, -1);

		case -457639374:
		case -1553041502: return !func_509(3791, -1, -1);

		case 64160805:
		case -1080591445: return !func_509(3792, -1, -1);

		case 776078819:
		case -1303573005:
			if (iParam1 == 776078819) {
				iVar0 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar0, 0)) {
					return 0;
				}
			}
			else if (iParam1 == -1303573005) {
				iVar1 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar1, 18)) {
					return 0;
				}
			}
			return !func_509(3793, -1, -1);

		case -1069464482:
		case 2085207152:
			if (iParam1 == -1069464482) {
				iVar2 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar2, 1)) {
					return 0;
				}
			}
			else if (iParam1 == 2085207152) {
				iVar3 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar3, 19)) {
					return 0;
				}
			}
			return !func_509(3794, -1, -1);

		case -1342875239:
		case 857137150:
			if (iParam1 == -1342875239) {
				iVar4 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar4, 2)) {
					return 0;
				}
			}
			else if (iParam1 == 857137150) {
				iVar5 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar5, 20)) {
					return 0;
				}
			}
			return !func_509(3795, -1, -1);

		case 1967892405:
		case 535952639:
			if (iParam1 == 1967892405) {
				iVar6 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar6, 3)) {
					return 0;
				}
			}
			else if (iParam1 == 535952639) {
				iVar7 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar7, 21)) {
					return 0;
				}
			}
			return !func_509(3796, -1, -1);

		case 642864781:
		case -1974657401:
			if (iParam1 == 642864781) {
				iVar8 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar8, 4)) {
					return 0;
				}
			}
			else if (iParam1 == -1974657401) {
				iVar9 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar9, 22)) {
					return 0;
				}
			}
			return !func_509(3797, -1, -1);

		case 1270860039:
		case 129909013:
			if (iParam1 == 1270860039) {
				iVar10 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar10, 5)) {
					return 0;
				}
			}
			else if (iParam1 == 129909013) {
				iVar11 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar11, 23)) {
					return 0;
				}
			}
			return !func_509(3798, -1, -1);

		case -1290780406:
		case -1499060170:
			if (iParam1 == -1290780406) {
				iVar12 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar12, 6)) {
					return 0;
				}
			}
			else if (iParam1 == -1499060170) {
				iVar13 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar13, 24)) {
					return 0;
				}
			}
			return !func_509(3799, -1, -1);

		case 1127641545:
		case 412032123:
			if (iParam1 == 1127641545) {
				iVar14 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar14, 7)) {
					return 0;
				}
			}
			else if (iParam1 == 412032123) {
				iVar15 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar15, 25)) {
					return 0;
				}
			}
			return !func_509(3800, -1, -1);

		case -1221948530:
		case 915049044:
			if (iParam1 == -1221948530) {
				iVar16 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar16, 8)) {
					return 0;
				}
			}
			else if (iParam1 == 915049044) {
				iVar17 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar17, 26)) {
					return 0;
				}
			}
			return !func_509(3801, -1, -1);

		case 1954153055:
		case 456478679:
			if (iParam1 == 1954153055) {
				iVar18 = func_16(2424, -1, 0);
				if (gameplay::is_bit_set(iVar18, 9)) {
					return 0;
				}
			}
			else if (iParam1 == 456478679) {
				iVar19 = func_16(2404, -1, 0);
				if (gameplay::is_bit_set(iVar19, 27)) {
					return 0;
				}
			}
			return !func_509(3802, -1, -1);
		}
		break;

	case 484754152:
		switch (iParam1) {
		case -588549683:
		case 464027076: return 1;

		case -965491494:
		case 939374190: return 1;
		}
		break;

	case 598190139:
		switch (iParam1) {
		case -1458541976:
		case -606014753:
		case -613376371:
		case -446291501:
		case -1034642040:
		case 1022637316:
		case -1677156418:
		case -1130213300: return !func_39();
		}
		break;
	}
	return 0;
}

// Position - 0x41CC3
bool func_369() { return dlc2::is_dlc_present(-1762644250); }

// Position - 0x41CD4
bool func_370(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x41D00
bool func_371(int iParam0, int *iParam1, int *iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	iVar1 = -1;
	if (network::network_is_game_in_progress()) {
		iVar2 = 713 - 1;
		while (iVar2 >= 0) {
			iVar3 = iVar2 / 32;
			iVar4 = iVar2 % 32;
			if (gameplay::is_bit_set(Local_136.f_436[iVar3], iVar4)) {
				iVar5 = 129 + iVar2;
				if (iParam0 == iVar5 && iVar0 != -1) {
					*iParam2 = iVar0;
					*iParam1 = iVar1;
					return true;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 += -1;
		}
	}
	iVar2 = 71 - 1;
	while (iVar2 >= 0) {
		iVar3 = iVar2 / 32;
		iVar4 = iVar2 % 32;
		if (gameplay::is_bit_set(Local_136.f_431[iVar3], iVar4)) {
			if (iParam0 == func_44(iVar3, iVar4) && iVar0 != -1) {
				*iParam2 = iVar0;
				*iParam1 = iVar1;
				return true;
			}
			iVar0++;
			iVar1 = func_44(iVar3, iVar4);
		}
		iVar2 += -1;
	}
	if (iParam3) {
		return func_372(iParam1, iParam2);
	}
	return false;
}

// Position - 0x41DF6
int func_372(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam1 = -1;
	if (network::network_is_game_in_progress()) {
		iVar0 = 713 - 1;
		while (iVar0 >= 0) {
			iVar1 = iVar0 / 32;
			iVar2 = iVar0 % 32;
			if (gameplay::is_bit_set(Local_136.f_436[iVar1], iVar2)) {
				*iParam1++;
				*iParam0 = 129 + iVar0;
			}
			iVar0 += -1;
		}
	}
	iVar0 = 71 - 1;
	while (iVar0 >= 0) {
		iVar1 = iVar0 / 32;
		iVar2 = iVar0 % 32;
		if (gameplay::is_bit_set(Local_136.f_431[iVar1], iVar2)) {
			*iParam1++;
			*iParam0 = func_44(iVar1, iVar2);
		}
		iVar0 += -1;
	}
	if (*iParam1 == -1) {
		*iParam0 = -1;
		return 0;
	}
	return 1;
}

// Position - 0x41EA7
bool func_373(int iParam0, int *iParam1, int *iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	iVar1 = -1;
	if (network::network_is_game_in_progress()) {
		iVar2 = 713 - 1;
		while (iVar2 >= 0) {
			iVar3 = iVar2 / 32;
			iVar4 = iVar2 % 32;
			if (gameplay::is_bit_set(Local_136.f_436[iVar3], iVar4)) {
				iVar5 = 129 + iVar2;
				if (iParam0 == iVar1) {
					iVar0++;
					iVar1 = iVar5;
					*iParam2 = iVar0;
					*iParam1 = iVar1;
					return true;
				}
				iVar0++;
				iVar1 = iVar5;
			}
			iVar2 += -1;
		}
	}
	iVar2 = 71 - 1;
	while (iVar2 >= 0) {
		iVar3 = iVar2 / 32;
		iVar4 = iVar2 % 32;
		if (gameplay::is_bit_set(Local_136.f_431[iVar3], iVar4)) {
			if (iParam0 == iVar1) {
				iVar0++;
				iVar1 = func_44(iVar3, iVar4);
				*iParam2 = iVar0;
				*iParam1 = iVar1;
				return true;
			}
			iVar0++;
			iVar1 = func_44(iVar3, iVar4);
		}
		iVar2 += -1;
	}
	if (iParam3) {
		return func_374(iParam1, iParam2);
	}
	return false;
}

// Position - 0x41F9D
int func_374(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam1 = -1;
	if (network::network_is_game_in_progress()) {
		iVar0 = 713 - 1;
		while (iVar0 >= 0) {
			iVar1 = iVar0 / 32;
			iVar2 = iVar0 % 32;
			if (gameplay::is_bit_set(Local_136.f_436[iVar1], iVar2)) {
				*iParam1++;
				*iParam0 = 129 + iVar0;
				return 1;
			}
			iVar0 += -1;
		}
	}
	iVar0 = 71 - 1;
	while (iVar0 >= 0) {
		iVar1 = iVar0 / 32;
		iVar2 = iVar0 % 32;
		if (gameplay::is_bit_set(Local_136.f_431[iVar1], iVar2)) {
			*iParam1++;
			*iParam0 = func_44(iVar1, iVar2);
			return 1;
		}
		iVar0 += -1;
	}
	*iParam0 = -1;
	return 0;
}

// Position - 0x4204B
void func_375(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!network::_0x883D79C4071E18B3()) {
		return;
	}
	if (network::network_is_game_in_progress() && func_189(player::player_id(), 1)) {
		return;
	}
	if (controls::is_control_pressed(2, 199) || controls::is_disabled_control_pressed(2, 199)) {
		return;
	}
	if (ui::get_pause_menu_state() != 0) {
		return;
	}
	if (ui::is_pause_menu_active()) {
		return;
	}
	if (player::is_system_ui_being_displayed()) {
		return;
	}
	if (ui::is_warning_message_active()) {
		return;
	}
	if (func_376()) {
		return;
	}
	if (!func_306()) {
		return;
	}
	if (network::network_is_game_in_progress() || iParam0) {
		if (!Global_91543.f_1361 && !network::_0x2EAC52B4019E2782()) {
			iVar0 = 18;
			ui::_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2453572 = iParam1;
			Global_91543.f_1361 = 1;
			Global_91543.f_1362 = iParam2;
		}
	}
}

// Position - 0x42124
bool func_376() { return Global_2453677; }

// Position - 0x42130
void func_377(var uParam0, var uParam1, var uParam2) {
	Global_91543.f_1363 = uParam0;
	Global_91543.f_1364 = uParam1;
	Global_91543.f_1365 = uParam2;
}

// Position - 0x42153
char *func_378(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return "S_N_EM";

	case 0: return "S_H_01";

	case 1: return "S_H_02";

	case 2: return "S_H_03";

	case 3: return "S_H_04";

	case 4: return "S_H_05";

	case 5: return "S_H_06";

	case 6: return "S_H_07";

	case 7: return "S_CL_01";

	case 8: return "S_CL_02";

	case 9: return "S_CL_03";

	case 10: return "S_CL_04";

	case 11: return "S_CL_05";

	case 12: return "S_CL_06";

	case 13: return "S_CL_07";

	case 14: return "S_CM_01";

	case 15: return "S_CM_03";

	case 16: return "S_CM_04";

	case 17: return "S_CM_05";

	case 18: return "S_CH_01";

	case 19: return "S_CH_02";

	case 20: return "S_CH_03";

	case 21: return "S_CA_01";

	case 22: return "S_T_01";

	case 23: return "S_T_02";

	case 24: return "S_T_03";

	case 25: return "S_T_04";

	case 26: return "S_T_05";

	case 27: return "S_T_06";

	case 28: return "S_G_01";

	case 29: return "S_G_02";

	case 30: return "S_G_03";

	case 31: return "S_G_04";

	case 32: return "S_G_05";

	case 33: return "S_G_06";

	case 34: return "S_G_07";

	case 35: return "S_G_08";

	case 36: return "S_G_09";

	case 37: return "S_G_10";

	case 38: return "S_G_11";

	case 39: return "S_MO_01";

	case 40: return "S_MO_05";

	case 41: return "S_MO_06";

	case 42: return "S_MO_07";

	case 43: return "S_MO_08";

	case 44: return "S_MO_09";

	case 45:
		switch (iParam1) {
		case 4:
		case 5: return "S_MO_10";
		}
		return "S_MO_11";
	}
	return "SHOP_NAME_EMPTY";
}

// Position - 0x42473
int func_379(var *uParam0, int iParam1, int iParam2) {
	if (*uParam0 != -1) {
		if (uParam0->f_4 > iParam2) {
			return 0;
		}
	}
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	return 1;
}

// Position - 0x4249B
void func_380() {
	int iVar0;

	iVar0 = func_381(14);
	Global_2413052[iVar0 /*83*/] = 14;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "-StraightIntoFreemode", 64);
}

// Position - 0x424C8
int func_381(int iParam0) {
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

// Position - 0x42515
void func_382(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = Global_2524131[iParam0 /*3*/][func_17(iParam2)];
	stats::stat_set_bool(iVar0, iParam1, 1);
}

// Position - 0x42539
bool func_383() {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<7> Var20;
	int iVar35;

	iVar0 = 0;
	gameplay::set_bit(&iVar0, 0);
	gameplay::set_bit(&iVar0, 2);
	gameplay::set_bit(&iVar0, 4);
	gameplay::set_bit(&iVar0, 3);
	gameplay::set_bit(&iVar0, 5);
	gameplay::set_bit(&iVar0, 1);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar16 = func_148(player::player_ped_id());
		if (network::network_is_game_in_progress()) {
			iVar19 = dlc1::_get_num_decorations(iVar16);
			iVar18 = 0;
			while (iVar18 < iVar19) {
				if (dlc1::_0xFF56381874F82086(iVar16, iVar18, &Var20) && Var20.f_6 != 2140335355 &&
					Var20.f_6 != 277073536) {
					iVar35 = 129 + iVar18;
					if (func_53(iVar35, -1)) {
						gameplay::clear_bit(&iVar0, ped::_get_tattoo_zone(Var20.f_2, Var20.f_3));
					}
				}
				iVar18++;
			}
		}
		iVar1 = 0;
		while (iVar1 < 4) {
			iVar2 = 0;
			while (iVar2 < 32) {
				iVar17 = func_44(iVar1, iVar2);
				if (!func_366(iVar17, iVar16) && !func_365(iVar17, iVar16)) {
					if (func_35(&Var3, func_44(iVar1, iVar2), iVar16, player::player_ped_id(), -1) &&
						Var3.f_8 != 2140335355 && Var3.f_8 != 277073536) {
						if (Global_69702) {
							if (func_53(Var3.f_11, -1)) {
								gameplay::clear_bit(&iVar0, ped::_get_tattoo_zone(Var3.f_4, Var3.f_5));
							}
						}
						else if (func_241(func_213(), Var3.f_11)) {
							return true;
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	return iVar0 == 0;
}

// Position - 0x426B2
void func_384(int iParam0, int iParam1, int iParam2) {
	struct<11> Var0;

	if (func_45(iParam0)) {
		if (func_35(&Var0, iParam1, func_43(iParam0), 0, -1)) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_2095.f_493[iParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_2095.f_493[iParam0 /*15*/].f_10[Var0.f_9], Var0.f_10);
			}
		}
	}
}

// Position - 0x4271A
void func_385(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 480) {
		iVar1 = iParam0;
		iVar0 = 3112 + iVar1;
	}
	else {
		iVar1 = iParam0 - 480;
		iVar0 = 6029 + iVar1;
	}
	func_508(iVar0, iParam1, iParam2, 1);
}

// Position - 0x42755
void func_386(int iParam0) {
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	int iVar37;
	int iVar38;

	iVar13 = func_148(player::player_ped_id());
	iVar14 = entity::get_entity_model(player::player_ped_id());
	if (func_35(&Var0, iParam0, iVar13, player::player_ped_id(), -1)) {
		if (Var0.f_8 != 0) {
			iVar15 = -1;
			if (network::network_is_game_in_progress()) {
				iVar15 = func_52(iVar14, &Var0, Var0.f_8);
			}
			iVar16 = Var0.f_8;
			if (network::network_is_game_in_progress()) {
				iVar20 = dlc1::_get_num_decorations(iVar13);
				iVar19 = 0;
				while (iVar19 < iVar20) {
					if (dlc1::_0xFF56381874F82086(iVar13, iVar19, &Var21)) {
						if (!dlc1::_is_dlc_data_empty(Var21)) {
							iVar36 = 129 + iVar19;
							iVar37 = func_52(iVar14, &Var21.f_7, Var21.f_6);
							if (func_243(iVar37, iVar15) && iVar36 != iParam0) {
								func_244(iVar36, 0, -1);
							}
						}
					}
					iVar19++;
				}
			}
			iVar17 = 0;
			while (iVar17 < 4) {
				iVar18 = 0;
				while (iVar18 < 32) {
					if (!func_365(iParam0, iVar13)) {
						if (func_35(&Var0, func_44(iVar17, iVar18), iVar13, player::player_ped_id(), -1)) {
							if (network::network_is_game_in_progress()) {
								iVar38 = func_52(iVar14, &Var0, Var0.f_8);
								if (func_243(iVar38, iVar15) && Var0.f_11 != iParam0) {
									if (Global_69702) {
										func_244(Var0.f_11, 0, -1);
									}
									else {
										func_384(func_213(), Var0.f_11, 0);
									}
								}
							}
							else if (Var0.f_8 == iVar16 && Var0.f_11 != iParam0) {
								if (Global_69702) {
									func_244(Var0.f_11, 0, -1);
								}
								else {
									func_384(func_213(), Var0.f_11, 0);
								}
							}
						}
					}
					iVar18++;
				}
				iVar17++;
			}
		}
	}
}

// Position - 0x428E6
int func_387() {
	struct<8> Var0;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	struct<16> Var17;

	if (func_185(1)) {
		StringCopy(&Local_811, "", 64);
		Local_136.f_106.f_24 = 0;
		iVar13 = func_148(player::player_ped_id());
		if (func_35(&Var0, Local_136.f_460, iVar13, player::player_ped_id(), -1)) {
			bVar14 = true;
			bVar15 = false;
			iVar16 = func_446(Var0.f_7, Var0);
			if (iVar16 == -1) {
				MemCopy(&Local_811, {Var0}, 16);
				return 0;
			}
			if (iVar16 != Var0.f_7) {
				Var0.f_7 = iVar16;
			}
			func_445(&Var0.f_7, Var0);
			if (network::network_is_game_in_progress() && func_324(Local_136.f_460, -1)) {
				Var0.f_7 = Global_262145.f_6691;
				bVar14 = true;
				bVar15 = true;
			}
			if (Local_136.f_106.f_25) {
				if (!func_440(Var0.f_7)) {
					Local_136.f_106.f_24 = 1;
					return 0;
				}
				else if (!Local_136.f_106.f_25) {
					func_508(3, 1, -1, 1);
					func_436(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
					func_431(Local_136, 1, 6, 0);
					func_429(7);
					func_423(func_427());
				}
				return 1;
			}
			func_422(Var0, Var0.f_7, 0, 1, 0);
			if (Global_69702) {
				if (Var0.f_7 == 0 || networkcash::network_can_spend_money(Var0.f_7, 0, 1, 0, -1)) {
					if (func_421(1) || iLocal_827) {
						iLocal_827 = 1;
					}
					if (network::network_is_game_in_progress() && func_357()) {
						func_356(&Var17, Var0, entity::get_entity_model(player::player_ped_id()), 2, 0, 0, -1, -1, 0);
						if (!mobile::_network_shop_is_item_unlocked(&Var17)) {
							Local_811 = {Var17};
							return 0;
						}
						if (func_417(78225582, 1315680121, gameplay::get_hash_key(&Var17), 537254313, 1, Var0.f_7, 1, 4,
									 0, 3)) {
							if (bVar15) {
								if (func_417(78225582, 1315680121, 814101910, 537254313, 1, Var0.f_7, 1, 4,
											 gameplay::get_hash_key(&Var17), 3)) {
								}
								else {
									func_423(func_427());
									ui::_0x170F541E1CADD1DE(0);
									ui::hide_hud_component_this_frame(13);
									Local_136.f_106.f_24 = 1;
									return 0;
								}
							}
							if (iLocal_827) {
								if (func_417(78225582, 1315680121, -1914951697, 537254313, 1, 0, 1, 4,
											 gameplay::get_hash_key(&Var17), 3)) {
								}
								else {
									func_423(func_427());
									ui::_0x170F541E1CADD1DE(0);
									ui::hide_hud_component_this_frame(13);
									Local_136.f_106.f_24 = 1;
									return 0;
								}
							}
							Local_136.f_106.f_24 = 0;
							Local_136.f_106.f_25 = 1;
							Local_136.f_106.f_26 = 0;
							return 1;
						}
						else {
							func_423(func_427());
							ui::_0x170F541E1CADD1DE(0);
							ui::hide_hud_component_this_frame(13);
							return 0;
						}
					}
					if (Var0.f_7 > 0) {
					}
					if (bVar14) {
						func_508(3, 1, -1, 1);
						func_436(joaat("mpply_ingamestore_moneyspent"), Var0.f_7);
						func_431(Local_136, 1, 6, 0);
					}
					func_429(7);
					func_423(func_427());
					return 1;
				}
			}
			else if (func_416(func_213()) >= Var0.f_7) {
				if (Var0.f_7 > 0) {
					func_389(func_213(), func_415(Local_136), Var0.f_7);
				}
				func_388();
				func_431(Local_136, 1, 6, 0);
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x42BE8
void func_388() {
	int iVar0;

	iVar0 = func_46(player::player_ped_id());
	if (func_45(iVar0)) {
		Global_101700.f_2095.f_539.f_1572[iVar0] = gameplay::get_game_timer();
	}
}

// Position - 0x42C1B
int func_389(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_390(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x42C64
int func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_414();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_413(99, 1);
			func_412(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_412(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_412(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_397(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_421(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_412(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_412(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_412(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_421(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_412(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_412(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_412(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_412(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_412(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_412(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_412(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_412(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_412(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_412(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_412(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_412(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_412(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_412(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_412(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_421(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_412(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_412(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_412(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_412(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_412(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_412(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_396(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_413(95, iParam3); break;

		case 1: func_413(97, iParam3); break;

		case 2: func_413(96, iParam3); break;
		}
		func_413(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_393(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_393(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_412(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_412(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_412(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_392(iParam0);
	if (Global_35781 == 15) {
		func_391(0);
	}
	return 1;
}

// Position - 0x43263
void func_391(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x434E5
void func_392(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x4353F
void func_393(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_395() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_395() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_394(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x43601
char *func_394(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x4367B
int func_395() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x43688
void func_396(int iParam0) {
	func_413(93, iParam0);
	func_413(29, iParam0);
	func_413(30, iParam0);
}

// Position - 0x436A8
int func_397(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_411(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_398(27, 1);
	return 1;
}

// Position - 0x4375F
int func_398(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_399(iParam0, iParam1);
}

// Position - 0x4377A
int func_399(int iParam0, int iParam1) {
	if (func_98(14) && !func_410(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_409(&Global_2595550)) {
		if (func_407(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_400(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x43817
bool func_400(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_98(14) && !func_410(iParam1)) {
		return false;
	}
	if (func_407(uParam0, iParam1)) {
		return false;
	}
	if (func_406(uParam0) < 0f) {
		func_405(uParam0, 0);
	}
	func_403(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_401(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x438C8
int func_401(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_98(14) && !func_410(iParam1)) {
		return 0;
	}
	if (func_407(uParam0, iParam1)) {
		return 0;
	}
	if (func_406(uParam0) < 0f) {
		func_405(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_402(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x43943
bool func_402(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x43954
void func_403(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_404(uParam0, iVar0);
		iVar0++;
	}
	func_405(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x43988
void func_404(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x43998
void func_405(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x439B5
float func_406(var *uParam0) { return uParam0->f_72; }

// Position - 0x439C1
bool func_407(var *uParam0, int iParam1) { return func_408(uParam0, iParam1) != -1; }

// Position - 0x439D3
int func_408(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43A00
bool func_409(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x43A0E
int func_410(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x43A5E
int func_411(int iParam0, int iParam1) {
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

// Position - 0x43AAF
void func_412(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x43AD2
void func_413(int iParam0, int iParam1) {
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

// Position - 0x43B2F
void func_414() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x43BA4
int func_415(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 - 0;
	iVar1 = 41;
	return iVar0 + iVar1;
}

// Position - 0x43BBB
int func_416(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x43C13
bool func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9) {
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_358()) {
		iVar0 = 1;
	}
	if (!iVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_18()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			Global_2590762 = 1;
			return false;
		}
		if (Global_2453677) {
			if (iParam1 == 1067618600 || iParam1 == -1303831698) {
				Global_2590763 = 1;
				return false;
			}
		}
	}
	iVar1 = func_427();
	if (iVar1 == -1) {
		if (!func_419(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)) {
			return false;
		}
	}
	if (iVar1 != -1) {
		if (iParam8 != 0 && func_418(iParam1)) {
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else {
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2590252[iVar1 /*76*/].f_73 = Var2;
		Global_2590252[iVar1 /*76*/].f_74 = Var2.f_1;
		if (iVar0 || unk3::_network_shop_basket_add_item(&Var2, iParam4)) {
			return true;
		}
	}
	return false;
}

// Position - 0x43D17
int func_418(int iParam0) {
	switch (iParam0) {
	case -221807075:
	case -1224924353:
	case -2121967344:
	case 1394405165:
	case -2052814106:
	case 1701289268:
	case -1796535835:
	case -1928802392:
	case 581564040:
	case 23048035:
	case 2117376854:
	case -1377881127:
	case -504675202:
	case 1906937290:
	case -1616616027:
	case -1799524201:
	case 269396419:
	case 69656641:
	case -103880010:
	case -1494913648: return 1;
	}
	return 0;
}

// Position - 0x43DA6
int func_419(int *iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = 0;
	if (!func_358()) {
		iVar0 = 1;
	}
	if (!iVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_18()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677) {
			if (iParam2 == 1067618600 || iParam2 == -1303831698) {
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 5) {
		if (Global_2590252[iVar1 /*76*/].f_2 == 0) {
			iVar2 = 1;
		}
		else if (Global_2590252[iVar1 /*76*/].f_5 == 1) {
			return 0;
		}
		iVar1++;
	}
	if (!iVar2) {
		return 0;
	}
	*iParam0 = 0;
	if (!iVar0) {
		if (unk3::_network_shop_basket_end()) {
			unk3::_0xFA336E7F40C0A0D0();
		}
	}
	if (iVar0 || unk3::_network_shop_basket_start(&uVar3, iParam2, iParam3, iParam4)) {
		*iParam0 = func_420(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5);
		return 1;
	}
	return 0;
}

// Position - 0x43E9B
int func_420(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 var uParam8) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_2590252[iVar0 /*76*/].f_2 == 0) {
			if (!func_358()) {
				uParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = iParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = iParam2;
			Global_2590252[iVar0 /*76*/].f_7 = iParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = uParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = iParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (iParam6) {
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43F6F
bool func_421(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_395() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x43FAB
void func_422(struct<4> Param0, var uParam4, int iParam5, int iParam6, int iParam7) {
	Global_91543.f_1300 = {Param0};
	Global_91543.f_1304 = uParam4;
	Global_91543.f_1305 = iParam5;
	Global_91543.f_1306 = iParam6;
	Global_91543.f_1307 = iParam7;
}

// Position - 0x43FE4
void func_423(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (!func_358()) {
		iVar0 = 1;
	}
	if (iParam0 != -1) {
		if (func_426(iParam0)) {
			if (!iVar0) {
				unk3::_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0) {
			unk3::_network_shop_end_service(Global_2590252[iParam0 /*76*/]);
		}
		func_424(&Global_2590252[iParam0 /*76*/]);
	}
}

// Position - 0x44037
void func_424(var *uParam0) {
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_425(&uParam0->f_8.f_3);
	func_425(&uParam0->f_8.f_16);
	StringCopy(&uParam0->f_8.f_29, "", 32);
	StringCopy(&uParam0->f_8.f_37, "", 24);
	StringCopy(&uParam0->f_8.f_43, "", 16);
	StringCopy(&uParam0->f_8.f_47, "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

// Position - 0x4411E
void func_425(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

// Position - 0x44166
bool func_426(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return false;
}

// Position - 0x4418E
int func_427() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_428(iVar0) != 2147483647) {
			if (func_426(iVar0)) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x441C8
int func_428(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/];
	}
	return -1;
}

// Position - 0x441EC
int func_429(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_69702) {
		return 0;
	}
	if (player::has_achievement_been_passed(45)) {
		return 0;
	}
	if (!func_351()) {
		return 0;
	}
	iVar2 = func_16(751, -1, 0);
	gameplay::set_bit(&iVar2, iParam0);
	func_204(751, iVar2, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < 9) {
		if (func_430(iVar2, iVar0, 1)) {
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9) {
		func_398(45, 1);
	}
	return 1;
}

// Position - 0x4426D
bool func_430(int iParam0, int iParam1, int iParam2) {
	var uVar0;

	uVar0 = gameplay::is_bit_set(iParam0, iParam1);
	if (!iParam2) {
		return uVar0;
	}
	switch (iParam1) {
	case 0: return uVar0;

	case 1: return uVar0;

	case 2: return uVar0;

	case 3: return uVar0;

	case 4: return uVar0;

	case 5: return uVar0;

	case 6: return uVar0;

	case 7: return uVar0;

	case 8: return uVar0;

	default:
	}
	return false;
}

// Position - 0x442F5
void func_431(int iParam0, int iParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1) {
		if (!func_15(iParam0, 3, 0)) {
			func_203(iParam0, 3, 0);
		}
		if (!network::network_is_game_in_progress()) {
			switch (func_310(iParam0)) {
			case 4: func_432(305, 0, 0); break;

			case 1: func_432(304, 0, 0); break;

			case 3: func_432(308, 0, 0); break;

			case 0: func_432(306, 0, 0); break;

			case 2: func_432(307, 0, 0); break;
			}
		}
		if (Global_91543.f_1304 >= 0) {
			if (network::network_is_game_in_progress()) {
				bVar0 = true;
				if (iParam2 == 4) {
					if (func_421(0)) {
						func_393(0);
						bVar0 = false;
					}
				}
				if (iParam2 == 6) {
					if (func_421(1)) {
						func_393(1);
						bVar0 = false;
					}
				}
				if (bVar0) {
					iVar1 = networkcash::network_get_vc_bank_balance() > 0;
					iVar2 = networkcash::network_get_vc_bank_balance() < Global_91543.f_1304;
					if (func_358()) {
						if (func_428(func_427()) > 0) {
							unk3::_network_shop_set_telemetry_nonce_seed(func_428(func_427()));
						}
					}
					if (Global_91543.f_1304 > 0) {
						if (iParam2 == 1 && Global_91543.f_1305 == -61829581) {
							networkcash::network_buy_item(Global_91543.f_1304,
														  gameplay::get_hash_key(&Global_91543.f_1300), 17,
														  Global_91543.f_1306, iVar1, &Global_91543.f_1300,
														  gameplay::get_hash_key(func_378(iParam0, iParam3)),
														  Global_91543.f_1305, Global_91543.f_1307, iVar2);
						}
						else if (iParam2 == 0 || iParam2 == 7 || iParam2 == 9 || iParam2 == 11) {
							networkcash::network_buy_item(Global_91543.f_1304, Global_91543.f_1305, iParam2,
														  Global_91543.f_1306, iVar1, &Global_91543.f_1300,
														  gameplay::get_hash_key(func_378(iParam0, iParam3)),
														  Global_91543.f_1305, Global_91543.f_1307, iVar2);
						}
						else if (iParam2 == 1 || iParam2 == 2 || iParam2 == 8 || iParam2 == 16 || iParam2 == 15) {
							networkcash::network_buy_item(Global_91543.f_1304, Global_91543.f_1305, iParam2,
														  Global_91543.f_1306, iVar1, &Global_91543.f_1300,
														  gameplay::get_hash_key(func_378(iParam0, iParam3)),
														  Global_91543.f_1305, Global_91543.f_1307, iVar2);
						}
						else {
							networkcash::network_buy_item(Global_91543.f_1304,
														  gameplay::get_hash_key(&Global_91543.f_1300), iParam2,
														  Global_91543.f_1306, iVar1, &Global_91543.f_1300,
														  gameplay::get_hash_key(func_378(iParam0, iParam3)),
														  Global_91543.f_1305, Global_91543.f_1307, iVar2);
						}
					}
				}
			}
			else if (ui::does_text_label_exist(&Global_91543.f_1300)) {
				if (iParam2 == 0 || iParam2 == 7 || iParam2 == 9 || iParam2 == 11) {
					if (Global_91543.f_1304 >= 0) {
						stats::playstats_shop_item(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
												   gameplay::get_hash_key(func_378(iParam0, iParam3)),
												   Global_91543.f_1305, Global_91543.f_1307);
					}
				}
				else if (iParam2 == 1 || iParam2 == 2 || iParam2 == 8 || iParam2 == 16 || iParam2 == 15) {
					if (Global_91543.f_1304 >= 0) {
						stats::playstats_shop_item(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
												   gameplay::get_hash_key(func_378(iParam0, iParam3)),
												   Global_91543.f_1305, Global_91543.f_1307);
					}
				}
				else if (Global_91543.f_1304 >= 0) {
					stats::playstats_shop_item(gameplay::get_hash_key(&Global_91543.f_1300), Global_91543.f_1304,
											   gameplay::get_hash_key(func_378(iParam0, iParam3)), 0,
											   Global_91543.f_1307);
				}
			}
		}
	}
	else if (func_15(iParam0, 3, 0)) {
		func_205(iParam0, 3, 0);
	}
}

// Position - 0x446C1
void func_432(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_508(891 + iParam0, 1, -1, 1);
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
		func_433();
	}
}

// Position - 0x447A9
void func_433() {
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
		func_411(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_20() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_434();
				}
			}
		}
	}
}

// Position - 0x44C6A
int func_434() {
	if (func_435(0)) {
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

// Position - 0x44CB5
bool func_435(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x44CE0
void func_436(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_336(iParam0);
	iVar0 += iParam1;
	if (!func_439(iParam0)) {
		func_438(iParam0, iVar0);
	}
	else {
		func_437(iParam0, iVar0);
	}
}

// Position - 0x44D14
void func_437(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, 1);
	}
	switch (iParam0) {
	case joaat("mpply_crew_0_id"): Global_1363153 = iParam1; break;

	case joaat("mpply_crew_1_id"): Global_1363155 = iParam1; break;

	case joaat("mpply_crew_2_id"): Global_1363155 = iParam1; break;

	case joaat("mpply_crew_3_id"): Global_1363156 = iParam1; break;

	case joaat("mpply_crew_4_id"): Global_1363157 = iParam1; break;

	case joaat("mpply_crew_local_xp_0"): Global_1363158 = iParam1; break;

	case joaat("mpply_crew_local_xp_1"): Global_1363159 = iParam1; break;

	case joaat("mpply_crew_local_xp_2"): Global_1363160 = iParam1; break;

	case joaat("mpply_crew_local_xp_3"): Global_1363161 = iParam1; break;

	case joaat("mpply_crew_local_xp_4"): Global_1363162 = iParam1; break;

	case joaat("mpply_became_cheater_num"): Global_1363163 = iParam1; break;

	case joaat("mpply_friendly"): Global_1363164 = iParam1; break;

	case joaat("mpply_offensive_language"): Global_1363165 = iParam1; break;

	case joaat("mpply_griefing"): Global_1363166 = iParam1; break;

	case joaat("mpply_helpful"): Global_1363167 = iParam1; break;

	case joaat("mpply_offensive_tagplate"): Global_1363168 = iParam1; break;

	case joaat("mpply_offensive_ugc"): Global_1363169 = iParam1; break;

	default: break;
	}
}

// Position - 0x44E39
void func_438(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, 1);
	}
}

// Position - 0x44E55
int func_439(int iParam0) {
	if (Global_1363152) {
		switch (iParam0) {
		case joaat("mpply_crew_0_id"):
		case joaat("mpply_crew_1_id"):
		case joaat("mpply_crew_2_id"):
		case joaat("mpply_crew_3_id"):
		case joaat("mpply_crew_4_id"):
		case joaat("mpply_crew_local_xp_0"):
		case joaat("mpply_crew_local_xp_1"):
		case joaat("mpply_crew_local_xp_2"):
		case joaat("mpply_crew_local_xp_3"):
		case joaat("mpply_crew_local_xp_4"):
		case joaat("mpply_became_cheater_num"):
		case joaat("mpply_friendly"):
		case joaat("mpply_offensive_language"):
		case joaat("mpply_griefing"):
		case joaat("mpply_helpful"):
		case joaat("mpply_offensive_tagplate"):
		case joaat("mpply_offensive_ugc"): return 1;
		}
	}
	return 0;
}

// Position - 0x44ED9
int func_440(var uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_136.f_106.f_25) {
		switch (Local_136.f_106.f_26) {
		case 0:
			if (func_443()) {
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = uParam0;
				if (iLocal_827) {
					iVar2 = 0;
				}
				if (networkcash::network_get_vc_bank_balance() > 0) {
					if (networkcash::network_get_vc_bank_balance() >= iVar2) {
						iVar1 = iVar2;
					}
					else {
						iVar1 = iVar2 - (iVar2 - networkcash::network_get_vc_bank_balance());
					}
					iVar2 -= iVar1;
				}
				if (iVar2 > 0) {
					if (networkcash::network_get_vc_wallet_balance(-1) > 0) {
						if (networkcash::network_get_vc_wallet_balance(-1) >= iVar2) {
							iVar0 = iVar2;
						}
						else {
							iVar0 = iVar2 - (iVar2 - networkcash::network_get_vc_wallet_balance(-1));
						}
						iVar2 -= iVar0;
					}
				}
				ui::_0x170F541E1CADD1DE(1);
				ui::_set_player_cash_change(-iVar0, -iVar1);
				Local_136.f_106.f_26 = 70;
			}
			else {
				Local_136.f_106.f_26 = 90;
			}
			break;

		case 70:
			if (func_442(func_427())) {
				if (func_441(func_427()) == 2) {
					Local_136.f_106.f_26 = 80;
				}
				else {
					Local_136.f_106.f_26 = 90;
				}
			}
			break;

		case 80:
			ui::_0x170F541E1CADD1DE(0);
			ui::hide_hud_component_this_frame(13);
			Local_136.f_106.f_25 = 0;
			Local_136.f_106.f_26 = 0;
			break;

		case 90:
			func_423(func_427());
			ui::_0x170F541E1CADD1DE(0);
			ui::hide_hud_component_this_frame(13);
			Local_136.f_106.f_25 = 0;
			Local_136.f_106.f_26 = 0;
			return 0;
		}
	}
	return 1;
}

// Position - 0x4501D
int func_441(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_2;
	}
	return 0;
}

// Position - 0x45043
bool func_442(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_2 != 1;
	}
	return false;
}

// Position - 0x4506B
bool func_443() {
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (!func_358()) {
		bVar0 = true;
	}
	iVar1 = func_427();
	if (iVar1 == -1) {
		return false;
	}
	if (!bVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_18()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			if (func_444(Global_2590252[iVar1 /*76*/].f_6, Global_2590252[iVar1 /*76*/].f_4,
						 Global_2590252[iVar1 /*76*/].f_1) == 1) {
				Global_2590762 = 1;
			}
			return false;
		}
		if (Global_2453677) {
			if (Global_2590252[iVar1 /*76*/].f_6 == 1067618600 || Global_2590252[iVar1 /*76*/].f_6 == -1303831698) {
				Global_2590763 = 1;
				return false;
			}
		}
	}
	iVar2 = func_428(iVar1);
	if (iVar2 != 2147483647) {
		if (bVar0 || unk3::_network_shop_checkout_start(iVar2)) {
			if (bVar0) {
				Global_2590252[iVar1 /*76*/].f_69 = 1;
			}
			Global_2590252[iVar1 /*76*/].f_75 = 0;
			Global_2590752 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x4515D
int func_444(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -433440095 || iParam0 == 1474183246) {
		switch (iParam1) {
		case 1940862352:
			if (iParam2 >= 10000) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case -31156877:
			if (iParam2 >= 1000) {
				return 1;
			}
			else {
				return 2;
			}
			break;

		case 1718438689:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240: return 1;

		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case 291576838:
		case -1276678868:
		case 711665950:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 283351220:
		case 1108628223:
		case -876847842:
		case 68030260: return 2;

		default: return 0;
		}
	}
	else if (iParam0 == -1134853190 || iParam0 == 925407197 || iParam0 == -1589378882) {
		return 0;
	}
	return 1;
}

// Position - 0x453F3
void func_445(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4) {
	int iVar0;

	if (network::network_is_game_in_progress()) {
		switch (gameplay::get_hash_key(&uParam1)) {
		case -1516865571: *uParam0 = Global_262145.f_6003; break;

		case 2130586285: *uParam0 = Global_262145.f_6004; break;

		case 386521802: *uParam0 = Global_262145.f_6005; break;

		case 579924440: *uParam0 = Global_262145.f_6006; break;

		case 741770527: *uParam0 = Global_262145.f_6007; break;

		case 1173403795: *uParam0 = Global_262145.f_6008; break;

		case -569087776: *uParam0 = Global_262145.f_6009; break;

		case -1344959389: *uParam0 = Global_262145.f_6010; break;

		case -211217527: *uParam0 = Global_262145.f_6011; break;

		case 86488838: *uParam0 = Global_262145.f_6012; break;

		case 705494964: *uParam0 = Global_262145.f_6013; break;

		case -137684175: *uParam0 = Global_262145.f_6014; break;

		case -979388709: *uParam0 = Global_262145.f_6015; break;

		case 324653646: *uParam0 = Global_262145.f_6015; break;

		case -518820414: *uParam0 = Global_262145.f_6016; break;

		case -1361737401: *uParam0 = Global_262145.f_6017; break;

		case 2010946386: *uParam0 = Global_262145.f_6018; break;

		case -1628534963: *uParam0 = Global_262145.f_6019; break;

		case -1051898870: *uParam0 = Global_262145.f_6020; break;

		case 1334929540: *uParam0 = Global_262145.f_6021; break;

		case 1097124907: *uParam0 = Global_262145.f_6022; break;

		case 747545215: *uParam0 = Global_262145.f_6023; break;

		case 61892743: *uParam0 = Global_262145.f_6024; break;

		case 501548332: *uParam0 = Global_262145.f_6025; break;

		case -244169717: *uParam0 = Global_262145.f_6026; break;

		case 421886905: *uParam0 = Global_262145.f_6027; break;

		case -1398791504: *uParam0 = Global_262145.f_6028; break;

		case -106152761: *uParam0 = Global_262145.f_6029; break;

		case 125491300: *uParam0 = Global_262145.f_6030; break;

		case -1576950557: *uParam0 = Global_262145.f_6031; break;

		case -1815115649: *uParam0 = Global_262145.f_6032; break;

		case -2034766264: *uParam0 = Global_262145.f_6033; break;

		case 1748021562: *uParam0 = Global_262145.f_6034; break;

		case -894811920: *uParam0 = Global_262145.f_6035; break;

		case 165068612: *uParam0 = Global_262145.f_6036; break;

		case 1549427782: *uParam0 = Global_262145.f_6037; break;

		case -927613913: *uParam0 = Global_262145.f_6038; break;

		case 385144996: *uParam0 = Global_262145.f_6039; break;

		case -814626401: *uParam0 = Global_262145.f_6040; break;

		case -1248225809: *uParam0 = Global_262145.f_6041; break;

		case 1910378101: *uParam0 = Global_262145.f_6042; break;

		case -2124501642: *uParam0 = Global_262145.f_6043; break;

		case -1943747838: *uParam0 = Global_262145.f_6044; break;

		case -1570115700: *uParam0 = Global_262145.f_6045; break;

		case 931699147: *uParam0 = Global_262145.f_6046; break;

		case 1019520067: *uParam0 = Global_262145.f_6047; break;

		case -859358814: *uParam0 = Global_262145.f_6048; break;

		case -1157818866: *uParam0 = Global_262145.f_6049; break;

		case -247856505: *uParam0 = Global_262145.f_6050; break;

		case -1043396870: *uParam0 = Global_262145.f_6051; break;

		case -1388618285: *uParam0 = Global_262145.f_6052; break;

		case -948484638: *uParam0 = Global_262145.f_6053; break;

		case 643387405: *uParam0 = Global_262145.f_6054; break;

		case 979630098: *uParam0 = Global_262145.f_6055; break;

		case 211688583: *uParam0 = Global_262145.f_6056; break;

		case 1343791995: *uParam0 = Global_262145.f_6057; break;

		case 576309246: *uParam0 = Global_262145.f_6058; break;

		case 949154944: *uParam0 = Global_262145.f_6059; break;

		case -622511834: *uParam0 = Global_262145.f_6060; break;

		case -275651969: *uParam0 = Global_262145.f_6061; break;

		case -1256283855: *uParam0 = Global_262145.f_6062; break;

		case 955525350: *uParam0 = Global_262145.f_6063; break;

		case 1252641873: *uParam0 = Global_262145.f_6064; break;

		case 1505482034: *uParam0 = Global_262145.f_7778; break;

		case 1684269698: *uParam0 = Global_262145.f_7779; break;

		case 1983811127: *uParam0 = Global_262145.f_7780; break;

		case -406884045: *uParam0 = Global_262145.f_7781; break;

		case -112389050: *uParam0 = Global_262145.f_7782; break;

		case 84487102: *uParam0 = Global_262145.f_7783; break;

		case 382193467: *uParam0 = Global_262145.f_7784; break;

		case 547152613: *uParam0 = Global_262145.f_7785; break;

		case 845317744: *uParam0 = Global_262145.f_7786; break;

		case 1578163660: *uParam0 = Global_262145.f_7787; break;

		case 2031294192: *uParam0 = Global_262145.f_7788; break;

		case -1257730342: *uParam0 = Global_262145.f_7789; break;

		case -698953354: *uParam0 = Global_262145.f_7790; break;

		case 274646413: *uParam0 = Global_262145.f_7791; break;

		case -1044305845: *uParam0 = Global_262145.f_7792; break;

		case 1385548270: *uParam0 = Global_262145.f_7793; break;

		case 72658285: *uParam0 = Global_262145.f_7794; break;

		case 773259505: *uParam0 = Global_262145.f_7795; break;

		case 1600250758: *uParam0 = Global_262145.f_7796; break;

		case -1686414408: *uParam0 = Global_262145.f_7797; break;

		case -1971865383: *uParam0 = Global_262145.f_7798; break;

		case -1808184228: *uParam0 = Global_262145.f_7799; break;

		case -1494453822: *uParam0 = Global_262145.f_7800; break;

		case -1360985685: *uParam0 = Global_262145.f_7801; break;

		case -1063344858: *uParam0 = Global_262145.f_7802; break;

		case 225394382: *uParam0 = Global_262145.f_7803; break;

		case -550903236: *uParam0 = Global_262145.f_7804; break;

		case -836157369: *uParam0 = Global_262145.f_7805; break;

		case -56320715: *uParam0 = Global_262145.f_7806; break;

		case 760970914: *uParam0 = Global_262145.f_7807; break;
		}
		switch (gameplay::get_hash_key(&uParam1)) {
		case 1005992202: *uParam0 = Global_262145.f_14867; break;

		case 1304485023: *uParam0 = Global_262145.f_14868; break;

		case 635571422: *uParam0 = Global_262145.f_14869; break;

		case 1200181292: *uParam0 = Global_262145.f_14870; break;

		case 87739280: *uParam0 = Global_262145.f_14871; break;

		case 385445645: *uParam0 = Global_262145.f_14872; break;

		case -285827320: *uParam0 = Global_262145.f_14873; break;

		case -254958922: *uParam0 = Global_262145.f_14874; break;

		case -896936401: *uParam0 = Global_262145.f_14875; break;

		case -599524957: *uParam0 = Global_262145.f_14876; break;

		case 1485369735: *uParam0 = Global_262145.f_14877; break;

		case 1160825559: *uParam0 = Global_262145.f_14878; break;

		case 2080749696: *uParam0 = Global_262145.f_14879; break;

		case 1843731519: *uParam0 = Global_262145.f_14880; break;

		case 739907750: *uParam0 = Global_262145.f_14881; break;

		case 501840965: *uParam0 = Global_262145.f_14882; break;

		case 1369891775: *uParam0 = Global_262145.f_14883; break;

		case 1130841920: *uParam0 = Global_262145.f_14884; break;

		case -450983248: *uParam0 = Global_262145.f_14885; break;

		case -732698341: *uParam0 = Global_262145.f_14886; break;

		case 494007610: *uParam0 = Global_262145.f_14887; break;

		case -417691508: *uParam0 = Global_262145.f_14888; break;

		case -1883350575: *uParam0 = Global_262145.f_14889; break;

		case -1584136836: *uParam0 = Global_262145.f_14890; break;

		case 1416586036: *uParam0 = Global_262145.f_14891; break;

		case 637371985: *uParam0 = Global_262145.f_14892; break;

		case 1783271230: *uParam0 = Global_262145.f_14893; break;

		case 2023042003: *uParam0 = Global_262145.f_14894; break;

		case -2052176379: *uParam0 = Global_262145.f_14895; break;

		case -1811946840: *uParam0 = Global_262145.f_14896; break;

		case -507190471: *uParam0 = Global_262145.f_14897; break;

		case -145224097: *uParam0 = Global_262145.f_14898; break;

		case 86092274: *uParam0 = Global_262145.f_14899; break;

		case 454940138: *uParam0 = Global_262145.f_14900; break;

		case 682914071: *uParam0 = Global_262145.f_14901; break;

		case 1047108737: *uParam0 = Global_262145.f_14902; break;

		case 1278687260: *uParam0 = Global_262145.f_14903; break;

		case 1642423160: *uParam0 = Global_262145.f_14904; break;

		case 928190028: *uParam0 = Global_262145.f_14905; break;

		case 1165929123: *uParam0 = Global_262145.f_14906; break;

		case -192903304: *uParam0 = Global_262145.f_14907; break;

		case 506059466: *uParam0 = Global_262145.f_14908; break;

		case 764901797: *uParam0 = Global_262145.f_14909; break;

		case 1061494016: *uParam0 = Global_262145.f_14910; break;

		case 1230909746: *uParam0 = Global_262145.f_14911; break;

		case 1529926871: *uParam0 = Global_262145.f_14912; break;

		case 1693116491: *uParam0 = Global_262145.f_14913; break;

		case 2026147838: *uParam0 = Global_262145.f_14914; break;

		case -2113428860: *uParam0 = Global_262145.f_14915; break;

		case -1814673887: *uParam0 = Global_262145.f_14916; break;
		}
		switch (gameplay::get_hash_key(&uParam1)) {
		case 1140903537: *uParam0 = Global_262145.f_15524; break;

		case 819603492: *uParam0 = Global_262145.f_15525; break;

		case 656151720: *uParam0 = Global_262145.f_15526; break;

		case -1787858611: *uParam0 = Global_262145.f_15527; break;

		case -1953735289: *uParam0 = Global_262145.f_15528; break;

		case 1609762389: *uParam0 = Global_262145.f_15529; break;

		case -835034398: *uParam0 = Global_262145.f_15530; break;

		case -351691644: *uParam0 = Global_262145.f_15531; break;

		case 1491073087: *uParam0 = Global_262145.f_15532; break;

		case 783197149: *uParam0 = Global_262145.f_15533; break;

		case 1576305536: *uParam0 = Global_262145.f_15534; break;

		case -935372780: *uParam0 = Global_262145.f_15535; break;

		case -1163543327: *uParam0 = Global_262145.f_15536; break;

		case -1531145969: *uParam0 = Global_262145.f_15537; break;

		case 385545610: *uParam0 = Global_262145.f_15538; break;

		case -384329280: *uParam0 = Global_262145.f_15539; break;

		case 1527446965: *uParam0 = Global_262145.f_15540; break;

		case 1147523179: *uParam0 = Global_262145.f_15541; break;

		case 916927726: *uParam0 = Global_262145.f_15542; break;

		case 568003414: *uParam0 = Global_262145.f_15543; break;

		case 1440872691: *uParam0 = Global_262145.f_15544; break;

		case -47691907: *uParam0 = Global_262145.f_15545; break;

		case 724509582: *uParam0 = Global_262145.f_15546; break;

		case 958545812: *uParam0 = Global_262145.f_15547; break;

		case 107698723: *uParam0 = Global_262145.f_15548; break;

		case 201876829: *uParam0 = Global_262145.f_16602; break;

		case -639336170: *uParam0 = Global_262145.f_16603; break;

		case -310990790: *uParam0 = Global_262145.f_16604; break;

		case -735677030: *uParam0 = Global_262145.f_16605; break;

		case -1527212225: *uParam0 = Global_262145.f_16606; break;

		case 892710863: *uParam0 = Global_262145.f_16607; break;

		case -1001566712: *uParam0 = Global_262145.f_16608; break;

		case 1864278956: *uParam0 = Global_262145.f_16609; break;

		case -1588295657: *uParam0 = Global_262145.f_16610; break;

		case -745378670: *uParam0 = Global_262145.f_16611; break;

		case 462912667: *uParam0 = Global_262145.f_16612; break;

		case 114643735: *uParam0 = Global_262145.f_16613; break;

		case -260266394: *uParam0 = Global_262145.f_16614; break;

		case -356672792: *uParam0 = Global_262145.f_16615; break;

		case -227923403: *uParam0 = Global_262145.f_16616; break;

		case 1519716805: *uParam0 = Global_262145.f_16617; break;

		case -912398367: *uParam0 = Global_262145.f_16618; break;

		case -1218165906: *uParam0 = Global_262145.f_16619; break;

		case 594549628: *uParam0 = Global_262145.f_16620; break;

		case 1234462660: *uParam0 = Global_262145.f_16621; break;

		case 2137019227: *uParam0 = Global_262145.f_16622; break;

		case 890289853: *uParam0 = Global_262145.f_16623; break;

		case 1998471915: *uParam0 = Global_262145.f_16624; break;

		case 763146153: *uParam0 = Global_262145.f_16625; break;

		case 1665375030: *uParam0 = Global_262145.f_16626; break;

		case -1496997031: *uParam0 = Global_262145.f_16627; break;

		case 1607112024: *uParam0 = Global_262145.f_16635; break;

		case -1851983620: *uParam0 = Global_262145.f_16632; break;

		case -1132343599: *uParam0 = Global_262145.f_16633; break;

		case 1845637575: *uParam0 = Global_262145.f_16631; break;

		case -2089591627: *uParam0 = Global_262145.f_16630; break;

		case 419137479: *uParam0 = Global_262145.f_16628; break;

		case 1608488334: *uParam0 = Global_262145.f_16629; break;

		case -1859258326: *uParam0 = Global_262145.f_16634; break;

		case -304893580: *uParam0 = Global_262145.f_16743; break;

		case -1180418982: *uParam0 = Global_262145.f_16744; break;
		}
		switch (gameplay::get_hash_key(&uParam1)) {
		case -1715394599: *uParam0 = Global_262145.f_17290; break;

		case -418364806: *uParam0 = Global_262145.f_17291; break;

		case -45191434: *uParam0 = Global_262145.f_17292; break;

		case -898397887: *uParam0 = Global_262145.f_17293; break;

		case -1442133904: *uParam0 = Global_262145.f_17294; break;

		case -1076169712: *uParam0 = Global_262145.f_17295; break;

		case -1910173531: *uParam0 = Global_262145.f_17296; break;

		case -1615350838: *uParam0 = Global_262145.f_17297; break;

		case 600620018: *uParam0 = Global_262145.f_17298; break;

		case 2030397030: *uParam0 = Global_262145.f_17299; break;

		case -196486771: *uParam0 = Global_262145.f_17300; break;

		case 33813761: *uParam0 = Global_262145.f_17301; break;
		}
		*uParam0 = system::floor(system::to_float(*uParam0) * Global_262145.f_75);
	}
	iVar0 = func_332();
	*uParam0 = system::floor(system::to_float(*uParam0) * (1f - system::to_float(iVar0) / 100f));
}

// Position - 0x4646E
int func_446(int iParam0, struct<4> Param1) {
	char *sVar0;

	if (func_357()) {
		func_356(&sVar0, Param1, entity::get_entity_model(player::player_ped_id()), 2, 0, 0, -1, -1, 0);
		if (mobile::_network_shop_is_item_unlocked(&sVar0)) {
			return unk3::_network_shop_get_price(gameplay::get_hash_key(&sVar0), 1315680121, 1);
		}
		else {
			return -1;
		}
	}
	if (network::network_is_game_in_progress()) {
		switch (gameplay::get_hash_key(&Param1)) {
		case -1516865571: iParam0 = Global_262145.f_6003; break;

		case 2130586285: iParam0 = Global_262145.f_6004; break;

		case 386521802: iParam0 = Global_262145.f_6005; break;

		case 579924440: iParam0 = Global_262145.f_6006; break;

		case 741770527: iParam0 = Global_262145.f_6007; break;

		case 1173403795: iParam0 = Global_262145.f_6008; break;

		case -569087776: iParam0 = Global_262145.f_6009; break;

		case -1344959389: iParam0 = Global_262145.f_6010; break;

		case -211217527: iParam0 = Global_262145.f_6011; break;

		case 86488838: iParam0 = Global_262145.f_6012; break;

		case 705494964: iParam0 = Global_262145.f_6013; break;

		case -137684175: iParam0 = Global_262145.f_6014; break;

		case -979388709: iParam0 = Global_262145.f_6015; break;

		case 324653646: iParam0 = Global_262145.f_6015; break;

		case -518820414: iParam0 = Global_262145.f_6016; break;

		case -1361737401: iParam0 = Global_262145.f_6017; break;

		case 2010946386: iParam0 = Global_262145.f_6018; break;

		case -1628534963: iParam0 = Global_262145.f_6019; break;

		case -1051898870: iParam0 = Global_262145.f_6020; break;

		case 1334929540: iParam0 = Global_262145.f_6021; break;

		case 1097124907: iParam0 = Global_262145.f_6022; break;

		case 747545215: iParam0 = Global_262145.f_6023; break;

		case 61892743: iParam0 = Global_262145.f_6024; break;

		case 501548332: iParam0 = Global_262145.f_6025; break;

		case -244169717: iParam0 = Global_262145.f_6026; break;

		case 421886905: iParam0 = Global_262145.f_6027; break;

		case -1398791504: iParam0 = Global_262145.f_6028; break;

		case -106152761: iParam0 = Global_262145.f_6029; break;

		case 125491300: iParam0 = Global_262145.f_6030; break;

		case -1576950557: iParam0 = Global_262145.f_6031; break;

		case -1815115649: iParam0 = Global_262145.f_6032; break;

		case -2034766264: iParam0 = Global_262145.f_6033; break;

		case 1748021562: iParam0 = Global_262145.f_6034; break;

		case -894811920: iParam0 = Global_262145.f_6035; break;

		case 165068612: iParam0 = Global_262145.f_6036; break;

		case 1549427782: iParam0 = Global_262145.f_6037; break;

		case -927613913: iParam0 = Global_262145.f_6038; break;

		case 385144996: iParam0 = Global_262145.f_6039; break;

		case -814626401: iParam0 = Global_262145.f_6040; break;

		case -1248225809: iParam0 = Global_262145.f_6041; break;

		case 1910378101: iParam0 = Global_262145.f_6042; break;

		case -2124501642: iParam0 = Global_262145.f_6043; break;

		case -1943747838: iParam0 = Global_262145.f_6044; break;

		case -1570115700: iParam0 = Global_262145.f_6045; break;

		case 931699147: iParam0 = Global_262145.f_6046; break;

		case 1019520067: iParam0 = Global_262145.f_6047; break;

		case -859358814: iParam0 = Global_262145.f_6048; break;

		case -1157818866: iParam0 = Global_262145.f_6049; break;

		case -247856505: iParam0 = Global_262145.f_6050; break;

		case -1043396870: iParam0 = Global_262145.f_6051; break;

		case -1388618285: iParam0 = Global_262145.f_6052; break;

		case -948484638: iParam0 = Global_262145.f_6053; break;

		case 643387405: iParam0 = Global_262145.f_6054; break;

		case 979630098: iParam0 = Global_262145.f_6055; break;

		case 211688583: iParam0 = Global_262145.f_6056; break;

		case 1343791995: iParam0 = Global_262145.f_6057; break;

		case 576309246: iParam0 = Global_262145.f_6058; break;

		case 949154944: iParam0 = Global_262145.f_6059; break;

		case -622511834: iParam0 = Global_262145.f_6060; break;

		case -275651969: iParam0 = Global_262145.f_6061; break;

		case -1256283855: iParam0 = Global_262145.f_6062; break;

		case 955525350: iParam0 = Global_262145.f_6063; break;

		case 1252641873: iParam0 = Global_262145.f_6064; break;

		case -657146050: iParam0 = Global_262145.f_6477[0]; break;

		case -955835485: iParam0 = Global_262145.f_6477[1]; break;

		case -1269959119: iParam0 = Global_262145.f_6477[2]; break;

		case -1478763187: iParam0 = Global_262145.f_6477[3]; break;

		case -1881592504: iParam0 = Global_262145.f_6477[4]; break;

		case 2115996117: iParam0 = Global_262145.f_6477[5]; break;

		case 1824417551: iParam0 = Global_262145.f_6477[6]; break;

		case 1502068898: iParam0 = Global_262145.f_6477[7]; break;

		case -2019287742: iParam0 = Global_262145.f_6477[8]; break;

		case -1780827729: iParam0 = Global_262145.f_6477[9]; break;

		case -1966497207: iParam0 = Global_262145.f_6477[10]; break;

		case -2126999769: iParam0 = Global_262145.f_6477[11]; break;

		case 2014772448: iParam0 = Global_262145.f_6477[12]; break;

		case 1705760778: iParam0 = Global_262145.f_6477[13]; break;

		case 497993745: iParam0 = Global_262145.f_6477[14]; break;

		case 1142887665: iParam0 = Global_262145.f_6477[15]; break;

		case 22777707: iParam0 = Global_262145.f_6477[16]; break;

		case 799173624: iParam0 = Global_262145.f_6477[17]; break;

		case -410297401: iParam0 = Global_262145.f_6477[18]; break;

		case 214410819: iParam0 = Global_262145.f_6477[19]; break;

		case -2098342992: iParam0 = Global_262145.f_6477[20]; break;

		case -1280920283: iParam0 = Global_262145.f_6477[21]; break;

		case -1501455653: iParam0 = Global_262145.f_6477[22]; break;

		case 2117454408: iParam0 = Global_262145.f_6477[23]; break;

		case -1945704982: iParam0 = Global_262145.f_6477[24]; break;

		case -1581870771: iParam0 = Global_262145.f_6477[25]; break;

		case -1350521631: iParam0 = Global_262145.f_6477[26]; break;

		case -954508266: iParam0 = Global_262145.f_6477[27]; break;

		case -716244867: iParam0 = Global_262145.f_6477[28]; break;

		case 185361399: iParam0 = Global_262145.f_6477[29]; break;

		case -1208107213: iParam0 = Global_262145.f_6477[30]; break;

		case -812421538: iParam0 = Global_262145.f_6477[31]; break;

		case -566096965: iParam0 = Global_262145.f_6477[32]; break;

		case -316757644: iParam0 = Global_262145.f_6477[33]; break;

		case -103496992: iParam0 = Global_262145.f_6477[34]; break;

		case 391708136: iParam0 = Global_262145.f_6477[35]; break;

		case 616667309: iParam0 = Global_262145.f_6477[36]; break;

		case 870102755: iParam0 = Global_262145.f_6477[37]; break;

		case 1093030262: iParam0 = Global_262145.f_6477[38]; break;

		case 1378218869: iParam0 = Global_262145.f_6477[39]; break;

		case 332555747: iParam0 = Global_262145.f_6477[40]; break;

		case 1077526193: iParam0 = Global_262145.f_6477[41]; break;

		case 1332632858: iParam0 = Global_262145.f_6477[42]; break;

		case 1556379590: iParam0 = Global_262145.f_6477[43]; break;

		case 1780093553: iParam0 = Global_262145.f_6477[44]; break;

		case 2001284303: iParam0 = Global_262145.f_6477[45]; break;

		case -2059941716: iParam0 = Global_262145.f_6477[46]; break;

		case -1759875983: iParam0 = Global_262145.f_6477[47]; break;

		case -1521153818: iParam0 = Global_262145.f_6477[48]; break;

		case -878906519: iParam0 = Global_262145.f_9211; break;

		case -1176252425: iParam0 = Global_262145.f_9212; break;

		case -712472768: iParam0 = Global_262145.f_9213; break;

		case 1391002107: iParam0 = Global_262145.f_9214; break;

		case -1353368870: iParam0 = Global_262145.f_9215; break;

		case -1667033738: iParam0 = Global_262145.f_9216; break;

		case 1043028100: iParam0 = Global_262145.f_9217; break;





