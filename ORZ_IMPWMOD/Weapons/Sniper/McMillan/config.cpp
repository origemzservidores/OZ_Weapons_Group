class CfgPatches {
	class IMP_Weapons_McMillan_CS5 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};
class Mode_Safe;	
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons 
{
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_McMillan_CS5_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "McMillan CS5";
		descriptionShort = "$STR_IMP_cs5descr";
		weight = 1820;
		model = "IMPWMOD\Weapons\Sniper\McMillan\models\IMP_McMillan.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting", "weaponFlashlight", "grip1", "HandlesM4"};
		absorbency = 0.0;
		repairableWithKits[] = {1};
		WeaponLength=0.88;
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_McMillan_CS5_10Rnd"};
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		ejectType = 1;
		recoilModifier[] = {0.6,0.6,0.6};
		barrelArmor = 900;
		initSpeedMultiplier = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		simpleHiddenSelections[]={"hide_barrel", "HandlesM4"};
		itemSize[] = {8, 3};
		chamberSize = 1;
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[] = {"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 0.6;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_fnx_02";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_destruct.rvmat"}}
					};
				};
			};
		};
		class NoiseShoot
		{
			strength = 8.0;
			type = "shot";
		};
	};

	class IMP_McMillan_CS5 : IMP_McMillan_CS5_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_ca.paa"};
	};
};

class CfgMagazines 
{
	class Magazine_Base;
	
	class IMP_Mag_McMillan_CS5_10Rnd : Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_cs51";
		descriptionShort = "$STR_IMP_cs52";
		model = "IMPWMOD\Weapons\Sniper\McMillan\models\IMP_McMillan_Mag.p3d";
		ammo = "Bullet_308Win";
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		count=10;
		itemSize[] = {1, 2};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\McMillan\data\McMillan_destruct.rvmat"}}
					};
				};
			};
		};
	};
};