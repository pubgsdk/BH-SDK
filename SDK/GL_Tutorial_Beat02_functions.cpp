// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GL_Tutorial_Beat02_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.Timeline_0__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.Timeline_0__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnBBUsedFailsafe
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::OnBBUsedFailsafe(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnBBUsedFailsafe"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnBeat01Completed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::OnBeat01Completed()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnBeat01Completed"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnInventoryToggle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               InVisibility                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::OnInventoryToggle(ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnInventoryToggle"));

	struct
	{
		ESlateVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsNowActive                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AGL_Tutorial_Beat02_C::CustomEvent_2(bool bIsNowActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent_2"));

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


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bTargetIsDrained               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class ATigerCharacter*         InTargetFedOn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::CustomEvent_1(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent_1"));

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


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::CustomEvent(class UTigerItemAsset* Item, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.CustomEvent"));

	struct
	{
		class UTigerItemAsset*         Item;
		int                            Count;
	} params = {};

	params.Item = Item;
	params.Count = Count;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnClimb
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerTraversalState           InPreviousState                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerTraversalState           InNewState                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::OnClimb(ETigerTraversalState InPreviousState, ETigerTraversalState InNewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnClimb"));

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


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.DoneUsedConsumable
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerConsumableAsset*   Consumable                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::DoneUsedConsumable(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.DoneUsedConsumable"));

	struct
	{
		class UTigerConsumableAsset*   Consumable;
	} params = {};

	params.Consumable = Consumable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnTutorialStart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::OnTutorialStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnTutorialStart"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnNPCDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AGL_Tutorial_Beat02_C::OnNPCDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.OnNPCDeath"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.ExecuteUbergraph_GL_Tutorial_Beat02
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AGL_Tutorial_Beat02_C::ExecuteUbergraph_GL_Tutorial_Beat02(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GL_Tutorial_Beat02.GL_Tutorial_Beat02_C.ExecuteUbergraph_GL_Tutorial_Beat02"));

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
