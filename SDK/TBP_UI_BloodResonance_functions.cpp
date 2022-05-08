// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BloodResonance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.BlockedBySlot
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonance_C::BlockedBySlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.BlockedBySlot"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.BlockedByMaxed
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::BlockedByMaxed(ETigerBloodType InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.BlockedByMaxed"));

	struct
	{
		ETigerBloodType                InputPin;
	} params = {};

	params.InputPin = InputPin;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.InitializeBloodResonaonce
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonance_C::InitializeBloodResonaonce()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.InitializeBloodResonaonce"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.AddSlots
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonance_C::AddSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.AddSlots"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.RemoveSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::RemoveSlots(ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.RemoveSlots"));

	struct
	{
		ETigerBloodType                InBloodType;
	} params = {};

	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.AddBloodType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::AddBloodType(ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.AddBloodType"));

	struct
	{
		ETigerBloodType                InBloodType;
	} params = {};

	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_BloodResonance_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodCapChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            InNewBloodCap                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::OnBloodCapChanged(int InNewBloodCap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodCapChanged"));

	struct
	{
		int                            InNewBloodCap;
	} params = {};

	params.InNewBloodCap = InNewBloodCap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodResonanceAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::OnBloodResonanceAdded(ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodResonanceAdded"));

	struct
	{
		ETigerBloodType                InBloodType;
	} params = {};

	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodResonanceWasCappedAfterFeed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerBloodResonanceBlockType  InBlockType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::OnBloodResonanceWasCappedAfterFeed(ETigerBloodType InBloodType, ETigerBloodResonanceBlockType InBlockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.OnBloodResonanceWasCappedAfterFeed"));

	struct
	{
		ETigerBloodType                InBloodType;
		ETigerBloodResonanceBlockType  InBlockType;
	} params = {};

	params.InBloodType = InBloodType;
	params.InBlockType = InBlockType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.ExecuteUbergraph_TBP_UI_BloodResonance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_C::ExecuteUbergraph_TBP_UI_BloodResonance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance.TBP_UI_BloodResonance_C.ExecuteUbergraph_TBP_UI_BloodResonance"));

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
