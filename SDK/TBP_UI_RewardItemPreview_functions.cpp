// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_RewardItemPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.OnLoaded_8DE233FE433FD044E1CDAD95B52009E5
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardItemPreview_C::OnLoaded_8DE233FE433FD044E1CDAD95B52009E5(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.OnLoaded_8DE233FE433FD044E1CDAD95B52009E5"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.SetItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInShowTexture                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_RewardItemPreview_C::SetItem(class UTigerInventoryItemBase* Item, bool bInShowTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.SetItem"));

	struct
	{
		class UTigerInventoryItemBase* Item;
		bool                           bInShowTexture;
	} params = {};

	params.Item = Item;
	params.bInShowTexture = bInShowTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.ExecuteUbergraph_TBP_UI_RewardItemPreview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_RewardItemPreview_C::ExecuteUbergraph_TBP_UI_RewardItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.ExecuteUbergraph_TBP_UI_RewardItemPreview"));

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
