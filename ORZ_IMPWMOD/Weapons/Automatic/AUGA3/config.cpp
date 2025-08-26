class CfgPatches
{
	class IMP_Weapons_AUGA3
	{
		units[] = {};
		weapons[]={};
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
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_AUGA3_Base: Rifle_Base
	{
		scope=0;
		weight = 4500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength = 0.75;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[] = 
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
		    "Mag_STANAG_60Rnd", 
			"IMP_Mag_M4_Drum60Rnd", 
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd", 
			"IMP_Mag_M4_Gen2_30Rnd",
			"IMP_Mag_HK_Polymer_30Rnd", 
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd", 
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd",
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
		magazineSwitchTime = 0.38;
		initSpeedMultiplier = 1;
		ejectType=1;
		attachments[] = {"weaponMuzzleM4","weaponOptics","weaponFlashlight","weaponWrap", "weaponBipod"};
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.25,1.25,1};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG.rvmat",
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_1.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG.rvmat",
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_1_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_1_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_destruct.rvmat",
								"IMPWMOD\Weapons\Automatic\AUGA3\data\AUG_1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		simpleHiddenSelections[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelectionsTextures[] = {};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"AUGA3_Shot_SoundSet", "AUGA3_Tail_SoundSet", "AUGA3_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AUGA3_silencer_SoundSet", "AUGA3_silencerTail_SoundSet", "AUGA3_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"AUGA3_Shot_SoundSet", "AUGA3_Tail_SoundSet", "AUGA3_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AUGA3_silencer_SoundSet", "AUGA3_silencerTail_SoundSet", "AUGA3_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.08;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
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
			strength=82;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=200;
			PPMaskProperties[]={0.5,0.5,0.1,0.050000001};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0.2;
		};
	};
	class IMP_AUGA3 : IMP_AUGA3_Base 
	{
		scope=2;
		displayName="AUG A3";
		descriptionShort="$STR_IMP_AUGdescr";
		model="IMPWMOD\Weapons\Automatic\AUGA3\models\IMP_AUGA3.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponFlashlight",
			"grip1"
		};
		itemSize[] = {9, 3};
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
	class AUGA3_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_closeShot_SoundShader",
			"AUGA3_midShot_SoundShader",
			"AUGA3_distShot_SoundShader"
		};
	};
	class AUGA3_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_tailDistant_SoundShader",
			"AUGA3_tailTrees_SoundShader",
			"AUGA3_tailForest_SoundShader",
			"AUGA3_tailMeadows_SoundShader",
			"AUGA3_tailHouses_SoundShader"
		};
	};
	class AUGA3_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_tailInterior_SoundShader"
		};
	};
	class AUGA3_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_silencerCloseShot_SoundShader",
			"AUGA3_silencerMidShot_SoundShader",
			"AUGA3_silencerDistShot_SoundShader"
		};
	};
	class AUGA3_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_silencerTailTrees_SoundShader",
			"AUGA3_silencerTailForest_SoundShader",
			"AUGA3_silencerTailMeadows_SoundShader",
			"AUGA3_silencerTailHouses_SoundShader"
		};
	};
	class AUGA3_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AUGA3_silencerTailInterior_SoundShader"
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
	class AUGA3_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
		volume=0.8;
	};
	class AUGA3_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
		volume=0.5;
	};
	class AUGA3_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
		volume=0.3;
	};
	class AUGA3_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
		volume=0.3;
	};
	class AUGA3_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
	};
	class AUGA3_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
	};
	class AUGA3_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
	};
	class AUGA3_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
	};
	class AUGA3_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot", 1}};
	};
	class AUGA3_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
		volume=0.5;
	};
	class AUGA3_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
		volume=0.3;
	};
	class AUGA3_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
		volume=0.15;
	};
	class AUGA3_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
	};
	class AUGA3_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
	};
	class AUGA3_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
	};
	class AUGA3_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
	};
	class AUGA3_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AUGA3\sounds\AUGA3_Shot_Supp", 1}};
	};
};