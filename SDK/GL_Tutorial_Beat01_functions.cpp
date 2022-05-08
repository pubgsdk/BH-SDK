// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AGL_Tutorial_Beat01_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AGL_Tutorial_Beat01_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat01_C::CustomEvent_5()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_5"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OldLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 OldVelocity                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat01_C::CustomEvent_7(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_7"));

	struct
	{
		float                          DeltaSeconds;
		struct FVector                 OldLocation;
		struct FVector                 OldVelocity;
	} params = {};

	params.DeltaSeconds = DeltaSeconds;
	params.OldLocation = OldLocation;
	params.OldVelocity = OldVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsNowActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGL_Tutorial_Beat01_C::CustomEvent_2(bool bIsNowActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.CustomEvent_2"));

	struct
	{
		bool                           bIsNowActive;
	} params = {};

	params.bIsNowActive = bIsNowActive;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnReachResurrectTrigger
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat01_C::OnReachResurrectTrigger(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnReachResurrectTrigger"));

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


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnFired
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat01_C::OnFired()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnFired"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnClimb
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerTraversalState           InPreviousState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerTraversalState           InNewState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat01_C::OnClimb(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.OnClimb"));

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


// Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.ExecuteUbergraph_GL_Tutorial_Beat01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat01_C::ExecuteUbergraph_GL_Tutorial_Beat01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat01.GL_Tutorial_Beat01_C.ExecuteUbergraph_GL_Tutorial_Beat01"));

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
