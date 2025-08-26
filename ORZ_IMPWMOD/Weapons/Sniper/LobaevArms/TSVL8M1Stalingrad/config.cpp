class CfgPatches
{
	class IMP_W_TSVL8M1Stalingrad
	{
		units[]={};
		weapons[]=
		{
			"IMP_W_TSVL8M1Stalingrad"
		};
		magazines[]=
		{
			"IMP_Mag_TSVL8M1Stalingrad_10Rnd"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms",
			"DZ_Sounds_Effects",
			"DZ_Weapons_Magazines"
		};
	};
};
class Mode_Safe;
class Mode_Single;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class IMP_W_TSVL8M1Stalingrad_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="$STR_IMP_stalin1";
		descriptionShort="$STR_IMP_stalin12";
		weight=7400;
		model="IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\models\TSVL8M1Stalingrad.p3d";
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.60000002,50,200,4,10};
		initSpeedMultiplier=1.1;
		WeaponLength=1.434;
		barrelArmor=3.888;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponBipod",
			"HandlesM4"
		};
		itemSize[]={11,3};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[]={"IMP_Mag_TSVL8M1Stalingrad_10Rnd"};
		ejectType=1;
		recoilModifier[]={1,1.1,1};
		swayModifier[]={1,1,1};
		simpleHiddenSelections[]={"hide_barrel", "HandlesM4"};
		modes[]={"Single"};
		hiddenSelections[] = {"camoflage", "camoflage1"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body_co.paa", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"M300_Shot_SoundSet","M300_Tail_SoundSet","M300_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M300_silencerHomeMade_SoundSet","M300_silencerHomeMadeTail_SoundSet","M300_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			dispersion=0.00025000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=500;
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
				maxOverheatingValue=120;
				shotsToStartOverheating=2;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={-0.02,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.1,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.30000001,0,0};
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
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body_damage.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body_damage.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\body_destruct.rvmat", "IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\bolt_destruct.rvmat"}}
                    };
                };
            };
        };   
	};
	class IMP_W_TSVL8M1Stalingrad: IMP_W_TSVL8M1Stalingrad_Base
	{
		scope=2;
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_TSVL8M1Stalingrad_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_stalin13";
		descriptionShort="$STR_IMP_stalin14";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\models\Mag_TSVL8M1Stalingrad_10Rnd.p3d";
		weight=300;
		itemSize[]={2,2};
		count=10;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery=0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag.rvmat"};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] = 
                    {
                        {1.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag.rvmat"}},
                        {0.7,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag.rvmat"}},
                        {0.5,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag_damage.rvmat"}},
                        {0.3,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag_damage.rvmat"}},
                        {0.0,{"IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\data\mag_destruct.rvmat"}}
                    };
                };
            };
        }; 
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMag_TSVL8M1Stalingrad_10Rnd: ProxyAttachment
	{
		scope=0;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M1Stalingrad\models\Mag_TSVL8M1Stalingrad_10Rnd.p3d";
	};
};
