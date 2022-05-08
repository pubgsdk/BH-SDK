// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_AnAcquiredTaste_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InHasAuthority                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_AnAcquiredTaste_C::OnCreated(class ATigerPlayer* InPlayer, bool InHasAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnCreated"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		bool                           InHasAuthority;
	} params = {};

	params.InPlayer = InPlayer;
	params.InHasAuthority = InHasAuthority;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerEvent              Event                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         EventTiedCharacter             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AnAcquiredTaste_C::OnPlayerEvent(ETigerPlayerEvent Event, class ATigerCharacter* EventTiedCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.OnPlayerEvent"));

	struct
	{
		ETigerPlayerEvent              Event;
		class ATigerCharacter*         EventTiedCharacter;
	} params = {};

	params.Event = Event;
	params.EventTiedCharacter = EventTiedCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_AnAcquiredTaste_C::ExecuteUbergraph_TBP_AnAcquiredTaste(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_AnAcquiredTaste.TBP_AnAcquiredTaste_C.ExecuteUbergraph_TBP_AnAcquiredTaste"));

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
