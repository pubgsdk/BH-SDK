// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_QuestPreview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.FetchUITextureFromReward
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerInventoryItemBase* InReward                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D> OutUITexture                   (CPF_Parm, CPF_OutParm, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestPreview_C::FetchUITextureFromReward(class UTigerInventoryItemBase* InReward, TSoftObjectPtr<class UTexture2D>* OutUITexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.FetchUITextureFromReward"));

	struct
	{
		class UTigerInventoryItemBase* InReward;
		TSoftObjectPtr<class UTexture2D> OutUITexture;
	} params = {};

	params.InReward = InReward;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OutUITexture != nullptr)
		*OutUITexture = params.OutUITexture;
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.HideHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::HideHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.HideHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ShowHighlight
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::ShowHighlight()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ShowHighlight"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Setup Reward Preview
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::Setup_Reward_Preview()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Setup Reward Preview"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_QuestPreview_C::BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.BndEvt__TBP_UI_QuestPreview_InteractButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ExecuteUbergraph_TBP_UI_QuestPreview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestPreview_C::ExecuteUbergraph_TBP_UI_QuestPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ExecuteUbergraph_TBP_UI_QuestPreview"));

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


// Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ButtonClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_QuestPreview_C*  InClickedWidget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_QuestPreview_C::ButtonClicked__DelegateSignature(class UTBP_UI_QuestPreview_C* InClickedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_QuestPreview.TBP_UI_QuestPreview_C.ButtonClicked__DelegateSignature"));

	struct
	{
		class UTBP_UI_QuestPreview_C*  InClickedWidget;
	} params = {};

	params.InClickedWidget = InClickedWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
