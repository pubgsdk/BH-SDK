// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PharmacyStoreSmall_2Doors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.GetAlarmLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyStoreSmall_2Doors_C::GetAlarmLocation(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.GetAlarmLocation"));

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


// Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_PharmacyStoreSmall_2Doors_C::BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyStoreSmall_2Doors_C::BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.BndEvt__TBP_PharmacyStoreSmall_2Doors_AudioBox_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params = {};

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.ExecuteUbergraph_TBP_PharmacyStoreSmall_2Doors
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_PharmacyStoreSmall_2Doors_C::ExecuteUbergraph_TBP_PharmacyStoreSmall_2Doors(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_PharmacyStoreSmall_2Doors.TBP_PharmacyStoreSmall_2Doors_C.ExecuteUbergraph_TBP_PharmacyStoreSmall_2Doors"));

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
