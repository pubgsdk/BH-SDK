// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_KeyboardIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.SetIconFromKey
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_HasGetValueTypeHash)

void UTBP_UI_KeyboardIcon_C::SetIconFromKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.SetIconFromKey"));

	struct
	{
		struct FKey                    Key;
	} params = {};

	params.Key = Key;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.ExecuteUbergraph_TBP_UI_KeyboardIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_KeyboardIcon_C::ExecuteUbergraph_TBP_UI_KeyboardIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_KeyboardIcon.TBP_UI_KeyboardIcon_C.ExecuteUbergraph_TBP_UI_KeyboardIcon"));

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
