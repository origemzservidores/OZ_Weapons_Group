class CfgPatches {
	class IMP_Weapons_RSASS {
		units[] = {"IMP_RSASS"};
		weapons[] = {"IMP_RSASS"};
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
class OpticsInfoRifle;

class cfgWeapons {
	class OpticsInfoRifle;
	class Rifle_Base;
	
	class IMP_RSASS_Base : Rifle_Base {
		scope = 0;
		displayName = "RSASS";
		descriptionShort = "$STR_IMP_RSASSDescr";
		weight = 5941;
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics",
			"Suppressor_338",
			"weaponButtstockM4",
			"grip1",
			"weaponBipod",
			"HandlesM4"
		};
		absorbency = 0.1;
		repairableWithKits[] = {5, 1};
		repairCosts[] = {30, 25};
		initSpeedMultiplier = 1;
		WeaponLength=0.88;//ВАЖНО длина ствола
		discreteDistanceInitIndex = 0;
		recoilModifier[] = {0.8,0.8,1};
		swayModifier[]={0.8,0.8,1};
		PPDOFProperties[] = {1, 0.5, 20, 170, 4, 10};
		simpleHiddenSelections[] = {"HandlesM4"};
		ironsightsExcludingOptics[] = {"BUISOptic", "M68Optic", "M4_T3NRDSOptic", "ReflexOptic", "M4_CarryHandleOptic", "M4_T3NRDSOptic", "ReflexOptic", "ACOGOptic", "HuntingOptic", "LongrangeOptic", "sniperOptic"};
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[]=
		{
			"IMP_Ammo_338LM"
		};
		magazines[] = 
		{
			"IMP_Mag_RSASS_20Rnd",
			"IMP_Mag_RSASS_Clip_40Rnd", 
			"IMP_Mag_RSASS_Tape_40Rnd"
		};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		hiddenSelections[] = {};
		modes[] = {"SemiAuto", "FullAuto"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[]= {"MK18_Shot_SoundSet","MK18_Tail_SoundSet","MK18_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MK18_silencerHomeMade_SoundSet","MK18_silencerHomeMadeTail_SoundSet","MK18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.250;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]= {"MK18_Shot_SoundSet","MK18_Tail_SoundSet","MK18_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MK18_silencerHomeMade_SoundSet","MK18_silencerHomeMadeTail_SoundSet","MK18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.075;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength=40;
			type="shot";
		};
	};
	class IMP_RSASS : IMP_RSASS_Base {
		scope = 2;
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS.p3d";
		itemSize[] = {10, 3};
		dexterity = 2.3;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000;
					healthLevels[] = {{1, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS.rvmat"}}, {0.7, {}}, {0.5, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_damage.rvmat"}}, {0.3, {}}, {0, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_destruct.rvmat"}}};
				};
			};
		};
	};
};
	
class CfgMagazines
{
	class Magazine_Base;
	
	class IMP_Mag_RSASS_20Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_RSASSDescr2";
		descriptionShort = "$STR_IMP_RSASSDescr4";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag.p3d";
		weight = 300;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		itemSize[] = {1, 3};
		count = 20;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag.rvmat"}}, {0.7, {}}, {0.5, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_damage.rvmat"}}, {0.3, {}}, {0, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class IMP_Mag_RSASS_Tape_40Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_RSASSDescr2";
		descriptionShort = "$STR_IMP_RSASSDescr6";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag_Tape.p3d";
		weight = 300;
		itemSize[] = {2, 3};
		count = 40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag.rvmat"}}, {0.7, {}}, {0.5, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_damage.rvmat"}}, {0.3, {}}, {0, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class IMP_Mag_RSASS_Clip_40Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_RSASSDescr2";
		descriptionShort = "$STR_IMP_RSASSDescr6";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag_Clip.p3d";
		weight = 300;
		itemSize[] = {2, 3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 40;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag.rvmat"}}, {0.7, {}}, {0.5, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_damage.rvmat"}}, {0.3, {}}, {0, {"IMPWMOD\Weapons\Sniper\RSASS\data\RSASS_Mag_destruct.rvmat"}}};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyIMP_RSASS_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag.p3d";
	};
	class ProxyIMP_RSASS_Mag_Clip : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag_Clip.p3d";
	};
	class ProxyIMP_RSASS_Mag_Tape : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\RSASS\models\IMP_RSASS_Mag_Tape.p3d";
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class RSASS_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_closeShot_SoundShader",
			"RSASS_midShot_SoundShader",
			"RSASS_distShot_SoundShader"
		};
	};
	class RSASS_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_tailDistant_SoundShader",
			"RSASS_tailTrees_SoundShader",
			"RSASS_tailForest_SoundShader",
			"RSASS_tailMeadows_SoundShader",
			"RSASS_tailHouses_SoundShader"
		};
	};
	class RSASS_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_tailInterior_SoundShader"
		};
	};
	class RSASS_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_silencerHomeMadeCloseShot_SoundShader",
			"RSASS_silencerHomeMadeMidShot_SoundShader",
			"RSASS_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class RSASS_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_silencerHomeMadeTailTrees_SoundShader",
			"RSASS_silencerHomeMadeTailForest_SoundShader",
			"RSASS_silencerHomeMadeTailMeadows_SoundShader",
			"RSASS_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class RSASS_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"RSASS_silencerHomeMadeTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_tailInterior_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class RSASS_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
		volume=0.8;
	};
	class RSASS_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
		volume=0.5;
	};
	class RSASS_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
		volume=0.3;
	};
	class RSASS_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
		volume=0.5;
	};
	class RSASS_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
	};
	class RSASS_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
	};
	class RSASS_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
	};
	class RSASS_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
	};
	class RSASS_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot", 1}};
	};
	class RSASS_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
		volume=0.5;
	};
	class RSASS_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
		volume=0.3;
	};
	class RSASS_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
		volume=0.15;
	};
	class RSASS_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
	};
	class RSASS_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
	};
	class RSASS_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
	};
	class RSASS_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
	};
	class RSASS_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RSASS\sounds\RSASS_Shot_Supp", 1}};
	};
};