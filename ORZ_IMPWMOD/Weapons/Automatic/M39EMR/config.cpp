class CfgPatches
{
	class IMP_M39_EMR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Firearms", "DZ_Weapons_Magazines", "DZ_Scripts"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons 
{
	class Rifle_Base;
	
	class IMP_M39EMR_Base: Rifle_Base 
	{
		scope=0;
		weight=2140;
		displayName="M39 EMR";
		descriptionShort="$STR_IMP_M39EMR";
		model="IMPWMOD\Weapons\Automatic\M39EMR\models\M39EMR.p3d";
		itemSize[] = {9, 3};
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=1.1;
		initSpeedMultiplier = 1.23;
		barrelArmor=4.4439998;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_M39EMR_20Rnd", "IMP_Mag_M39EMR_Tape_40Rnd", "IMP_Mag_M39EMR_Clip_40Rnd"};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.4000001,2.4000001,1.3};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down"};
		hiddenSelections[] = {"camoflage"};
		attachments[] = {"weaponWrap","weaponOptics","Suppressor_308"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto: Mode_SemiAuto {
			soundSetShot[] = {"M39EMR_Shot_SoundSet", "M39EMR_Tail_SoundSet", "M39EMR_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "M39EMR_silencer_SoundSet", "M39EMR_silencerTail_SoundSet", "M39EMR_silencerInteriorTail_SoundSet"}};
			reloadTime=0.12;
			recoil="recoil_m14";
			recoilProne="recoil_m14";
			dispersion=0.00044999999;
			magazineSlot="magazine";
		};
		
		class FullAuto: Mode_FullAuto {
			soundSetShot[] = {"M39EMR_Shot_SoundSet", "M39EMR_Tail_SoundSet", "M39EMR_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "M39EMR_silencer_SoundSet", "M39EMR_silencerTail_SoundSet", "M39EMR_silencerInteriorTail_SoundSet"}};
			reloadTime=0.097999997;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot {
			strength=82;
			type="shot";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash {
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmokeBurst {
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating {
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1 {
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1 {
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3 {
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall {
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam {
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
				};
				class OpenChamberSmoke {
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=1000;
					healthLevels[] = {{1.0, {"DZ\weapons\firearms\fal\Data\fal.rvmat"}}, {0.7, {"DZ\weapons\firearms\fal\Data\fal.rvmat"}}, {0.5, {"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}}, {0.3, {"DZ\weapons\firearms\fal\Data\fal_damage.rvmat"}}, {0.0, {"DZ\weapons\firearms\fal\Data\fal_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_M39EMR: IMP_M39EMR_Base
	{
		scope=2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_co.paa"};
	};
	
	class IMP_M39EMR_Brown: IMP_M39EMR
	{
		scope=2;
		LvlWeapon = 1;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_brown_co.paa"};
	};
	
	class IMP_M39EMR_Tan: IMP_M39EMR
	{
		scope=2;
		LvlWeapon = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_tan_co.paa"};
	};
	
	class IMP_M39EMR_PixelCity: IMP_M39EMR
	{
		scope=2;
		LvlWeapon = 3;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_pixelcity_co.paa"};
	};
	
	class IMP_M39EMR_PixelTan: IMP_M39EMR
	{
		scope=2;
		LvlWeapon = 4;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_pixeltan_co.paa"};
	};
};

class cfgMagazines 
{
	class Magazine_Base;
	class IMP_Mag_M39EMR_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_M39mag";
		descriptionShort="$STR_IMP_M39mag1";
		model="IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag.p3d";
		weight=400;
		itemSize[]={1,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=20;
		ammo="Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery=0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=100;
					healthLevels[] = {{1.0, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.7, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.5, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.3, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.0, {"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_Mag_M39EMR_Clip_40Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_M39mag";
		descriptionShort="$STR_IMP_M39mag2";
		model="IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag_Clip_40_Rnd.p3d";
		weight=800;
		itemSize[]={2,2};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count=40;
		ammo="Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery=0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=100;
					healthLevels[] = {{1.0, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.7, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.5, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.3, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.0, {"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_Mag_M39EMR_Tape_40Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_M39mag";
		descriptionShort="$STR_IMP_M39mag2";
		model="IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag_Tape_40_Rnd.p3d";
		weight=800;
		itemSize[]={2,2};
		count=40;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo="Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		tracersEvery=0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\M39EMR\data\M39EMR_co.paa"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=100;
					healthLevels[] = {{1.0, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.7, {"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"}}, {0.5, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.3, {"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"}}, {0.0, {"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyM39_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag.p3d";
	};
	class ProxyM39_Mag_Clip_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag_Clip_40_Rnd.p3d";
	};
	class ProxyM39_Mag_Tape_40_Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\M39EMR\models\M39_Mag_Tape_40_Rnd.p3d";
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
	class M39EMR_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_closeShot_SoundShader",
			"M39EMR_midShot_SoundShader",
			"M39EMR_distShot_SoundShader"
		};
	};
	class M39EMR_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_tailDistant_SoundShader",
			"M39EMR_tailTrees_SoundShader",
			"M39EMR_tailForest_SoundShader",
			"M39EMR_tailMeadows_SoundShader",
			"M39EMR_tailHouses_SoundShader"
		};
	};
	class M39EMR_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_tailInterior_SoundShader"
		};
	};
	class M39EMR_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_silencerCloseShot_SoundShader",
			"M39EMR_silencerMidShot_SoundShader",
			"M39EMR_silencerDistShot_SoundShader"
		};
	};
	class M39EMR_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_silencerTailTrees_SoundShader",
			"M39EMR_silencerTailForest_SoundShader",
			"M39EMR_silencerTailMeadows_SoundShader",
			"M39EMR_silencerTailHouses_SoundShader"
		};
	};
	class M39EMR_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M39EMR_silencerTailInterior_SoundShader"
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
	class M39EMR_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
		volume=0.8;
	};
	class M39EMR_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
		volume=0.5;
	};
	class M39EMR_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
		volume=0.3;
	};
	class M39EMR_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
		volume=0.8;
	};
	class M39EMR_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
	};
	class M39EMR_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
	};
	class M39EMR_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
	};
	class M39EMR_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
	};
	class M39EMR_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot", 1}};
	};
	class M39EMR_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
		volume=0.5;
	};
	class M39EMR_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
		volume=0.3;
	};
	class M39EMR_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
		volume=0.15;
	};
	class M39EMR_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
	};
	class M39EMR_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
	};
	class M39EMR_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
	};
	class M39EMR_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
	};
	class M39EMR_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\M39EMR\sounds\M39EMR_Shot_Supp", 1}};
	};
};