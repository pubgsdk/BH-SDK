// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ResourceBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_ResourceBarSegment_C* InSegment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UHorizontalBoxSlot*      InHorizontalBoxSlot            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_C::OnSegmentAdded(int InIndex, class UTBP_UI_ResourceBarSegment_C* InSegment, class UHorizontalBoxSlot* InHorizontalBoxSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded"));

	struct
	{
		int                            InIndex;
		class UTBP_UI_ResourceBarSegment_C* InSegment;
		class UHorizontalBoxSlot*      InHorizontalBoxSlot;
	} params = {};

	params.InIndex = InIndex;
	params.InSegment = InSegment;
	params.InHorizontalBoxSlot = InHorizontalBoxSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ResourceBar_C::ClearSegments()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_FlashEffect_C*   Output_Get                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_C::CreateFlashEffect(class UTBP_UI_FlashEffect_C** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect"));

	struct
	{
		class UTBP_UI_FlashEffect_C*   Output_Get;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_ResourceBar_C::OnHealthLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          HorizontalProgress             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_C::OnSegmentEmptied(float HorizontalProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied"));

	struct
	{
		float                          HorizontalProgress;
	} params = {};

	params.HorizontalProgress = HorizontalProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_FlashEffect_C*   Finished_Effect                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_C::RecycleFlashEffect(class UTBP_UI_FlashEffect_C* Finished_Effect)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect"));

	struct
	{
		class UTBP_UI_FlashEffect_C*   Finished_Effect;
	} params = {};

	params.Finished_Effect = Finished_Effect;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_ResourceBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ResourceBar_C::ExecuteUbergraph_TBP_UI_ResourceBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar"));

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
