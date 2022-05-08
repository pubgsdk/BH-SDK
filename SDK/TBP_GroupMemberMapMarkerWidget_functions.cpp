// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_GroupMemberMapMarkerWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.GetPlayerIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  PlayerIndex                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberMapMarkerWidget_C::GetPlayerIndex(unsigned char* PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.GetPlayerIndex"));

	struct
	{
		unsigned char                  PlayerIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (PlayerIndex != nullptr)
		*PlayerIndex = params.PlayerIndex;
}


// Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.OnUpdated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_GroupMemberMapMarkerWidget_C::OnUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.OnUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_GroupMemberMapMarkerWidget_C::ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget"));

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
