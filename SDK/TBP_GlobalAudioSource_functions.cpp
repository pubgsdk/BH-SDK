// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GlobalAudioSource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.PlaySoundEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_GlobalAudioSource_C::PlaySoundEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.PlaySoundEffect"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.ExecuteUbergraph_TBP_GlobalAudioSource
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_GlobalAudioSource_C::ExecuteUbergraph_TBP_GlobalAudioSource(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GlobalAudioSource.TBP_GlobalAudioSource_C.ExecuteUbergraph_TBP_GlobalAudioSource"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
