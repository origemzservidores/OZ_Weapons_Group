class CfgPatches
{
	class IMP_Weapons_AK12
	{
		units[]=
		{
			"IMP_AK12"
		};
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
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons {
	class Rifle_Base;
	
	class IMP_AK12_Base: Rifle_Base
	{
		scope=0;
		weight=2140;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=0.62;
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		attachments[]=
		{
			"weaponButtstockAK",
			"weaponWrap",
			"weaponOptics",
			"weaponMuzzleAK",
			"grip1",
			"HandlesAK"
		};
		itemSize[] = {9, 3};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"IMP_Mag_AK12_30Rnd",
			"IMP_Mag_AK12_Tape_60Rnd",
			"IMP_Mag_AK12_Clip_60Rnd",
			"IMP_Mag_AK_Arsenal_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.45,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"HandlesAK"
		};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage1"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.1;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
	};
	class IMP_AK12: IMP_AK12_Base
	{
		scope=2;
		displayName="AK-12";
		descriptionShort="$STR_IMP_AK12descr";
		model="\IMPWMOD\Weapons\Automatic\AK12\models\AK12.p3d";
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AK12\data\AK_12_co.paa", "IMPWMOD\Weapons\Automatic\AK12\data\AK_12_co.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\AK12\data\AK12.rvmat", "IMPWMOD\Weapons\Automatic\AK12\data\AK12_Plastic.rvmat"};
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
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
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
							1.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12\data\AK12.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12\data\AK12.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12\data\AK12_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12\data\AK12_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12\data\AK12_destruct.rvmat"
							}
						}
					};
				};
			};
		};
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
	class AK12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_closeShot_SoundShader",
			"AK12_midShot_SoundShader",
			"AK12_distShot_SoundShader"
		};
	};
	class AK12_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_tailDistant_SoundShader",
			"AK12_tailTrees_SoundShader",
			"AK12_tailForest_SoundShader",
			"AK12_tailMeadows_SoundShader",
			"AK12_tailHouses_SoundShader"
		};
	};
	class AK12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_tailInterior_SoundShader"
		};
	};
	class AK12_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_silencerCloseShot_SoundShader",
			"AK12_silencerMidShot_SoundShader",
			"AK12_silencerDistShot_SoundShader"
		};
	};
	class AK12_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_silencerTailTrees_SoundShader",
			"AK12_silencerTailForest_SoundShader",
			"AK12_silencerTailMeadows_SoundShader",
			"AK12_silencerTailHouses_SoundShader"
		};
	};
	class AK12_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AK12_silencerTailInterior_SoundShader"
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
	class AK12_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
		volume=0.8;
	};
	class AK12_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
		volume=0.5;
	};
	class AK12_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
		volume=0.3;
	};
	class AK12_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
		volume=0.8;
	};
	class AK12_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
	};
	class AK12_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
	};
	class AK12_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
	};
	class AK12_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
	};
	class AK12_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot", 1}};
	};
	class AK12_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
		volume=0.5;
	};
	class AK12_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
		volume=0.3;
	};
	class AK12_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
		volume=0.15;
	};
	class AK12_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
	};
	class AK12_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
	};
	class AK12_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
	};
	class AK12_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
	};
	class AK12_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AK12\sounds\AK12_Shot_Supp", 1}};
	};
};