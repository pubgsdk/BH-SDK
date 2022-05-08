// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MatchRankProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.GetPlacementRpValue
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InPlacement                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OutRp                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchRankProgress_C::GetPlacementRpValue(int InPlacement, int* OutRp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.GetPlacementRpValue"));

	struct
	{
		int                            InPlacement;
		int                            OutRp;
	} params = {};

	params.InPlacement = InPlacement;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutRp != nullptr)
		*OutRp = params.OutRp;
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.CalculatePlacementRp
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNumberOfAlivePlayers         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchRankProgress_C::CalculatePlacementRp(int InNumberOfAlivePlayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.CalculatePlacementRp"));

	struct
	{
		int                            InNumberOfAlivePlayers;
	} params = {};

	params.InNumberOfAlivePlayers = InNumberOfAlivePlayers;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.CalculateEliminationRp
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMatchRecapComponent* InMatchRecapComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FTigerRecapData         InSyncData                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FTigerRecapData         InData                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_MatchRankProgress_C::CalculateEliminationRp(class UTigerMatchRecapComponent* InMatchRecapComponent, const struct FTigerRecapData& InSyncData, const struct FTigerRecapData& InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.CalculateEliminationRp"));

	struct
	{
		class UTigerMatchRecapComponent* InMatchRecapComponent;
		struct FTigerRecapData         InSyncData;
		struct FTigerRecapData         InData;
	} params = {};

	params.InMatchRecapComponent = InMatchRecapComponent;
	params.InSyncData = InSyncData;
	params.InData = InData;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.SetRpText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InRp                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchRankProgress_C::SetRpText(int InRp)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.SetRpText"));

	struct
	{
		int                            InRp;
	} params = {};

	params.InRp = InRp;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.AddRp
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InAddedRp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           InWasElimination               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MatchRankProgress_C::AddRp(int InAddedRp, bool InWasElimination)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.AddRp"));

	struct
	{
		int                            InAddedRp;
		bool                           InWasElimination;
	} params = {};

	params.InAddedRp = InAddedRp;
	params.InWasElimination = InWasElimination;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MatchRankProgress_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MatchRankProgress_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchRankProgress_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.ExecuteUbergraph_TBP_UI_MatchRankProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MatchRankProgress_C::ExecuteUbergraph_TBP_UI_MatchRankProgress(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MatchRankProgress.TBP_UI_MatchRankProgress_C.ExecuteUbergraph_TBP_UI_MatchRankProgress"));

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
