// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnReachChimneyTrigger
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor1               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor1                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::OnReachChimneyTrigger(class AActor* OverlappedActor1, class AActor* OtherActor1)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnReachChimneyTrigger"));

	struct
	{
		class AActor*                  OverlappedActor1;
		class AActor*                  OtherActor1;
	} params = {};

	params.OverlappedActor1 = OverlappedActor1;
	params.OtherActor1 = OtherActor1;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat03_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnBeat02Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat03_C::OnBeat02Completed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnBeat02Completed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnReachEnemyTrigger
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::OnReachEnemyTrigger(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnReachEnemyTrigger"));

	struct
	{
		class AActor*                  OverlappedActor;
		class AActor*                  OtherActor;
	} params = {};

	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnLevelFeeding
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InTargetFedOn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::OnLevelFeeding(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnLevelFeeding"));

	struct
	{
		bool                           bTargetIsDrained;
		class ATigerCharacter*         InTargetFedOn;
	} params = {};

	params.bTargetIsDrained = bTargetIsDrained;
	params.InTargetFedOn = InTargetFedOn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat03_C::CustomEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CustomEvent"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerTraversalState           InPreviousState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerTraversalState           InNewState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::CustomEvent_1(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CustomEvent_1"));

	struct
	{
		ETigerTraversalState           InPreviousState;
		ETigerTraversalState           InNewState;
	} params = {};

	params.InPreviousState = InPreviousState;
	params.InNewState = InNewState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnEnemyDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat03_C::OnEnemyDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnEnemyDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnArchtypePower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           InDisciplineSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::OnArchtypePower(ETigerDisciplineSlot InDisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnArchtypePower"));

	struct
	{
		ETigerDisciplineSlot           InDisciplineSlot;
	} params = {};

	params.InDisciplineSlot = InDisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnClanPowerUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           InDisciplineSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::OnClanPowerUsed(ETigerDisciplineSlot InDisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.OnClanPowerUsed"));

	struct
	{
		ETigerDisciplineSlot           InDisciplineSlot;
	} params = {};

	params.InDisciplineSlot = InDisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CheckPowersUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat03_C::CheckPowersUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.CheckPowersUsed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.ExecuteUbergraph_GL_Tutorial_Beat03
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat03_C::ExecuteUbergraph_GL_Tutorial_Beat03(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat03.GL_Tutorial_Beat03_C.ExecuteUbergraph_GL_Tutorial_Beat03"));

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
