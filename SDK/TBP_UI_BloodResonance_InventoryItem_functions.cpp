// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BloodResonance_InventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   TextDesc                       (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UTBP_UI_BloodResonance_InventoryItem_C::UpdateStatusAndInfo(const struct FText& TextDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo"));

	struct
	{
		struct FText                   TextDesc;
	} params = {};

	params.TextDesc = TextDesc;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InResonanceName                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            InResonanceColor               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> InResonanceIcon                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> InResonanceVFX                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// ETigerBloodType                InBloodType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_InventoryItem_C::InitializeInventoryResonance(const struct FText& InResonanceName, const struct FLinearColor& InResonanceColor, TSoftObjectPtr<class UTexture2D> InResonanceIcon, TSoftObjectPtr<class UTexture2D> InResonanceVFX, ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance"));

	struct
	{
		struct FText                   InResonanceName;
		struct FLinearColor            InResonanceColor;
		TSoftObjectPtr<class UTexture2D> InResonanceIcon;
		TSoftObjectPtr<class UTexture2D> InResonanceVFX;
		ETigerBloodType                InBloodType;
	} params = {};

	params.InResonanceName = InResonanceName;
	params.InResonanceColor = InResonanceColor;
	params.InResonanceIcon = InResonanceIcon;
	params.InResonanceVFX = InResonanceVFX;
	params.InBloodType = InBloodType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BloodResonance_InventoryItem_C::ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem"));

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
