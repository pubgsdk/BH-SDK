// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_LoadingScreen_Simple_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C.PrepareAssets
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FSoftObjectPath> OutAssetsToLoad                (CPF_Parm, CPF_OutParm)

void UTBP_LoadingScreen_Simple_C::PrepareAssets(TArray<struct FSoftObjectPath>* OutAssetsToLoad)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_LoadingScreen_Simple.TBP_LoadingScreen_Simple_C.PrepareAssets"));

	struct
	{
		TArray<struct FSoftObjectPath> OutAssetsToLoad;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutAssetsToLoad != nullptr)
		*OutAssetsToLoad = params.OutAssetsToLoad;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
