// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_BuyItemsOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              OuTexture                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BuyItemsOverlay_C::GetTextureForStoreItem(class UTexture2D** OuTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem"));

	struct
	{
		class UTexture2D*              OuTexture;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (OuTexture != nullptr)
		*OuTexture = params.OuTexture;
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.On Item Bought
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::On_Item_Bought()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.On Item Bought"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_BuyItemsOverlay_C::OnErrorMessage(const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage"));

	struct
	{
		struct FText                   ErrorMessage;
	} params = {};

	params.ErrorMessage = ErrorMessage;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::RemovePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::BuyAndEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
// (FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::OnTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BuyItemsOverlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct"));

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


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_BuyItemsOverlay_C::ExecuteUbergraph_TBP_UI_BuyItemsOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay"));

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


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::OnPopupRemoved__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_BuyItemsOverlay_C::OnCancelBuy__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTigerMetaStoreEntry    StoreEntryToBuy                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// bool                           bEquipItem                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_BuyItemsOverlay_C::OnConfirmBuy__DelegateSignature(const struct FTigerMetaStoreEntry& StoreEntryToBuy, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature"));

	struct
	{
		struct FTigerMetaStoreEntry    StoreEntryToBuy;
		bool                           bEquipItem;
	} params = {};

	params.StoreEntryToBuy = StoreEntryToBuy;
	params.bEquipItem = bEquipItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
