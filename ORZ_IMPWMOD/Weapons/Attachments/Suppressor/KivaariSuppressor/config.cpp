class CfgPatches {
	class IMP_Weapons_Suppressor_Kivaari {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Muzzles", "DZ_Scripts"};
	};
};

class cfgVehicles {
	class ImprovisedSuppressor;
	class M4_Suppressor;
	class AK_Suppressor;

    class IMP_Supp_Kivaari_Base : M4_Suppressor 
    {
        scope = 0;
        displayName="$STR_IMP_Suppkivaar";
		descriptionShort="$STR_IMP_DescrSupp";
		model="\IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\models\Kivaari_Suppressor.p3d";
        rotationFlags=17;
		reversed=0;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=15000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"Kivaari_Suppressor"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
        hiddenSelections[] = {"camoflage"};
        class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {
						{1.01,{"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_destruct.rvmat"}}
					};
				};
			};
		};
    };
    class IMP_Supp_Kivaari_Black : IMP_Supp_Kivaari_Base {
        scope = 2;
        hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_b_co.paa"};
    };
    class IMP_Supp_Kivaari_Green : IMP_Supp_Kivaari_Base {
        scope = 0;
        hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_g_co.paa"};
    };
    class IMP_Supp_Kivaari_Tan : IMP_Supp_Kivaari_Base {
        scope = 0;
        hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\data\Suppressor_t_co.paa"};
    };
};

class CfgSlots {
	class Slot_Kivaari_Suppressor
	{
		name = "Kivaari_Suppressor";
		displayName = "$STR_IMP_SuppKivaariName";
		modGhostIcon = "set:Slots image:AACHBSupp";
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyKivaari_Suppressor : ProxyAttachment {
		scope = 0;
		inventorySlot = "Kivaari_Suppressor";
		model="\IMPWMOD\Weapons\Attachments\Suppressor\KivaariSuppressor\models\Kivaari_Suppressor.p3d";
	};
};

