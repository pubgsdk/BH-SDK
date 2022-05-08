// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PaperDoll_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PaperDoll.TBP_PaperDoll_C.UpdateOutlines
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::UpdateOutlines()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.UpdateOutlines"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.PostNewCharacterSelected
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::PostNewCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.PostNewCharacterSelected"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveDestroyed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.SetPlayerOutlineMemberId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InPlayerMemberId               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PaperDoll_C::SetPlayerOutlineMemberId(unsigned char InPlayerMemberId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.SetPlayerOutlineMemberId"));

	struct
	{
		unsigned char                  InPlayerMemberId;
	} params = {};

	params.InPlayerMemberId = InPlayerMemberId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.Particle Destroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_PaperDoll_C::Particle_Destroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.Particle Destroy"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PaperDoll.TBP_PaperDoll_C.ExecuteUbergraph_TBP_PaperDoll
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PaperDoll_C::ExecuteUbergraph_TBP_PaperDoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PaperDoll.TBP_PaperDoll_C.ExecuteUbergraph_TBP_PaperDoll"));

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
