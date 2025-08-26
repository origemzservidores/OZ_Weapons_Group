class CfgPatches
{
	class IMP_M870
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Weapons"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Shotgun_Base;
	class IMP_M870_Base: Shotgun_Base
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=6;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]={};
		DisplayMagazine=0;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		WeaponLength=1.0352499;
		barrelArmor=2.25;
		initSpeedMultiplier=1.25;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.3,2.3,1.2};
		cartridgeCreateTime[]={0.55000001,0.81999999};
		hiddenSelections[]=
		{
			"camoflage1",
			"camoflage2",
			"camoflage3"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_Single
		{
			soundSetShot[]=
			{
				"Mp133_Shot_SoundSet",
				"Mp133_Tail_SoundSet",
				"Mp133_InteriorTail_SoundSet"
			};
			reloadTime=1;
			recoil="recoil_Mp133";
			recoilProne="recoil_Mp133_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.029999999,-0.0099999998,0.0099999998};
				orientation[]={0,0,0};
			};
			class Melee
			{
				position[]={-0.029999999,0,-0.029999999};
				orientation[]={0,0,0};
			};
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
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
		weaponStateAnim="dz\anims\anm\player\reloads\mp133\w_mp133_states.anm";
		boneRemap[]=
		{
			"bolt",
			"Weapon_Bolt",
			"pump",
			"Weapon_Bone_01",
			"feedRamp",
			"Weapon_Bone_02",
			"trigger",
			"Weapon_Trigger",
			"bullet",
			"Weapon_Bullet",
			"boltrelease",
			"Weapon_Bone_03"
		};
	};
	class IMP_M870: IMP_M870_Base
	{
		scope=2;
		displayName="$STR_IMP_M870";
		descriptionShort="$STR_IMP_M870D";
		model="IMPWMOD\Weapons\Shotgun\M870\models\M870.p3d";
		animName="ShotgunMp133";
		attachments[]=
		{
			"pistolOptics"
		};
		itemSize[]={9,3};
		weight=3300;
		hiddenSelectionsTextures[]=
		{
			"impwmod\weapons\shotgun\m870\data\barrel_co.paa",
			"impwmod\weapons\shotgun\m870\data\bttstck_co.paa",
			"impwmod\weapons\shotgun\m870\data\m870_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"impwmod\weapons\shotgun\m870\data\barrel.rvmat",
			"impwmod\weapons\shotgun\m870\data\bttstck.rvmat",
			"impwmod\weapons\shotgun\m870\data\m870.rvmat"
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
								"impwmod\weapons\shotgun\m870\data\barrel.rvmat",
								"impwmod\weapons\shotgun\m870\data\bttstck.rvmat",
								"impwmod\weapons\shotgun\m870\data\m870.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\shotgun\m870\data\barrel.rvmat",
								"impwmod\weapons\shotgun\m870\data\bttstck.rvmat",
								"impwmod\weapons\shotgun\m870\data\m870.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\shotgun\m870\data\barrel_damage.rvmat",
								"impwmod\weapons\shotgun\m870\data\bttstck_damage.rvmat",
								"impwmod\weapons\shotgun\m870\data\m870_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\shotgun\m870\data\barrel_damage.rvmat",
								"impwmod\weapons\shotgun\m870\data\bttstck_damage.rvmat",
								"impwmod\weapons\shotgun\m870\data\m870_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\shotgun\m870\data\barrel_destruct.rvmat",
								"impwmod\weapons\shotgun\m870\data\bttstck_destruct.rvmat",
								"impwmod\weapons\shotgun\m870\data\m870_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};