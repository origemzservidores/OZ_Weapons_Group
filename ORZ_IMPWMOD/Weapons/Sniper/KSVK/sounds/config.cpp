class CfgPatches
{
	class KSVK_Sound_SoundSet
	{
		units[] = {};
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Effects"};
		weapons[] = {};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class IMP_KSVK_Sound_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1}};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class IMP_KSVK_midshot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1}};
		volume = 0.46234134;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class IMP_KSVK_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1},{"IMPWMOD\Weapons\Sniper\KSVK\sounds\KSVK",1}};
		volume = 0.28;
		range = 3500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{3500,1}};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	class IMP_KSVK_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"IMP_KSVK_Sound_SoundShader","IMP_KSVK_midshot_SoundShader","IMP_KSVK_distShot_SoundShader"};
	};
};
