class CfgPatches {
	class IMP_Weapons_Suppressor_Hexagon {
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

    class IMP_Supp_Hexagon_AK_Base : M4_Suppressor 
    {
        scope = 0;
        displayName="$STR_IMP_SuppHexaak";
		descriptionShort="$STR_IMP_DescrSupp";
		model="\IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\models\HexagonSuppressor.p3d";
        rotationFlags=17;
		reversed=0;
		weight=73;
		repairableWithKits[] = {1};
		repairCosts[] = {25.0};
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=15000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
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
						{1.01,{"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon_destruct.rvmat"}}
					};
				};
			};
		};
    };
    class IMP_Supp_Hexagon_AK : IMP_Supp_Hexagon_AK_Base {
        scope = 2;
        hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Attachments\Suppressor\HexagonAKSuppressor\data\Hexagon_co.paa"};
    };
};