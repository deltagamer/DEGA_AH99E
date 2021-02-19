class Components;
class CfgPatches 
{
	class DEGA_Vehicles_AH99 
	{
		units[] = 
		{
		    "DEGA_Heli_Attack_01_dynamicLoadout_F"		
		};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Air_F_Beta", "A3_Data_F_Heli"};
	};
};
class Mod_Base;
class CfgMods 
{
	class DEGA_Nato : Mod_Base 
	{
        #include "\dega_vehicles_ah99\data\release\mod.cpp"
	};
};	
class CfgFunctions 
{
	class DEGA 
	{
		class dega_vehicles_ah99 
		{
			file = "\dega_vehicles_ah99\data\functions"; 
			class AH99Doors {};
		};
	};
};
class CfgVehicles
{
	class Heli_Attack_01_dynamicLoadout_base_F;
	class DEGA_Heli_Attack_01_dynamicLoadout_F: Heli_Attack_01_dynamicLoadout_base_F
	{
		author="Deltagamer";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"rotor_destructx", 0}, {"rotor_destructy", 0}, {"mala_vrtule_destructy", 0}, {"mala_vrtule_destructz", 0}, {"damagehide", 0}, {"hrotor", 0}, {"vrotor", 0}, {"lever_pilot", 0}, {"lever_copilot", 0}, {"pedall", 0}, {"pedalr", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"positionlights", 0}, {"collisionlight_red_blinking", 0}, {"collisionlight_white_blinking", 0}, {"i_compass_pilot", 0}, {"i_compass_copilot", 0}, {"dg_pitch", 0}, {"dg_bank", 0}, {"dg_pitch2", 0}, {"dg_bank2", 0}, {"dg_vertspeed", 0}, {"dg_vertspeed2", 0}, {"dg_atl", 0}, {"dg_atl2", 0}, {"display_on", 0}, {"wheel_rear_damper", 0}, {"wheel_left_damper", 0}, {"wheel_right_damper", 0}, {"reargear", 0}, {"rearrightcover", 0}, {"rearleftcover", 0}, {"rightgear", 0}, {"rightgearfwd", 0}, {"rightcover_p1", 0}, {"rightcover_p2", 0}, {"rightcover_p3", 0}, {"leftgear", 0}, {"leftgearfwd", 0}, {"leftcover_p1", 0}, {"leftcover_p2", 0}, {"leftcover_p3", 0}, {"wheel_1_1", 0}, {"wheel_1_2", 0}, {"wheel_2_1", 0}, {"mainturret", 0}, {"mainturretoptics", 0}, {"maingun", 0.1}, {"maingunoptics", 0.1}, {"machinegun", 1}, {"zaslehrot", 608}, {"leftholdster", 0}, {"rightholdster", 0}, {"leftholdster_dynloadout", 0}, {"rightholdster_dynloadout", 0}, {"hidepg_1", 1}, {"hidepg_2", 1}, {"hidepg_3", 1}, {"hidepg_4", 1}, {"hidepg_5", 1}, {"hidepg_6", 1}, {"hidepg_7", 1}, {"hidepg_8", 1}, {"hidepg_9", 1}, {"hidepg_10", 1}, {"hidepg_11", 1}, {"hidepg_12", 1}, {"hidepg_13", 1}, {"hidepg_14", 1}, {"hidepg_15", 1}, {"hidepg_16", 1}, {"hidepg_17", 1}, {"hidepg_18", 1}, {"hidepg_19", 1}, {"hidepg_20", 1}, {"hidepg_21", 1}, {"hidepg_22", 1}, {"hidepg_23", 1}, {"hidepg_24", 1}, {"stick_pilot_dive_01", 0}, {"stick_pilot_dive_02", 0}, {"stick_pilot_dive_03", 0}, {"stick_pilot_dive_04", 0}, {"stick_pilot_dive_05", 0}, {"stick_pilot_bank_01", 0}, {"stick_pilot_bank_02", 0}, {"stick_pilot_bank_03", 0}, {"stick_pilot_bank_04", 0}, {"stick_pilot_bank_05", 0}, {"stick_copilot_dive01", 0}, {"stick_copilot_dive02", 0}, {"stick_copilot_dive03", 0}, {"stick_copilot_dive04", 0}, {"stick_copilot_dive05", 0}, {"stick_copilot_bank01", 0}, {"stick_copilot_bank02", 0}, {"stick_copilot_bank03", 0}, {"stick_copilot_bank04", 0}, {"stick_copilot_bank05", 0}, {"hideweaponsl", 1}, {"hideweaponsr", 1}, {"pilotcamera_h", 0}, {"pilotcamera_v", 0.09}};
			hide[] = {"clan", "zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 1.963;
			verticalOffsetWorld = 0.041;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		class Eventhandlers
		{
			init = "_this call dega_fnc_AH99Doors";
			AttributesChanged3DEN = "_this call dega_fnc_AH99Doors";
			Dragged3DEN = "_this call dega_fnc_AH99Doors";
			RegisteredToWorld3DEN = "_this call dega_fnc_AH99Doors";
			UnregisteredFromWorld3DEN = "";
		};			
		editorPreview = "\dega_vehicles_ah99\data\ui\DEGA_Heli_Attack_01_dynamicLoadout_F.jpg";
		_generalMacro="DEGA_Heli_Attack_01_dynamicLoadout_F";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		forceInGarage=1;
		displayName="AH-99E Mohawk";
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]={"B_pilot_F"};
		accuracy=2.5;
		availableForSupportTypes[]={"CAS_Heli"};
		class Library{libTextDesc="$STR_A3_Heli_Attack_01_lib";};
		class Components : Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\dega_vehicles_ah99\data\ui\heli_attack_01_eden_ca.paa";
				class Pylons
				{				
					class PylonLeft1
					{
						attachment = "PylonRack_12Rnd_PG_missiles";
						priority = 5;
						bay = 1;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
						turret[] = {0};
						UIposition[] = {0.06, 0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel_AH99_2";
						priority = 4;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "SCALPEL_4RND_AH99_2", "PG_24RND_AH99_2"};
						UIposition[] = {0.08, 0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonMissile_1Rnd_AAA_missiles";
						priority = 3;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR"};
						UIposition[] = {0.1, 0.3};
					};		
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.59, 0.3};
					};
					class PylonRight2: PylonLeft2
					{
						attachment = "PylonRack_4Rnd_LG_scalpel_AH99_1";	
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "SCALPEL_4RND_AH99_1", "PG_24RND_AH99_1"};						
						mirroredMissilePos = 2;
						UIposition[] = {0.62, 0.35};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.64, 0.4};
					};				
				};
				class Bays
				{
					class Bay
					{
						bayOpenTime = 1;
						openBayWhenWeaponSelected = -1;
						autoCloseWhenEmptyDelay = -1;
					};				
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] = {"PylonRack_12Rnd_PG_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_2", "PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_1", "PylonRack_12Rnd_PG_missiles"};
					};
					class AT
					{
						displayName = "AT";
						attachment[] = {"PylonRack_12Rnd_PG_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_2", "PylonRack_12Rnd_PG_missiles", "PylonRack_12Rnd_PG_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_1", "PylonRack_12Rnd_PG_missiles"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonRack_12Rnd_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_2", "PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_4Rnd_LG_scalpel_AH99_1", "PylonRack_12Rnd_missiles"};
					};
				};
			};		
		};
	};			
};
class CfgMagazines
{
    class 8Rnd_LG_scalpel;
	//class 24Rnd_PG_missiles;
	class PylonRack_4Rnd_LG_scalpel_AH99_1: 8Rnd_LG_scalpel
	{
		displayName = "Scalpel 5x (External)";
		count = 5;
		hardpoints[] = {"SCALPEL_4RND_AH99_1"};
		model = "\dega_vehicles_ah99\ah99_external_pylon_left.p3d";
		pylonWeapon = "missiles_SCALPEL_AH99";
	};
	class PylonRack_4Rnd_LG_scalpel_AH99_2: PylonRack_4Rnd_LG_scalpel_AH99_1
	{
		hardpoints[] = {"SCALPEL_4RND_AH99_2"};		
		model = "\dega_vehicles_ah99\ah99_external_pylon_right.p3d";
	};
	/*
	class PylonRack_24Rnd_PG_missiles_AH99_1: 24Rnd_PG_missiles
	{
		displayName = "DAGR (External)";
		count = 5;
		hardpoints[] = {"PG_24RND_AH99_1"};
		model = "\dega_vehicles_ah99\ah99_external_pylon_left.p3d";
		pylonWeapon = "missiles_SCALPEL_AH99";
	};
	class PylonRack_24Rnd_PG_missiles_AH99_2: PylonRack_24Rnd_PG_missiles_AH99_1
	{
		hardpoints[] = {"PG_24RND_AH99_2"};		
		model = "\dega_vehicles_ah99\ah99_external_pylon_right.p3d";
	};	
	*/
};
class CfgWeapons
{
    class missiles_SCALPEL;
	//class 24Rnd_PG_missiles;
	class missiles_SCALPEL_AH99: missiles_SCALPEL
	{
		magazines[] = {"PylonRack_4Rnd_LG_scalpel_AH99_1", "PylonRack_4Rnd_LG_scalpel_AH99_2"};
	};
	/*
	class 24Rnd_PG_missiles_AH99: 24Rnd_PG_missiles
	{
		magazines[] = {"PylonRack_24Rnd_PG_missiles_AH99_1", "PylonRack_24Rnd_PG_missiles_AH99_2"};
	};	
	*/
};