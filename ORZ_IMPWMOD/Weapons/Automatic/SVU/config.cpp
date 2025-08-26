class CfgPatches
{
	class IMP_Weapons_SVU
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
	class IMP_SVU_Base: Rifle_Base
	{
		scope=0;
		weight = 4400;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength = 0.92;
		barrelArmor = 2.5;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
		};
		magazines[]=
		{
			"Mag_SVD_10Rnd",
			"IMP_Mag_SVD_CoupledTape_20Rnd",
			"IMP_Mag_SVD_CoupledClip_20Rnd"
		};
		magazineSwitchTime = 0.38;
		initSpeedMultiplier = 1;
		ejectType=1;
		attachments[] = {"weaponOpticsAK", "weaponWrap"};
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
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU1.rvmat",
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU1.rvmat",
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU1_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU1_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU1_destruct.rvmat",
								"IMPWMOD\Weapons\Automatic\SVU\data\SVU2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		simpleHiddenSelections[] = {};
		hiddenSelections[] = 
		{
			"camoflage1",
			"camoflage2"
		};
		hiddenSelectionsMaterials[] = 
		{
			"IMPWMOD\Weapons\Automatic\SVU\data\SVU1.rvmat",
			"IMPWMOD\Weapons\Automatic\SVU\data\SVU2.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Automatic\SVU\data\SVU1_co.paa",
			"IMPWMOD\Weapons\Automatic\SVU\data\SVU2_co.paa"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[]= {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.125;
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
			strength=50;
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
	class IMP_SVU : IMP_SVU_Base 
	{
		scope=2;
		displayName="SVU";
		descriptionShort="$STR_SVUD";
		model="IMPWMOD\Weapons\Automatic\SVU\models\SVU.p3d";
		itemSize[] = {9, 3};
	};
};