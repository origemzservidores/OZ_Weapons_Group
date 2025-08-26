class CfgPatches
{
	class IMP_Weapons_VR80
	{
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
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_VR80_Base: Rifle_Base
	{
		scope = 0;
		weight = 3600;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {1,0.5,20,170,4,10};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.991;
		initSpeedMultiplier = 1;
		barrelArmor = 4.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"IMP_Mag_VR80_5Rnd","IMP_Mag_VR80_10Rnd", "IMP_Mag_VR80_Tape_20Rnd", "IMP_Mag_VR80_Clip_20Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {0.9,0.9,0.9};
		swayModifier[] = {2.4,2.4,1.2};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"VR80_Shot_SoundSet", "VR80_Tail_SoundSet", "VR80_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "VR80_silencer_SoundSet", "VR80_silencerTail_SoundSet", "VR80_silencerInteriorTail_SoundSet"}};
			reloadTime=0.2;
			recoil="recoil_Saiga12";
			recoilProne="recoil_Saiga12_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
	};
	
	class IMP_VR80: IMP_VR80_Base
	{
		scope = 2;
		displayName = "VR-80";
		descriptionShort = "$STR_IMP_vr80";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_VR80.p3d";
		attachments[] = {"weaponOptics","weaponWrap","weaponFlashlight"};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body.rvmat"};
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
					onlyWithinOverheatLimits[] = {0.0,0.2};
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
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.7,{"DZ\weapons\firearms\M4\Data\m4_body.rvmat"}},{0.5,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\M4\Data\m4_body_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\M4\Data\m4_body_destruct.rvmat"}}};
				};
			};
		};
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_VR80_10Rnd: Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_Magvr80";
		descriptionShort = "$STR_IMP_Magvr801";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_10Rnd.p3d";
		weight = 400;
		itemSize[] = {1, 3};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 10;
		ammo="Bullet_12GaugePellets";
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}};
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
	class IMP_Mag_VR80_Tape_20Rnd: Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_Magvr80";
		descriptionShort = "$STR_IMP_Magvr802";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_Tape_20_Rnd.p3d";
		weight = 800;
		itemSize[] = {2, 3};
		count = 20;
		ammo="Bullet_12GaugePellets";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}};
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
	class IMP_Mag_VR80_Clip_20Rnd: Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_Magvr80";
		descriptionShort = "$STR_IMP_Magvr802";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_Clip_20_Rnd.p3d";
		weight = 800;
		itemSize[] = {2, 3};
		count = 20;
		ammo="Bullet_12GaugePellets";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_10Rnd.rvmat"}}};
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
	class IMP_Mag_VR80_5Rnd: Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_Magvr80";
		descriptionShort = "$STR_IMP_Magvr803";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_5Rnd.p3d";
		weight = 400;
		itemSize[] = {1, 2};
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		count = 5;
		ammo="Bullet_12GaugePellets";
		ammoItems[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_5Rnd.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_5Rnd.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_5Rnd.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_5Rnd.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Automatic\VR80\data\VR80_Mag_5Rnd.rvmat"}}};
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


	class ProxyIMP_Mag_VR80_5Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_5Rnd.p3d";
	};
	class ProxyIMP_Mag_VR80_10Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_10Rnd.p3d";
	};
	class ProxyIMP_Mag_VR80_Clip_20_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_Clip_20_Rnd.p3d";
	};
	class ProxyIMP_Mag_VR80_Tape_20_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VR80\models\IMP_Mag_VR80_Tape_20_Rnd.p3d";
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
	class VR80_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_closeShot_SoundShader",
			"VR80_midShot_SoundShader",
			"VR80_distShot_SoundShader"
		};
	};
	class VR80_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_tailDistant_SoundShader",
			"VR80_tailTrees_SoundShader",
			"VR80_tailForest_SoundShader",
			"VR80_tailMeadows_SoundShader",
			"VR80_tailHouses_SoundShader"
		};
	};
	class VR80_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_tailInterior_SoundShader"
		};
	};
	class VR80_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_silencerCloseShot_SoundShader",
			"VR80_silencerMidShot_SoundShader",
			"VR80_silencerDistShot_SoundShader"
		};
	};
	class VR80_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_silencerTailTrees_SoundShader",
			"VR80_silencerTailForest_SoundShader",
			"VR80_silencerTailMeadows_SoundShader",
			"VR80_silencerTailHouses_SoundShader"
		};
	};
	class VR80_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"VR80_silencerTailInterior_SoundShader"
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
	class VR80_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
		volume=0.8;
	};
	class VR80_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
		volume=0.5;
	};
	class VR80_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
		volume=0.3;
	};
	class VR80_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
		volume=0.3;
	};
	class VR80_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
	};
	class VR80_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
	};
	class VR80_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
	};
	class VR80_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
	};
	class VR80_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot", 1}};
	};
	class VR80_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
		volume=0.5;
	};
	class VR80_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
		volume=0.3;
	};
	class VR80_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
		volume=0.15;
	};
	class VR80_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
	};
	class VR80_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
	};
	class VR80_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
	};
	class VR80_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
	};
	class VR80_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\VR80\sounds\VR80_Shot_Supp", 1}};
	};
};