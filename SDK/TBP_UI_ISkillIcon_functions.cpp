// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ISkillIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.OnInterrupted
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_ISkillIcon_C::OnInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.OnInterrupted"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetActiveTimeLeft
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ISkillIcon_C::SetActiveTimeLeft(int SecondsLeftCeil)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetActiveTimeLeft"));

	struct
	{
		int                            SecondsLeftCeil;
	} params = {};

	params.SecondsLeftCeil = SecondsLeftCeil;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetCooldown
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SecondsLeftCeil                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Percentage                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ISkillIcon_C::SetCooldown(int SecondsLeftCeil, float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetCooldown"));

	struct
	{
		int                            SecondsLeftCeil;
		float                          Percentage;
	} params = {};

	params.SecondsLeftCeil = SecondsLeftCeil;
	params.Percentage = Percentage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetSkillData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsUnlocked                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bHasCharge                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// bool                           bCanBeUsed                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// int                            ChargeCount                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ISkillIcon_C::SetSkillData(bool bIsUnlocked, bool bHasCharge, bool bCanBeUsed, int ChargeCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetSkillData"));

	struct
	{
		bool                           bIsUnlocked;
		bool                           bHasCharge;
		bool                           bCanBeUsed;
		int                            ChargeCount;
	} params = {};

	params.bIsUnlocked = bIsUnlocked;
	params.bHasCharge = bHasCharge;
	params.bCanBeUsed = bCanBeUsed;
	params.ChargeCount = ChargeCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetSkillIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              IconTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_ISkillIcon_C::SetSkillIcon(class UTexture2D* IconTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C.SetSkillIcon"));

	struct
	{
		class UTexture2D*              IconTexture;
	} params = {};

	params.IconTexture = IconTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
