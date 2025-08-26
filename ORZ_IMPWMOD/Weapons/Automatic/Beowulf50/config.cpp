class CfgPatches
{
	class IMP_Beowulf50
	{
		units[] = {};
		weapons[] = {};
		requiredVersion=0.1;
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class Launcher_Base;
	class IMP_Beowulf50_Base: Rifle_Base
	{
		scope = 0;
		weight = 3970;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.6,50,200,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength=0.93;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"IMP_Ammo_127x42"};
		magazines[] = {"IMP_Mag_Beowulf50_20Rnd", "IMP_Mag_Beowulf50_Clip_40Rnd", "IMP_Mag_Beowulf50_Tape_40Rnd"};
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50.p3d";
		attachments[] = 
		{
			"weaponButtstockM4",
			"weaponWrap",
			"weaponOptics",
			"weaponBipod",
			"HandlesM4"
		};
		itemSize[] = {10,3};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {2.5,2.5,2.5};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_barrel","irons_up", "irons_down", "HandlesM4"};
		hiddenSelections[] = {"camoflage","camoflage1"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1_co.paa","IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2_co.paa"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Beowulf50_Shot_SoundSet", "Beowulf50_Tail_SoundSet", "Beowulf50_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Beowulf50_silencer_SoundSet", "Beowulf50_silencerTail_SoundSet", "Beowulf50_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 550;
		};
	};
	class IMP_Beowulf50: IMP_Beowulf50_Base
	{
		scope = 2;
		displayName = "Beowulf .50";
		descriptionShort = "$STR_IMP_beowdescr";
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
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
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1.rvmat", "IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1.rvmat", "IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1_damage.rvmat", "IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1_damage.rvmat", "IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf1_destruct.rvmat", "IMPWMOD\Weapons\Automatic\Beowulf50\data\Beowulf2_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_Beowulf50_20Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_Magbeow";
		descriptionShort = "$STR_IMP_Magbeow1";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag.p3d";
		weight = 90;
		itemSize[] = {1,3};
		count = 20;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.7,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.5,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}};
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
	class IMP_Mag_Beowulf50_Clip_40Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_Magbeow";
		descriptionShort = "$STR_IMP_Magbeow2";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag_Clip_40_Rnd.p3d";
		weight = 800;
		itemSize[] = {2,3};
		count = 40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.7,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.5,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}};
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
	class IMP_Mag_Beowulf50_Tape_40Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_Magbeow";
		descriptionShort = "$STR_IMP_Magbeow2";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag_Tape_40_Rnd.p3d";
		weight = 800;
		itemSize[] = {2,3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 40;
		ammo = "IMP_Bullet_127x42";
		ammoItems[] = {"IMP_Ammo_127x42"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.7,{"DZ\weapons\attachments\data\pmag_black.rvmat"}},{0.5,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\pmag_black_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\pmag_black_destruct.rvmat"}}};
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


	class ProxyBeowulf50_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag.p3d";
	};
	class ProxyBeowulf50_Mag_Clip_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag_Clip_40_Rnd.p3d";
	};
	class ProxyBeowulf50_Mag_Tape_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\Beowulf50\models\Beowulf50_Mag_Tape_40_Rnd.p3d";
	};
};
class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Beowulf50_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_closeShot_SoundShader",
			"Beowulf50_midShot_SoundShader",
			"Beowulf50_distShot_SoundShader"
		};
	};
	class Beowulf50_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_tailDistant_SoundShader",
			"Beowulf50_tailTrees_SoundShader",
			"Beowulf50_tailForest_SoundShader",
			"Beowulf50_tailMeadows_SoundShader",
			"Beowulf50_tailHouses_SoundShader"
		};
	};
	class Beowulf50_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_tailInterior_SoundShader"
		};
	};
	class Beowulf50_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_silencerCloseShot_SoundShader",
			"Beowulf50_silencerMidShot_SoundShader",
			"Beowulf50_silencerDistShot_SoundShader"
		};
	};
	class Beowulf50_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_silencerTailTrees_SoundShader",
			"Beowulf50_silencerTailForest_SoundShader",
			"Beowulf50_silencerTailMeadows_SoundShader",
			"Beowulf50_silencerTailHouses_SoundShader"
		};
	};
	class Beowulf50_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Beowulf50_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class Beowulf50_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
		volume=0.8;
	};
	class Beowulf50_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
		volume=0.5;
	};
	class Beowulf50_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
		volume=0.3;
	};
	class Beowulf50_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
		volume=0.3;
	};
	class Beowulf50_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
	};
	class Beowulf50_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
	};
	class Beowulf50_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
	};
	class Beowulf50_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
	};
	class Beowulf50_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot", 1}};
	};
	class Beowulf50_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
		volume=0.5;
	};
	class Beowulf50_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
		volume=0.3;
	};
	class Beowulf50_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
		volume=0.15;
	};
	class Beowulf50_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
	};
	class Beowulf50_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
	};
	class Beowulf50_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
	};
	class Beowulf50_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
	};
	class Beowulf50_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\Beowulf50\sounds\Beowulf50_Shot_Supp", 1}};
	};
};