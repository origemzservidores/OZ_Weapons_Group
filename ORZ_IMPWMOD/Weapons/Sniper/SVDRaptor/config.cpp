class CfgPatches
{
	class IMP_Weapons_SVDRaptor
	{
		units[]=
		{
			"SVD"
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
class cfgWeapons
{
	class Rifle_Base;
	class IMP_SVDRaptor_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]={};
		WeaponLength=0.97;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberedRound="";
		chamberSize=1;
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
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"HandlesM4"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[]= {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.425;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
					overrideParticle="weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.050000001,-0.02,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.12,-0.02,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint="GasPiston";
					positionOffset[]={0.20999999,-0.02,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class Steam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.40000001,0.02,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class Steam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0.02,0};
					onlyWithinOverheatLimits[]={0.5,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0,1};
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
			strength=100;
			type="shot";
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class IMP_SVD_New_Base: Rifle_Base
	{
		scope=0;
		weight=3700;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		ironsightsExcludingOptics[]={};
		WeaponLength=1.12;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberedRound="";
		chamberSize=1;
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
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[]= {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.425;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
					overrideParticle="weapon_shot_mosin9130_01";
				};
				class SmokeCloud1
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle="weapon_shot_m4a1_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					overridePoint="StarFlash";
					ignoreIfSuppressed=1;
				};
				class GasPistonBurstR
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="GasPiston";
					overrideDirectionVector[]={180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.050000001,-0.02,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overridePoint="GasPiston";
					positionOffset[]={0.12,-0.02,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overridePoint="GasPiston";
					positionOffset[]={0.20999999,-0.02,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class Steam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.40000001,0.02,0};
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0.2,1};
				};
				class Steam2
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.44999999,0.02,0};
					onlyWithinOverheatLimits[]={0.5,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
					onlyWithinOverheatLimits[]={0,1};
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
			strength=100;
			type="shot";
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_HRifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_HRifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_HRifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_HRifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet="Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet="Weapon_Movement_HRifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet="Weapon_Movement_HRifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet="Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
			};
		};
	};
	class IMP_SVD_New: IMP_SVD_New_Base
	{
		scope=2;
		displayName="$STR_IMP_SVDNAME";
		descriptionShort="$STR_IMP_SVDdescr";
		model="\IMPWMOD\Weapons\Sniper\SVDRaptor\models\IMP_SVDNew.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"SuppressorSVD",
			"Rail",
			"weaponOptics"
		};
		itemSize[] = {10, 3};
		hiddenSelections[] = {"BGM", "BMB", "Bttstck", "Hndgrd"};
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\svdraptor\data\bgm_co.paa", "impwmod\weapons\sniper\svdraptor\data\bmb_co.paa", "impwmod\weapons\sniper\svdraptor\data\bttstck_co.paa", "impwmod\weapons\sniper\svdraptor\data\hndgrd_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\bttstck_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\hndgrd_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class IMP_SVDRaptor: IMP_SVDRaptor_Base
	{
		scope=2;
		displayName="$STR_IMP_SVDRapt";
		descriptionShort="$STR_IMP_SVDRaptdescr";
		model="\IMPWMOD\Weapons\Sniper\SVDRaptor\models\IMP_SVDRaptor.p3d";
		attachments[]=
		{
			"weaponWrap",
			"SuppressorSVD",
			"weaponOpticsHunting",
			"weaponFlashlight",
			"grip1",
			"weaponBipod",
			"weaponButtstockM4",
			"HandlesM4"
		};
		itemSize[] = {10, 3};
		hiddenSelections[] = {"BCM", "BMB", "CH", "PG", "PGA", "Tube"};
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\svdraptor\data\bgm_co.paa", "impwmod\weapons\sniper\svdraptor\data\bmb_co.paa", "impwmod\weapons\sniper\svdraptor\data\ch_co.paa", "impwmod\weapons\sniper\svdraptor\data\pg_co.paa", "impwmod\weapons\sniper\svdraptor\data\pga_co.paa", "impwmod\weapons\sniper\svdraptor\data\tube_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch_damage.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\sniper\svdraptor\data\bgm_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\bmb_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\ch_destruct.rvmat", "impwmod\weapons\sniper\svdraptor\data\pg.rvmat", "impwmod\weapons\sniper\svdraptor\data\pga.rvmat", "impwmod\weapons\sniper\svdraptor\data\tube.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
