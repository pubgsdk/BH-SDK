// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_TransitionRetainerBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C.CreateDynamicEffectMaterial
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* EffectMaterial                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_TransitionRetainerBox_C::CreateDynamicEffectMaterial(class UMaterialInstanceDynamic** EffectMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_TransitionRetainerBox.TBP_UI_TransitionRetainerBox_C.CreateDynamicEffectMaterial"));

	struct
	{
		class UMaterialInstanceDynamic* EffectMaterial;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EffectMaterial != nullptr)
		*EffectMaterial = params.EffectMaterial;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
