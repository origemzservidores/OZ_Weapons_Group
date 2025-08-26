class CfgPatches
{
	class IMP_Weapons_AEK
	{
		units[]={};
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
	class IMP_AEK_Base: Rifle_Base
	{
		scope=0;
		weight=1990;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={};
		barrelArmor=2.5;
		WeaponLength=0.65;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_545x39",
			"Ammo_545x39Tracer"
		};
		magazines[]=
		{
			"Mag_AK74_30Rnd",
			"Mag_AK74_30Rnd_Black",
			"Mag_AK74_30Rnd_Green",
			"Drum_Rpk_95Rnd",
			"Mag_AK74_45Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"magazine"
		};
		hiddenSelections[]=
		{
			"camoflage",
			"magazine"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
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
					overrideParticle="weapon_shot_ak74_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.1,0,0};
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
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AEK_Shot_SoundSet", "AEK_Tail_SoundSet", "AEK_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AEK_silencer_SoundSet", "AEK_silencerTail_SoundSet", "AEK_silencerInteriorTail_SoundSet"}};
			reloadTime=0.066667;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AEK_Shot_SoundSet", "AEK_Tail_SoundSet", "AEK_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AEK_silencer_SoundSet", "AEK_silencerTail_SoundSet", "AEK_silencerInteriorTail_SoundSet"}};
			reloadTime=0.092;
			recoil="recoil_AK74";
			recoilProne="recoil_AK74_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 300;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=1;
				};
				class walkErc_R
				{
					soundSet="Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id=2;
				};
				class runErc_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=3;
				};
				class runErc_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_R_SoundSet";
					id=4;
				};
				class sprintErc_L
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
					id=5;
				};
				class sprintErc_R
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
					id=6;
				};
				class walkCro_L
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=21;
				};
				class walkCro_R
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=22;
				};
				class runCro_L
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=23;
				};
				class runCro_R
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=24;
				};
				class walkProne_L
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=31;
				};
				class walkProne_R
				{
					soundSet="Weapon_Movement_Rifle_walkCro_SoundSet";
					id=32;
				};
				class runProne_L
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=33;
				};
				class runProne_R
				{
					soundSet="Weapon_Movement_Rifle_runCro_SoundSet";
					id=34;
				};
				class jumpErc_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=35;
				};
				class jumpErc_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=36;
				};
				class landFootErc_L
				{
					soundSet="Weapon_Movement_Rifle_landFootErc_SoundSet";
					id=37;
				};
				class landFootErc_R
				{
					soundSet="Weapon_Movement_Rifle_landFootErc_SoundSet";
					id=38;
				};
				class walkRasErc_L
				{
					soundSet="Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id=51;
				};
				class walkRasErc_R
				{
					soundSet="Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id=52;
				};
				class runRasErc_L
				{
					soundSet="Weapon_Movement_Rifle_runRasErc_SoundSet";
					id=53;
				};
				class runRasErc_R
				{
					soundSet="Weapon_Movement_Rifle_runRasErc_SoundSet";
					id=54;
				};
				class HandStep_L
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=61;
				};
				class HandStep_R
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=62;
				};
				class HandStep_Hard_L
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=63;
				};
				class HandStep_Hard_R
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=64;
				};
				class landFeetErc
				{
					soundSet="Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id=100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet="Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id=101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet="Weapon_Movement_Rifle_runErc_L_SoundSet";
					id=102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet="Weapon_Movement_Rifle_sprintErc_SoundSet";
					id=103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet="Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id=104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet="Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id=892;
				};
				class drop
				{
					soundset="rifle_drop_SoundSet";
					id=898;
				};
				class bodyfall_rifle_light
				{
					soundSet="pickUpRifleLight_SoundSet";
					id=13400;
				};
				class bodyfall_rifle
				{
					soundset="pickUpRifle_SoundSet";
					id=13401;
				};
				class AK_charge_open
				{
					soundSet="AK_charge_open_SoundSet";
					id=1;
				};
				class AK_charge_open_release
				{
					soundSet="AK_charge_open_release_SoundSet";
					id=2;
				};
				class AK_charge_close
				{
					soundSet="AK_charge_close_SoundSet";
					id=3;
				};
				class AK_charge_close_release
				{
					soundSet="AK_charge_close_release_SoundSet";
					id=4;
				};
				class AK_chamber_load
				{
					soundSet="AK_chamber_load_SoundSet";
					id=5;
				};
				class AK_mag_load
				{
					soundSet="AK_mag_load_SoundSet";
					id=6;
				};
				class AK_mag_load_slow
				{
					soundSet="AK_mag_load_slow_SoundSet";
					id=7;
				};
				class AK_jamming
				{
					soundSet="AK_jamming_SoundSet";
					id=8;
				};
				class AK_pullout
				{
					soundSet="AK_pullout_SoundSet";
					id=9;
				};
			};
		};
	};
	class IMP_AEK: IMP_AEK_Base
{
		scope=2;
		displayName="AEK-971";
	    descriptionShort="$STR_IMP_AEKDescr";
		model="IMPWMOD\Weapons\Automatic\AEK\models\IMP_AEK.p3d";
		attachments[]=
		{
			"weaponOpticsAK",
			"weaponWrap",
			"weaponButtstockAK",
			"weaponMuzzleAK",
			"Rail",
			"weaponOptics"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AEK\data\AEK_co1.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\AEK\data\AEK.rvmat"};
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
								"DZ\weapons\firearms\AK101\Data\ak101.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgSlots
{
    class Slot_AEK_Stock
    {
        name = "AEK_Stock";
        displayName = "$STR_IMP_SlotAekbutt";
    };
    class Slot_AEK_Muzzlebreak
    {
        name = "AEK_Muzzlebreak";
        displayName = "AEK_Muzzlebreak";
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
	class AEK_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_closeShot_SoundShader",
			"AEK_midShot_SoundShader",
			"AEK_distShot_SoundShader"
		};
	};
	class AEK_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_tailDistant_SoundShader",
			"AEK_tailTrees_SoundShader",
			"AEK_tailForest_SoundShader",
			"AEK_tailMeadows_SoundShader",
			"AEK_tailHouses_SoundShader"
		};
	};
	class AEK_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_tailInterior_SoundShader"
		};
	};
	class AEK_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_silencerCloseShot_SoundShader",
			"AEK_silencerMidShot_SoundShader",
			"AEK_silencerDistShot_SoundShader"
		};
	};
	class AEK_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_silencerTailTrees_SoundShader",
			"AEK_silencerTailForest_SoundShader",
			"AEK_silencerTailMeadows_SoundShader",
			"AEK_silencerTailHouses_SoundShader"
		};
	};
	class AEK_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AEK_silencerTailInterior_SoundShader"
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
	class AEK_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
		volume=0.8;
	};
	class AEK_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
		volume=0.5;
	};
	class AEK_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
		volume=0.3;
	};
	class AEK_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
		volume=0.3;
	};
	class AEK_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
	};
	class AEK_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
	};
	class AEK_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
	};
	class AEK_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
	};
	class AEK_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot", 1}};
	};
	class AEK_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
		volume=0.5;
	};
	class AEK_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
		volume=0.3;
	};
	class AEK_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
		volume=0.15;
	};
	class AEK_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
	};
	class AEK_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
	};
	class AEK_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
	};
	class AEK_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
	};
	class AEK_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\AEK\sounds\AEK_Shot_Supp", 1}};
	};
};