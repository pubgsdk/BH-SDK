// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_StoreBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_StoreBase.TBP_StoreBase_C.GetPingInfo
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTS_PingableActorInfo   OutInfo                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.GetPingInfo"));

	struct
	{
		struct FTS_PingableActorInfo   OutInfo;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;
}


// Function TBP_StoreBase.TBP_StoreBase_C.GetPingCategory
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   OutCategory                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.GetPingCategory"));

	struct
	{
		struct FName                   OutCategory;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;
}


// Function TBP_StoreBase.TBP_StoreBase_C.OnDoorOpened
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::OnDoorOpened(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.OnDoorOpened"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_StoreBase.TBP_StoreBase_C.GetAlarmLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::GetAlarmLocation(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.GetAlarmLocation"));

	struct
	{
		struct FVector                 Location;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Location != nullptr)
		*Location = params.Location;
}


// Function TBP_StoreBase.TBP_StoreBase_C.OnPlayerBeginOverlap
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::OnPlayerBeginOverlap(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.OnPlayerBeginOverlap"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_StoreBase.TBP_StoreBase_C.OnStoreEntered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::OnStoreEntered(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.OnStoreEntered"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_StoreBase.TBP_StoreBase_C.OnFirstDoorOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::OnFirstDoorOpen(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.OnFirstDoorOpen"));

	struct
	{
		class ATigerPlayer*            InPlayer;
	} params = {};

	params.InPlayer = InPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_StoreBase.TBP_StoreBase_C.ClientDoorEvent
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_StoreBase_C::ClientDoorEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.ClientDoorEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_StoreBase.TBP_StoreBase_C.ExecuteUbergraph_TBP_StoreBase
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_StoreBase_C::ExecuteUbergraph_TBP_StoreBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_StoreBase.TBP_StoreBase_C.ExecuteUbergraph_TBP_StoreBase"));

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
