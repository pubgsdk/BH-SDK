// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_HolyIncense_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_HolyIncense.TBP_HolyIncense_C.QualityOptionChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerGraphicsSettings  GraphicsSettings               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// struct FTigerGraphicsSettingsPS5 GraphicsSettingsPS5            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)

void ATBP_HolyIncense_C::QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings, const struct FTigerGraphicsSettingsPS5& GraphicsSettingsPS5)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.QualityOptionChanged"));

	struct
	{
		struct FTigerGraphicsSettings  GraphicsSettings;
		struct FTigerGraphicsSettingsPS5 GraphicsSettingsPS5;
	} params = {};

	params.GraphicsSettings = GraphicsSettings;
	params.GraphicsSettingsPS5 = GraphicsSettingsPS5;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.SetupQualityOptions
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::SetupQualityOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.SetupQualityOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.OnMaterialLoaded
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UObject*>         InLoadedObjects                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ATBP_HolyIncense_C::OnMaterialLoaded(TArray<class UObject*>* InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.OnMaterialLoaded"));

	struct
	{
		TArray<class UObject*>         InLoadedObjects;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InLoadedObjects != nullptr)
		*InLoadedObjects = params.InLoadedObjects;
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.MakeVolumeFitSpline
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::MakeVolumeFitSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.MakeVolumeFitSpline"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.SetMinMaxHeightMPC
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::SetMinMaxHeightMPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.SetMinMaxHeightMPC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.UpdateMPC
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::UpdateMPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.UpdateMPC"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.OnMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerMatchState               OldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerMatchState               NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HolyIncense_C::OnMatchStateChanged(ETigerMatchState OldState, ETigerMatchState NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.OnMatchStateChanged"));

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


// Function TBP_HolyIncense.TBP_HolyIncense_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HolyIncense_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.ReceiveTick"));

	struct
	{
		float                          DeltaSeconds;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.OnWaveStartMovement_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::OnWaveStartMovement_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.OnWaveStartMovement_Event_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.RenderHeightmap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::RenderHeightmap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.RenderHeightmap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.OnPreMatchStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerPreMatchStateInfo PreMatchState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_NoDestructor)

void ATBP_HolyIncense_C::OnPreMatchStateChanged(const struct FTigerPreMatchStateInfo& PreMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.OnPreMatchStateChanged"));

	struct
	{
		struct FTigerPreMatchStateInfo PreMatchState;
	} params = {};

	params.PreMatchState = PreMatchState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.ForceBlueprintInitialise
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_HolyIncense_C::ForceBlueprintInitialise()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.ForceBlueprintInitialise"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_HolyIncense.TBP_HolyIncense_C.ExecuteUbergraph_TBP_HolyIncense
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_HolyIncense_C::ExecuteUbergraph_TBP_HolyIncense(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_HolyIncense.TBP_HolyIncense_C.ExecuteUbergraph_TBP_HolyIncense"));

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
