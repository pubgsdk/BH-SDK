// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Respawn_Station_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.CreateMapMarkerAtMatchStart
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerMatchGameState*    InMatchGameState               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Respawn_Station_Marker_C::CreateMapMarkerAtMatchStart(class ATigerMatchGameState* InMatchGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.CreateMapMarkerAtMatchStart"));

	struct
	{
		class ATigerMatchGameState*    InMatchGameState;
	} params = {};

	params.InMatchGameState = InMatchGameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.Handle Game State Set
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerGameState*         InGameState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Respawn_Station_Marker_C::Handle_Game_State_Set(class ATigerGameState* InGameState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.Handle Game State Set"));

	struct
	{
		class ATigerGameState*         InGameState;
	} params = {};

	params.InGameState = InGameState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.OnMatchStateChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerMatchState               OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerMatchState               NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Respawn_Station_Marker_C::OnMatchStateChanged(ETigerMatchState OldState, ETigerMatchState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.OnMatchStateChanged"));

	struct
	{
		ETigerMatchState               OldState;
		ETigerMatchState               NewState;
	} params = {};

	params.OldState = OldState;
	params.NewState = NewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.TryToScheduleCreation
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_Respawn_Station_Marker_C::TryToScheduleCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.TryToScheduleCreation"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.CanBeCreated
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool ATBP_Respawn_Station_Marker_C::CanBeCreated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Respawn_Station_Marker.TBP_Respawn_Station_Marker_C.CanBeCreated"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
