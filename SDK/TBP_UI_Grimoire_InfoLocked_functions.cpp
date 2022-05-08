// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_InfoLocked_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.SetUnlockInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   UnlockInfo                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_Grimoire_InfoLocked_C::SetUnlockInfo(const struct FText& UnlockInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.SetUnlockInfo"));

	struct
	{
		struct FText                   UnlockInfo;
	} params = {};

	params.UnlockInfo = UnlockInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_InfoLocked_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_InfoLocked_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_InfoLocked_C::ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C.ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked"));

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
