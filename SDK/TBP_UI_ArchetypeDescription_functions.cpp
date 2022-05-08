// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ArchetypeDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ArchetypeDescription_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.PreConstruct"));

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


// Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ChangeArchetype
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerClanData*    InClanData                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerPowerKit*          InArchetypeData                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeDescription_C::ChangeArchetype(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ChangeArchetype"));

	struct
	{
		class UTigerPlayerClanData*    InClanData;
		class UTigerPowerKit*          InArchetypeData;
	} params = {};

	params.InClanData = InClanData;
	params.InArchetypeData = InArchetypeData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ShowDetails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeDescription_C::ShowDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ShowDetails"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.HideDetails
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ArchetypeDescription_C::HideDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.HideDetails"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ExecuteUbergraph_TBP_UI_ArchetypeDescription
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ArchetypeDescription_C::ExecuteUbergraph_TBP_UI_ArchetypeDescription(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ExecuteUbergraph_TBP_UI_ArchetypeDescription"));

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
