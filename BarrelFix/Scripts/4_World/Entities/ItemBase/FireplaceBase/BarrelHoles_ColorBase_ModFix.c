modded class BarrelHoles_ColorBase extends FireplaceBase
{
	override bool CanPutIntoHands( EntityAI parent )
	{
		if( !super.CanPutIntoHands( parent ) )
		{return false;}
	
		if ( IsBurning() || !IsCargoEmpty() || DirectCookingSlotsInUse() || IsOpen() )
		{return false;}
		
		return true;
	}
};

modded class BarrelHoles_Blue extends BarrelHoles_ColorBase {};
modded class BarrelHoles_Green extends BarrelHoles_ColorBase {};
modded class BarrelHoles_Red extends BarrelHoles_ColorBase {};
modded class BarrelHoles_Yellow extends BarrelHoles_ColorBase {};