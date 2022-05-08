// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Birds_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Birds.TBP_Birds_C.SpawnBirdParticles
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FVector                 Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Birds_C::SpawnBirdParticles(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.SpawnBirdParticles"));

	struct
	{
		struct FVector                 Location;
		struct FRotator                Rotation;
		struct FVector                 Scale;
	} params = {};

	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Birds_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnEnterHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Birds_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnEnterHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnEnterHeightenedSenseAreaInitial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Birds_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnEnterHeightenedSenseAreaInitial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnLeaveHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Birds_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnLeaveHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnBeginCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Birds_C::OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnBeginCharacterOverlap"));

	struct
	{
		class ATigerCharacter*         OverlappingCharacter;
		int                            TotalOverlapCount;
	} params = {};

	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Birds_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnObjectActivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Birds_C::OnObjectActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnObjectActivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnObjectDeactivated
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ATBP_Birds_C::OnObjectDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnObjectDeactivated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.OnEndCharacterOverlap
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OverlappingCharacter           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalOverlapCount              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Birds_C::OnEndCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.OnEndCharacterOverlap"));

	struct
	{
		class ATigerCharacter*         OverlappingCharacter;
		int                            TotalOverlapCount;
	} params = {};

	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Birds.TBP_Birds_C.ExecuteUbergraph_TBP_Birds
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Birds_C::ExecuteUbergraph_TBP_Birds(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Birds.TBP_Birds_C.ExecuteUbergraph_TBP_Birds"));

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
