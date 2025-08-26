class CfgPatches
{
	class IMP_Weapons_AXMC
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
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_AXMC_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "AXMC";//Название предмета	
		descriptionShort = "$STR_IMP_AXMC";//Описание предмета
		model="IMPWMOD\Weapons\Sniper\AXMC\models\IMP_AXMC.p3d";//путь до модели
		weight = 12000;//вес
		absorbency = 0.0;//промокание предмета
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		initSpeedMultiplier = 1;//скорость пули
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		chamberedRound = "";//
		chamberSize = 1;// 1 заряд патрона
		chamberableFrom[] = {"IMP_Ammo_338LM"};//какой патрон использует
		magazines[]={"IMP_Mag_AXMC_10Rnd"};//какие  магазины вставляются
		ejectType = 1;//
		itemSize[] = {10, 3};//размер предмета 1 горизонталь 2 вертикаль
		WeaponLength=0.912;//ВАЖНО длина ствола
		barrelArmor=1.8;//защита оружия
		simpleHiddenSelections[]={"hide_barrel", "HandlesM4"};//то что пропадает при прицеливании
		hiddenSelections[]=
		{
			"camoflage1",
			"camoflage2",
			"camoflage3"
		};//ваша селекция для ретекстура
		attachments[]={"weaponWrap","weaponOpticsHunting", "Suppressor_338", "HandlesM4"};//аттачменты
		recoilModifier[] = {1,1,1};//модификатор отдачи
		modes[] = {"Single"};//режим стрельбы
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{		
						{1,{"impwmod\weapons\sniper\axmc\data\RecieverLower.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter.rvmat"}},
						{0.7,{"impwmod\weapons\sniper\axmc\data\RecieverLower.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter.rvmat"}},
						{0.5,{"impwmod\weapons\sniper\axmc\data\RecieverLower_damage.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper_damage.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter_damage.rvmat"}},
						{0.3,{"impwmod\weapons\sniper\axmc\data\RecieverLower_damage.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper_damage.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter_damage.rvmat"}},
						{0,{"impwmod\weapons\sniper\axmc\data\RecieverLower_destruct.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper_destruct.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter_destruct.rvmat"}}
					};
				};
			};
		};
		
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"AXMC_Shot_SoundSet","AXMC_Tail_SoundSet","AXMC_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AXMC_silencerHomeMade_SoundSet","AXMC_silencerHomeMadeTail_SoundSet","AXMC_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1.8;//задержка выстрела
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.0001;
			magazineSlot="magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera="eye";
			modelOptics="-";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;// OpticsInfo отвечает за! eye-точка взгляда из лода memory
		};
		class NoiseShoot//звук агра зомби
		{
			strength=200;
			type="shot";
		};
	};
	
	class IMP_AXMC : IMP_AXMC_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\axmc\data\RecieverLower_co.paa", "impwmod\weapons\sniper\axmc\data\RecieverUpper_co.paa", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\axmc\data\RecieverLower.rvmat", "impwmod\weapons\sniper\axmc\data\RecieverUpper.rvmat", "impwmod\weapons\sniper\axmc\data\PistolGripAdapter.rvmat"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_AXMC_10Rnd: Magazine_Base
	{
		scope=2;//видимость в админке
		displayName="$STR_IMP_AXMC2";
		descriptionShort="$STR_IMP_AXMC3";
		model="IMPWMOD\Weapons\Sniper\AXMC\models\IMP_AXMC_Mag.p3d";
		weight=200;
		itemSize[]={2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=10;// кол-во патронов
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"impwmod\weapons\sniper\axmc\data\Magazine_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\sniper\axmc\data\Magazine.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"impwmod\weapons\sniper\axmc\data\Magazine.rvmat"}},
						{0.7,{"impwmod\weapons\sniper\axmc\data\Magazine.rvmat"}},
						{0.5,{"impwmod\weapons\sniper\axmc\data\Magazine_damage.rvmat"}},
						{0.3,{"impwmod\weapons\sniper\axmc\data\Magazine_damage.rvmat"}},
						{0,{"impwmod\weapons\sniper\axmc\data\Magazine_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class AXMC_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_closeShot_SoundShader",
			"AXMC_midShot_SoundShader",
			"AXMC_distShot_SoundShader"
		};
	};
	class AXMC_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_tailDistant_SoundShader",
			"AXMC_tailTrees_SoundShader",
			"AXMC_tailForest_SoundShader",
			"AXMC_tailMeadows_SoundShader",
			"AXMC_tailHouses_SoundShader"
		};
	};
	class AXMC_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_tailInterior_SoundShader"
		};
	};
	class AXMC_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_silencerHomeMadeCloseShot_SoundShader",
			"AXMC_silencerHomeMadeMidShot_SoundShader",
			"AXMC_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class AXMC_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_silencerHomeMadeTailTrees_SoundShader",
			"AXMC_silencerHomeMadeTailForest_SoundShader",
			"AXMC_silencerHomeMadeTailMeadows_SoundShader",
			"AXMC_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class AXMC_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"AXMC_silencerHomeMadeTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_tailInterior_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class AXMC_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
		volume=1.5;
	};
	class AXMC_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
		volume=1.2;
	};
	class AXMC_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
		volume=0.7;
	};
	class AXMC_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
		volume=1.5;
	};
	class AXMC_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
	};
	class AXMC_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
	};
	class AXMC_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
	};
	class AXMC_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
	};
	class AXMC_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot", 1}};
	};
	class AXMC_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
		volume=1.0;
	};
	class AXMC_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
		volume=0.8;
	};
	class AXMC_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
		volume=0.5;
	};
	class AXMC_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
	};
	class AXMC_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
	};
	class AXMC_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
	};
	class AXMC_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
	};
	class AXMC_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\AXMC\sounds\AXMC_Shot_Supp", 1}};
	};
};