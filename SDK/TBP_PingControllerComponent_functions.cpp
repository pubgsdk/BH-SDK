// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PingControllerComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       inTigerPlayerState             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerPingWorldNetData> OutPingWheelItems              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::AddHealthStatusToWheel(class ATigerPlayerState* inTigerPlayerState, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel"));

	struct
	{
		class ATigerPlayerState*       inTigerPlayerState;
		TArray<struct FTigerPingWorldNetData> OutPingWheelItems;
	} params = {};

	params.inTigerPlayerState = inTigerPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerPlayerMasqueradeComponent* InMasqueradeComponent          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerPingWorldNetData> OutPingWheelItems              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::AddMasqueradeStatusToWheel(class UTigerPlayerMasqueradeComponent* InMasqueradeComponent, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel"));

	struct
	{
		class UTigerPlayerMasqueradeComponent* InMasqueradeComponent;
		TArray<struct FTigerPingWorldNetData> OutPingWheelItems;
	} params = {};

	params.InMasqueradeComponent = InMasqueradeComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPingWorldNetData> OutPingWheelItems              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::AddAmmoRequestToWheel(TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel"));

	struct
	{
		TArray<struct FTigerPingWorldNetData> OutPingWheelItems;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FTigerPingWorldNetData> OutWheelItemPings              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::AddPointsOfInterest(TArray<struct FTigerPingWorldNetData>* OutWheelItemPings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest"));

	struct
	{
		TArray<struct FTigerPingWorldNetData> OutWheelItemPings;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutWheelItemPings != nullptr)
		*OutWheelItemPings = params.OutWheelItemPings;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FHitResult>      InHitResults                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FTigerPingWorldNetData> OutPingWheelItems              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 OutLocation                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bOutFoundLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_PingControllerComponent_C::GetDefaultLocation(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult>* InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems, struct FVector* OutLocation, bool* bOutFoundLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
		TArray<struct FHitResult>      InHitResults;
		TArray<struct FTigerPingWorldNetData> OutPingWheelItems;
		struct FVector                 OutLocation;
		bool                           bOutFoundLocation;
	} params = {};

	params.InPlayerState = InPlayerState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InHitResults != nullptr)
		*InHitResults = params.InHitResults;
	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (bOutFoundLocation != nullptr)
		*bOutFoundLocation = params.bOutFoundLocation;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UClass* /*UTigerPingBase*/> InPingTypes                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FVector                 InLocation                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FTigerPingWorldNetData> InOutResults                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::GetAddPingTypes(const struct FVector& InLocation, TArray<class UClass* /*UTigerPingBase*/>* InPingTypes, TArray<struct FTigerPingWorldNetData>* InOutResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes"));

	struct
	{
		TArray<class UClass* /*UTigerPingBase*/> InPingTypes;
		struct FVector                 InLocation;
		TArray<struct FTigerPingWorldNetData> InOutResults;
	} params = {};

	params.InLocation = InLocation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (InPingTypes != nullptr)
		*InPingTypes = params.InPingTypes;
	if (InOutResults != nullptr)
		*InOutResults = params.InOutResults;
}


// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayerState*       InPlayerState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FHitResult>      InHitResults                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)
// TArray<struct FTigerPingWorldNetData> OutPingWheelItems              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_PingControllerComponent_C::GetPingWheelItems(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult> InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems"));

	struct
	{
		class ATigerPlayerState*       InPlayerState;
		TArray<struct FHitResult>      InHitResults;
		TArray<struct FTigerPingWorldNetData> OutPingWheelItems;
	} params = {};

	params.InPlayerState = InPlayerState;
	params.InHitResults = InHitResults;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
