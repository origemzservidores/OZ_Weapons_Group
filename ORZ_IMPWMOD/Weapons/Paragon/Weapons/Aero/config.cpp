class CfgPatches
{
	class OZW_Paragon_Aero
	{
		units[]={};
		weapons[]=
		{
			"Paragon_Aero"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"Paragon_Aero"
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
	class Paragon_Aero_Base: Rifle_Base
	{
		scope=0;
		weight=4500;
		model="Paragon_Arsenal2\Rifles\Aero\Aero.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponFlashlight",
			"Paragon_Grip"
		};
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3"
		};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		chamberableFrom[]=
		{
			"Paragon_Ammo_300BLK"
		};
		magazines[]=
		{
			"Paragon_Mag_AR15_30Rnd",
			"Paragon_Mag_300BLK_60Rnd"
		};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		itemSize[]={8,3};
		absorbency=0.1;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={0,0,0,0,0,0};
		barrelArmor=4;
		chamberedRound="";
		chamberSize=1;
		ejectType=1;
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Paragon_AR15S_Shot_SoundSet",
				"Paragon_AR15S_Shot_SoundSet",
				"Paragon_AR15S_Shot_SoundSet"
			};
			reloadTime=0.07;
			dispersion=0.001;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Paragon_AR15S_Shot_SoundSet",
				"Paragon_AR15S_Shot_SoundSet",
				"Paragon_AR15S_Shot_SoundSet"
			};
			reloadTime=0.07;
			dispersion=0.001;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			magazineSlot="magazine";
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
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
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
							1,
							
							{
								"Paragon_Arsenal2\Rifles\Aero\data\Aero1.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero2.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero3.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Paragon_Arsenal2\Rifles\Aero\data\Aero1.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero2.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero3.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Paragon_Arsenal2\Rifles\Aero\data\Aero1_damage.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero2_damage.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero3_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Paragon_Arsenal2\Rifles\Aero\data\Aero1_damage.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero2_damage.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero3_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"Paragon_Arsenal2\Rifles\Aero\data\Aero1_destruct.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero2_destruct.rvmat",
								"Paragon_Arsenal2\Rifles\Aero\data\Aero3_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Paragon_Aero: Paragon_Aero_Base
	{
		scope=2;
		displayName="Aero ORZ";
		descriptionShort="The Aero is a full auto assault rifle that shoots 300 blackout, can hold a 30 round or 60 round magazine";
		hiddenSelectionsTextures[]=
		{
			"Paragon_Arsenal2\Rifles\Aero\data\Aero1_co.paa",
			"Paragon_Arsenal2\Rifles\Aero\data\Aero2_co.paa",
			"Paragon_Arsenal2\Rifles\Aero\data\Aero3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Paragon_Arsenal2\Rifles\Aero\data\Aero1.rvmat",
			"Paragon_Arsenal2\Rifles\Aero\data\Aero2.rvmat",
			"Paragon_Arsenal2\Rifles\Aero\data\Aero3.rvmat"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAero_Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Paragon_Arsenal2\Rifles\AR15\AR15_Mag.p3d";
	};
	class Proxy60Rnd_Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="Paragon_Arsenal\Attachments\Magazines\300BLK\60Rnd\60Rnd_Mag.p3d";
	};
};
class cfgSoundsets
{
	class Rifle_Shot_Base_SoundSet;
	class Paragon_AeroS_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Paragon_AeroS_closeShot_SoundShader",
			"Paragon_AeroS_midShot_SoundShader",
			"Paragon_AeroS_distShot_SoundShader"
		};
	};
};
class CfgSoundShaders
{
	class Paragon_AeroS_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Close",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Close",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Close",
				1
			}
		};
		volume=0.1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class Paragon_AeroS_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Mid",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Mid",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Mid",
				1
			}
		};
		volume=0.07;
		range=150;
		rangeCurve="midShotCurve";
	};
	class Paragon_AeroS_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Far",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Far",
				1
			},
			
			{
				"Paragon_Arsenal2\Rifles\Aero\data\Paragon_AeroS_Far",
				1
			}
		};
		volume=0.050000001;
		range=250;
		rangeCurve="farShotCurve";
	};
};
