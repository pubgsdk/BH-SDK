// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RewardPreview_Emote_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnPreviewItemUpdated
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Emote_C::OnPreviewItemUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnPreviewItemUpdated"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnAppearanceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Emote_C::OnAppearanceChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnAppearanceChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnPreviewItemOpened
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_RewardPreview_Emote_C::OnPreviewItemOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.OnPreviewItemOpened"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.ExecuteUbergraph_TBP_RewardPreview_Emote
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_RewardPreview_Emote_C::ExecuteUbergraph_TBP_RewardPreview_Emote(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RewardPreview_Emote.TBP_RewardPreview_Emote_C.ExecuteUbergraph_TBP_RewardPreview_Emote"));

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
