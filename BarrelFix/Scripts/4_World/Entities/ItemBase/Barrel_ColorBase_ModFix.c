modded class Barrel_ColorBase : DeployableContainer_Base
{	
	override bool CanPutIntoHands( EntityAI parent )
	{return true;}
	
	override bool CanPutInCargo( EntityAI parent )
	{return true;}
	
	override bool CanReleaseCargo( EntityAI attachment )
	{return true;}
	
};

modded class Barrel_Green: Barrel_ColorBase {};
modded class Barrel_Blue: Barrel_ColorBase {};
modded class Barrel_Red: Barrel_ColorBase {};
modded class Barrel_Yellow: Barrel_ColorBase {};


