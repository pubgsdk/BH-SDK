#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_SetPrimitiveData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C
// 0x0000 (0x0028 - 0x0028)
class UTBFL_SetPrimitiveData_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C"));
		return ptr;
	}


	static void SetPrimitiveData_M_Awnings_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& AlbedoMultiplier, float EmissiveIntensity, float EmissiveLightTextureInfluence, float EmissiveBGTexture, class UObject* __WorldContext);
	static void SetPrimitiveData_M_Decal_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color, float Alpha, float FakeIntensity, class UObject* __WorldContext);
	static void SetPrimitiveData_MI_ShopWindGlass_01(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector& Emissive_Color, float Emissive_Multiplier, class UObject* __WorldContext);
	static void SetPrimitiveData_M_Basic_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector2D& UV_Scale, const struct FVector& Emissive_Color, float Roughness_Offset, float Albedo_Hue_Shift, float Deffuse_Desaturation, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
