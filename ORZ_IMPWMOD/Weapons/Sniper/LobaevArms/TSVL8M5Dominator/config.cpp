class CfgPatches
{
	class IMP_W_TSVL8M5Dominator
	{
		units[]={};
		weapons[]={"IMP_W_TSVL8M5Dominator"};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Weapons_Firearms","DZ_Sounds_Effects","DZ_Weapons_Magazines"};
	};
};
class Mode_Single;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_ExternalMagazine_Base;
	class IMP_W_TSVL8M5Dominator_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		displayName="$STR_IMP_tsvl834";
		descriptionShort="$STR_IMP_tsvl8346";
		weight=8000;
		model="IMPWMOD\Weapons\Sniper\LobaevArms\TSVL8M5Dominator\models\TSVL8M5Dominator.p3d";
		initSpeedMultiplier=1;
		WeaponLength=1.51;
		attachments[]={"weaponWrap","weaponOpticsHunting", "HandlesM4"};
		itemSize[]={11,3};
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[]={"IMP_Mag_TSVL8M1Stalingrad_10Rnd"};
		ejectType=1;
		chamberedRound = "";
		chamberSize = 1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		simpleHiddenSelections[]={"hide_barrel", "HandlesM4"};
		modes[]={"Single"};
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3"};
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\body_co.paa", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt_co.paa", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body.rvmat"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"DVL10M1_silencerHomeMade_SoundSet","DVL10M1_silencerHomeMadeTail_SoundSet","DVL10M1_silencerInteriorHomeMadeTail_SoundSet"};
			soundSetShotExt[]={{"DVL10M1_silencerHomeMade_SoundSet","DVL10M1_silencerHomeMadeTail_SoundSet","DVL10M1_silencerInteriorHomeMadeTail_SoundSet"}};
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
                    hitpoints = 2000;
                    healthLevels[] = 
                    {
                        {1.0,{"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body.rvmat"}},
                        {0.7,{"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body.rvmat"}},
                        {0.5,{"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material_damage.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt_damage.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body_damage.rvmat"}},
                        {0.3,{"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material_damage.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt_damage.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body_damage.rvmat"}},
                        {0.0,{"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material_destruct.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt_destruct.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body_destruct.rvmat"}}
                    };
                };
            };
        };      
	};
	class IMP_W_TSVL8M5Dominator: IMP_W_TSVL8M5Dominator_Base
	{
		scope=2;
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3"};
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\body_co.paa", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt_co.paa", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\lobaevarms\tsvl8m5dominator\data\material.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\bolt.rvmat", "impwmod\weapons\sniper\lobaevarms\tsvl8m1stalingrad\data\body.rvmat"};
	};
};