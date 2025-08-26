class CfgPatches
{
	class IMP_Mag_M4_Stanag_30Rnd
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Sounds_Effects",
			"DZ_Scripts"
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M4_Stanag_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName="$STR_IMP_MagAK14";
		descriptionShort="$STR_IMP_MagAK17";
		model = "IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\models\M4Stanag30.p3d";
		weight = 500;
		itemSize[] = {1,3};
		count = 30;
		hiddenSelections[]=
		{
			"camoflage"
		};
		ammo = "Bullet_556x45";
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag.rvmat"}},{0.7,{"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag.rvmat"}},{0.5,{"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag_damage.rvmat"}},{0.3,{"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag_damage.rvmat"}},{0.01,{"IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\data\Mag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};
class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyM4Stanag30 : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\M4\M4Stanag30\models\M4Stanag30.p3d";
	};
};