class CfgPatches
{
	class OZW_Paragon_SnowOwl
	{
		units[]={};
		weapons[]=
		{
			"Paragon_SnowOwl",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
            "Paragon_SnowOwl"
		};
		magazines[]=
		{
			"Paragon_SnowOwl_10Rnd"
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
	class BoltActionRifle_ExternalMagazine_Base;
	class Paragon_SnowOwl_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		weight=6000;
		model="Paragon_Arsenal2\Snipers\SnowOwl\SnowOwl.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting"
		};
		hiddenSelections[]=
		{
			"Camo"
		};
		ironsightsExcludingOptics[]=
		{
			"GrozaOptic",
			"KobraOptic"
		};
		chamberableFrom[]=
		{
			"IMP_Ammo_338LM"
		};
		magazines[]=
		{
			"Paragon_SnowOwl_10Rnd"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"Single"
		};
		itemSize[]={10,3};
		absorbency=0.1;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,180,4,10};
		WeaponLength=1.18986;
		barrelArmor=3.5999999;
		initSpeedMultiplier=1;
		chamberedRound="";
		chamberSize=1;
		magazineSwitchTime=0.25;
		ejectType=1;
		recoilModifier[]={2,2,2};
		swayModifier[]={1,1,1};
		dispersion=0.00050000002;
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Paragon_RemingtonS_Shot_SoundSet",
				"Paragon_RemingtonS_Shot_SoundSet",
				"Paragon_RemingtonS_Shot_SoundSet"
			};
			reloadTime=1.4;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			magazineSlot="magazine";
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
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Paragon_SnowOwl: Paragon_SnowOwl_Base
	{
		scope=2;
		displayName="Supressed SnowOwl .338 ORZ";
		descriptionShort="The SnowOwl ORZ Version, Chambers .338 and has a integrated suppressor";
		hiddenSelectionsTextures[]=
		{
			"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl.rvmat"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Paragon_SnowOwl_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="10rd SnowOwl Magazine";
		descriptionShort="The SnowOwl magazine holds 10 rounds of .408 Cheytac";
		model="Paragon_Arsenal2\Snipers\SnowOwl\SnowOwl_Mag.p3d";
		weight=250;
		itemSize[]={1,2};
		count=10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		isMeleeWeapon=0;
		tracersEvery=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=2500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Paragon_Arsenal2\Snipers\SnowOwl\data\SnowOwl_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySnowOwl_Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Paragon_Arsenal2\Snipers\SnowOwl\SnowOwl_Mag.p3d";
	};
};
