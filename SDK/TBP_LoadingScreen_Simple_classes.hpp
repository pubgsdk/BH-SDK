#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LoadingScreen_Simple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C
// 0x0050 (0x00C8 - 0x0078)
class UTBP_LoadingScreen_Simple_C : public UTigerLoadingScreenAsset
{
public:
	TSoftObjectPtr<class UTBP_LoadingToolTip_C>        Tooltips;                                                 // 0x0078(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>           BackgroundMaterial;                                       // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C"));
		return ptr;
	}


	void PrepareAssets(TArray<struct FSoftObjectPath>* OutAssetsToLoad);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
